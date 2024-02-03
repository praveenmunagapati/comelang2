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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __exception_result_var_b1;
char* __dec_obj6;
struct sCurrentNode* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
    # 10 "20method.c"
    ((struct sCurrentNode*)come_null_check(self, "20method.c", 10))->sline=((struct sInfo*)come_null_check(info, "20method.c", 10))->sline;
    # 11 "20method.c"
    __dec_obj6=((struct sCurrentNode*)come_null_check(self, "20method.c", 11))->sname;
    ((struct sCurrentNode*)come_null_check(self, "20method.c", 11))->sname=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 11),__exception_result_var_b1=((char*)(right_value10=__builtin_string(((struct sInfo*)come_null_check(info, "20method.c", 11))->sname))), come_pop_stackframe(), __exception_result_var_b1));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    # 13 "20method.c"
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
    # 18 "20method.c"
    __result14__ = ((struct sCurrentNode*)come_null_check(self, "20method.c", 18))->sline;
    return __result14__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value11;
char* __exception_result_var_b2;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
    # 23 "20method.c"
    __result15__ = __result_obj__ = (come_push_stackframe("20method.c", 23),__exception_result_var_b2=((char*)(right_value11=__builtin_string(((struct sCurrentNode*)come_null_check(self, "20method.c", 23))->sname))), come_pop_stackframe(), __exception_result_var_b2);
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
    # 28 "20method.c"
    __result16__ = (_Bool)0;
    return __result16__;
}

char* sCurrentNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
char* __exception_result_var_b3;
char* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
    # 33 "20method.c"
    __result17__ = __result_obj__ = (come_push_stackframe("20method.c", 33),__exception_result_var_b3=((char*)(right_value12=__builtin_string("sCurrentNode"))), come_pop_stackframe(), __exception_result_var_b3);
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
char* __exception_result_var_b4;
char* class_name_5;
void* right_value14;
void* right_value15;
struct sClass* __exception_result_var_b5;
struct sClass* current_stack_6;
void* right_value16;
void* right_value17;
void* right_value18;
struct sType* __exception_result_var_b6;
void* right_value19;
void* right_value60;
struct tuple2$2charphsTypeph* result_kind_35;
void* right_value67;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b13;
void* right_value68;
void* right_value69;
void* right_value70;
struct sType* __exception_result_var_b14;
void* right_value71;
void* right_value72;
struct tuple2$2charphsTypeph* return_value_40;
void* right_value73;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b15;
struct sVarTable* vtable_41;
_Bool _while_condtional8;
struct map$2charphsVarph* o2_saved_42;
char* __exception_result_var_b18;
char* it_45;
_Bool __exception_result_var_b19;
_Bool _for_condtionalA1;
char* __exception_result_var_b22;
char* key_48;
struct sVar* __exception_result_var_b27;
struct sVar* value_53;
void* right_value77;
struct sType* type2_54;
void* right_value78;
char* __exception_result_var_b28;
void* right_value79;
void* right_value80;
struct tuple2$2charphsTypeph* item_55;
_Bool _if_conditional118;
int __exception_result_var_b29;
_Bool _if_conditional119;
int __exception_result_var_b30;
_Bool _if_conditional120;
int __exception_result_var_b31;
_Bool _if_conditional121;
_Bool __exception_result_var_b32;
_Bool __exception_result_var_b33;
_Bool _if_conditional122;
int __exception_result_var_b34;
_Bool _if_conditional123;
void* right_value81;
struct sType* type3_56;
struct list$1sNodeph* __exception_result_var_b35;
void* right_value82;
char* __exception_result_var_b36;
void* right_value83;
void* right_value84;
struct tuple2$2charphsTypeph* item2_59;
void* right_value85;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b37;
void* right_value86;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b38;
struct map$2charphsClassph* __exception_result_var_b70;
static int num_current_stack_108=0;
_Bool _while_condtional20;
struct map$2charphsVarph* o2_saved_109;
char* __exception_result_var_b71;
char* it_110;
_Bool __exception_result_var_b72;
_Bool _for_condtionalA6;
char* __exception_result_var_b73;
char* key_111;
struct sVar* __exception_result_var_b74;
struct sVar* value_112;
void* right_value97;
struct sType* type2_113;
void* right_value98;
void* right_value99;
struct tuple2$2charphsTypeph* item_114;
_Bool _if_conditional179;
int __exception_result_var_b75;
_Bool _if_conditional180;
int __exception_result_var_b76;
_Bool _if_conditional181;
int __exception_result_var_b77;
_Bool _if_conditional182;
_Bool __exception_result_var_b78;
_Bool __exception_result_var_b79;
_Bool _if_conditional183;
_Bool __exception_result_var_b80;
_Bool _if_conditional184;
void* right_value100;
struct CVALUE* come_value_115;
void* right_value101;
char* __exception_result_var_b81;
char* __dec_obj38;
void* right_value102;
void* right_value103;
struct sType* __exception_result_var_b82;
struct sType* __dec_obj39;
struct list$1CVALUEph* __exception_result_var_b83;
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
    # 38 "20method.c"
    ((struct sInfo*)come_null_check(info, "20method.c", 38))->current_stack_num++;
    # 39 "20method.c"
    class_name_5=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 39),__exception_result_var_b4=((char*)(right_value13=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(info, "20method.c", 39))->current_stack_num))), come_pop_stackframe(), __exception_result_var_b4));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = 0;
    # 40 "20method.c"
    current_stack_6=(struct sClass*)come_increment_ref_count((come_push_stackframe("20method.c", 40),__exception_result_var_b5=((struct sClass*)(right_value15=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value14=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 40)))),class_name_5,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b5));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value15;
    __freed_obj__ = 0;
    # 42 "20method.c"
    result_kind_35=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value60=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value19=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42)))),(char*)come_increment_ref_count(((char*)(right_value16=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 42),__exception_result_var_b6=((struct sType*)(right_value18=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value17=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 42)))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b6))))));
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
    # 43 "20method.c"
    (come_push_stackframe("20method.c", 43),__exception_result_var_b13=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_6, "20method.c", 43))->mFields, "20method.c", 43)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value67=tuple2$2charphsTypephp_clone(result_kind_35))))), come_pop_stackframe(), __exception_result_var_b13);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value67;
    __freed_obj__ = 0;
    # 45 "20method.c"
    return_value_40=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value72=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value71=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 45)))),(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 45),__exception_result_var_b14=((struct sType*)(right_value70=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value69=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 45)))),"void*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b14))))));
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
    # 46 "20method.c"
    (come_push_stackframe("20method.c", 46),__exception_result_var_b15=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_6, "20method.c", 46))->mFields, "20method.c", 46)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value73=tuple2$2charphsTypephp_clone(return_value_40))))), come_pop_stackframe(), __exception_result_var_b15);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value73;
    __freed_obj__ = 0;
    # 48 "20method.c"
    vtable_41=((struct sInfo*)come_null_check(info, "20method.c", 48))->lv_table;
    # 90 "20method.c"
    while(_while_condtional8=vtable_41,    _while_condtional8) {
        # 87 "20method.c"
        for(
        o2_saved_42=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(vtable_41, "20method.c", 51))->mVars)),it_45=(come_push_stackframe("20method.c", 51),__exception_result_var_b18=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check((o2_saved_42), "20method.c", 51))), come_pop_stackframe(), __exception_result_var_b18) ,        0;        _for_condtionalA1=        !(come_push_stackframe("20method.c", 51),__exception_result_var_b19=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check((o2_saved_42), "20method.c", 51))), come_pop_stackframe(), __exception_result_var_b19) ,        _for_condtionalA1;        it_45=(come_push_stackframe("20method.c", 51),__exception_result_var_b22=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check((o2_saved_42), "20method.c", 51))), come_pop_stackframe(), __exception_result_var_b22) ,        0        ){
            # 52 "20method.c"
            key_48=it_45;
            # 53 "20method.c"
            value_53=(come_push_stackframe("20method.c", 53),__exception_result_var_b27=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(vtable_41, "20method.c", 53))->mVars,key_48), come_pop_stackframe(), __exception_result_var_b27);
            # 55 "20method.c"
            type2_54=(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(((struct sVar*)come_null_check(value_53, "20method.c", 55))->mType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value77;
            __freed_obj__ = 0;
            # 57 "20method.c"
            ((struct sType*)come_null_check(type2_54, "20method.c", 57))->mPointerNum++;
            # 59 "20method.c"
            item_55=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value80=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value79=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 59)))),(char*)come_increment_ref_count((come_push_stackframe("20method.c", 59),__exception_result_var_b28=((char*)(right_value78=__builtin_string(((struct sVar*)come_null_check(value_53, "20method.c", 59))->mCValueName))), come_pop_stackframe(), __exception_result_var_b28)),(struct sType*)come_increment_ref_count(type2_54)))));
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
            # 85 "20method.c"
            # 61 "20method.c"
            if(_if_conditional118=((struct sVar*)come_null_check(value_53, "20method.c", 61))->mCValueName!=((void*)0),            _if_conditional118) {
                # 84 "20method.c"
                # 62 "20method.c"
                if(_if_conditional119=(come_push_stackframe("20method.c", 62),__exception_result_var_b29=strcmp(((struct sVar*)come_null_check(value_53, "20method.c", 62))->mCValueName,"__list_values"), come_pop_stackframe(), __exception_result_var_b29)==0,                _if_conditional119) {
                }
                else {
                    # 84 "20method.c"
                    # 65 "20method.c"
                    if(_if_conditional120=(come_push_stackframe("20method.c", 65),__exception_result_var_b30=strcmp(((struct sVar*)come_null_check(value_53, "20method.c", 65))->mCValueName,"__map_keys"), come_pop_stackframe(), __exception_result_var_b30)==0,                    _if_conditional120) {
                    }
                    else {
                        # 84 "20method.c"
                        # 68 "20method.c"
                        if(_if_conditional121=(come_push_stackframe("20method.c", 68),__exception_result_var_b31=strcmp(((struct sVar*)come_null_check(value_53, "20method.c", 68))->mCValueName,"__map_element"), come_pop_stackframe(), __exception_result_var_b31)==0,                        _if_conditional121) {
                        }
                        else {
                            # 84 "20method.c"
                            # 71 "20method.c"
                            if(_if_conditional122=(come_push_stackframe("20method.c", 71),__exception_result_var_b32=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_53, "20method.c", 71))->mType, "20method.c", 71))->mClass, "20method.c", 71))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b32)||(come_push_stackframe("20method.c", 71),__exception_result_var_b33=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_53, "20method.c", 71))->mType, "20method.c", 71))->mClass, "20method.c", 71))->mName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b33),                            _if_conditional122) {
                            }
                            else {
                                # 84 "20method.c"
                                # 74 "20method.c"
                                if(_if_conditional123=(come_push_stackframe("20method.c", 74),__exception_result_var_b34=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type2_54, "20method.c", 74))->mArrayNum, "20method.c", 74))), come_pop_stackframe(), __exception_result_var_b34)==1,                                _if_conditional123) {
                                    # 75 "20method.c"
                                    type3_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(type2_54))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value81;
                                    __freed_obj__ = 0;
                                    # 76 "20method.c"
                                    (come_push_stackframe("20method.c", 76),__exception_result_var_b35=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type3_56, "20method.c", 76))->mArrayNum, "20method.c", 76))), come_pop_stackframe(), __exception_result_var_b35);
                                    # 77 "20method.c"
                                    ((struct sType*)come_null_check(type3_56, "20method.c", 77))->mPointerNum++;
                                    # 78 "20method.c"
                                    item2_59=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value84=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value83=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 78)))),(char*)come_increment_ref_count((come_push_stackframe("20method.c", 78),__exception_result_var_b36=((char*)(right_value82=__builtin_string(((struct sVar*)come_null_check(value_53, "20method.c", 78))->mCValueName))), come_pop_stackframe(), __exception_result_var_b36)),(struct sType*)come_increment_ref_count(type3_56)))));
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
                                    # 79 "20method.c"
                                    (come_push_stackframe("20method.c", 79),__exception_result_var_b37=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_6, "20method.c", 79))->mFields, "20method.c", 79)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value85=tuple2$2charphsTypephp_clone(item2_59))))), come_pop_stackframe(), __exception_result_var_b37);
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value85);
                                    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value85;
                                    __freed_obj__ = 0;
                                    if(type3_56 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_56, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(item2_59 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item2_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    # 82 "20method.c"
                                    (come_push_stackframe("20method.c", 82),__exception_result_var_b38=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(current_stack_6, "20method.c", 82))->mFields, "20method.c", 82)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value86=tuple2$2charphsTypephp_clone(item_55))))), come_pop_stackframe(), __exception_result_var_b38);
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
        # 87 "20method.c"
        vtable_41=((struct sVarTable*)come_null_check(vtable_41, "20method.c", 87))->mParent;
    }
    # 90 "20method.c"
    (come_push_stackframe("20method.c", 90),output_struct(current_stack_6,info),come_pop_stackframe());
    # 92 "20method.c"
    (come_push_stackframe("20method.c", 92),__exception_result_var_b70=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 92))->classes, "20method.c", 92)),(char*)come_increment_ref_count(class_name_5),(struct sClass*)come_increment_ref_count(current_stack_6)), come_pop_stackframe(), __exception_result_var_b70);
    # 94 "20method.c"
    # 95 "20method.c"
    num_current_stack_108++;
    # 96 "20method.c"
    (come_push_stackframe("20method.c", 96),add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_5,num_current_stack_108),come_pop_stackframe());
    # 97 "20method.c"
    (come_push_stackframe("20method.c", 97),add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_108,class_name_5),come_pop_stackframe());
    # 99 "20method.c"
    vtable_41=((struct sInfo*)come_null_check(info, "20method.c", 99))->lv_table;
    # 137 "20method.c"
    while(_while_condtional20=vtable_41,    _while_condtional20) {
        # 134 "20method.c"
        for(
        o2_saved_109=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(vtable_41, "20method.c", 102))->mVars)),it_110=(come_push_stackframe("20method.c", 102),__exception_result_var_b71=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check((o2_saved_109), "20method.c", 102))), come_pop_stackframe(), __exception_result_var_b71) ,        0;        _for_condtionalA6=        !(come_push_stackframe("20method.c", 102),__exception_result_var_b72=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check((o2_saved_109), "20method.c", 102))), come_pop_stackframe(), __exception_result_var_b72) ,        _for_condtionalA6;        it_110=(come_push_stackframe("20method.c", 102),__exception_result_var_b73=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check((o2_saved_109), "20method.c", 102))), come_pop_stackframe(), __exception_result_var_b73) ,        0        ){
            # 103 "20method.c"
            key_111=it_110;
            # 104 "20method.c"
            value_112=(come_push_stackframe("20method.c", 104),__exception_result_var_b74=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(vtable_41, "20method.c", 104))->mVars,key_111), come_pop_stackframe(), __exception_result_var_b74);
            # 106 "20method.c"
            type2_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(((struct sVar*)come_null_check(value_112, "20method.c", 106))->mType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value97;
            __freed_obj__ = 0;
            # 108 "20method.c"
            item_114=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value99=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value98=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 108)))),(char*)come_increment_ref_count(((struct sVar*)come_null_check(value_112, "20method.c", 108))->mCValueName),(struct sType*)come_increment_ref_count(type2_113)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value98;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value99);
            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value99;
            __freed_obj__ = 0;
            # 132 "20method.c"
            # 110 "20method.c"
            if(_if_conditional179=((struct sVar*)come_null_check(value_112, "20method.c", 110))->mCValueName!=((void*)0),            _if_conditional179) {
                # 131 "20method.c"
                # 111 "20method.c"
                if(_if_conditional180=(come_push_stackframe("20method.c", 111),__exception_result_var_b75=strcmp(((struct sVar*)come_null_check(value_112, "20method.c", 111))->mCValueName,"__list_values"), come_pop_stackframe(), __exception_result_var_b75)==0,                _if_conditional180) {
                }
                else {
                    # 131 "20method.c"
                    # 114 "20method.c"
                    if(_if_conditional181=(come_push_stackframe("20method.c", 114),__exception_result_var_b76=strcmp(((struct sVar*)come_null_check(value_112, "20method.c", 114))->mCValueName,"__map_keys"), come_pop_stackframe(), __exception_result_var_b76)==0,                    _if_conditional181) {
                    }
                    else {
                        # 131 "20method.c"
                        # 117 "20method.c"
                        if(_if_conditional182=(come_push_stackframe("20method.c", 117),__exception_result_var_b77=strcmp(((struct sVar*)come_null_check(value_112, "20method.c", 117))->mCValueName,"__map_element"), come_pop_stackframe(), __exception_result_var_b77)==0,                        _if_conditional182) {
                        }
                        else {
                            # 131 "20method.c"
                            # 120 "20method.c"
                            if(_if_conditional183=(come_push_stackframe("20method.c", 120),__exception_result_var_b78=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_112, "20method.c", 120))->mType, "20method.c", 120))->mClass, "20method.c", 120))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b78)||(come_push_stackframe("20method.c", 120),__exception_result_var_b79=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(value_112, "20method.c", 120))->mType, "20method.c", 120))->mClass, "20method.c", 120))->mName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b79),                            _if_conditional183) {
                            }
                            else {
                                # 130 "20method.c"
                                # 124 "20method.c"
                                if(_if_conditional184=(come_push_stackframe("20method.c", 124),__exception_result_var_b80=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_113, "20method.c", 124))->mClass, "20method.c", 124))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b80),                                _if_conditional184) {
                                    # 125 "20method.c"
                                    (come_push_stackframe("20method.c", 125),add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_108,((struct sVar*)come_null_check(value_112, "20method.c", 125))->mCValueName,((struct sVar*)come_null_check(value_112, "20method.c", 125))->mCValueName),come_pop_stackframe());
                                }
                                else {
                                    # 128 "20method.c"
                                    (come_push_stackframe("20method.c", 128),add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_108,((struct sVar*)come_null_check(value_112, "20method.c", 128))->mCValueName,((struct sVar*)come_null_check(value_112, "20method.c", 128))->mCValueName),come_pop_stackframe());
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
        # 134 "20method.c"
        vtable_41=((struct sVarTable*)come_null_check(vtable_41, "20method.c", 134))->mParent;
    }
    # 137 "20method.c"
    come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 137))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value100;
    __freed_obj__ = 0;
    # 139 "20method.c"
    __dec_obj38=((struct CVALUE*)come_null_check(come_value_115, "20method.c", 139))->c_value;
    ((struct CVALUE*)come_null_check(come_value_115, "20method.c", 139))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 139),__exception_result_var_b81=((char*)(right_value101=xsprintf("&__current_stack%d__",num_current_stack_108))), come_pop_stackframe(), __exception_result_var_b81));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value101;
    __freed_obj__ = 0;
    # 140 "20method.c"
    __dec_obj39=((struct CVALUE*)come_null_check(come_value_115, "20method.c", 140))->type;
    ((struct CVALUE*)come_null_check(come_value_115, "20method.c", 140))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 140),__exception_result_var_b82=((struct sType*)(right_value103=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value102=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 140)))),class_name_5,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b82));
    if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value102;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value103;
    __freed_obj__ = 0;
    # 141 "20method.c"
    ((struct CVALUE*)come_null_check(come_value_115, "20method.c", 141))->var=((void*)0);
    # 143 "20method.c"
    (come_push_stackframe("20method.c", 143),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_115, "20method.c", 143))->c_value),come_pop_stackframe());
    # 145 "20method.c"
    (come_push_stackframe("20method.c", 145),__exception_result_var_b83=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 145))->stack, "20method.c", 145)),(struct CVALUE*)come_increment_ref_count(come_value_115)), come_pop_stackframe(), __exception_result_var_b83);
    # 147 "20method.c"
    ((struct sInfo*)come_null_check(info, "20method.c", 147))->num_current_stack=num_current_stack_108;
    # 149 "20method.c"
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
        # 1 "sClass_finalize"
        # 0 "sClass_finalize"
        if(_if_conditional6=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName!=((void*)0),        _if_conditional6) {
            # 0 "sClass_finalize"
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 2 "sClass_finalize"
        # 1 "sClass_finalize"
        if(_if_conditional7=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields!=((void*)0),        _if_conditional7) {
            # 1 "sClass_finalize"
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 3 "sClass_finalize"
        # 2 "sClass_finalize"
        if(_if_conditional27=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName!=((void*)0),        _if_conditional27) {
            # 2 "sClass_finalize"
            if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
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
                # 176 "./comelang2.h"
                it_7=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 176))->head;
                # 182 "./comelang2.h"
                while(_while_condtional1=it_7!=((void*)0),                _while_condtional1) {
                    # 178 "./comelang2.h"
                    prev_it_8=it_7;
                    # 179 "./comelang2.h"
                    it_7=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_7, "./comelang2.h", 179))->next;
                    # 180 "./comelang2.h"
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
                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                        if(_if_conditional8=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item!=((void*)0),                        _if_conditional8) {
                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                            if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                # 1 "tuple2$2charphsTypephp_finalize"
                                # 0 "tuple2$2charphsTypephp_finalize"
                                if(_if_conditional9=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1!=((void*)0),                                _if_conditional9) {
                                    # 0 "tuple2$2charphsTypephp_finalize"
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                # 2 "tuple2$2charphsTypephp_finalize"
                                # 1 "tuple2$2charphsTypephp_finalize"
                                if(_if_conditional10=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2!=((void*)0),                                _if_conditional10) {
                                    # 1 "tuple2$2charphsTypephp_finalize"
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                        # 1 "sType_finalize"
                                        # 0 "sType_finalize"
                                        if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional11) {
                                            # 0 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 2 "sType_finalize"
                                        # 1 "sType_finalize"
                                        if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType!=((void*)0),                                        _if_conditional13) {
                                            # 1 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 3 "sType_finalize"
                                        # 2 "sType_finalize"
                                        if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName!=((void*)0),                                        _if_conditional14) {
                                            # 2 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        # 4 "sType_finalize"
                                        # 3 "sType_finalize"
                                        if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes!=((void*)0),                                        _if_conditional15) {
                                            # 3 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 5 "sType_finalize"
                                        # 4 "sType_finalize"
                                        if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum!=((void*)0),                                        _if_conditional17) {
                                            # 4 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 6 "sType_finalize"
                                        # 5 "sType_finalize"
                                        if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes!=((void*)0),                                        _if_conditional19) {
                                            # 5 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 7 "sType_finalize"
                                        # 6 "sType_finalize"
                                        if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames!=((void*)0),                                        _if_conditional20) {
                                            # 6 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 8 "sType_finalize"
                                        # 7 "sType_finalize"
                                        if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType!=((void*)0),                                        _if_conditional22) {
                                            # 7 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 9 "sType_finalize"
                                        # 8 "sType_finalize"
                                        if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas!=((void*)0),                                        _if_conditional23) {
                                            # 8 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        # 10 "sType_finalize"
                                        # 9 "sType_finalize"
                                        if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum!=((void*)0),                                        _if_conditional24) {
                                            # 9 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        # 11 "sType_finalize"
                                        # 10 "sType_finalize"
                                        if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName!=((void*)0),                                        _if_conditional25) {
                                            # 10 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        # 12 "sType_finalize"
                                        # 11 "sType_finalize"
                                        if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName!=((void*)0),                                        _if_conditional26) {
                                            # 11 "sType_finalize"
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                # 1 "tuple1$1sTypephp_finalize"
                                                # 0 "tuple1$1sTypephp_finalize"
                                                if(_if_conditional12=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1!=((void*)0),                                                _if_conditional12) {
                                                    # 0 "tuple1$1sTypephp_finalize"
                                                    if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                                # 176 "./comelang2.h"
                                                it_9=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 176))->head;
                                                # 182 "./comelang2.h"
                                                while(_while_condtional2=it_9!=((void*)0),                                                _while_condtional2) {
                                                    # 178 "./comelang2.h"
                                                    prev_it_10=it_9;
                                                    # 179 "./comelang2.h"
                                                    it_9=((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 179))->next;
                                                    # 180 "./comelang2.h"
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
                                                        # 1 "list_item$1sTypephp_finalize"
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        if(_if_conditional16=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item!=((void*)0),                                                        _if_conditional16) {
                                                            # 0 "list_item$1sTypephp_finalize"
                                                            if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                                # 176 "./comelang2.h"
                                                it_11=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 176))->head;
                                                # 182 "./comelang2.h"
                                                while(_while_condtional3=it_11!=((void*)0),                                                _while_condtional3) {
                                                    # 178 "./comelang2.h"
                                                    prev_it_12=it_11;
                                                    # 179 "./comelang2.h"
                                                    it_11=((struct list_item$1sNodeph*)come_null_check(it_11, "./comelang2.h", 179))->next;
                                                    # 180 "./comelang2.h"
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
                                                        # 1 "list_item$1sNodephp_finalize"
                                                        # 0 "list_item$1sNodephp_finalize"
                                                        if(_if_conditional18=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item!=((void*)0),                                                        _if_conditional18) {
                                                            # 0 "list_item$1sNodephp_finalize"
                                                            if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
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
                                                # 176 "./comelang2.h"
                                                it_13=((struct list$1charph*)come_null_check(self, "./comelang2.h", 176))->head;
                                                # 182 "./comelang2.h"
                                                while(_while_condtional4=it_13!=((void*)0),                                                _while_condtional4) {
                                                    # 178 "./comelang2.h"
                                                    prev_it_14=it_13;
                                                    # 179 "./comelang2.h"
                                                    it_13=((struct list_item$1charph*)come_null_check(it_13, "./comelang2.h", 179))->next;
                                                    # 180 "./comelang2.h"
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
                                                        # 1 "list_item$1charphp_finalize"
                                                        # 0 "list_item$1charphp_finalize"
                                                        if(_if_conditional21=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item!=((void*)0),                                                        _if_conditional21) {
                                                            # 0 "list_item$1charphp_finalize"
                                                            if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
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
        # 1814 "./comelang2.h"
        __dec_obj7=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1814))->v1;
        ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1814))->v1=(char*)come_increment_ref_count(((char*)(right_value20=charp_clone(v1))));
        if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value20;
        __freed_obj__ = 0;
        # 1815 "./comelang2.h"
        __dec_obj32=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1815))->v2;
        ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1815))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(v2))));
        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value59);
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value59;
        __freed_obj__ = 0;
        # 1817 "./comelang2.h"
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
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional28=self==(void*)0,            _if_conditional28) {
                # 2 "sType_clone"
                __result18__ = __result_obj__ = (void*)0;
                return __result18__;
            }
            # 3 "sType_clone"
            result_15=(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value21;
            __freed_obj__ = 0;
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional29=self!=((void*)0),            _if_conditional29) {
                # 4 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType!=((void*)0),            _if_conditional30) {
                # 5 "sType_clone"
                __dec_obj9=((struct sType*)come_null_check(result_15, "sType_clone", 5))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(result_15, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value24=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value24;
                __freed_obj__ = 0;
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType!=((void*)0),            _if_conditional34) {
                # 6 "sType_clone"
                __dec_obj11=((struct sType*)come_null_check(result_15, "sType_clone", 6))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(result_15, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value27=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                if(__dec_obj11) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value27;
                __freed_obj__ = 0;
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName!=((void*)0),            _if_conditional37) {
                # 7 "sType_clone"
                __dec_obj12=((struct sType*)come_null_check(result_15, "sType_clone", 7))->mGenericsName;
                ((struct sType*)come_null_check(result_15, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value28=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value28;
                __freed_obj__ = 0;
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes!=((void*)0),            _if_conditional38) {
                # 8 "sType_clone"
                __dec_obj16=((struct sType*)come_null_check(result_15, "sType_clone", 8))->mGenericsTypes;
                ((struct sType*)come_null_check(result_15, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                if(__dec_obj16) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value35;
                __freed_obj__ = 0;
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional42=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum!=((void*)0),            _if_conditional42) {
                # 9 "sType_clone"
                __dec_obj20=((struct sType*)come_null_check(result_15, "sType_clone", 9))->mArrayNum;
                ((struct sType*)come_null_check(result_15, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value43=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                if(__dec_obj20) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value43;
                __freed_obj__ = 0;
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional55=self!=((void*)0),            _if_conditional55) {
                # 10 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional56=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes!=((void*)0),            _if_conditional56) {
                # 11 "sType_clone"
                __dec_obj21=((struct sType*)come_null_check(result_15, "sType_clone", 11))->mParamTypes;
                ((struct sType*)come_null_check(result_15, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value44=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                if(__dec_obj21) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value44;
                __freed_obj__ = 0;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional57=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames!=((void*)0),            _if_conditional57) {
                # 12 "sType_clone"
                __dec_obj25=((struct sType*)come_null_check(result_15, "sType_clone", 12))->mParamNames;
                ((struct sType*)come_null_check(result_15, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value51=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                if(__dec_obj25) { come_call_finalizer(list$1charph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value51;
                __freed_obj__ = 0;
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional61=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType!=((void*)0),            _if_conditional61) {
                # 13 "sType_clone"
                __dec_obj27=((struct sType*)come_null_check(result_15, "sType_clone", 13))->mResultType;
                ((struct sType*)come_null_check(result_15, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value54=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                if(__dec_obj27) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                # 14 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional65=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas!=((void*)0),            _if_conditional65) {
                # 15 "sType_clone"
                __dec_obj28=((struct sType*)come_null_check(result_15, "sType_clone", 15))->mAlignas;
                ((struct sType*)come_null_check(result_15, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value55;
                __freed_obj__ = 0;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional66=self!=((void*)0),            _if_conditional66) {
                # 16 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                # 17 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                # 18 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional69=self!=((void*)0),            _if_conditional69) {
                # 19 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                # 20 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                # 21 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                # 22 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                # 23 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                # 24 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                # 25 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                # 26 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                # 27 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                # 28 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                # 29 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                # 30 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                # 31 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                # 32 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                # 33 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                # 34 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                # 35 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                # 36 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                # 37 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                # 38 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional89=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum!=((void*)0),            _if_conditional89) {
                # 39 "sType_clone"
                __dec_obj29=((struct sType*)come_null_check(result_15, "sType_clone", 39))->mSizeNum;
                ((struct sType*)come_null_check(result_15, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value56;
                __freed_obj__ = 0;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                # 40 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                # 41 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional92=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName!=((void*)0),            _if_conditional92) {
                # 42 "sType_clone"
                __dec_obj30=((struct sType*)come_null_check(result_15, "sType_clone", 42))->mOriginalTypeName;
                ((struct sType*)come_null_check(result_15, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value57=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value57;
                __freed_obj__ = 0;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                # 43 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                # 44 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                # 45 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                # 46 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                # 47 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                # 48 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                # 49 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                # 50 "sType_clone"
                ((struct sType*)come_null_check(result_15, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional101=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName!=((void*)0),            _if_conditional101) {
                # 51 "sType_clone"
                __dec_obj31=((struct sType*)come_null_check(result_15, "sType_clone", 51))->mAsmName;
                ((struct sType*)come_null_check(result_15, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value58;
                __freed_obj__ = 0;
            }
            # 52 "sType_clone"
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
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional32=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1!=((void*)0),                        _if_conditional32) {
                            # 0 "tuple1$1sTypeph_finalize"
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
struct list$1sTypeph* __exception_result_var_b7;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional5;
void* right_value34;
struct list$1sTypeph* __exception_result_var_b8;
struct list$1sTypeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value34, 0, sizeof(void*));
                    # 195 "./comelang2.h"
                    # 192 "./comelang2.h"
                    if(_if_conditional39=self==((void*)0),                    _if_conditional39) {
                        # 193 "./comelang2.h"
                        __result23__ = __result_obj__ = ((void*)0);
                        return __result23__;
                    }
                    # 195 "./comelang2.h"
                    result_18=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b7=((struct list$1sTypeph*)(right_value30=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value29=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b7));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value29;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value30);
                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value30;
                    __freed_obj__ = 0;
                    # 197 "./comelang2.h"
                    it_19=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 197))->head;
                    # 204 "./comelang2.h"
                    while(_while_condtional5=it_19!=((void*)0),                    _while_condtional5) {
                        # 199 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b8=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_18, "./comelang2.h", 199)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_19, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b8);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value34;
                        __freed_obj__ = 0;
                        # 201 "./comelang2.h"
                        it_19=((struct list_item$1sTypeph*)come_null_check(it_19, "./comelang2.h", 201))->next;
                    }
                    # 204 "./comelang2.h"
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
                        # 157 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                        # 158 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                        # 159 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                        # 161 "./comelang2.h"
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
                            # 239 "./comelang2.h"
                            # 208 "./comelang2.h"
                            if(_if_conditional40=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                            _if_conditional40) {
                                # 209 "./comelang2.h"
                                litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value31=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value31;
                                __freed_obj__ = 0;
                                # 211 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 211))->prev=((void*)0);
                                # 212 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 212))->next=((void*)0);
                                # 213 "./comelang2.h"
                                __dec_obj13=((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 213))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_20, "./comelang2.h", 213))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 215 "./comelang2.h"
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_20;
                                # 216 "./comelang2.h"
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_20;
                            }
                            else {
                                # 239 "./comelang2.h"
                                # 218 "./comelang2.h"
                                if(_if_conditional41=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                                _if_conditional41) {
                                    # 219 "./comelang2.h"
                                    litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                                    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value32;
                                    __freed_obj__ = 0;
                                    # 221 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(litem_21, "./comelang2.h", 221))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 221))->head;
                                    # 222 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(litem_21, "./comelang2.h", 222))->next=((void*)0);
                                    # 223 "./comelang2.h"
                                    __dec_obj14=((struct list_item$1sTypeph*)come_null_check(litem_21, "./comelang2.h", 223))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_21, "./comelang2.h", 223))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj14) { come_call_finalizer(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    # 225 "./comelang2.h"
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_21;
                                    # 226 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_21;
                                }
                                else {
                                    # 229 "./comelang2.h"
                                    litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value33=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value33;
                                    __freed_obj__ = 0;
                                    # 231 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(litem_22, "./comelang2.h", 231))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                    # 232 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(litem_22, "./comelang2.h", 232))->next=((void*)0);
                                    # 233 "./comelang2.h"
                                    __dec_obj15=((struct list_item$1sTypeph*)come_null_check(litem_22, "./comelang2.h", 233))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_22, "./comelang2.h", 233))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    # 235 "./comelang2.h"
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_22;
                                    # 236 "./comelang2.h"
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_22;
                                }
                            }
                            # 239 "./comelang2.h"
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 239))->len++;
                            # 241 "./comelang2.h"
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
struct list$1sNodeph* __exception_result_var_b9;
struct list$1sNodeph* result_23;
struct list_item$1sNodeph* it_24;
_Bool _while_condtional6;
void* right_value42;
struct list$1sNodeph* __exception_result_var_b10;
struct list$1sNodeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct list$1sNodeph*));
memset(&it_24, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value42, 0, sizeof(void*));
                    # 195 "./comelang2.h"
                    # 192 "./comelang2.h"
                    if(_if_conditional43=self==((void*)0),                    _if_conditional43) {
                        # 193 "./comelang2.h"
                        __result27__ = __result_obj__ = ((void*)0);
                        return __result27__;
                    }
                    # 195 "./comelang2.h"
                    result_23=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b9=((struct list$1sNodeph*)(right_value37=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value36=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b9));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value36;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value37;
                    __freed_obj__ = 0;
                    # 197 "./comelang2.h"
                    it_24=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 197))->head;
                    # 204 "./comelang2.h"
                    while(_while_condtional6=it_24!=((void*)0),                    _while_condtional6) {
                        # 199 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b10=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_23, "./comelang2.h", 199)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value42=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_24, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b10);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, ((struct sNode*)right_value42)->finalize, ((struct sNode*)right_value42)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value42;
                        __freed_obj__ = 0;
                        # 201 "./comelang2.h"
                        it_24=((struct list_item$1sNodeph*)come_null_check(it_24, "./comelang2.h", 201))->next;
                    }
                    # 204 "./comelang2.h"
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
                        # 157 "./comelang2.h"
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                        # 158 "./comelang2.h"
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                        # 159 "./comelang2.h"
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                        # 161 "./comelang2.h"
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
                            # 239 "./comelang2.h"
                            # 208 "./comelang2.h"
                            if(_if_conditional44=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                            _if_conditional44) {
                                # 209 "./comelang2.h"
                                litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value38=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                                if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value38;
                                __freed_obj__ = 0;
                                # 211 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 211))->prev=((void*)0);
                                # 212 "./comelang2.h"
                                ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 212))->next=((void*)0);
                                # 213 "./comelang2.h"
                                __dec_obj17=((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 213))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_25, "./comelang2.h", 213))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                # 215 "./comelang2.h"
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_25;
                                # 216 "./comelang2.h"
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_25;
                            }
                            else {
                                # 239 "./comelang2.h"
                                # 218 "./comelang2.h"
                                if(_if_conditional45=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                                _if_conditional45) {
                                    # 219 "./comelang2.h"
                                    litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value39=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value39;
                                    __freed_obj__ = 0;
                                    # 221 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(litem_26, "./comelang2.h", 221))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 221))->head;
                                    # 222 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(litem_26, "./comelang2.h", 222))->next=((void*)0);
                                    # 223 "./comelang2.h"
                                    __dec_obj18=((struct list_item$1sNodeph*)come_null_check(litem_26, "./comelang2.h", 223))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_26, "./comelang2.h", 223))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0); }
                                    # 225 "./comelang2.h"
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_26;
                                    # 226 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_26;
                                }
                                else {
                                    # 229 "./comelang2.h"
                                    litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value40=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value40;
                                    __freed_obj__ = 0;
                                    # 231 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(litem_27, "./comelang2.h", 231))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                    # 232 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(litem_27, "./comelang2.h", 232))->next=((void*)0);
                                    # 233 "./comelang2.h"
                                    __dec_obj19=((struct list_item$1sNodeph*)come_null_check(litem_27, "./comelang2.h", 233))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_27, "./comelang2.h", 233))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
                                    # 235 "./comelang2.h"
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_27;
                                    # 236 "./comelang2.h"
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_27;
                                }
                            }
                            # 239 "./comelang2.h"
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 239))->len++;
                            # 241 "./comelang2.h"
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
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional46=self==(void*)0,                            _if_conditional46) {
                                # 2 "sNode_clone"
                                __result30__ = __result_obj__ = (void*)0;
                                return __result30__;
                            }
                            # 3 "sNode_clone"
                            result_28=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value41;
                            __freed_obj__ = 0;
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional47=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone!=((void*)0),                            _if_conditional47) {
                                # 4 "sNode_clone"
                                ((struct sNode*)come_null_check(result_28, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional48=self!=((void*)0),                            _if_conditional48) {
                                # 5 "sNode_clone"
                                ((struct sNode*)come_null_check(result_28, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional49=self!=((void*)0),                            _if_conditional49) {
                                # 6 "sNode_clone"
                                ((struct sNode*)come_null_check(result_28, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional50=self!=((void*)0),                            _if_conditional50) {
                                # 7 "sNode_clone"
                                ((struct sNode*)come_null_check(result_28, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional51=self!=((void*)0),                            _if_conditional51) {
                                # 8 "sNode_clone"
                                ((struct sNode*)come_null_check(result_28, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional52=self!=((void*)0),                            _if_conditional52) {
                                # 9 "sNode_clone"
                                ((struct sNode*)come_null_check(result_28, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional53=self!=((void*)0),                            _if_conditional53) {
                                # 10 "sNode_clone"
                                ((struct sNode*)come_null_check(result_28, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional54=self!=((void*)0),                            _if_conditional54) {
                                # 11 "sNode_clone"
                                ((struct sNode*)come_null_check(result_28, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                            }
                            # 12 "sNode_clone"
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
struct list$1charph* __exception_result_var_b11;
struct list$1charph* result_29;
struct list_item$1charph* it_30;
_Bool _while_condtional7;
void* right_value50;
struct list$1charph* __exception_result_var_b12;
struct list$1charph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct list$1charph*));
memset(&it_30, 0, sizeof(struct list_item$1charph*));
memset(&right_value50, 0, sizeof(void*));
                    # 195 "./comelang2.h"
                    # 192 "./comelang2.h"
                    if(_if_conditional58=self==((void*)0),                    _if_conditional58) {
                        # 193 "./comelang2.h"
                        __result33__ = __result_obj__ = ((void*)0);
                        return __result33__;
                    }
                    # 195 "./comelang2.h"
                    result_29=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b11=((struct list$1charph*)(right_value46=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value45=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b11));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value45;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value46;
                    __freed_obj__ = 0;
                    # 197 "./comelang2.h"
                    it_30=((struct list$1charph*)come_null_check(self, "./comelang2.h", 197))->head;
                    # 204 "./comelang2.h"
                    while(_while_condtional7=it_30!=((void*)0),                    _while_condtional7) {
                        # 199 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b12=list$1charph_add(((struct list$1charph*)come_null_check(result_29, "./comelang2.h", 199)),(char*)come_increment_ref_count(((char*)(right_value50=string_clone(((struct list_item$1charph*)come_null_check(it_30, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b12);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value50;
                        __freed_obj__ = 0;
                        # 201 "./comelang2.h"
                        it_30=((struct list_item$1charph*)come_null_check(it_30, "./comelang2.h", 201))->next;
                    }
                    # 204 "./comelang2.h"
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
                        # 157 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                        # 158 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                        # 159 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                        # 161 "./comelang2.h"
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
                            # 239 "./comelang2.h"
                            # 208 "./comelang2.h"
                            if(_if_conditional59=((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->len==0,                            _if_conditional59) {
                                # 209 "./comelang2.h"
                                litem_31=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value47;
                                __freed_obj__ = 0;
                                # 211 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 211))->prev=((void*)0);
                                # 212 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 212))->next=((void*)0);
                                # 213 "./comelang2.h"
                                __dec_obj22=((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 213))->item;
                                ((struct list_item$1charph*)come_null_check(litem_31, "./comelang2.h", 213))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                # 215 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_31;
                                # 216 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 216))->head=litem_31;
                            }
                            else {
                                # 239 "./comelang2.h"
                                # 218 "./comelang2.h"
                                if(_if_conditional60=((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->len==1,                                _if_conditional60) {
                                    # 219 "./comelang2.h"
                                    litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value48;
                                    __freed_obj__ = 0;
                                    # 221 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(litem_32, "./comelang2.h", 221))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 221))->head;
                                    # 222 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(litem_32, "./comelang2.h", 222))->next=((void*)0);
                                    # 223 "./comelang2.h"
                                    __dec_obj23=((struct list_item$1charph*)come_null_check(litem_32, "./comelang2.h", 223))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_32, "./comelang2.h", 223))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                                    # 225 "./comelang2.h"
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_32;
                                    # 226 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_32;
                                }
                                else {
                                    # 229 "./comelang2.h"
                                    litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value49;
                                    __freed_obj__ = 0;
                                    # 231 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(litem_33, "./comelang2.h", 231))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                    # 232 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(litem_33, "./comelang2.h", 232))->next=((void*)0);
                                    # 233 "./comelang2.h"
                                    __dec_obj24=((struct list_item$1charph*)come_null_check(litem_33, "./comelang2.h", 233))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_33, "./comelang2.h", 233))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                                    # 235 "./comelang2.h"
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_33;
                                    # 236 "./comelang2.h"
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_33;
                                }
                            }
                            # 239 "./comelang2.h"
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 239))->len++;
                            # 241 "./comelang2.h"
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
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional62=self==(void*)0,                    _if_conditional62) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result37__ = __result_obj__ = (void*)0;
                        return __result37__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_34=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value52=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value52;
                    __freed_obj__ = 0;
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional63=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1!=((void*)0),                    _if_conditional63) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj26=((struct tuple1$1sTypeph*)come_null_check(result_34, "tuple1$1sTypephp_clone", 4))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(result_34, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                        if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = 0;
                    }
                    # 5 "tuple1$1sTypephp_clone"
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
        # 309 "./comelang2.h"
        # 278 "./comelang2.h"
        if(_if_conditional102=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 278))->len==0,        _if_conditional102) {
            # 279 "./comelang2.h"
            litem_36=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value61=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value61;
            __freed_obj__ = 0;
            # 281 "./comelang2.h"
            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_36, "./comelang2.h", 281))->prev=((void*)0);
            # 282 "./comelang2.h"
            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_36, "./comelang2.h", 282))->next=((void*)0);
            # 283 "./comelang2.h"
            __dec_obj33=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_36, "./comelang2.h", 283))->item;
            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_36, "./comelang2.h", 283))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            if(__dec_obj33) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 285 "./comelang2.h"
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_36;
            # 286 "./comelang2.h"
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 286))->head=litem_36;
        }
        else {
            # 309 "./comelang2.h"
            # 288 "./comelang2.h"
            if(_if_conditional105=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 288))->len==1,            _if_conditional105) {
                # 289 "./comelang2.h"
                litem_37=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value62=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = 0;
                # 291 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_37, "./comelang2.h", 291))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 291))->head;
                # 292 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_37, "./comelang2.h", 292))->next=((void*)0);
                # 293 "./comelang2.h"
                __dec_obj34=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_37, "./comelang2.h", 293))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_37, "./comelang2.h", 293))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj34) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 295 "./comelang2.h"
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_37;
                # 296 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_37;
            }
            else {
                # 299 "./comelang2.h"
                litem_38=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value63=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value63;
                __freed_obj__ = 0;
                # 301 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_38, "./comelang2.h", 301))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 301))->tail;
                # 302 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_38, "./comelang2.h", 302))->next=((void*)0);
                # 303 "./comelang2.h"
                __dec_obj35=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_38, "./comelang2.h", 303))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_38, "./comelang2.h", 303))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj35) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 305 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_38;
                # 306 "./comelang2.h"
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_38;
            }
        }
        # 309 "./comelang2.h"
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 309))->len++;
        # 311 "./comelang2.h"
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
                # 1 "tuple2$2charphsTypeph_finalize"
                # 0 "tuple2$2charphsTypeph_finalize"
                if(_if_conditional103=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1!=((void*)0),                _if_conditional103) {
                    # 0 "tuple2$2charphsTypeph_finalize"
                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
                # 2 "tuple2$2charphsTypeph_finalize"
                # 1 "tuple2$2charphsTypeph_finalize"
                if(_if_conditional104=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2!=((void*)0),                _if_conditional104) {
                    # 1 "tuple2$2charphsTypeph_finalize"
                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
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
        # 3 "tuple2$2charphsTypephp_clone"
        # 2 "tuple2$2charphsTypephp_clone"
        if(_if_conditional106=self==(void*)0,        _if_conditional106) {
            # 2 "tuple2$2charphsTypephp_clone"
            __result42__ = __result_obj__ = (void*)0;
            return __result42__;
        }
        # 3 "tuple2$2charphsTypephp_clone"
        result_39=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value64=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value64;
        __freed_obj__ = 0;
        # 5 "tuple2$2charphsTypephp_clone"
        # 4 "tuple2$2charphsTypephp_clone"
        if(_if_conditional107=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1!=((void*)0),        _if_conditional107) {
            # 4 "tuple2$2charphsTypephp_clone"
            __dec_obj36=((struct tuple2$2charphsTypeph*)come_null_check(result_39, "tuple2$2charphsTypephp_clone", 4))->v1;
            ((struct tuple2$2charphsTypeph*)come_null_check(result_39, "tuple2$2charphsTypephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65;
            __freed_obj__ = 0;
        }
        # 6 "tuple2$2charphsTypephp_clone"
        # 5 "tuple2$2charphsTypephp_clone"
        if(_if_conditional108=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2!=((void*)0),        _if_conditional108) {
            # 5 "tuple2$2charphsTypephp_clone"
            __dec_obj37=((struct tuple2$2charphsTypeph*)come_null_check(result_39, "tuple2$2charphsTypephp_clone", 5))->v2;
            ((struct tuple2$2charphsTypeph*)come_null_check(result_39, "tuple2$2charphsTypephp_clone", 5))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2))));
            if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value66;
            __freed_obj__ = 0;
        }
        # 6 "tuple2$2charphsTypephp_clone"
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
void* __exception_result_var_b16;
char* __result44__;
_Bool _if_conditional110;
char* __result45__;
char* result_44;
void* __exception_result_var_b17;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_43, 0, sizeof(char*));
memset(&result_44, 0, sizeof(char*));
            # 1343 "./comelang2.h"
            # 1338 "./comelang2.h"
            if(_if_conditional109=self==((void*)0),            _if_conditional109) {
                # 1339 "./comelang2.h"
                # 1340 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1340),__exception_result_var_b16=memset(&result_43,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b16);
                # 1341 "./comelang2.h"
                __result44__ = __result_obj__ = result_43;
                return __result44__;
            }
            # 1343 "./comelang2.h"
            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->head;
            # 1349 "./comelang2.h"
            # 1345 "./comelang2.h"
            if(_if_conditional110=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it,            _if_conditional110) {
                # 1346 "./comelang2.h"
                __result45__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1346))->key_list, "./comelang2.h", 1346))->it, "./comelang2.h", 1346))->item;
                return __result45__;
            }
            # 1349 "./comelang2.h"
            # 1350 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1350),__exception_result_var_b17=memset(&result_44,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b17);
            # 1351 "./comelang2.h"
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
            # 1372 "./comelang2.h"
            __result47__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1372))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1372))->key_list, "./comelang2.h", 1372))->it==((void*)0);
            return __result47__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
char* result_46;
void* __exception_result_var_b20;
char* __result48__;
_Bool _if_conditional112;
char* __result49__;
char* result_47;
void* __exception_result_var_b21;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_46, 0, sizeof(char*));
memset(&result_47, 0, sizeof(char*));
            # 1360 "./comelang2.h"
            # 1355 "./comelang2.h"
            if(_if_conditional111=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1355))->key_list, "./comelang2.h", 1355))->it==((void*)0),            _if_conditional111) {
                # 1356 "./comelang2.h"
                # 1357 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1357),__exception_result_var_b20=memset(&result_46,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b20);
                # 1358 "./comelang2.h"
                __result48__ = __result_obj__ = result_46;
                return __result48__;
            }
            # 1360 "./comelang2.h"
            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it, "./comelang2.h", 1360))->next;
            # 1366 "./comelang2.h"
            # 1362 "./comelang2.h"
            if(_if_conditional112=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it,            _if_conditional112) {
                # 1363 "./comelang2.h"
                __result49__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1363))->key_list, "./comelang2.h", 1363))->it, "./comelang2.h", 1363))->item;
                return __result49__;
            }
            # 1366 "./comelang2.h"
            # 1367 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1367),__exception_result_var_b21=memset(&result_47,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b21);
            # 1368 "./comelang2.h"
            __result50__ = __result_obj__ = result_47;
            return __result50__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_49;
void* __exception_result_var_b23;
unsigned int __exception_result_var_b24;
unsigned int hash_50;
unsigned int it_51;
_Bool _while_condtional9;
_Bool _if_conditional113;
void* right_value74;
struct optional$2boolbool* __exception_result_var_b25;
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
                # 1591 "./comelang2.h"
                # 1592 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b23=memset(&default_value_49,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b23);
                # 1594 "./comelang2.h"
                hash_50=(come_push_stackframe("./comelang2.h", 1594),__exception_result_var_b24=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1594))), come_pop_stackframe(), __exception_result_var_b24)%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1594))->size;
                # 1595 "./comelang2.h"
                it_51=hash_50;
                # 1619 "./comelang2.h"
                while(_while_condtional9=(_Bool)1,                _while_condtional9) {
                    # 1617 "./comelang2.h"
                    # 1598 "./comelang2.h"
                    if(_if_conditional113=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1598))->item_existance[it_51],                    _if_conditional113) {
                        # 1605 "./comelang2.h"
                        # 1600 "./comelang2.h"
                        if(_if_conditional115=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b25=((struct optional$2boolbool*)(right_value74=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_51], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b25)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74),
                        (right_value74 && right_value74 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value74, 
                        __freed_obj__ = 0, 
                        _if_conditional115) {
                            # 1602 "./comelang2.h"
                            __result53__ = __result_obj__ = ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1602))->items[it_51];
                            return __result53__;
                        }
                        # 1605 "./comelang2.h"
                        it_51++;
                        # 1613 "./comelang2.h"
                        # 1607 "./comelang2.h"
                        if(_if_conditional116=it_51>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1607))->size,                        _if_conditional116) {
                            # 1608 "./comelang2.h"
                            it_51=0;
                        }
                        else {
                            # 1613 "./comelang2.h"
                            # 1610 "./comelang2.h"
                            if(_if_conditional117=it_51==hash_50,                            _if_conditional117) {
                                # 1611 "./comelang2.h"
                                __result54__ = __result_obj__ = default_value_49;
                                return __result54__;
                            }
                        }
                    }
                    else {
                        # 1615 "./comelang2.h"
                        __result55__ = __result_obj__ = default_value_49;
                        return __result55__;
                    }
                }
                # 1619 "./comelang2.h"
                __result57__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1619), ((struct optional$2sVarpbool*)(right_value76=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value75=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1619))),default_value_49,(_Bool)0))));
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
void* __exception_result_var_b26;
_Bool __result51__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_52, 0, sizeof(_Bool));
                            # 69 "./comelang2.h"
                            # 61 "./comelang2.h"
                            if(_if_conditional114=self==((void*)0),                            _if_conditional114) {
                                # 62 "./comelang2.h"
                                # 63 "./comelang2.h"
                                (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b26=memset(&default_value_52,0,sizeof(_Bool)), come_pop_stackframe(), __exception_result_var_b26);
                                # 64 "./comelang2.h"
                                __result51__ = default_value_52;
                                return __result51__;
                            }
                            else {
                                # 67 "./comelang2.h"
                                __result52__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 67))->v1;
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
                    # 40 "./comelang2.h"
                    ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                    # 41 "./comelang2.h"
                    ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                    # 43 "./comelang2.h"
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
                                    # 417 "./comelang2.h"
                                    __result58__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 417))->len;
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
                                        # 483 "./comelang2.h"
                                        it_57=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 483))->head;
                                        # 490 "./comelang2.h"
                                        while(_while_condtional10=it_57!=((void*)0),                                        _while_condtional10) {
                                            # 485 "./comelang2.h"
                                            prev_it_58=it_57;
                                            # 486 "./comelang2.h"
                                            it_57=((struct list_item$1sNodeph*)come_null_check(it_57, "./comelang2.h", 486))->next;
                                            # 487 "./comelang2.h"
                                            if(prev_it_58 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        # 490 "./comelang2.h"
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 490))->head=((void*)0);
                                        # 491 "./comelang2.h"
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 491))->tail=((void*)0);
                                        # 493 "./comelang2.h"
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 493))->len=0;
                                        # 495 "./comelang2.h"
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
            # 1179 "./comelang2.h"
            for(
            i_60=0 ,            0;            _for_condtionalA2=            i_60<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,            _for_condtionalA2;            i_60++ ,            0            ){
                # 1178 "./comelang2.h"
                # 1173 "./comelang2.h"
                if(_if_conditional124=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1173))->item_existance[i_60],                _if_conditional124) {
                    # 1177 "./comelang2.h"
                    # 1174 "./comelang2.h"
                    if(_if_conditional125=1,                    _if_conditional125) {
                        # 1175 "./comelang2.h"
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1175))->items[i_60] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1175))->items[i_60], (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
            }
            # 1179 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1179),come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1179))->items),come_pop_stackframe());
            # 1188 "./comelang2.h"
            for(
            i_61=0 ,            0;            _for_condtionalA3=            i_61<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,            _for_condtionalA3;            i_61++ ,            0            ){
                # 1187 "./comelang2.h"
                # 1182 "./comelang2.h"
                if(_if_conditional130=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1182))->item_existance[i_61],                _if_conditional130) {
                    # 1186 "./comelang2.h"
                    # 1183 "./comelang2.h"
                    if(_if_conditional131=1,                    _if_conditional131) {
                        # 1184 "./comelang2.h"
                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1184))->keys[i_61] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1184))->keys[i_61] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1184))->keys[i_61], (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
            # 1188 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1188),come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1188))->keys),come_pop_stackframe());
            # 1190 "./comelang2.h"
            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1190))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1190))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 1192 "./comelang2.h"
            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1192))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1192))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1192))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
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
                            # 1 "sVar_finalize"
                            # 0 "sVar_finalize"
                            if(_if_conditional126=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName!=((void*)0),                            _if_conditional126) {
                                # 0 "sVar_finalize"
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            # 2 "sVar_finalize"
                            # 1 "sVar_finalize"
                            if(_if_conditional127=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName!=((void*)0),                            _if_conditional127) {
                                # 1 "sVar_finalize"
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            # 3 "sVar_finalize"
                            # 2 "sVar_finalize"
                            if(_if_conditional128=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType!=((void*)0),                            _if_conditional128) {
                                # 2 "sVar_finalize"
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            # 4 "sVar_finalize"
                            # 3 "sVar_finalize"
                            if(_if_conditional129=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName!=((void*)0),                            _if_conditional129) {
                                # 3 "sVar_finalize"
                                if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
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
                # 176 "./comelang2.h"
                it_62=((struct list$1charp*)come_null_check(self, "./comelang2.h", 176))->head;
                # 182 "./comelang2.h"
                while(_while_condtional11=it_62!=((void*)0),                _while_condtional11) {
                    # 178 "./comelang2.h"
                    prev_it_63=it_62;
                    # 179 "./comelang2.h"
                    it_62=((struct list_item$1charp*)come_null_check(it_62, "./comelang2.h", 179))->next;
                    # 180 "./comelang2.h"
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
unsigned int __exception_result_var_b53;
unsigned int hash_81;
unsigned int it_82;
_Bool _while_condtional14;
_Bool _if_conditional144;
void* right_value91;
struct optional$2boolbool* __exception_result_var_b54;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct list$1charp* __exception_result_var_b58;
struct list$1charp* __exception_result_var_b59;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
int __exception_result_var_b60;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool same_key_exist_99;
char* __exception_result_var_b63;
char* it2_102;
_Bool __exception_result_var_b64;
_Bool _for_condtionalA5;
char* __exception_result_var_b67;
void* right_value93;
struct optional$2boolbool* __exception_result_var_b68;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct list$1charp* __exception_result_var_b69;
struct map$2charphsClassph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_81, 0, sizeof(unsigned int));
memset(&it_82, 0, sizeof(unsigned int));
memset(&right_value91, 0, sizeof(void*));
memset(&same_key_exist_99, 0, sizeof(_Bool));
memset(&it2_102, 0, sizeof(char*));
memset(&right_value93, 0, sizeof(void*));
        # 1432 "./comelang2.h"
        # 1429 "./comelang2.h"
        if(_if_conditional132=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429))->size,        _if_conditional132) {
            # 1430 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1430),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1430))),come_pop_stackframe());
        }
        # 1432 "./comelang2.h"
        hash_81=(come_push_stackframe("./comelang2.h", 1432),__exception_result_var_b53=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1432))), come_pop_stackframe(), __exception_result_var_b53)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1432))->size;
        # 1433 "./comelang2.h"
        it_82=hash_81;
        # 1491 "./comelang2.h"
        while(_while_condtional14=(_Bool)1,        _while_condtional14) {
            # 1489 "./comelang2.h"
            # 1436 "./comelang2.h"
            if(_if_conditional144=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1436))->item_existance[it_82],            _if_conditional144) {
                # 1459 "./comelang2.h"
                # 1438 "./comelang2.h"
                if(_if_conditional145=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1438),__exception_result_var_b54=((struct optional$2boolbool*)(right_value91=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_82], "./comelang2.h", 1438)),key))), come_pop_stackframe(), __exception_result_var_b54)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91),
                (right_value91 && right_value91 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value91, 
                __freed_obj__ = 0, 
                _if_conditional145) {
                    # 1449 "./comelang2.h"
                    # 1440 "./comelang2.h"
                    if(_if_conditional146=1,                    _if_conditional146) {
                        # 1441 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1441),__exception_result_var_b58=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1441))->key_list, "./comelang2.h", 1441)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1441))->keys[it_82]), come_pop_stackframe(), __exception_result_var_b58);
                        # 1442 "./comelang2.h"
                        if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_82] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_82] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_82], (void*)0, (void*)0, 0, 0, 0); }
                        # 1443 "./comelang2.h"
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->keys[it_82]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1446 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1446),__exception_result_var_b59=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->key_list, "./comelang2.h", 1446)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->keys[it_82]), come_pop_stackframe(), __exception_result_var_b59);
                        # 1447 "./comelang2.h"
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1447))->keys[it_82]=key;
                    }
                    # 1456 "./comelang2.h"
                    # 1449 "./comelang2.h"
                    if(_if_conditional166=1,                    _if_conditional166) {
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
                if(_if_conditional167=it_82>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1461))->size,                _if_conditional167) {
                    # 1462 "./comelang2.h"
                    it_82=0;
                }
                else {
                    # 1469 "./comelang2.h"
                    # 1464 "./comelang2.h"
                    if(_if_conditional168=it_82==hash_81,                    _if_conditional168) {
                        # 1465 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1465),__exception_result_var_b60=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b60);
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
                if(_if_conditional169=1,                _if_conditional169) {
                    # 1473 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->keys[it_82]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1476 "./comelang2.h"
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1476))->keys[it_82]=key;
                }
                # 1485 "./comelang2.h"
                # 1478 "./comelang2.h"
                if(_if_conditional170=1,                _if_conditional170) {
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
        it2_102=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b63=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b63) ,        0;        _for_condtionalA5=        !(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b64=list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b64) ,        _for_condtionalA5;        it2_102=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b67=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b67) ,        0        ){
            # 1497 "./comelang2.h"
            # 1494 "./comelang2.h"
            if(_if_conditional175=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b68=((struct optional$2boolbool*)(right_value93=string_equals(((char*)come_null_check(it2_102, "./comelang2.h", 1494)),key))), come_pop_stackframe(), __exception_result_var_b68)),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93),
            (right_value93 && right_value93 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value93, 
            __freed_obj__ = 0, 
            _if_conditional175) {
                # 1495 "./comelang2.h"
                same_key_exist_99=(_Bool)1;
            }
        }
        # 1503 "./comelang2.h"
        # 1499 "./comelang2.h"
        if(_if_conditional176=!same_key_exist_99,        _if_conditional176) {
            # 1500 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 1500),__exception_result_var_b69=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1500))->key_list, "./comelang2.h", 1500)),key), come_pop_stackframe(), __exception_result_var_b69);
        }
        # 1503 "./comelang2.h"
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
char* __exception_result_var_b41;
char* it_71;
_Bool __exception_result_var_b42;
_Bool _for_condtionalA4;
char* __exception_result_var_b45;
struct sClass* default_value_74;
void* __exception_result_var_b46;
struct sClass* __exception_result_var_b49;
struct sClass* it2_77;
unsigned int __exception_result_var_b50;
unsigned int hash_78;
int n_79;
_Bool _while_condtional13;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
int __exception_result_var_b51;
struct sClass* default_value_80;
struct sClass* __exception_result_var_b52;
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
                # 1376 "./comelang2.h"
                size_64=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1376))->size*10;
                # 1377 "./comelang2.h"
                keys_65=(char**)come_increment_ref_count(((char**)(right_value87=(char**)come_calloc(1, sizeof(char*)*(1*(size_64)), "./comelang2.h", 1377))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value87;
                __freed_obj__ = 0;
                # 1378 "./comelang2.h"
                items_66=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value88=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_64)), "./comelang2.h", 1378))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value88;
                __freed_obj__ = 0;
                # 1379 "./comelang2.h"
                item_existance_67=(_Bool*)come_increment_ref_count(((_Bool*)(right_value89=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_64)), "./comelang2.h", 1379))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value89);
                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value89;
                __freed_obj__ = 0;
                # 1381 "./comelang2.h"
                len_68=0;
                # 1416 "./comelang2.h"
                for(
                it_71=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b41=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b41) ,                0;                _for_condtionalA4=                !(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b42=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b42) ,                _for_condtionalA4;                it_71=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b45=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b45) ,                0                ){
                    # 1384 "./comelang2.h"
                    # 1385 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b46=memset(&default_value_74,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b46);
                    # 1386 "./comelang2.h"
                    it2_77=(come_push_stackframe("./comelang2.h", 1386),__exception_result_var_b49=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1386)),it_71,default_value_74), come_pop_stackframe(), __exception_result_var_b49);
                    # 1387 "./comelang2.h"
                    hash_78=(come_push_stackframe("./comelang2.h", 1387),__exception_result_var_b50=string_get_hash_key(((char*)come_null_check(it_71, "./comelang2.h", 1387))), come_pop_stackframe(), __exception_result_var_b50)%size_64;
                    # 1388 "./comelang2.h"
                    n_79=hash_78;
                    # 1414 "./comelang2.h"
                    while(_while_condtional13=(_Bool)1,                    _while_condtional13) {
                        # 1413 "./comelang2.h"
                        # 1391 "./comelang2.h"
                        if(_if_conditional141=item_existance_67[n_79],                        _if_conditional141) {
                            # 1393 "./comelang2.h"
                            n_79++;
                            # 1403 "./comelang2.h"
                            # 1395 "./comelang2.h"
                            if(_if_conditional142=n_79>=size_64,                            _if_conditional142) {
                                # 1396 "./comelang2.h"
                                n_79=0;
                            }
                            else {
                                # 1403 "./comelang2.h"
                                # 1398 "./comelang2.h"
                                if(_if_conditional143=n_79==hash_78,                                _if_conditional143) {
                                    # 1399 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 1399),__exception_result_var_b51=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b51);
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
                            items_66[n_79]=(come_push_stackframe("./comelang2.h", 1408),__exception_result_var_b52=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408)),it_71,default_value_80), come_pop_stackframe(), __exception_result_var_b52);
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
_Bool _if_conditional133;
char* result_69;
void* __exception_result_var_b39;
char* __result60__;
_Bool _if_conditional134;
char* __result61__;
char* result_70;
void* __exception_result_var_b40;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                    # 1343 "./comelang2.h"
                    # 1338 "./comelang2.h"
                    if(_if_conditional133=self==((void*)0),                    _if_conditional133) {
                        # 1339 "./comelang2.h"
                        # 1340 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1340),__exception_result_var_b39=memset(&result_69,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b39);
                        # 1341 "./comelang2.h"
                        __result60__ = __result_obj__ = result_69;
                        return __result60__;
                    }
                    # 1343 "./comelang2.h"
                    ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->head;
                    # 1349 "./comelang2.h"
                    # 1345 "./comelang2.h"
                    if(_if_conditional134=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it,                    _if_conditional134) {
                        # 1346 "./comelang2.h"
                        __result61__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1346))->key_list, "./comelang2.h", 1346))->it, "./comelang2.h", 1346))->item;
                        return __result61__;
                    }
                    # 1349 "./comelang2.h"
                    # 1350 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1350),__exception_result_var_b40=memset(&result_70,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b40);
                    # 1351 "./comelang2.h"
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
                    # 1372 "./comelang2.h"
                    __result63__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1372))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1372))->key_list, "./comelang2.h", 1372))->it==((void*)0);
                    return __result63__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
char* result_72;
void* __exception_result_var_b43;
char* __result64__;
_Bool _if_conditional136;
char* __result65__;
char* result_73;
void* __exception_result_var_b44;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                    # 1360 "./comelang2.h"
                    # 1355 "./comelang2.h"
                    if(_if_conditional135=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1355))->key_list, "./comelang2.h", 1355))->it==((void*)0),                    _if_conditional135) {
                        # 1356 "./comelang2.h"
                        # 1357 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 1357),__exception_result_var_b43=memset(&result_72,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b43);
                        # 1358 "./comelang2.h"
                        __result64__ = __result_obj__ = result_72;
                        return __result64__;
                    }
                    # 1360 "./comelang2.h"
                    ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it, "./comelang2.h", 1360))->next;
                    # 1366 "./comelang2.h"
                    # 1362 "./comelang2.h"
                    if(_if_conditional136=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it,                    _if_conditional136) {
                        # 1363 "./comelang2.h"
                        __result65__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1363))->key_list, "./comelang2.h", 1363))->it, "./comelang2.h", 1363))->item;
                        return __result65__;
                    }
                    # 1366 "./comelang2.h"
                    # 1367 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1367),__exception_result_var_b44=memset(&result_73,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b44);
                    # 1368 "./comelang2.h"
                    __result66__ = __result_obj__ = result_73;
                    return __result66__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b47;
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional12;
_Bool _if_conditional137;
void* right_value90;
struct optional$2boolbool* __exception_result_var_b48;
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
                        # 1265 "./comelang2.h"
                        hash_75=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b47=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b47)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1265))->size;
                        # 1266 "./comelang2.h"
                        it_76=hash_75;
                        # 1290 "./comelang2.h"
                        while(_while_condtional12=(_Bool)1,                        _while_condtional12) {
                            # 1288 "./comelang2.h"
                            # 1269 "./comelang2.h"
                            if(_if_conditional137=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_76],                            _if_conditional137) {
                                # 1276 "./comelang2.h"
                                # 1271 "./comelang2.h"
                                if(_if_conditional138=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b48=((struct optional$2boolbool*)(right_value90=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_76], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b48)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90),
                                (right_value90 && right_value90 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value90, 
                                __freed_obj__ = 0, 
                                _if_conditional138) {
                                    # 1273 "./comelang2.h"
                                    __result67__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1273))->items[it_76];
                                    return __result67__;
                                }
                                # 1276 "./comelang2.h"
                                it_76++;
                                # 1284 "./comelang2.h"
                                # 1278 "./comelang2.h"
                                if(_if_conditional139=it_76>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1278))->size,                                _if_conditional139) {
                                    # 1279 "./comelang2.h"
                                    it_76=0;
                                }
                                else {
                                    # 1284 "./comelang2.h"
                                    # 1281 "./comelang2.h"
                                    if(_if_conditional140=it_76==hash_75,                                    _if_conditional140) {
                                        # 1282 "./comelang2.h"
                                        __result68__ = __result_obj__ = default_value;
                                        return __result68__;
                                    }
                                }
                            }
                            else {
                                # 1286 "./comelang2.h"
                                __result69__ = __result_obj__ = default_value;
                                return __result69__;
                            }
                        }
                        # 1290 "./comelang2.h"
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
struct optional$2boolbool* __exception_result_var_b55;
_Bool _if_conditional147;
struct list$1charp* __exception_result_var_b57;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_83, 0, sizeof(int));
memset(&it_84, 0, sizeof(struct list_item$1charp*));
memset(&right_value92, 0, sizeof(void*));
                            # 498 "./comelang2.h"
                            it2_83=0;
                            # 499 "./comelang2.h"
                            it_84=((struct list$1charp*)come_null_check(self, "./comelang2.h", 499))->head;
                            # 510 "./comelang2.h"
                            while(_while_condtional15=it_84!=((void*)0),                            _while_condtional15) {
                                # 505 "./comelang2.h"
                                # 501 "./comelang2.h"
                                if(_if_conditional147=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 501),__exception_result_var_b55=((struct optional$2boolbool*)(right_value92=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_84, "./comelang2.h", 501))->item, "./comelang2.h", 501)),item))), come_pop_stackframe(), __exception_result_var_b55)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92),
                                (right_value92 && right_value92 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value92, 
                                __freed_obj__ = 0, 
                                _if_conditional147) {
                                    # 502 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 502),__exception_result_var_b57=list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 502)),it2_83,it2_83+1), come_pop_stackframe(), __exception_result_var_b57);
                                    # 503 "./comelang2.h"
                                    break;
                                }
                                # 505 "./comelang2.h"
                                it2_83++;
                                # 507 "./comelang2.h"
                                it_84=((struct list_item$1charp*)come_null_check(it_84, "./comelang2.h", 507))->next;
                            }
                            # 510 "./comelang2.h"
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
struct list$1charp* __exception_result_var_b56;
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
                                        # 517 "./comelang2.h"
                                        # 514 "./comelang2.h"
                                        if(_if_conditional148=head<0,                                        _if_conditional148) {
                                            # 515 "./comelang2.h"
                                            head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 515))->len;
                                        }
                                        # 521 "./comelang2.h"
                                        # 517 "./comelang2.h"
                                        if(_if_conditional149=tail<0,                                        _if_conditional149) {
                                            # 518 "./comelang2.h"
                                            tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 518))->len+1;
                                        }
                                        # 527 "./comelang2.h"
                                        # 521 "./comelang2.h"
                                        if(_if_conditional150=head>tail,                                        _if_conditional150) {
                                            # 522 "./comelang2.h"
                                            tmp_85=tail;
                                            # 523 "./comelang2.h"
                                            tail=head;
                                            # 524 "./comelang2.h"
                                            head=tmp_85;
                                        }
                                        # 531 "./comelang2.h"
                                        # 527 "./comelang2.h"
                                        if(_if_conditional151=head<0,                                        _if_conditional151) {
                                            # 528 "./comelang2.h"
                                            head=0;
                                        }
                                        # 535 "./comelang2.h"
                                        # 531 "./comelang2.h"
                                        if(_if_conditional152=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 531))->len,                                        _if_conditional152) {
                                            # 532 "./comelang2.h"
                                            tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 532))->len;
                                        }
                                        # 539 "./comelang2.h"
                                        # 535 "./comelang2.h"
                                        if(_if_conditional153=head==tail,                                        _if_conditional153) {
                                            # 536 "./comelang2.h"
                                            __result71__ = __result_obj__ = self;
                                            return __result71__;
                                        }
                                        # 634 "./comelang2.h"
                                        # 539 "./comelang2.h"
                                        if(_if_conditional154=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 539))->len,                                        _if_conditional154) {
                                            # 541 "./comelang2.h"
                                            (come_push_stackframe("./comelang2.h", 541),__exception_result_var_b56=list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 541))), come_pop_stackframe(), __exception_result_var_b56);
                                        }
                                        else {
                                            # 634 "./comelang2.h"
                                            # 543 "./comelang2.h"
                                            if(_if_conditional155=head==0,                                            _if_conditional155) {
                                                # 544 "./comelang2.h"
                                                it_88=((struct list$1charp*)come_null_check(self, "./comelang2.h", 544))->head;
                                                # 545 "./comelang2.h"
                                                i_89=0;
                                                # 567 "./comelang2.h"
                                                while(_while_condtional17=it_88!=((void*)0),                                                _while_condtional17) {
                                                    # 566 "./comelang2.h"
                                                    # 547 "./comelang2.h"
                                                    if(_if_conditional156=i_89<tail,                                                    _if_conditional156) {
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
                                                        if(_if_conditional157=i_89==tail,                                                        _if_conditional157) {
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
                                                if(_if_conditional158=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 568))->len,                                                _if_conditional158) {
                                                    # 569 "./comelang2.h"
                                                    it_91=((struct list$1charp*)come_null_check(self, "./comelang2.h", 569))->head;
                                                    # 570 "./comelang2.h"
                                                    i_92=0;
                                                    # 592 "./comelang2.h"
                                                    while(_while_condtional18=it_91!=((void*)0),                                                    _while_condtional18) {
                                                        # 577 "./comelang2.h"
                                                        # 572 "./comelang2.h"
                                                        if(_if_conditional159=i_92==head,                                                        _if_conditional159) {
                                                            # 573 "./comelang2.h"
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 573))->tail=((struct list_item$1charp*)come_null_check(it_91, "./comelang2.h", 573))->prev;
                                                            # 574 "./comelang2.h"
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 574))->tail, "./comelang2.h", 574))->next=((void*)0);
                                                        }
                                                        # 591 "./comelang2.h"
                                                        # 577 "./comelang2.h"
                                                        if(_if_conditional160=i_92>=head,                                                        _if_conditional160) {
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
                                                    while(_while_condtional19=it_94!=((void*)0),                                                    _while_condtional19) {
                                                        # 605 "./comelang2.h"
                                                        # 602 "./comelang2.h"
                                                        if(_if_conditional161=i_97==head,                                                        _if_conditional161) {
                                                            # 603 "./comelang2.h"
                                                            head_prev_it_95=((struct list_item$1charp*)come_null_check(it_94, "./comelang2.h", 603))->prev;
                                                        }
                                                        # 609 "./comelang2.h"
                                                        # 605 "./comelang2.h"
                                                        if(_if_conditional162=i_97==tail,                                                        _if_conditional162) {
                                                            # 606 "./comelang2.h"
                                                            tail_it_96=it_94;
                                                        }
                                                        # 624 "./comelang2.h"
                                                        # 609 "./comelang2.h"
                                                        if(_if_conditional163=i_97>=head&&i_97<tail,                                                        _if_conditional163) {
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
                                                    if(_if_conditional164=head_prev_it_95!=((void*)0),                                                    _if_conditional164) {
                                                        # 627 "./comelang2.h"
                                                        ((struct list_item$1charp*)come_null_check(head_prev_it_95, "./comelang2.h", 627))->next=tail_it_96;
                                                    }
                                                    # 632 "./comelang2.h"
                                                    # 629 "./comelang2.h"
                                                    if(_if_conditional165=tail_it_96!=((void*)0),                                                    _if_conditional165) {
                                                        # 630 "./comelang2.h"
                                                        ((struct list_item$1charp*)come_null_check(tail_it_96, "./comelang2.h", 630))->prev=head_prev_it_95;
                                                    }
                                                }
                                            }
                                        }
                                        # 634 "./comelang2.h"
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
                                                # 483 "./comelang2.h"
                                                it_86=((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head;
                                                # 490 "./comelang2.h"
                                                while(_while_condtional16=it_86!=((void*)0),                                                _while_condtional16) {
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
                                                __result72__ = __result_obj__ = self;
                                                return __result72__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
char* result_100;
void* __exception_result_var_b61;
char* __result75__;
_Bool _if_conditional172;
char* __result76__;
char* result_101;
void* __exception_result_var_b62;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_100, 0, sizeof(char*));
memset(&result_101, 0, sizeof(char*));
            # 343 "./comelang2.h"
            # 338 "./comelang2.h"
            if(_if_conditional171=self==((void*)0),            _if_conditional171) {
                # 339 "./comelang2.h"
                # 340 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b61=memset(&result_100,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b61);
                # 341 "./comelang2.h"
                __result75__ = __result_obj__ = result_100;
                return __result75__;
            }
            # 343 "./comelang2.h"
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 343))->head;
            # 349 "./comelang2.h"
            # 345 "./comelang2.h"
            if(_if_conditional172=((struct list$1charp*)come_null_check(self, "./comelang2.h", 345))->it,            _if_conditional172) {
                # 346 "./comelang2.h"
                __result76__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                return __result76__;
            }
            # 349 "./comelang2.h"
            # 350 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b62=memset(&result_101,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b62);
            # 351 "./comelang2.h"
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
            # 373 "./comelang2.h"
            __result78__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
            return __result78__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional173;
char* result_103;
void* __exception_result_var_b65;
char* __result79__;
_Bool _if_conditional174;
char* __result80__;
char* result_104;
void* __exception_result_var_b66;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_103, 0, sizeof(char*));
memset(&result_104, 0, sizeof(char*));
            # 361 "./comelang2.h"
            # 355 "./comelang2.h"
            if(_if_conditional173=self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),            _if_conditional173) {
                # 356 "./comelang2.h"
                # 357 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b65=memset(&result_103,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b65);
                # 358 "./comelang2.h"
                __result79__ = __result_obj__ = result_103;
                return __result79__;
            }
            # 361 "./comelang2.h"
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
            # 367 "./comelang2.h"
            # 363 "./comelang2.h"
            if(_if_conditional174=((struct list$1charp*)come_null_check(self, "./comelang2.h", 363))->it,            _if_conditional174) {
                # 364 "./comelang2.h"
                __result80__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                return __result80__;
            }
            # 367 "./comelang2.h"
            # 368 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b66=memset(&result_104,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b66);
            # 369 "./comelang2.h"
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
                # 309 "./comelang2.h"
                # 278 "./comelang2.h"
                if(_if_conditional177=((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->len==0,                _if_conditional177) {
                    # 279 "./comelang2.h"
                    litem_105=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value94=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 279))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value94;
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
                    if(_if_conditional178=((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->len==1,                    _if_conditional178) {
                        # 289 "./comelang2.h"
                        litem_106=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 289))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value95;
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
                        litem_107=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 299))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value96;
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
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional185=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value!=((void*)0),        _if_conditional185) {
            # 0 "CVALUE_finalize"
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional186=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type!=((void*)0),        _if_conditional186) {
            # 1 "CVALUE_finalize"
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
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
        # 309 "./comelang2.h"
        # 278 "./comelang2.h"
        if(_if_conditional187=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->len==0,        _if_conditional187) {
            # 279 "./comelang2.h"
            litem_116=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value104=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value104;
            __freed_obj__ = 0;
            # 281 "./comelang2.h"
            ((struct list_item$1CVALUEph*)come_null_check(litem_116, "./comelang2.h", 281))->prev=((void*)0);
            # 282 "./comelang2.h"
            ((struct list_item$1CVALUEph*)come_null_check(litem_116, "./comelang2.h", 282))->next=((void*)0);
            # 283 "./comelang2.h"
            __dec_obj40=((struct list_item$1CVALUEph*)come_null_check(litem_116, "./comelang2.h", 283))->item;
            ((struct list_item$1CVALUEph*)come_null_check(litem_116, "./comelang2.h", 283))->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj40) { come_call_finalizer(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 285 "./comelang2.h"
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_116;
            # 286 "./comelang2.h"
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 286))->head=litem_116;
        }
        else {
            # 309 "./comelang2.h"
            # 288 "./comelang2.h"
            if(_if_conditional189=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->len==1,            _if_conditional189) {
                # 289 "./comelang2.h"
                litem_117=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value105=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value105;
                __freed_obj__ = 0;
                # 291 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(litem_117, "./comelang2.h", 291))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 291))->head;
                # 292 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(litem_117, "./comelang2.h", 292))->next=((void*)0);
                # 293 "./comelang2.h"
                __dec_obj41=((struct list_item$1CVALUEph*)come_null_check(litem_117, "./comelang2.h", 293))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_117, "./comelang2.h", 293))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj41) { come_call_finalizer(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 295 "./comelang2.h"
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_117;
                # 296 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_117;
            }
            else {
                # 299 "./comelang2.h"
                litem_118=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value106=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value106;
                __freed_obj__ = 0;
                # 301 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(litem_118, "./comelang2.h", 301))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 301))->tail;
                # 302 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(litem_118, "./comelang2.h", 302))->next=((void*)0);
                # 303 "./comelang2.h"
                __dec_obj42=((struct list_item$1CVALUEph*)come_null_check(litem_118, "./comelang2.h", 303))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_118, "./comelang2.h", 303))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj42) { come_call_finalizer(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 305 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_118;
                # 306 "./comelang2.h"
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_118;
            }
        }
        # 309 "./comelang2.h"
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 309))->len++;
        # 311 "./comelang2.h"
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
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional188=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item!=((void*)0),                _if_conditional188) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value107;
struct sNode* __dec_obj43;
void* right_value108;
char* __exception_result_var_b84;
char* __dec_obj44;
void* right_value118;
struct list$1tuple2$2charphsNodephph* __dec_obj50;
void* right_value119;
struct buffer* __dec_obj51;
void* right_value120;
char* __exception_result_var_b87;
char* __dec_obj52;
struct sMethodCallNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
    # 164 "20method.c"
    __dec_obj43=((struct sMethodCallNode*)come_null_check(self, "20method.c", 164))->obj;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 164))->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(obj))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    # 165 "20method.c"
    __dec_obj44=((struct sMethodCallNode*)come_null_check(self, "20method.c", 165))->fun_name;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 165))->fun_name=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 165),__exception_result_var_b84=((char*)(right_value108=__builtin_string(fun_name))), come_pop_stackframe(), __exception_result_var_b84));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value108;
    __freed_obj__ = 0;
    # 166 "20method.c"
    __dec_obj50=((struct sMethodCallNode*)come_null_check(self, "20method.c", 166))->params;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 166))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value118=list$1tuple2$2charphsNodephphp_clone(params))));
    if(__dec_obj50) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value118;
    __freed_obj__ = 0;
    # 167 "20method.c"
    __dec_obj51=((struct sMethodCallNode*)come_null_check(self, "20method.c", 167))->method_block;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 167))->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value119=buffer_clone(method_block))));
    if(__dec_obj51) { come_call_finalizer(buffer_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value119;
    __freed_obj__ = 0;
    # 168 "20method.c"
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 168))->sline=((struct sInfo*)come_null_check(info, "20method.c", 168))->sline;
    # 169 "20method.c"
    __dec_obj52=((struct sMethodCallNode*)come_null_check(self, "20method.c", 169))->sname;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 169))->sname=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 169),__exception_result_var_b87=((char*)(right_value120=__builtin_string(((struct sInfo*)come_null_check(info, "20method.c", 169))->sname))), come_pop_stackframe(), __exception_result_var_b87));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value120;
    __freed_obj__ = 0;
    # 170 "20method.c"
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 170))->method_block_sline=method_block_sline;
    # 172 "20method.c"
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
struct list$1tuple2$2charphsNodephph* __exception_result_var_b85;
struct list$1tuple2$2charphsNodephph* result_121;
struct list_item$1tuple2$2charphsNodephph* it_122;
_Bool _while_condtional22;
void* right_value117;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b86;
struct list$1tuple2$2charphsNodephph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&result_121, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_122, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value117, 0, sizeof(void*));
        # 195 "./comelang2.h"
        # 192 "./comelang2.h"
        if(_if_conditional190=self==((void*)0),        _if_conditional190) {
            # 193 "./comelang2.h"
            __result86__ = __result_obj__ = ((void*)0);
            return __result86__;
        }
        # 195 "./comelang2.h"
        result_121=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b85=((struct list$1tuple2$2charphsNodephph*)(right_value110=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value109=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b85));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value109;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value110;
        __freed_obj__ = 0;
        # 197 "./comelang2.h"
        it_122=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 197))->head;
        # 204 "./comelang2.h"
        while(_while_condtional22=it_122!=((void*)0),        _while_condtional22) {
            # 199 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b86=list$1tuple2$2charphsNodephph_add(((struct list$1tuple2$2charphsNodephph*)come_null_check(result_121, "./comelang2.h", 199)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value117=tuple2$2charphsNodephp_clone(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_122, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b86);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value117;
            __freed_obj__ = 0;
            # 201 "./comelang2.h"
            it_122=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_122, "./comelang2.h", 201))->next;
        }
        # 204 "./comelang2.h"
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
            # 157 "./comelang2.h"
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
            # 158 "./comelang2.h"
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
            # 159 "./comelang2.h"
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 159))->len=0;
            # 161 "./comelang2.h"
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
                # 176 "./comelang2.h"
                it_119=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 176))->head;
                # 182 "./comelang2.h"
                while(_while_condtional21=it_119!=((void*)0),                _while_condtional21) {
                    # 178 "./comelang2.h"
                    prev_it_120=it_119;
                    # 179 "./comelang2.h"
                    it_119=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_119, "./comelang2.h", 179))->next;
                    # 180 "./comelang2.h"
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
                        # 1 "list_item$1tuple2$2charphsNodephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                        if(_if_conditional191=self!=((void*)0)&&((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0))->item!=((void*)0),                        _if_conditional191) {
                            # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                            if(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                # 1 "tuple2$2charphsNodephp_finalize"
                                # 0 "tuple2$2charphsNodephp_finalize"
                                if(_if_conditional192=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1!=((void*)0),                                _if_conditional192) {
                                    # 0 "tuple2$2charphsNodephp_finalize"
                                    if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                # 2 "tuple2$2charphsNodephp_finalize"
                                # 1 "tuple2$2charphsNodephp_finalize"
                                if(_if_conditional193=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2!=((void*)0),                                _if_conditional193) {
                                    # 1 "tuple2$2charphsNodephp_finalize"
                                    if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1))->v2)->_protocol_obj, 0, 0, 0); } 
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
                # 239 "./comelang2.h"
                # 208 "./comelang2.h"
                if(_if_conditional194=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 208))->len==0,                _if_conditional194) {
                    # 209 "./comelang2.h"
                    litem_123=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value111=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 209))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value111;
                    __freed_obj__ = 0;
                    # 211 "./comelang2.h"
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_123, "./comelang2.h", 211))->prev=((void*)0);
                    # 212 "./comelang2.h"
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_123, "./comelang2.h", 212))->next=((void*)0);
                    # 213 "./comelang2.h"
                    __dec_obj45=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_123, "./comelang2.h", 213))->item;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_123, "./comelang2.h", 213))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj45) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 215 "./comelang2.h"
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_123;
                    # 216 "./comelang2.h"
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 216))->head=litem_123;
                }
                else {
                    # 239 "./comelang2.h"
                    # 218 "./comelang2.h"
                    if(_if_conditional197=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 218))->len==1,                    _if_conditional197) {
                        # 219 "./comelang2.h"
                        litem_124=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value112=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 219))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value112;
                        __freed_obj__ = 0;
                        # 221 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_124, "./comelang2.h", 221))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 221))->head;
                        # 222 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_124, "./comelang2.h", 222))->next=((void*)0);
                        # 223 "./comelang2.h"
                        __dec_obj46=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_124, "./comelang2.h", 223))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_124, "./comelang2.h", 223))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj46) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 225 "./comelang2.h"
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_124;
                        # 226 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_124;
                    }
                    else {
                        # 229 "./comelang2.h"
                        litem_125=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value113=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 229))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value113;
                        __freed_obj__ = 0;
                        # 231 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_125, "./comelang2.h", 231))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 231))->tail;
                        # 232 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_125, "./comelang2.h", 232))->next=((void*)0);
                        # 233 "./comelang2.h"
                        __dec_obj47=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_125, "./comelang2.h", 233))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_125, "./comelang2.h", 233))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj47) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 235 "./comelang2.h"
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_125;
                        # 236 "./comelang2.h"
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_125;
                    }
                }
                # 239 "./comelang2.h"
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 239))->len++;
                # 241 "./comelang2.h"
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
                        # 1 "tuple2$2charphsNodeph_finalize"
                        # 0 "tuple2$2charphsNodeph_finalize"
                        if(_if_conditional195=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1!=((void*)0),                        _if_conditional195) {
                            # 0 "tuple2$2charphsNodeph_finalize"
                            if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        # 2 "tuple2$2charphsNodeph_finalize"
                        # 1 "tuple2$2charphsNodeph_finalize"
                        if(_if_conditional196=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2!=((void*)0),                        _if_conditional196) {
                            # 1 "tuple2$2charphsNodeph_finalize"
                            if(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1))->v2)->_protocol_obj, 0, 0, 0); } 
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
                # 3 "tuple2$2charphsNodephp_clone"
                # 2 "tuple2$2charphsNodephp_clone"
                if(_if_conditional198=self==(void*)0,                _if_conditional198) {
                    # 2 "tuple2$2charphsNodephp_clone"
                    __result89__ = __result_obj__ = (void*)0;
                    return __result89__;
                }
                # 3 "tuple2$2charphsNodephp_clone"
                result_126=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value114=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value114;
                __freed_obj__ = 0;
                # 5 "tuple2$2charphsNodephp_clone"
                # 4 "tuple2$2charphsNodephp_clone"
                if(_if_conditional199=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4))->v1!=((void*)0),                _if_conditional199) {
                    # 4 "tuple2$2charphsNodephp_clone"
                    __dec_obj48=((struct tuple2$2charphsNodeph*)come_null_check(result_126, "tuple2$2charphsNodephp_clone", 4))->v1;
                    ((struct tuple2$2charphsNodeph*)come_null_check(result_126, "tuple2$2charphsNodephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4))->v1))));
                    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value115;
                    __freed_obj__ = 0;
                }
                # 6 "tuple2$2charphsNodephp_clone"
                # 5 "tuple2$2charphsNodephp_clone"
                if(_if_conditional200=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5))->v2!=((void*)0),                _if_conditional200) {
                    # 5 "tuple2$2charphsNodephp_clone"
                    __dec_obj49=((struct tuple2$2charphsNodeph*)come_null_check(result_126, "tuple2$2charphsNodephp_clone", 5))->v2;
                    ((struct tuple2$2charphsNodeph*)come_null_check(result_126, "tuple2$2charphsNodephp_clone", 5))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5))->v2))));
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value116;
                    __freed_obj__ = 0;
                }
                # 6 "tuple2$2charphsNodephp_clone"
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
    # 177 "20method.c"
    __result93__ = ((struct sMethodCallNode*)come_null_check(self, "20method.c", 177))->sline;
    return __result93__;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value121;
char* __exception_result_var_b88;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
    # 182 "20method.c"
    __result94__ = __result_obj__ = (come_push_stackframe("20method.c", 182),__exception_result_var_b88=((char*)(right_value121=__builtin_string(((struct sMethodCallNode*)come_null_check(self, "20method.c", 182))->sname))), come_pop_stackframe(), __exception_result_var_b88);
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
char* __exception_result_var_b89;
char* none_generics_name_127;
void* right_value123;
char* __exception_result_var_b90;
char* fun_name2_128;
void* right_value124;
char* __exception_result_var_b91;
char* fun_name3_129;
struct sGenericsFun* __exception_result_var_b94;
struct sGenericsFun* generics_fun_132;
_Bool _if_conditional210;
void* right_value126;
char* __exception_result_var_b95;
_Bool __exception_result_var_b96;
_Bool _if_conditional211;
void* right_value127;
char* __exception_result_var_b97;
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
    # 191 "20method.c"
    none_generics_name_127=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 191),__exception_result_var_b89=((char*)(right_value122=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "20method.c", 191))->mClass, "20method.c", 191))->mName))), come_pop_stackframe(), __exception_result_var_b89));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = 0;
    # 192 "20method.c"
    fun_name2_128=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 192),__exception_result_var_b90=((char*)(right_value123=create_method_name(type,(_Bool)0,fun_name,info))), come_pop_stackframe(), __exception_result_var_b90));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value123;
    __freed_obj__ = 0;
    # 193 "20method.c"
    fun_name3_129=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 193),__exception_result_var_b91=((char*)(right_value124=xsprintf("%s_%s",none_generics_name_127,fun_name))), come_pop_stackframe(), __exception_result_var_b91));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value124;
    __freed_obj__ = 0;
    # 195 "20method.c"
    generics_fun_132=(come_push_stackframe("20method.c", 195),__exception_result_var_b94=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 195))->generics_funcs, "20method.c", 195)),fun_name3_129,((void*)0)), come_pop_stackframe(), __exception_result_var_b94);
    # 204 "20method.c"
    # 197 "20method.c"
    if(_if_conditional210=generics_fun_132,    _if_conditional210) {
        # 202 "20method.c"
        # 198 "20method.c"
        if(_if_conditional211=!(come_push_stackframe("20method.c", 198),__exception_result_var_b96=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("20method.c", 198),__exception_result_var_b95=((char*)(right_value126=__builtin_string(fun_name2_128))), come_pop_stackframe(), __exception_result_var_b95)),generics_fun_132,type,info), come_pop_stackframe(), __exception_result_var_b96),        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126),
        (right_value126 && right_value126 != __result_obj__ && !__freed_obj__) ? right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value126, 
        __freed_obj__ = 0, 
        _if_conditional211) {
            # 199 "20method.c"
            (come_push_stackframe("20method.c", 199),err_msg(info,"%s not found",fun_name3_129),come_pop_stackframe());
            # 200 "20method.c"
            __result99__ = __result_obj__ = (come_push_stackframe("20method.c", 200),__exception_result_var_b97=((char*)(right_value127=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b97);
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
    # 204 "20method.c"
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
unsigned int __exception_result_var_b92;
unsigned int hash_130;
unsigned int it_131;
_Bool _while_condtional23;
_Bool _if_conditional206;
void* right_value125;
struct optional$2boolbool* __exception_result_var_b93;
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
        # 1265 "./comelang2.h"
        hash_130=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b92=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b92)%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1265))->size;
        # 1266 "./comelang2.h"
        it_131=hash_130;
        # 1290 "./comelang2.h"
        while(_while_condtional23=(_Bool)1,        _while_condtional23) {
            # 1288 "./comelang2.h"
            # 1269 "./comelang2.h"
            if(_if_conditional206=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_131],            _if_conditional206) {
                # 1276 "./comelang2.h"
                # 1271 "./comelang2.h"
                if(_if_conditional207=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b93=((struct optional$2boolbool*)(right_value125=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_131], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b93)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125),
                (right_value125 && right_value125 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value125, 
                __freed_obj__ = 0, 
                _if_conditional207) {
                    # 1273 "./comelang2.h"
                    __result95__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1273))->items[it_131];
                    return __result95__;
                }
                # 1276 "./comelang2.h"
                it_131++;
                # 1284 "./comelang2.h"
                # 1278 "./comelang2.h"
                if(_if_conditional208=it_131>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1278))->size,                _if_conditional208) {
                    # 1279 "./comelang2.h"
                    it_131=0;
                }
                else {
                    # 1284 "./comelang2.h"
                    # 1281 "./comelang2.h"
                    if(_if_conditional209=it_131==hash_130,                    _if_conditional209) {
                        # 1282 "./comelang2.h"
                        __result96__ = __result_obj__ = default_value;
                        return __result96__;
                    }
                }
            }
            else {
                # 1286 "./comelang2.h"
                __result97__ = __result_obj__ = default_value;
                return __result97__;
            }
        }
        # 1290 "./comelang2.h"
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
    # 215 "20method.c"
    # 209 "20method.c"
    if(_if_conditional212=((struct sMethodCallNode*)come_null_check(self, "20method.c", 209))->method_block,    _if_conditional212) {
        # 210 "20method.c"
        __result101__ = (_Bool)1;
        return __result101__;
    }
    else {
        # 213 "20method.c"
        __result102__ = (_Bool)0;
        return __result102__;
    }
}

char* sMethodCallNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value128;
char* __exception_result_var_b98;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value128, 0, sizeof(void*));
    # 219 "20method.c"
    __result103__ = __result_obj__ = (come_push_stackframe("20method.c", 219),__exception_result_var_b98=((char*)(right_value128=__builtin_string("sMethodCallNode"))), come_pop_stackframe(), __exception_result_var_b98);
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
_Bool __exception_result_var_b99;
_Bool _if_conditional213;
_Bool __result104__;
void* right_value129;
struct CVALUE* __exception_result_var_b100;
struct CVALUE* obj_value_138;
void* right_value130;
struct sType* obj_type_139;
struct sClass* klass_140;
_Bool calling_dynamic_method_141;
struct sType* lambda_type_142;
struct list$1tuple2$2charphsTypephph* o2_saved_143;
struct tuple2$2charphsTypeph* __exception_result_var_b103;
struct tuple2$2charphsTypeph* it_146;
_Bool __exception_result_var_b104;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* __exception_result_var_b107;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_149;
struct sType* field_type_150;
_Bool __exception_result_var_b108;
_Bool __exception_result_var_b109;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value131;
struct sType* result_type_151;
void* right_value132;
void* right_value133;
struct list$1CVALUEph* __exception_result_var_b110;
struct list$1CVALUEph* come_params_154;
int i_155;
struct list$1tuple2$2charphsNodephph* o2_saved_156;
struct tuple2$2charphsNodeph* __exception_result_var_b113;
struct tuple2$2charphsNodeph* it_159;
_Bool __exception_result_var_b114;
_Bool _for_condtionalA8;
struct tuple2$2charphsNodeph* __exception_result_var_b117;
struct tuple2$2charphsNodeph* multiple_assgin_var2;
char* label_162;
struct sNode* node_163;
_Bool _if_conditional224;
struct list$1CVALUEph* __exception_result_var_b118;
_Bool __exception_result_var_b119;
_Bool _if_conditional225;
_Bool __result120__;
void* right_value134;
struct CVALUE* __exception_result_var_b120;
struct CVALUE* come_value_164;
void* right_value135;
void* right_value136;
void* right_value137;
struct sType* __exception_result_var_b122;
struct sType* __exception_result_var_b123;
_Bool _if_conditional228;
struct sType* __exception_result_var_b124;
struct list$1CVALUEph* __exception_result_var_b125;
void* right_value138;
void* right_value139;
struct buffer* __exception_result_var_b126;
struct buffer* buf_168;
void* right_value140;
char* __exception_result_var_b127;
struct buffer* __exception_result_var_b128;
struct buffer* __exception_result_var_b129;
int j_169;
struct list$1CVALUEph* o2_saved_170;
struct CVALUE* __exception_result_var_b132;
struct CVALUE* it_173;
_Bool __exception_result_var_b133;
_Bool _for_condtionalA9;
struct CVALUE* __exception_result_var_b136;
_Bool _if_conditional233;
void* right_value141;
char* __exception_result_var_b137;
char* __dec_obj53;
struct buffer* __exception_result_var_b138;
int __exception_result_var_b139;
_Bool _if_conditional234;
struct buffer* __exception_result_var_b140;
struct buffer* __exception_result_var_b141;
void* right_value142;
struct CVALUE* come_value2_176;
void* right_value143;
char* __exception_result_var_b142;
char* __dec_obj54;
void* right_value144;
struct sType* __exception_result_var_b143;
struct sType* result_type2_177;
_Bool _if_conditional235;
void* right_value145;
char* __exception_result_var_b144;
void* right_value146;
char* __exception_result_var_b145;
char* __dec_obj55;
void* right_value147;
struct sType* __dec_obj56;
struct list$1CVALUEph* __exception_result_var_b146;
void* right_value148;
char* __exception_result_var_b147;
void* right_value149;
char* __exception_result_var_b148;
void* right_value150;
char* __exception_result_var_b149;
char* generics_fun_name_178;
struct sFun* fun_179;
int i_180;
_Bool _for_condtionalA10;
void* right_value151;
char* __exception_result_var_b150;
char* new_fun_name_181;
struct sFun* __exception_result_var_b154;
_Bool _if_conditional240;
void* right_value155;
char* __exception_result_var_b155;
char* __dec_obj57;
_Bool _if_conditional241;
struct sFun* __exception_result_var_b158;
_Bool _if_conditional246;
void* right_value157;
char* __exception_result_var_b159;
void* right_value158;
char* __exception_result_var_b160;
char* __dec_obj58;
struct sFun* __exception_result_var_b161;
_Bool _if_conditional247;
_Bool __result140__;
void* right_value159;
struct sType* result_type_187;
void* right_value160;
struct sType* __exception_result_var_b162;
struct sType* result_type2_188;
void* right_value161;
void* right_value162;
struct list$1sTypeph* __exception_result_var_b163;
struct list$1sTypeph* param_types_189;
struct list$1sTypeph* o2_saved_190;
struct sType* __exception_result_var_b166;
struct sType* it_193;
_Bool __exception_result_var_b167;
_Bool _for_condtionalA11;
struct sType* __exception_result_var_b170;
_Bool _if_conditional252;
struct list$1sTypeph* __exception_result_var_b171;
void* right_value166;
struct sType* __exception_result_var_b172;
struct sType* it2_199;
void* right_value167;
struct list$1sTypeph* __exception_result_var_b173;
void* right_value168;
void* right_value169;
struct list$1CVALUEph* __exception_result_var_b174;
struct list$1CVALUEph* come_params_200;
void* right_value170;
void* right_value176;
struct map$2charphCVALUEph* __exception_result_var_b176;
struct map$2charphCVALUEph* label_params_204;
int i_205;
struct list$1tuple2$2charphsNodephph* o2_saved_206;
struct tuple2$2charphsNodeph* __exception_result_var_b177;
struct tuple2$2charphsNodeph* it_207;
_Bool __exception_result_var_b178;
_Bool _for_condtionalA15;
struct tuple2$2charphsNodeph* __exception_result_var_b179;
struct tuple2$2charphsNodeph* multiple_assgin_var3;
char* label_208;
struct sNode* node_209;
_Bool _if_conditional259;
void* right_value177;
void* right_value178;
void* right_value179;
struct sType* __exception_result_var_b180;
struct sType* __exception_result_var_b181;
_Bool _if_conditional260;
struct sType* __exception_result_var_b182;
struct sType* __exception_result_var_b183;
_Bool _if_conditional261;
char* __exception_result_var_b185;
struct list$1CVALUEph* __exception_result_var_b186;
_Bool __exception_result_var_b187;
_Bool _if_conditional264;
_Bool __result153__;
void* right_value180;
struct CVALUE* __exception_result_var_b188;
struct CVALUE* come_value_213;
_Bool _if_conditional265;
int n_214;
struct list$1charph* o2_saved_215;
char* __exception_result_var_b191;
char* it_218;
_Bool __exception_result_var_b192;
_Bool _for_condtionalA16;
char* __exception_result_var_b195;
_Bool __exception_result_var_b196;
_Bool _if_conditional270;
struct sType* __exception_result_var_b197;
_Bool _if_conditional271;
void* right_value181;
void* right_value182;
void* right_value183;
struct sType* __exception_result_var_b198;
struct sType* __exception_result_var_b199;
struct sType* __exception_result_var_b200;
_Bool _if_conditional272;
struct sType* __exception_result_var_b201;
struct sType* __exception_result_var_b202;
_Bool _if_conditional273;
void* right_value184;
void* right_value185;
void* right_value186;
struct sType* __exception_result_var_b203;
struct sType* __exception_result_var_b204;
struct sType* __exception_result_var_b205;
_Bool _if_conditional274;
struct sType* __exception_result_var_b206;
_Bool _if_conditional275;
struct list$1CVALUEph* __exception_result_var_b207;
void* right_value193;
char* __exception_result_var_b232;
struct map$2charphCVALUEph* __exception_result_var_b233;
int __exception_result_var_b234;
int __exception_result_var_b235;
_Bool _if_conditional298;
int __exception_result_var_b236;
_Bool _for_condtionalA19;
char* __exception_result_var_b237;
void* right_value194;
char* default_param_242;
char* __exception_result_var_b238;
char* param_name_243;
struct CVALUE* __exception_result_var_b242;
struct CVALUE* come_value_247;
_Bool __exception_result_var_b243;
_Bool _if_conditional303;
struct buffer* source_248;
char* p_249;
char* head_250;
int sline_251;
void* right_value198;
struct buffer* __exception_result_var_b244;
struct buffer* __dec_obj63;
void* right_value199;
struct sNode* __exception_result_var_b245;
struct sNode* node_252;
_Bool __exception_result_var_b246;
_Bool _if_conditional304;
_Bool __result180__;
struct buffer* __dec_obj64;
void* right_value200;
struct CVALUE* __exception_result_var_b247;
struct CVALUE* come_value_253;
struct sType* __exception_result_var_b248;
_Bool _if_conditional305;
void* right_value201;
void* right_value202;
void* right_value203;
struct sType* __exception_result_var_b249;
struct sType* __exception_result_var_b250;
struct sType* __exception_result_var_b251;
_Bool _if_conditional306;
struct sType* __exception_result_var_b252;
struct list$1CVALUEph* __exception_result_var_b253;
_Bool _if_conditional307;
struct list$1CVALUEph* __exception_result_var_b254;
_Bool __result181__;
int __exception_result_var_b255;
_Bool _if_conditional308;
int __exception_result_var_b256;
_Bool _for_condtionalA20;
char* __exception_result_var_b257;
char* param_name_254;
struct CVALUE* __exception_result_var_b258;
struct CVALUE* come_value_255;
_Bool _if_conditional309;
void* right_value207;
struct list$1CVALUEph* __exception_result_var_b260;
_Bool _if_conditional317;
void* right_value208;
void* right_value209;
struct sCurrentNode* __exception_result_var_b261;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value212;
struct sNode* current_stack_frame_node_260;
_Bool __exception_result_var_b262;
_Bool _if_conditional322;
_Bool __result190__;
void* right_value213;
struct CVALUE* __exception_result_var_b263;
struct CVALUE* come_value_261;
struct list$1CVALUEph* __exception_result_var_b264;
void* right_value214;
void* right_value215;
struct buffer* __exception_result_var_b265;
struct buffer* method_block2_262;
struct sType* __exception_result_var_b266;
void* right_value216;
struct sType* method_block_type_263;
void* right_value217;
char* __exception_result_var_b267;
char* class_name_264;
struct sType* __exception_result_var_b268;
struct sClass* __exception_result_var_b272;
struct sClass* current_stack_frame_struct_268;
struct sClass* __exception_result_var_b273;
_Bool __exception_result_var_b274;
_Bool _if_conditional327;
_Bool __result196__;
void* right_value221;
struct sType* result_type_269;
struct list$1sTypeph* param_types_270;
struct list$1charph* param_names_271;
void* right_value222;
void* right_value223;
struct buffer* __exception_result_var_b275;
struct buffer* all_alhabet_sname_272;
char* p_273;
_Bool _while_condtional35;
_Bool __exception_result_var_b276;
_Bool _if_conditional328;
struct buffer* __exception_result_var_b277;
void* right_value224;
char* __exception_result_var_b278;
void* right_value225;
char* __exception_result_var_b279;
void* right_value226;
char* __exception_result_var_b280;
struct buffer* __exception_result_var_b281;
int i_274;
struct list$1sTypeph* o2_saved_275;
struct sType* __exception_result_var_b282;
struct sType* it_276;
_Bool __exception_result_var_b283;
_Bool _for_condtionalA21;
struct sType* __exception_result_var_b284;
struct sType* param_type_277;
_Bool _if_conditional329;
void* right_value227;
char* __exception_result_var_b285;
char* param_name_278;
void* right_value228;
char* __exception_result_var_b286;
void* right_value229;
char* __exception_result_var_b287;
struct buffer* __exception_result_var_b288;
_Bool _if_conditional330;
void* right_value230;
char* __exception_result_var_b289;
char* param_name_279;
void* right_value231;
char* __exception_result_var_b290;
void* right_value232;
char* __exception_result_var_b291;
struct buffer* __exception_result_var_b292;
void* right_value233;
char* __exception_result_var_b293;
char* param_name_280;
void* right_value234;
char* __exception_result_var_b294;
void* right_value235;
char* __exception_result_var_b295;
struct buffer* __exception_result_var_b296;
int __exception_result_var_b297;
_Bool _if_conditional331;
struct buffer* __exception_result_var_b298;
struct buffer* __exception_result_var_b299;
void* right_value236;
char* __exception_result_var_b300;
struct buffer* __exception_result_var_b301;
struct buffer* source3_281;
char* p_282;
char* head_283;
int sline_284;
struct buffer* __dec_obj69;
void* right_value237;
struct sNode* __exception_result_var_b302;
struct sNode* node_285;
_Bool __exception_result_var_b303;
_Bool _if_conditional332;
_Bool __result197__;
void* right_value238;
char* __exception_result_var_b304;
void* right_value239;
char* __exception_result_var_b305;
char* method_block_name_286;
void* right_value240;
struct CVALUE* come_value2_287;
struct sFun* __exception_result_var_b306;
struct sFun* fun2_288;
_Bool _if_conditional333;
_Bool __result198__;
struct sType* method_block_type2_289;
void* right_value241;
char* __exception_result_var_b307;
char* __dec_obj70;
void* right_value242;
struct sType* __dec_obj71;
struct list$1CVALUEph* __exception_result_var_b308;
struct buffer* __dec_obj72;
void* right_value243;
void* right_value244;
struct buffer* __exception_result_var_b309;
struct buffer* buf_290;
struct buffer* __exception_result_var_b310;
struct buffer* __exception_result_var_b311;
int j_291;
struct list$1CVALUEph* o2_saved_292;
struct CVALUE* __exception_result_var_b312;
struct CVALUE* it_293;
_Bool __exception_result_var_b313;
_Bool _for_condtionalA22;
struct CVALUE* __exception_result_var_b314;
struct buffer* __exception_result_var_b315;
int __exception_result_var_b316;
_Bool _if_conditional334;
struct buffer* __exception_result_var_b317;
struct buffer* __exception_result_var_b318;
void* right_value245;
struct CVALUE* come_value2_294;
void* right_value246;
char* __exception_result_var_b319;
char* __dec_obj73;
void* right_value247;
struct sType* __dec_obj74;
_Bool _if_conditional335;
void* right_value248;
char* __exception_result_var_b320;
char* __dec_obj75;
void* right_value249;
char* __exception_result_var_b321;
char* __dec_obj76;
struct list$1CVALUEph* __exception_result_var_b322;
_Bool _if_conditional336;
void* right_value250;
char* __exception_result_var_b323;
char* var_name_295;
void* right_value251;
struct sType* result_type_296;
void* right_value252;
struct sType* __exception_result_var_b324;
struct sType* result_type2_297;
struct sType* result_type3_298;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool __exception_result_var_b325;
_Bool _if_conditional339;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
void* right_value257;
void* right_value258;
void* right_value259;
void* right_value260;
char* __exception_result_var_b326;
void* right_value261;
void* right_value262;
void* right_value263;
_Bool __exception_result_var_b327;
_Bool _if_conditional340;
void* right_value264;
void* right_value265;
void* right_value266;
void* right_value267;
char* __exception_result_var_b328;
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
    # 224 "20method.c"
    fun_name_133=((struct sMethodCallNode*)come_null_check(self, "20method.c", 224))->fun_name;
    # 225 "20method.c"
    params_134=((struct sMethodCallNode*)come_null_check(self, "20method.c", 225))->params;
    # 226 "20method.c"
    obj_135=((struct sMethodCallNode*)come_null_check(self, "20method.c", 226))->obj;
    # 227 "20method.c"
    method_block_136=((struct sMethodCallNode*)come_null_check(self, "20method.c", 227))->method_block;
    # 228 "20method.c"
    method_block_sline_137=((struct sMethodCallNode*)come_null_check(self, "20method.c", 228))->method_block_sline;
    # 234 "20method.c"
    # 230 "20method.c"
    if(_if_conditional213=!(come_push_stackframe("20method.c", 230),__exception_result_var_b99=node_compile(obj_135,info), come_pop_stackframe(), __exception_result_var_b99),    _if_conditional213) {
        # 231 "20method.c"
        __result104__ = (_Bool)0;
        return __result104__;
    }
    # 234 "20method.c"
    obj_value_138=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 234),__exception_result_var_b100=((struct CVALUE*)(right_value129=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b100));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value129;
    __freed_obj__ = 0;
    # 235 "20method.c"
    (come_push_stackframe("20method.c", 235),dec_stack_ptr(1,info),come_pop_stackframe());
    # 240 "20method.c"
    obj_type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(((struct CVALUE*)come_null_check(obj_value_138, "20method.c", 240))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value130;
    __freed_obj__ = 0;
    # 242 "20method.c"
    klass_140=((struct sType*)come_null_check(obj_type_139, "20method.c", 242))->mClass;
    # 244 "20method.c"
    calling_dynamic_method_141=(_Bool)0;
    # 245 "20method.c"
    lambda_type_142=((void*)0);
    # 256 "20method.c"
    for(
    o2_saved_143=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_140, "20method.c", 246))->mFields)),it_146=(come_push_stackframe("20method.c", 246),__exception_result_var_b103=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_143), "20method.c", 246))), come_pop_stackframe(), __exception_result_var_b103) ,    0;    _for_condtionalA7=    !(come_push_stackframe("20method.c", 246),__exception_result_var_b104=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_143), "20method.c", 246))), come_pop_stackframe(), __exception_result_var_b104) ,    _for_condtionalA7;    it_146=(come_push_stackframe("20method.c", 246),__exception_result_var_b107=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_143), "20method.c", 246))), come_pop_stackframe(), __exception_result_var_b107) ,    0    ){
        # 247 "20method.c"
        multiple_assgin_var1=it_146;
        field_name_149=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type_150=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        # 254 "20method.c"
        # 249 "20method.c"
        if(_if_conditional218=(come_push_stackframe("20method.c", 249),__exception_result_var_b108=string_operator_equals(field_name_149,fun_name_133), come_pop_stackframe(), __exception_result_var_b108)&&(come_push_stackframe("20method.c", 249),__exception_result_var_b109=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(field_type_150, "20method.c", 249))->mClass, "20method.c", 249))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b109),        _if_conditional218) {
            # 250 "20method.c"
            calling_dynamic_method_141=(_Bool)1;
            # 251 "20method.c"
            lambda_type_142=field_type_150;
            # 252 "20method.c"
            if(field_name_149 && !__freed_obj__) { field_name_149 = come_decrement_ref_count(field_name_149, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type_150 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_150, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
        }
        if(field_name_149 && !__freed_obj__) { field_name_149 = come_decrement_ref_count(field_name_149, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type_150 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_143 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 732 "20method.c"
    # 256 "20method.c"
    if(_if_conditional219=calling_dynamic_method_141,    _if_conditional219) {
        # 257 "20method.c"
        result_type_151=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(lambda_type_142, "20method.c", 257))->mResultType, "20method.c", 257))->v1))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131;
        __freed_obj__ = 0;
        # 258 "20method.c"
        ((struct sType*)come_null_check(result_type_151, "20method.c", 258))->mStatic=(_Bool)0;
        # 260 "20method.c"
        come_params_154=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("20method.c", 260),__exception_result_var_b110=((struct list$1CVALUEph*)(right_value133=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value132=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 260))))))), come_pop_stackframe(), __exception_result_var_b110));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value132;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value133;
        __freed_obj__ = 0;
        # 262 "20method.c"
        i_155=0;
        # 290 "20method.c"
        for(
        o2_saved_156=(params_134),it_159=(come_push_stackframe("20method.c", 263),__exception_result_var_b113=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_156), "20method.c", 263))), come_pop_stackframe(), __exception_result_var_b113) ,        0;        _for_condtionalA8=        !(come_push_stackframe("20method.c", 263),__exception_result_var_b114=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_156), "20method.c", 263))), come_pop_stackframe(), __exception_result_var_b114) ,        _for_condtionalA8;        it_159=(come_push_stackframe("20method.c", 263),__exception_result_var_b117=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_156), "20method.c", 263))), come_pop_stackframe(), __exception_result_var_b117) ,        0        ){
            # 264 "20method.c"
            multiple_assgin_var2=it_159;
            label_162=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            node_163=(struct sNode*)come_increment_ref_count(multiple_assgin_var2->v2);
            # 288 "20method.c"
            # 266 "20method.c"
            if(_if_conditional224=i_155==0,            _if_conditional224) {
                # 267 "20method.c"
                (come_push_stackframe("20method.c", 267),__exception_result_var_b118=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_154, "20method.c", 267)),(struct CVALUE*)come_increment_ref_count(obj_value_138)), come_pop_stackframe(), __exception_result_var_b118);
                # 268 "20method.c"
                i_155++;
            }
            else {
                # 275 "20method.c"
                # 271 "20method.c"
                if(_if_conditional225=!(come_push_stackframe("20method.c", 271),__exception_result_var_b119=node_compile(node_163,info), come_pop_stackframe(), __exception_result_var_b119),                _if_conditional225) {
                    # 272 "20method.c"
                    __result120__ = (_Bool)0;
                    if(label_162 && !__freed_obj__) { label_162 = come_decrement_ref_count(label_162, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_163 && !__freed_obj__) { node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0, 0); } 
                    if(result_type_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_151, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(come_params_154 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_154, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result120__;
                }
                # 275 "20method.c"
                come_value_164=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 275),__exception_result_var_b120=((struct CVALUE*)(right_value134=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b120));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value134;
                __freed_obj__ = 0;
                # 277 "20method.c"
                (come_push_stackframe("20method.c", 277),check_assign_type(((char*)(right_value137=xsprintf("\%s param num \%s is assinged to",((char*)(right_value135=charp_to_string(fun_name_133))),((char*)(right_value136=int_to_string(i_155)))))),(come_push_stackframe("20method.c", 277),__exception_result_var_b122=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(lambda_type_142, "20method.c", 277))->mParamTypes,i_155-1), come_pop_stackframe(), __exception_result_var_b122),((struct CVALUE*)come_null_check(come_value_164, "20method.c", 277))->type,come_value_164,(_Bool)0,info),come_pop_stackframe());
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
                # 283 "20method.c"
                # 278 "20method.c"
                if(_if_conditional228=((struct sType*)come_null_check((come_push_stackframe("20method.c", 278),__exception_result_var_b123=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(lambda_type_142, "20method.c", 278))->mParamTypes,i_155-1), come_pop_stackframe(), __exception_result_var_b123), "20method.c", 278))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_164, "20method.c", 278))->type, "20method.c", 278))->mHeap,                _if_conditional228) {
                    # 280 "20method.c"
                    (come_push_stackframe("20method.c", 280),std_move((come_push_stackframe("20method.c", 280),__exception_result_var_b124=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(lambda_type_142, "20method.c", 280))->mParamTypes,i_155-1), come_pop_stackframe(), __exception_result_var_b124),((struct CVALUE*)come_null_check(come_value_164, "20method.c", 280))->type,come_value_164,info),come_pop_stackframe());
                }
                # 283 "20method.c"
                (come_push_stackframe("20method.c", 283),__exception_result_var_b125=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_154, "20method.c", 283)),(struct CVALUE*)come_increment_ref_count(come_value_164)), come_pop_stackframe(), __exception_result_var_b125);
                # 285 "20method.c"
                i_155++;
                # 286 "20method.c"
                (come_push_stackframe("20method.c", 286),dec_stack_ptr(1,info),come_pop_stackframe());
                if(come_value_164 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(label_162 && !__freed_obj__) { label_162 = come_decrement_ref_count(label_162, (void*)0, (void*)0, 0, 0, 0); }
            if(node_163 && !__freed_obj__) { node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0, 0); } 
        }
        # 290 "20method.c"
        buf_168=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 290),__exception_result_var_b126=((struct buffer*)(right_value139=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value138=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 290))))))), come_pop_stackframe(), __exception_result_var_b126));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value138;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value139;
        __freed_obj__ = 0;
        # 292 "20method.c"
        (come_push_stackframe("20method.c", 292),__exception_result_var_b128=buffer_append_str(((struct buffer*)come_null_check(buf_168, "20method.c", 292)),(come_push_stackframe("20method.c", 292),__exception_result_var_b127=((char*)(right_value140=xsprintf("%s->%s",((struct CVALUE*)come_null_check(obj_value_138, "20method.c", 292))->c_value,fun_name_133))), come_pop_stackframe(), __exception_result_var_b127)), come_pop_stackframe(), __exception_result_var_b128);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value140;
        __freed_obj__ = 0;
        # 293 "20method.c"
        (come_push_stackframe("20method.c", 293),__exception_result_var_b129=buffer_append_str(((struct buffer*)come_null_check(buf_168, "20method.c", 293)),"("), come_pop_stackframe(), __exception_result_var_b129);
        # 295 "20method.c"
        j_169=0;
        # 308 "20method.c"
        for(
        o2_saved_170=(struct list$1CVALUEph*)come_increment_ref_count((come_params_154)),it_173=(come_push_stackframe("20method.c", 296),__exception_result_var_b132=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_170), "20method.c", 296))), come_pop_stackframe(), __exception_result_var_b132) ,        0;        _for_condtionalA9=        !(come_push_stackframe("20method.c", 296),__exception_result_var_b133=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_170), "20method.c", 296))), come_pop_stackframe(), __exception_result_var_b133) ,        _for_condtionalA9;        it_173=(come_push_stackframe("20method.c", 296),__exception_result_var_b136=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_170), "20method.c", 296))), come_pop_stackframe(), __exception_result_var_b136) ,        0        ){
            # 300 "20method.c"
            # 297 "20method.c"
            if(_if_conditional233=j_169==0,            _if_conditional233) {
                # 298 "20method.c"
                __dec_obj53=((struct CVALUE*)come_null_check(it_173, "20method.c", 298))->c_value;
                ((struct CVALUE*)come_null_check(it_173, "20method.c", 298))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 298),__exception_result_var_b137=((char*)(right_value141=xsprintf("%s->_protocol_obj",((struct CVALUE*)come_null_check(it_173, "20method.c", 298))->c_value))), come_pop_stackframe(), __exception_result_var_b137));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value141;
                __freed_obj__ = 0;
            }
            # 300 "20method.c"
            (come_push_stackframe("20method.c", 300),__exception_result_var_b138=buffer_append_str(((struct buffer*)come_null_check(buf_168, "20method.c", 300)),((struct CVALUE*)come_null_check(it_173, "20method.c", 300))->c_value), come_pop_stackframe(), __exception_result_var_b138);
            # 306 "20method.c"
            # 302 "20method.c"
            if(_if_conditional234=j_169!=(come_push_stackframe("20method.c", 302),__exception_result_var_b139=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_154, "20method.c", 302))), come_pop_stackframe(), __exception_result_var_b139)-1,            _if_conditional234) {
                # 303 "20method.c"
                (come_push_stackframe("20method.c", 303),__exception_result_var_b140=buffer_append_str(((struct buffer*)come_null_check(buf_168, "20method.c", 303)),","), come_pop_stackframe(), __exception_result_var_b140);
            }
            # 306 "20method.c"
            j_169++;
        }
        if(o2_saved_170 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_170, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 308 "20method.c"
        (come_push_stackframe("20method.c", 308),__exception_result_var_b141=buffer_append_str(((struct buffer*)come_null_check(buf_168, "20method.c", 308)),")"), come_pop_stackframe(), __exception_result_var_b141);
        # 310 "20method.c"
        come_value2_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 310))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value142;
        __freed_obj__ = 0;
        # 312 "20method.c"
        __dec_obj54=((struct CVALUE*)come_null_check(come_value2_176, "20method.c", 312))->c_value;
        ((struct CVALUE*)come_null_check(come_value2_176, "20method.c", 312))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 312),__exception_result_var_b142=((char*)(right_value143=buffer_to_string(((struct buffer*)come_null_check(buf_168, "20method.c", 312))))), come_pop_stackframe(), __exception_result_var_b142));
        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value143;
        __freed_obj__ = 0;
        # 314 "20method.c"
        result_type2_177=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 314),__exception_result_var_b143=((struct sType*)(right_value144=solve_generics(result_type_151,((struct sInfo*)come_null_check(info, "20method.c", 314))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b143));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value144);
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value144;
        __freed_obj__ = 0;
        # 320 "20method.c"
        # 316 "20method.c"
        if(_if_conditional235=((struct sType*)come_null_check(result_type2_177, "20method.c", 316))->mHeap,        _if_conditional235) {
            # 317 "20method.c"
            __dec_obj55=((struct CVALUE*)come_null_check(come_value2_176, "20method.c", 317))->c_value;
            ((struct CVALUE*)come_null_check(come_value2_176, "20method.c", 317))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 317),__exception_result_var_b145=((char*)(right_value146=append_object_to_right_values((come_push_stackframe("20method.c", 317),__exception_result_var_b144=((char*)(right_value145=buffer_to_string(((struct buffer*)come_null_check(buf_168, "20method.c", 317))))), come_pop_stackframe(), __exception_result_var_b144),(struct sType*)come_increment_ref_count(result_type2_177),info))), come_pop_stackframe(), __exception_result_var_b145));
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value145;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
            if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value146;
            __freed_obj__ = 0;
        }
        # 320 "20method.c"
        __dec_obj56=((struct CVALUE*)come_null_check(come_value2_176, "20method.c", 320))->type;
        ((struct CVALUE*)come_null_check(come_value2_176, "20method.c", 320))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(result_type2_177))));
        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value147);
        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value147;
        __freed_obj__ = 0;
        # 321 "20method.c"
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_176, "20method.c", 321))->type, "20method.c", 321))->mStatic=(_Bool)0;
        # 322 "20method.c"
        ((struct CVALUE*)come_null_check(come_value2_176, "20method.c", 322))->var=((void*)0);
        # 324 "20method.c"
        (come_push_stackframe("20method.c", 324),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_176, "20method.c", 324))->c_value),come_pop_stackframe());
        # 326 "20method.c"
        (come_push_stackframe("20method.c", 326),__exception_result_var_b146=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 326))->stack, "20method.c", 326)),(struct CVALUE*)come_increment_ref_count(come_value2_176)), come_pop_stackframe(), __exception_result_var_b146);
        if(result_type_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_154 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_168 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_168, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_176, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        # 329 "20method.c"
        generics_fun_name_178=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 329),__exception_result_var_b149=((char*)(right_value150=string_to_string(((char*)come_null_check((come_push_stackframe("20method.c", 329),__exception_result_var_b148=((char*)(right_value149=make_generics_function(obj_type_139,(char*)come_increment_ref_count((come_push_stackframe("20method.c", 329),__exception_result_var_b147=((char*)(right_value148=__builtin_string(fun_name_133))), come_pop_stackframe(), __exception_result_var_b147)),info))), come_pop_stackframe(), __exception_result_var_b148), "20method.c", 329))))), come_pop_stackframe(), __exception_result_var_b149));
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
        # 331 "20method.c"
        fun_179=((void*)0);
        # 344 "20method.c"
        for(
        i_180=128 ,        0;        _for_condtionalA10=        i_180>=1 ,        _for_condtionalA10;        i_180-- ,        0        ){
            # 334 "20method.c"
            new_fun_name_181=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 334),__exception_result_var_b150=((char*)(right_value151=xsprintf("%s_v%d",generics_fun_name_178,i_180))), come_pop_stackframe(), __exception_result_var_b150));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
            if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value151;
            __freed_obj__ = 0;
            # 336 "20method.c"
            fun_179=(come_push_stackframe("20method.c", 336),__exception_result_var_b154=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "20method.c", 336))->funcs,new_fun_name_181), come_pop_stackframe(), __exception_result_var_b154);
            # 342 "20method.c"
            # 338 "20method.c"
            if(_if_conditional240=fun_179!=((void*)0),            _if_conditional240) {
                # 339 "20method.c"
                __dec_obj57=generics_fun_name_178;
                generics_fun_name_178=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 339),__exception_result_var_b155=((char*)(right_value155=__builtin_string(new_fun_name_181))), come_pop_stackframe(), __exception_result_var_b155));
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value155;
                __freed_obj__ = 0;
                # 340 "20method.c"
                if(new_fun_name_181 && !__freed_obj__) { new_fun_name_181 = come_decrement_ref_count(new_fun_name_181, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_181 && !__freed_obj__) { new_fun_name_181 = come_decrement_ref_count(new_fun_name_181, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 359 "20method.c"
        # 344 "20method.c"
        if(_if_conditional241=fun_179==((void*)0),        _if_conditional241) {
            # 345 "20method.c"
            fun_179=(come_push_stackframe("20method.c", 345),__exception_result_var_b158=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 345))->funcs, "20method.c", 345)),generics_fun_name_178,((void*)0)), come_pop_stackframe(), __exception_result_var_b158);
            # 357 "20method.c"
            # 347 "20method.c"
            if(_if_conditional246=fun_179==((void*)0),            _if_conditional246) {
                # 348 "20method.c"
                __dec_obj58=generics_fun_name_178;
                generics_fun_name_178=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 348),__exception_result_var_b160=((char*)(right_value158=create_method_name(obj_type_139,(_Bool)0,(come_push_stackframe("20method.c", 348),__exception_result_var_b159=((char*)(right_value157=__builtin_string(fun_name_133))), come_pop_stackframe(), __exception_result_var_b159),info))), come_pop_stackframe(), __exception_result_var_b160));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value157;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
                if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value158;
                __freed_obj__ = 0;
                # 350 "20method.c"
                fun_179=(come_push_stackframe("20method.c", 350),__exception_result_var_b161=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 350))->funcs, "20method.c", 350)),generics_fun_name_178,((void*)0)), come_pop_stackframe(), __exception_result_var_b161);
                # 356 "20method.c"
                # 352 "20method.c"
                if(_if_conditional247=fun_179==((void*)0),                _if_conditional247) {
                    # 353 "20method.c"
                    (come_push_stackframe("20method.c", 353),err_msg(info,"function not found(%s) at method(%s)(Z)\n",generics_fun_name_178,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 353))->come_fun, "20method.c", 353))->mName),come_pop_stackframe());
                    # 354 "20method.c"
                    __result140__ = (_Bool)1;
                    if(generics_fun_name_178 && !__freed_obj__) { generics_fun_name_178 = come_decrement_ref_count(generics_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                    if(obj_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result140__;
                }
            }
        }
        # 359 "20method.c"
        result_type_187=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(((struct sFun*)come_null_check(fun_179, "20method.c", 359))->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value159;
        __freed_obj__ = 0;
        # 360 "20method.c"
        ((struct sType*)come_null_check(result_type_187, "20method.c", 360))->mStatic=(_Bool)0;
        # 362 "20method.c"
        result_type2_188=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 362),__exception_result_var_b162=((struct sType*)(right_value160=solve_generics(result_type_187,((struct sInfo*)come_null_check(info, "20method.c", 362))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b162));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value160);
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value160;
        __freed_obj__ = 0;
        # 364 "20method.c"
        param_types_189=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("20method.c", 364),__exception_result_var_b163=((struct list$1sTypeph*)(right_value162=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value161=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 364))))))), come_pop_stackframe(), __exception_result_var_b163));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value161);
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value161;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value162);
        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value162;
        __freed_obj__ = 0;
        # 376 "20method.c"
        for(
        o2_saved_190=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun_179, "20method.c", 365))->mParamTypes)),it_193=(come_push_stackframe("20method.c", 365),__exception_result_var_b166=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_190), "20method.c", 365))), come_pop_stackframe(), __exception_result_var_b166) ,        0;        _for_condtionalA11=        !(come_push_stackframe("20method.c", 365),__exception_result_var_b167=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_190), "20method.c", 365))), come_pop_stackframe(), __exception_result_var_b167) ,        _for_condtionalA11;        it_193=(come_push_stackframe("20method.c", 365),__exception_result_var_b170=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_190), "20method.c", 365))), come_pop_stackframe(), __exception_result_var_b170) ,        0        ){
            # 374 "20method.c"
            # 366 "20method.c"
            if(_if_conditional252=it_193==((void*)0),            _if_conditional252) {
                # 367 "20method.c"
                (come_push_stackframe("20method.c", 367),__exception_result_var_b171=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(param_types_189, "20method.c", 367)),it_193), come_pop_stackframe(), __exception_result_var_b171);
            }
            else {
                # 370 "20method.c"
                it2_199=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 370),__exception_result_var_b172=((struct sType*)(right_value166=solve_generics(it_193,((struct sInfo*)come_null_check(info, "20method.c", 370))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b172));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value166;
                __freed_obj__ = 0;
                # 372 "20method.c"
                (come_push_stackframe("20method.c", 372),__exception_result_var_b173=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(param_types_189, "20method.c", 372)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_clone(it2_199))))), come_pop_stackframe(), __exception_result_var_b173);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value167);
                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value167;
                __freed_obj__ = 0;
                if(it2_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,it2_199, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
        if(o2_saved_190 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_190, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 376 "20method.c"
        come_params_200=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("20method.c", 376),__exception_result_var_b174=((struct list$1CVALUEph*)(right_value169=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value168=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 376))))))), come_pop_stackframe(), __exception_result_var_b174));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value168;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value169);
        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value169;
        __freed_obj__ = 0;
        # 378 "20method.c"
        label_params_204=(struct map$2charphCVALUEph*)come_increment_ref_count((come_push_stackframe("20method.c", 378),__exception_result_var_b176=((struct map$2charphCVALUEph*)(right_value176=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value170=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "20method.c", 378))))))), come_pop_stackframe(), __exception_result_var_b176));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value170);
        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value170;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value176);
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value176;
        __freed_obj__ = 0;
        # 380 "20method.c"
        i_205=0;
        # 442 "20method.c"
        for(
        o2_saved_206=(params_134),it_207=(come_push_stackframe("20method.c", 381),__exception_result_var_b177=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_206), "20method.c", 381))), come_pop_stackframe(), __exception_result_var_b177) ,        0;        _for_condtionalA15=        !(come_push_stackframe("20method.c", 381),__exception_result_var_b178=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_206), "20method.c", 381))), come_pop_stackframe(), __exception_result_var_b178) ,        _for_condtionalA15;        it_207=(come_push_stackframe("20method.c", 381),__exception_result_var_b179=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_206), "20method.c", 381))), come_pop_stackframe(), __exception_result_var_b179) ,        0        ){
            # 382 "20method.c"
            multiple_assgin_var3=it_207;
            label_208=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
            node_209=(struct sNode*)come_increment_ref_count(multiple_assgin_var3->v2);
            # 440 "20method.c"
            # 384 "20method.c"
            if(_if_conditional259=i_205==0,            _if_conditional259) {
                # 385 "20method.c"
                (come_push_stackframe("20method.c", 385),check_assign_type(((char*)(right_value179=xsprintf("\%s param num \%s is assinged to",((char*)(right_value177=charp_to_string(fun_name_133))),((char*)(right_value178=int_to_string(i_205)))))),(come_push_stackframe("20method.c", 385),__exception_result_var_b180=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b180),((struct CVALUE*)come_null_check(obj_value_138, "20method.c", 385))->type,obj_value_138,(_Bool)0,info),come_pop_stackframe());
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
                # 393 "20method.c"
                # 386 "20method.c"
                if(_if_conditional260=((struct sType*)come_null_check((come_push_stackframe("20method.c", 386),__exception_result_var_b181=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b181), "20method.c", 386))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_138, "20method.c", 386))->type, "20method.c", 386))->mHeap,                _if_conditional260) {
                    # 387 "20method.c"
                    (come_push_stackframe("20method.c", 387),std_move((come_push_stackframe("20method.c", 387),__exception_result_var_b182=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b182),((struct CVALUE*)come_null_check(obj_value_138, "20method.c", 387))->type,obj_value_138,info),come_pop_stackframe());
                }
                else {
                    # 393 "20method.c"
                    # 389 "20method.c"
                    if(_if_conditional261=((struct sType*)come_null_check((come_push_stackframe("20method.c", 389),__exception_result_var_b183=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b183), "20method.c", 389))->mHeap&&!((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_138, "20method.c", 389))->type, "20method.c", 389))->mHeap&&!gComeGC,                    _if_conditional261) {
                        # 390 "20method.c"
                        (come_push_stackframe("20method.c", 390),err_msg(info,"require heap parametor(%s)",(come_push_stackframe("20method.c", 390),__exception_result_var_b185=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_179, "20method.c", 390))->mParamNames,i_205), come_pop_stackframe(), __exception_result_var_b185)),come_pop_stackframe());
                        # 391 "20method.c"
                        (come_push_stackframe("20method.c", 391),exit(2),come_pop_stackframe());
                    }
                }
                # 393 "20method.c"
                (come_push_stackframe("20method.c", 393),__exception_result_var_b186=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_200, "20method.c", 393)),(struct CVALUE*)come_increment_ref_count(obj_value_138)), come_pop_stackframe(), __exception_result_var_b186);
                # 395 "20method.c"
                i_205++;
            }
            else {
                # 402 "20method.c"
                # 398 "20method.c"
                if(_if_conditional264=!(come_push_stackframe("20method.c", 398),__exception_result_var_b187=node_compile(node_209,info), come_pop_stackframe(), __exception_result_var_b187),                _if_conditional264) {
                    # 399 "20method.c"
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
                # 402 "20method.c"
                come_value_213=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 402),__exception_result_var_b188=((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b188));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value180;
                __freed_obj__ = 0;
                # 430 "20method.c"
                # 404 "20method.c"
                if(_if_conditional265=label_208!=((void*)0),                _if_conditional265) {
                    # 405 "20method.c"
                    n_214=0;
                    # 414 "20method.c"
                    for(
                    o2_saved_215=(struct list$1charph*)come_increment_ref_count((((struct sFun*)come_null_check(fun_179, "20method.c", 406))->mParamNames)),it_218=(come_push_stackframe("20method.c", 406),__exception_result_var_b191=list$1charph_begin(((struct list$1charph*)come_null_check((o2_saved_215), "20method.c", 406))), come_pop_stackframe(), __exception_result_var_b191) ,                    0;                    _for_condtionalA16=                    !(come_push_stackframe("20method.c", 406),__exception_result_var_b192=list$1charph_end(((struct list$1charph*)come_null_check((o2_saved_215), "20method.c", 406))), come_pop_stackframe(), __exception_result_var_b192) ,                    _for_condtionalA16;                    it_218=(come_push_stackframe("20method.c", 406),__exception_result_var_b195=list$1charph_next(((struct list$1charph*)come_null_check((o2_saved_215), "20method.c", 406))), come_pop_stackframe(), __exception_result_var_b195) ,                    0                    ){
                        # 411 "20method.c"
                        # 407 "20method.c"
                        if(_if_conditional270=(come_push_stackframe("20method.c", 407),__exception_result_var_b196=string_operator_equals(label_208,it_218), come_pop_stackframe(), __exception_result_var_b196),                        _if_conditional270) {
                            # 408 "20method.c"
                            break;
                        }
                        # 411 "20method.c"
                        n_214++;
                    }
                    if(o2_saved_215 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_215, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 417 "20method.c"
                    # 414 "20method.c"
                    if(_if_conditional271=(come_push_stackframe("20method.c", 414),__exception_result_var_b197=list$1sTypephp_operator_load_element(param_types_189,n_214), come_pop_stackframe(), __exception_result_var_b197),                    _if_conditional271) {
                        # 415 "20method.c"
                        (come_push_stackframe("20method.c", 415),check_assign_type(((char*)(right_value183=xsprintf("\%s param num \%s is assinged to",((char*)(right_value181=charp_to_string(fun_name_133))),((char*)(right_value182=int_to_string(i_205)))))),(come_push_stackframe("20method.c", 415),__exception_result_var_b198=list$1sTypephp_operator_load_element(param_types_189,n_214), come_pop_stackframe(), __exception_result_var_b198),((struct CVALUE*)come_null_check(come_value_213, "20method.c", 415))->type,come_value_213,(_Bool)0,info),come_pop_stackframe());
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
                    # 420 "20method.c"
                    # 417 "20method.c"
                    if(_if_conditional272=(come_push_stackframe("20method.c", 417),__exception_result_var_b199=list$1sTypephp_operator_load_element(param_types_189,n_214), come_pop_stackframe(), __exception_result_var_b199)&&((struct sType*)come_null_check((come_push_stackframe("20method.c", 417),__exception_result_var_b200=list$1sTypephp_operator_load_element(param_types_189,n_214), come_pop_stackframe(), __exception_result_var_b200), "20method.c", 417))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_213, "20method.c", 417))->type, "20method.c", 417))->mHeap,                    _if_conditional272) {
                        # 418 "20method.c"
                        (come_push_stackframe("20method.c", 418),std_move((come_push_stackframe("20method.c", 418),__exception_result_var_b201=list$1sTypephp_operator_load_element(param_types_189,n_214), come_pop_stackframe(), __exception_result_var_b201),((struct CVALUE*)come_null_check(come_value_213, "20method.c", 418))->type,come_value_213,info),come_pop_stackframe());
                    }
                }
                else {
                    # 425 "20method.c"
                    # 422 "20method.c"
                    if(_if_conditional273=(come_push_stackframe("20method.c", 422),__exception_result_var_b202=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b202),                    _if_conditional273) {
                        # 423 "20method.c"
                        (come_push_stackframe("20method.c", 423),check_assign_type(((char*)(right_value186=xsprintf("\%s param num \%s is assinged to",((char*)(right_value184=charp_to_string(fun_name_133))),((char*)(right_value185=int_to_string(i_205)))))),(come_push_stackframe("20method.c", 423),__exception_result_var_b203=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b203),((struct CVALUE*)come_null_check(come_value_213, "20method.c", 423))->type,come_value_213,(_Bool)0,info),come_pop_stackframe());
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
                    # 428 "20method.c"
                    # 425 "20method.c"
                    if(_if_conditional274=(come_push_stackframe("20method.c", 425),__exception_result_var_b204=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b204)&&((struct sType*)come_null_check((come_push_stackframe("20method.c", 425),__exception_result_var_b205=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b205), "20method.c", 425))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_213, "20method.c", 425))->type, "20method.c", 425))->mHeap,                    _if_conditional274) {
                        # 426 "20method.c"
                        (come_push_stackframe("20method.c", 426),std_move((come_push_stackframe("20method.c", 426),__exception_result_var_b206=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b206),((struct CVALUE*)come_null_check(come_value_213, "20method.c", 426))->type,come_value_213,info),come_pop_stackframe());
                    }
                }
                # 438 "20method.c"
                # 430 "20method.c"
                if(_if_conditional275=label_208==((void*)0),                _if_conditional275) {
                    # 431 "20method.c"
                    (come_push_stackframe("20method.c", 431),__exception_result_var_b207=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_200, "20method.c", 431)),(struct CVALUE*)come_increment_ref_count(come_value_213)), come_pop_stackframe(), __exception_result_var_b207);
                    # 433 "20method.c"
                    i_205++;
                }
                else {
                    # 436 "20method.c"
                    (come_push_stackframe("20method.c", 436),__exception_result_var_b233=map$2charphCVALUEph_insert(((struct map$2charphCVALUEph*)come_null_check(label_params_204, "20method.c", 436)),(char*)come_increment_ref_count((come_push_stackframe("20method.c", 436),__exception_result_var_b232=((char*)(right_value193=__builtin_string(label_208))), come_pop_stackframe(), __exception_result_var_b232)),(struct CVALUE*)come_increment_ref_count(come_value_213)), come_pop_stackframe(), __exception_result_var_b233);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value193;
                    __freed_obj__ = 0;
                }
                # 438 "20method.c"
                (come_push_stackframe("20method.c", 438),dec_stack_ptr(1,info),come_pop_stackframe());
                if(come_value_213 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_213, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(label_208 && !__freed_obj__) { label_208 = come_decrement_ref_count(label_208, (void*)0, (void*)0, 0, 0, 0); }
            if(node_209 && !__freed_obj__) { node_209 = come_decrement_ref_count(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0); } 
        }
        # 495 "20method.c"
        # 442 "20method.c"
        if(_if_conditional298=(come_push_stackframe("20method.c", 442),__exception_result_var_b234=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_134, "20method.c", 442))), come_pop_stackframe(), __exception_result_var_b234)<(come_push_stackframe("20method.c", 442),__exception_result_var_b235=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun_179, "20method.c", 442))->mParamTypes, "20method.c", 442))), come_pop_stackframe(), __exception_result_var_b235)+(method_block_136?-2:0),        _if_conditional298) {
            # 494 "20method.c"
            for(
            ;            _for_condtionalA19=            i_205<(come_push_stackframe("20method.c", 444),__exception_result_var_b236=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun_179, "20method.c", 444))->mParamTypes, "20method.c", 444))), come_pop_stackframe(), __exception_result_var_b236)+(method_block_136?-2:0) ,            _for_condtionalA19;            i_205++ ,            0            ){
                # 445 "20method.c"
                default_param_242=(char*)come_increment_ref_count(((char*)(right_value194=string_clone((come_push_stackframe("20method.c", 445),__exception_result_var_b237=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_179, "20method.c", 445))->mParamDefaultParametors,i_205), come_pop_stackframe(), __exception_result_var_b237)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value194;
                __freed_obj__ = 0;
                # 447 "20method.c"
                param_name_243=(come_push_stackframe("20method.c", 447),__exception_result_var_b238=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_179, "20method.c", 447))->mParamNames,i_205), come_pop_stackframe(), __exception_result_var_b238);
                # 450 "20method.c"
                come_value_247=(come_push_stackframe("20method.c", 450),__exception_result_var_b242=map$2charphCVALUEphp_operator_load_element(label_params_204,param_name_243), come_pop_stackframe(), __exception_result_var_b242);
                # 493 "20method.c"
                # 453 "20method.c"
                if(_if_conditional303=default_param_242&&(come_push_stackframe("20method.c", 453),__exception_result_var_b243=string_operator_not_equals(default_param_242,""), come_pop_stackframe(), __exception_result_var_b243),                _if_conditional303) {
                    # 454 "20method.c"
                    source_248=(struct buffer*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "20method.c", 454))->source);
                    # 455 "20method.c"
                    p_249=((struct sInfo*)come_null_check(info, "20method.c", 455))->p;
                    # 456 "20method.c"
                    head_250=((struct sInfo*)come_null_check(info, "20method.c", 456))->head;
                    # 457 "20method.c"
                    sline_251=((struct sInfo*)come_null_check(info, "20method.c", 457))->sline;
                    # 459 "20method.c"
                    __dec_obj63=((struct sInfo*)come_null_check(info, "20method.c", 459))->source;
                    ((struct sInfo*)come_null_check(info, "20method.c", 459))->source=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 459),__exception_result_var_b244=((struct buffer*)(right_value198=string_to_buffer(((char*)come_null_check(default_param_242, "20method.c", 459))))), come_pop_stackframe(), __exception_result_var_b244));
                    if(__dec_obj63) { come_call_finalizer(buffer_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value198;
                    __freed_obj__ = 0;
                    # 460 "20method.c"
                    ((struct sInfo*)come_null_check(info, "20method.c", 460))->p=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 460))->source, "20method.c", 460))->buf;
                    # 461 "20method.c"
                    ((struct sInfo*)come_null_check(info, "20method.c", 461))->head=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 461))->source, "20method.c", 461))->buf;
                    # 463 "20method.c"
                    node_252=(struct sNode*)come_increment_ref_count((come_push_stackframe("20method.c", 463),__exception_result_var_b245=((struct sNode*)(right_value199=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b245));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
                    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[1] = right_value199;
                    __freed_obj__ = 0;
                    # 469 "20method.c"
                    # 465 "20method.c"
                    if(_if_conditional304=!(come_push_stackframe("20method.c", 465),__exception_result_var_b246=node_compile(node_252,info), come_pop_stackframe(), __exception_result_var_b246),                    _if_conditional304) {
                        # 466 "20method.c"
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
                    # 469 "20method.c"
                    __dec_obj64=((struct sInfo*)come_null_check(info, "20method.c", 469))->source;
                    ((struct sInfo*)come_null_check(info, "20method.c", 469))->source=(struct buffer*)come_increment_ref_count(source_248);
                    if(__dec_obj64) { come_call_finalizer(buffer_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 470 "20method.c"
                    ((struct sInfo*)come_null_check(info, "20method.c", 470))->p=p_249;
                    # 471 "20method.c"
                    ((struct sInfo*)come_null_check(info, "20method.c", 471))->head=head_250;
                    # 472 "20method.c"
                    ((struct sInfo*)come_null_check(info, "20method.c", 472))->sline=sline_251;
                    # 474 "20method.c"
                    come_value_253=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 474),__exception_result_var_b247=((struct CVALUE*)(right_value200=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b247));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value200);
                    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value200;
                    __freed_obj__ = 0;
                    # 478 "20method.c"
                    # 475 "20method.c"
                    if(_if_conditional305=(come_push_stackframe("20method.c", 475),__exception_result_var_b248=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b248),                    _if_conditional305) {
                        # 476 "20method.c"
                        (come_push_stackframe("20method.c", 476),check_assign_type(((char*)(right_value203=xsprintf("\%s param num \%s is assinged to",((char*)(right_value201=charp_to_string(fun_name_133))),((char*)(right_value202=int_to_string(i_205)))))),(come_push_stackframe("20method.c", 476),__exception_result_var_b249=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b249),((struct CVALUE*)come_null_check(come_value_253, "20method.c", 476))->type,come_value_253,(_Bool)0,info),come_pop_stackframe());
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
                    # 481 "20method.c"
                    # 478 "20method.c"
                    if(_if_conditional306=(come_push_stackframe("20method.c", 478),__exception_result_var_b250=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b250)&&((struct sType*)come_null_check((come_push_stackframe("20method.c", 478),__exception_result_var_b251=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b251), "20method.c", 478))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_253, "20method.c", 478))->type, "20method.c", 478))->mHeap,                    _if_conditional306) {
                        # 479 "20method.c"
                        (come_push_stackframe("20method.c", 479),std_move((come_push_stackframe("20method.c", 479),__exception_result_var_b252=list$1sTypephp_operator_load_element(param_types_189,i_205), come_pop_stackframe(), __exception_result_var_b252),((struct CVALUE*)come_null_check(come_value_253, "20method.c", 479))->type,come_value_253,info),come_pop_stackframe());
                    }
                    # 481 "20method.c"
                    (come_push_stackframe("20method.c", 481),__exception_result_var_b253=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_200, "20method.c", 481)),(struct CVALUE*)come_increment_ref_count(come_value_253)), come_pop_stackframe(), __exception_result_var_b253);
                    # 482 "20method.c"
                    (come_push_stackframe("20method.c", 482),dec_stack_ptr(1,info),come_pop_stackframe());
                    if(source_248 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_248, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_253 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_253, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    # 492 "20method.c"
                    # 485 "20method.c"
                    if(_if_conditional307=come_value_247,                    _if_conditional307) {
                        # 486 "20method.c"
                        (come_push_stackframe("20method.c", 486),__exception_result_var_b254=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_200, "20method.c", 486)),((void*)0)), come_pop_stackframe(), __exception_result_var_b254);
                    }
                    else {
                        # 489 "20method.c"
                        (come_push_stackframe("20method.c", 489),err_msg(info,"require parametor(%s)",((struct sFun*)come_null_check(fun_179, "20method.c", 489))->mName),come_pop_stackframe());
                        # 490 "20method.c"
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
        # 508 "20method.c"
        # 495 "20method.c"
        if(_if_conditional308=(come_push_stackframe("20method.c", 495),__exception_result_var_b255=map$2charphCVALUEph_length(((struct map$2charphCVALUEph*)come_null_check(label_params_204, "20method.c", 495))), come_pop_stackframe(), __exception_result_var_b255)>0,        _if_conditional308) {
            # 506 "20method.c"
            for(
            i_205=0 ,            0;            _for_condtionalA20=            i_205<(come_push_stackframe("20method.c", 496),__exception_result_var_b256=list$1charph_length(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(fun_179, "20method.c", 496))->mParamNames, "20method.c", 496))), come_pop_stackframe(), __exception_result_var_b256)+(method_block_136?-2:0) ,            _for_condtionalA20;            i_205++ ,            0            ){
                # 497 "20method.c"
                param_name_254=(come_push_stackframe("20method.c", 497),__exception_result_var_b257=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun_179, "20method.c", 497))->mParamNames,i_205), come_pop_stackframe(), __exception_result_var_b257);
                # 500 "20method.c"
                come_value_255=(come_push_stackframe("20method.c", 500),__exception_result_var_b258=map$2charphCVALUEphp_operator_load_element(label_params_204,param_name_254), come_pop_stackframe(), __exception_result_var_b258);
                # 505 "20method.c"
                # 502 "20method.c"
                if(_if_conditional309=come_value_255,                _if_conditional309) {
                    # 503 "20method.c"
                    (come_push_stackframe("20method.c", 503),__exception_result_var_b260=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(come_params_200, "20method.c", 503)),i_205,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=CVALUE_clone(come_value_255))))), come_pop_stackframe(), __exception_result_var_b260);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value207;
                    __freed_obj__ = 0;
                }
            }
        }
        # 629 "20method.c"
        # 508 "20method.c"
        if(_if_conditional317=method_block_136,        _if_conditional317) {
            # 509 "20method.c"
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 509);
            _inf_obj_value1=come_increment_ref_count((come_push_stackframe("20method.c", 509),__exception_result_var_b261=((struct sCurrentNode*)(right_value209=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value208=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 509)))),info))), come_pop_stackframe(), __exception_result_var_b261));
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
            # 515 "20method.c"
            # 511 "20method.c"
            if(_if_conditional322=!(come_push_stackframe("20method.c", 511),__exception_result_var_b262=node_compile(current_stack_frame_node_260,info), come_pop_stackframe(), __exception_result_var_b262),            _if_conditional322) {
                # 512 "20method.c"
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
            # 515 "20method.c"
            come_value_261=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 515),__exception_result_var_b263=((struct CVALUE*)(right_value213=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b263));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value213);
            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value213;
            __freed_obj__ = 0;
            # 516 "20method.c"
            (come_push_stackframe("20method.c", 516),__exception_result_var_b264=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_200, "20method.c", 516)),(struct CVALUE*)come_increment_ref_count(come_value_261)), come_pop_stackframe(), __exception_result_var_b264);
            # 517 "20method.c"
            (come_push_stackframe("20method.c", 517),dec_stack_ptr(1,info),come_pop_stackframe());
            # 519 "20method.c"
            method_block2_262=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 519),__exception_result_var_b265=((struct buffer*)(right_value215=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value214=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 519))))))), come_pop_stackframe(), __exception_result_var_b265));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value214);
            if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value214;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value215);
            if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value215;
            __freed_obj__ = 0;
            # 520 "20method.c"
            method_block_type_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone((come_push_stackframe("20method.c", 520),__exception_result_var_b266=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_179, "20method.c", 520))->mParamTypes,-1), come_pop_stackframe(), __exception_result_var_b266)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value216);
            if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value216;
            __freed_obj__ = 0;
            # 522 "20method.c"
            class_name_264=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 522),__exception_result_var_b267=((char*)(right_value217=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(info, "20method.c", 522))->current_stack_num))), come_pop_stackframe(), __exception_result_var_b267));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value217);
            if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value217;
            __freed_obj__ = 0;
            # 524 "20method.c"
            ((struct sType*)come_null_check((come_push_stackframe("20method.c", 524),__exception_result_var_b268=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(method_block_type_263, "20method.c", 524))->mParamTypes,0), come_pop_stackframe(), __exception_result_var_b268), "20method.c", 524))->mClass=(come_push_stackframe("20method.c", 524),__exception_result_var_b272=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "20method.c", 524))->classes,class_name_264), come_pop_stackframe(), __exception_result_var_b272);
            # 525 "20method.c"
            current_stack_frame_struct_268=((struct sInfo*)come_null_check(info, "20method.c", 525))->current_stack_frame_struct;
            # 526 "20method.c"
            ((struct sInfo*)come_null_check(info, "20method.c", 526))->current_stack_frame_struct=(come_push_stackframe("20method.c", 526),__exception_result_var_b273=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "20method.c", 526))->classes,class_name_264), come_pop_stackframe(), __exception_result_var_b273);
            # 528 "20method.c"
            ((struct sInfo*)come_null_check(info, "20method.c", 528))->num_method_block++;
            # 535 "20method.c"
            # 530 "20method.c"
            if(_if_conditional327=(come_push_stackframe("20method.c", 530),__exception_result_var_b274=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(method_block_type_263, "20method.c", 530))->mClass, "20method.c", 530))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b274),            _if_conditional327) {
                # 531 "20method.c"
                (come_push_stackframe("20method.c", 531),err_msg(info,"This function does not have method block(%s)",fun_name_133),come_pop_stackframe());
                # 532 "20method.c"
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
            # 535 "20method.c"
            result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(method_block_type_263, "20method.c", 535))->mResultType, "20method.c", 535))->v1))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value221);
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[8] = right_value221;
            __freed_obj__ = 0;
            # 536 "20method.c"
            ((struct sType*)come_null_check(result_type_269, "20method.c", 536))->mStatic=(_Bool)0;
            # 537 "20method.c"
            param_types_270=((struct sType*)come_null_check(method_block_type_263, "20method.c", 537))->mParamTypes;
            # 538 "20method.c"
            param_names_271=((struct sType*)come_null_check(method_block_type_263, "20method.c", 538))->mParamNames;
            # 540 "20method.c"
            all_alhabet_sname_272=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 540),__exception_result_var_b275=((struct buffer*)(right_value223=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value222=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 540))))))), come_pop_stackframe(), __exception_result_var_b275));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value222);
            if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[9] = right_value222;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value223);
            if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[10] = right_value223;
            __freed_obj__ = 0;
            # 553 "20method.c"
            {
                # 542 "20method.c"
                p_273=((struct sInfo*)come_null_check(info, "20method.c", 542))->sname;
                # 551 "20method.c"
                while(_while_condtional35=*p_273,                _while_condtional35) {
                    # 550 "20method.c"
                    # 544 "20method.c"
                    if(_if_conditional328=(come_push_stackframe("20method.c", 544),__exception_result_var_b276=xisalnum(*p_273), come_pop_stackframe(), __exception_result_var_b276),                    _if_conditional328) {
                        # 545 "20method.c"
                        (come_push_stackframe("20method.c", 545),__exception_result_var_b277=buffer_append_char(((struct buffer*)come_null_check(all_alhabet_sname_272, "20method.c", 545)),*p_273++), come_pop_stackframe(), __exception_result_var_b277);
                    }
                    else {
                        # 548 "20method.c"
                        p_273++;
                    }
                }
            }
            # 553 "20method.c"
            (come_push_stackframe("20method.c", 553),__exception_result_var_b281=buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 553)),(come_push_stackframe("20method.c", 553),__exception_result_var_b280=((char*)(right_value226=xsprintf("%s method_block%d_%s(",(come_push_stackframe("20method.c", 553),__exception_result_var_b278=((char*)(right_value224=make_type_name_string(result_type_269,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b278),((struct sInfo*)come_null_check(info, "20method.c", 553))->num_method_block,(come_push_stackframe("20method.c", 553),__exception_result_var_b279=((char*)(right_value225=buffer_to_string(((struct buffer*)come_null_check(all_alhabet_sname_272, "20method.c", 553))))), come_pop_stackframe(), __exception_result_var_b279)))), come_pop_stackframe(), __exception_result_var_b280)), come_pop_stackframe(), __exception_result_var_b281);
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
            # 555 "20method.c"
            i_274=0;
            # 580 "20method.c"
            for(
            o2_saved_275=(param_types_270),it_276=(come_push_stackframe("20method.c", 556),__exception_result_var_b282=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_275), "20method.c", 556))), come_pop_stackframe(), __exception_result_var_b282) ,            0;            _for_condtionalA21=            !(come_push_stackframe("20method.c", 556),__exception_result_var_b283=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_275), "20method.c", 556))), come_pop_stackframe(), __exception_result_var_b283) ,            _for_condtionalA21;            it_276=(come_push_stackframe("20method.c", 556),__exception_result_var_b284=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_275), "20method.c", 556))), come_pop_stackframe(), __exception_result_var_b284) ,            0            ){
                # 557 "20method.c"
                param_type_277=it_276;
                # 574 "20method.c"
                # 558 "20method.c"
                if(_if_conditional329=i_274==0,                _if_conditional329) {
                    # 559 "20method.c"
                    param_name_278=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 559),__exception_result_var_b285=((char*)(right_value227=xsprintf("parent"))), come_pop_stackframe(), __exception_result_var_b285));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
                    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value227;
                    __freed_obj__ = 0;
                    # 561 "20method.c"
                    (come_push_stackframe("20method.c", 561),__exception_result_var_b288=buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 561)),(come_push_stackframe("20method.c", 561),__exception_result_var_b287=((char*)(right_value229=xsprintf("%s",(come_push_stackframe("20method.c", 561),__exception_result_var_b286=((char*)(right_value228=make_define_var(param_type_277,param_name_278,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b286)))), come_pop_stackframe(), __exception_result_var_b287)), come_pop_stackframe(), __exception_result_var_b288);
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
                    # 574 "20method.c"
                    # 563 "20method.c"
                    if(_if_conditional330=i_274==1,                    _if_conditional330) {
                        # 564 "20method.c"
                        param_name_279=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 564),__exception_result_var_b289=((char*)(right_value230=xsprintf("it"))), come_pop_stackframe(), __exception_result_var_b289));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value230;
                        __freed_obj__ = 0;
                        # 566 "20method.c"
                        (come_push_stackframe("20method.c", 566),__exception_result_var_b292=buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 566)),(come_push_stackframe("20method.c", 566),__exception_result_var_b291=((char*)(right_value232=xsprintf("%s",(come_push_stackframe("20method.c", 566),__exception_result_var_b290=((char*)(right_value231=make_define_var(param_type_277,param_name_279,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b290)))), come_pop_stackframe(), __exception_result_var_b291)), come_pop_stackframe(), __exception_result_var_b292);
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
                        # 569 "20method.c"
                        param_name_280=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 569),__exception_result_var_b293=((char*)(right_value233=xsprintf("it%d",i_274))), come_pop_stackframe(), __exception_result_var_b293));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value233;
                        __freed_obj__ = 0;
                        # 571 "20method.c"
                        (come_push_stackframe("20method.c", 571),__exception_result_var_b296=buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 571)),(come_push_stackframe("20method.c", 571),__exception_result_var_b295=((char*)(right_value235=xsprintf("%s",(come_push_stackframe("20method.c", 571),__exception_result_var_b294=((char*)(right_value234=make_define_var(param_type_277,param_name_280,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b294)))), come_pop_stackframe(), __exception_result_var_b295)), come_pop_stackframe(), __exception_result_var_b296);
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
                # 578 "20method.c"
                # 574 "20method.c"
                if(_if_conditional331=i_274!=(come_push_stackframe("20method.c", 574),__exception_result_var_b297=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(param_types_270, "20method.c", 574))), come_pop_stackframe(), __exception_result_var_b297)-1,                _if_conditional331) {
                    # 575 "20method.c"
                    (come_push_stackframe("20method.c", 575),__exception_result_var_b298=buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 575)),","), come_pop_stackframe(), __exception_result_var_b298);
                }
                # 578 "20method.c"
                i_274++;
            }
            # 580 "20method.c"
            (come_push_stackframe("20method.c", 580),__exception_result_var_b299=buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 580)),")\n"), come_pop_stackframe(), __exception_result_var_b299);
            # 582 "20method.c"
            (come_push_stackframe("20method.c", 582),__exception_result_var_b301=buffer_append_str(((struct buffer*)come_null_check(method_block2_262, "20method.c", 582)),(come_push_stackframe("20method.c", 582),__exception_result_var_b300=((char*)(right_value236=buffer_to_string(((struct buffer*)come_null_check(method_block_136, "20method.c", 582))))), come_pop_stackframe(), __exception_result_var_b300)), come_pop_stackframe(), __exception_result_var_b301);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value236);
            if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[14] = right_value236;
            __freed_obj__ = 0;
            # 584 "20method.c"
            source3_281=(struct buffer*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "20method.c", 584))->source);
            # 585 "20method.c"
            p_282=((struct sInfo*)come_null_check(info, "20method.c", 585))->p;
            # 586 "20method.c"
            head_283=((struct sInfo*)come_null_check(info, "20method.c", 586))->head;
            # 587 "20method.c"
            sline_284=((struct sInfo*)come_null_check(info, "20method.c", 587))->sline;
            # 590 "20method.c"
            __dec_obj69=((struct sInfo*)come_null_check(info, "20method.c", 590))->source;
            ((struct sInfo*)come_null_check(info, "20method.c", 590))->source=(struct buffer*)come_increment_ref_count(method_block2_262);
            if(__dec_obj69) { come_call_finalizer(buffer_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 591 "20method.c"
            ((struct sInfo*)come_null_check(info, "20method.c", 591))->p=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 591))->source, "20method.c", 591))->buf;
            # 592 "20method.c"
            ((struct sInfo*)come_null_check(info, "20method.c", 592))->head=((struct buffer*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 592))->source, "20method.c", 592))->buf;
            # 593 "20method.c"
            ((struct sInfo*)come_null_check(info, "20method.c", 593))->sline=method_block_sline_137;
            # 596 "20method.c"
            node_285=(struct sNode*)come_increment_ref_count((come_push_stackframe("20method.c", 596),__exception_result_var_b302=((struct sNode*)(right_value237=parse_function(info))), come_pop_stackframe(), __exception_result_var_b302));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value237);
            if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[15] = right_value237;
            __freed_obj__ = 0;
            # 602 "20method.c"
            # 598 "20method.c"
            if(_if_conditional332=!(come_push_stackframe("20method.c", 598),__exception_result_var_b303=node_compile(node_285,info), come_pop_stackframe(), __exception_result_var_b303),            _if_conditional332) {
                # 599 "20method.c"
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
            # 602 "20method.c"
            method_block_name_286=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 602),__exception_result_var_b305=((char*)(right_value239=xsprintf("method_block%d_%s",((struct sInfo*)come_null_check(info, "20method.c", 602))->num_method_block,(come_push_stackframe("20method.c", 602),__exception_result_var_b304=((char*)(right_value238=buffer_to_string(((struct buffer*)come_null_check(all_alhabet_sname_272, "20method.c", 602))))), come_pop_stackframe(), __exception_result_var_b304)))), come_pop_stackframe(), __exception_result_var_b305));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value238);
            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[16] = right_value238;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value239);
            if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[17] = right_value239;
            __freed_obj__ = 0;
            # 604 "20method.c"
            come_value2_287=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 604))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value240);
            if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[18] = right_value240;
            __freed_obj__ = 0;
            # 606 "20method.c"
            fun2_288=(come_push_stackframe("20method.c", 606),__exception_result_var_b306=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 606))->funcs, "20method.c", 606)),method_block_name_286,((void*)0)), come_pop_stackframe(), __exception_result_var_b306);
            # 613 "20method.c"
            # 608 "20method.c"
            if(_if_conditional333=fun2_288==((void*)0),            _if_conditional333) {
                # 609 "20method.c"
                (come_push_stackframe("20method.c", 609),err_msg(info,"method block function not found(%s)",method_block_name_286),come_pop_stackframe());
                # 610 "20method.c"
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
            # 613 "20method.c"
            method_block_type2_289=((struct sFun*)come_null_check(fun2_288, "20method.c", 613))->mLambdaType;
            # 615 "20method.c"
            __dec_obj70=((struct CVALUE*)come_null_check(come_value2_287, "20method.c", 615))->c_value;
            ((struct CVALUE*)come_null_check(come_value2_287, "20method.c", 615))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 615),__exception_result_var_b307=((char*)(right_value241=xsprintf("(void*)%s",method_block_name_286))), come_pop_stackframe(), __exception_result_var_b307));
            if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value241);
            if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[19] = right_value241;
            __freed_obj__ = 0;
            # 616 "20method.c"
            __dec_obj71=((struct CVALUE*)come_null_check(come_value2_287, "20method.c", 616))->type;
            ((struct CVALUE*)come_null_check(come_value2_287, "20method.c", 616))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(method_block_type2_289))));
            if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value242);
            if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[20] = right_value242;
            __freed_obj__ = 0;
            # 617 "20method.c"
            ((struct CVALUE*)come_null_check(come_value2_287, "20method.c", 617))->var=((void*)0);
            # 619 "20method.c"
            (come_push_stackframe("20method.c", 619),__exception_result_var_b308=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_200, "20method.c", 619)),(struct CVALUE*)come_increment_ref_count(come_value2_287)), come_pop_stackframe(), __exception_result_var_b308);
            # 621 "20method.c"
            __dec_obj72=((struct sInfo*)come_null_check(info, "20method.c", 621))->source;
            ((struct sInfo*)come_null_check(info, "20method.c", 621))->source=(struct buffer*)come_increment_ref_count(source3_281);
            if(__dec_obj72) { come_call_finalizer(buffer_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 622 "20method.c"
            ((struct sInfo*)come_null_check(info, "20method.c", 622))->p=p_282;
            # 623 "20method.c"
            ((struct sInfo*)come_null_check(info, "20method.c", 623))->head=head_283;
            # 624 "20method.c"
            ((struct sInfo*)come_null_check(info, "20method.c", 624))->sline=sline_284;
            # 626 "20method.c"
            ((struct sInfo*)come_null_check(info, "20method.c", 626))->current_stack_frame_struct=current_stack_frame_struct_268;
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
        # 629 "20method.c"
        buf_290=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 629),__exception_result_var_b309=((struct buffer*)(right_value244=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value243=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 629))))))), come_pop_stackframe(), __exception_result_var_b309));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value243);
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value243;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value244;
        __freed_obj__ = 0;
        # 631 "20method.c"
        (come_push_stackframe("20method.c", 631),__exception_result_var_b310=buffer_append_str(((struct buffer*)come_null_check(buf_290, "20method.c", 631)),generics_fun_name_178), come_pop_stackframe(), __exception_result_var_b310);
        # 632 "20method.c"
        (come_push_stackframe("20method.c", 632),__exception_result_var_b311=buffer_append_str(((struct buffer*)come_null_check(buf_290, "20method.c", 632)),"("), come_pop_stackframe(), __exception_result_var_b311);
        # 634 "20method.c"
        j_291=0;
        # 644 "20method.c"
        for(
        o2_saved_292=(struct list$1CVALUEph*)come_increment_ref_count((come_params_200)),it_293=(come_push_stackframe("20method.c", 635),__exception_result_var_b312=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_292), "20method.c", 635))), come_pop_stackframe(), __exception_result_var_b312) ,        0;        _for_condtionalA22=        !(come_push_stackframe("20method.c", 635),__exception_result_var_b313=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_292), "20method.c", 635))), come_pop_stackframe(), __exception_result_var_b313) ,        _for_condtionalA22;        it_293=(come_push_stackframe("20method.c", 635),__exception_result_var_b314=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_292), "20method.c", 635))), come_pop_stackframe(), __exception_result_var_b314) ,        0        ){
            # 636 "20method.c"
            (come_push_stackframe("20method.c", 636),__exception_result_var_b315=buffer_append_str(((struct buffer*)come_null_check(buf_290, "20method.c", 636)),((struct CVALUE*)come_null_check(it_293, "20method.c", 636))->c_value), come_pop_stackframe(), __exception_result_var_b315);
            # 642 "20method.c"
            # 638 "20method.c"
            if(_if_conditional334=j_291!=(come_push_stackframe("20method.c", 638),__exception_result_var_b316=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_200, "20method.c", 638))), come_pop_stackframe(), __exception_result_var_b316)-1,            _if_conditional334) {
                # 639 "20method.c"
                (come_push_stackframe("20method.c", 639),__exception_result_var_b317=buffer_append_str(((struct buffer*)come_null_check(buf_290, "20method.c", 639)),","), come_pop_stackframe(), __exception_result_var_b317);
            }
            # 642 "20method.c"
            j_291++;
        }
        if(o2_saved_292 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_292, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 644 "20method.c"
        (come_push_stackframe("20method.c", 644),__exception_result_var_b318=buffer_append_str(((struct buffer*)come_null_check(buf_290, "20method.c", 644)),")"), come_pop_stackframe(), __exception_result_var_b318);
        # 647 "20method.c"
        come_value2_294=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value245=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 647))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value245;
        __freed_obj__ = 0;
        # 649 "20method.c"
        __dec_obj73=((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 649))->c_value;
        ((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 649))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 649),__exception_result_var_b319=((char*)(right_value246=buffer_to_string(((struct buffer*)come_null_check(buf_290, "20method.c", 649))))), come_pop_stackframe(), __exception_result_var_b319));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value246;
        __freed_obj__ = 0;
        # 650 "20method.c"
        __dec_obj74=((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 650))->type;
        ((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 650))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_clone(result_type2_188))));
        if(__dec_obj74) { come_call_finalizer(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value247;
        __freed_obj__ = 0;
        # 651 "20method.c"
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 651))->type, "20method.c", 651))->mStatic=(_Bool)0;
        # 652 "20method.c"
        ((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 652))->var=((void*)0);
        # 658 "20method.c"
        # 654 "20method.c"
        if(_if_conditional335=((struct sType*)come_null_check(result_type2_188, "20method.c", 654))->mHeap,        _if_conditional335) {
            # 655 "20method.c"
            __dec_obj75=((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 655))->c_value;
            ((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 655))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 655),__exception_result_var_b320=((char*)(right_value248=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 655))->c_value,(struct sType*)come_increment_ref_count(result_type2_188),info))), come_pop_stackframe(), __exception_result_var_b320));
            if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
            if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value248;
            __freed_obj__ = 0;
        }
        # 658 "20method.c"
        __dec_obj76=((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 658))->c_value;
        ((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 658))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 658),__exception_result_var_b321=((char*)(right_value249=append_exception_value(((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 658))->c_value,((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 658))->type,info))), come_pop_stackframe(), __exception_result_var_b321));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value249;
        __freed_obj__ = 0;
        # 660 "20method.c"
        (come_push_stackframe("20method.c", 660),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_294, "20method.c", 660))->c_value),come_pop_stackframe());
        # 662 "20method.c"
        (come_push_stackframe("20method.c", 662),__exception_result_var_b322=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 662))->stack, "20method.c", 662)),(struct CVALUE*)come_increment_ref_count(come_value2_294)), come_pop_stackframe(), __exception_result_var_b322);
        # 730 "20method.c"
        # 664 "20method.c"
        if(_if_conditional336=method_block_136,        _if_conditional336) {
            # 665 "20method.c"
            var_name_295=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 665),__exception_result_var_b323=((char*)(right_value250=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(info, "20method.c", 665))->num_current_stack))), come_pop_stackframe(), __exception_result_var_b323));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
            if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value250;
            __freed_obj__ = 0;
            # 667 "20method.c"
            result_type_296=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 667))->come_fun, "20method.c", 667))->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value251;
            __freed_obj__ = 0;
            # 669 "20method.c"
            result_type2_297=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 669),__exception_result_var_b324=((struct sType*)(right_value252=solve_generics(result_type_296,((struct sInfo*)come_null_check(info, "20method.c", 669))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b324));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value252;
            __freed_obj__ = 0;
            # 671 "20method.c"
            result_type3_298=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_297, "20method.c", 671))->mNoSolvedGenericsType, "20method.c", 671))->v1;
            # 679 "20method.c"
            # 672 "20method.c"
            if(_if_conditional337=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_297, "20method.c", 672))->mNoSolvedGenericsType, "20method.c", 672))->v1,            _if_conditional337) {
                # 673 "20method.c"
                result_type3_298=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type2_297, "20method.c", 673))->mNoSolvedGenericsType, "20method.c", 673))->v1;
            }
            else {
                # 676 "20method.c"
                result_type3_298=result_type2_297;
            }
            # 729 "20method.c"
            # 679 "20method.c"
            if(_if_conditional338=((struct sInfo*)come_null_check(info, "20method.c", 679))->in_loop,            _if_conditional338) {
                # 712 "20method.c"
                # 680 "20method.c"
                if(_if_conditional339=(come_push_stackframe("20method.c", 680),__exception_result_var_b325=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(result_type3_298, "20method.c", 680))->mClass, "20method.c", 680))->mName,"void"), come_pop_stackframe(), __exception_result_var_b325)&&((struct sType*)come_null_check(result_type3_298, "20method.c", 680))->mPointerNum==0,                _if_conditional339) {
                    # 694 "20method.c"
                    (come_push_stackframe("20method.c", 694),add_come_last_code3(info,((char*)(right_value256=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value253=string_to_string(var_name_295))),((char*)(right_value254=string_to_string(var_name_295))),((char*)(right_value255=string_to_string(var_name_295))))))),come_pop_stackframe());
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
                    # 710 "20method.c"
                    (come_push_stackframe("20method.c", 710),add_come_last_code3(info,((char*)(right_value263=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value257=string_to_string(var_name_295))),((char*)(right_value258=string_to_string(var_name_295))),((char*)(right_value259=string_to_string(var_name_295))),((char*)(right_value261=string_to_string((come_push_stackframe("20method.c", 708),__exception_result_var_b326=((char*)(right_value260=make_type_name_string(result_type2_297,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b326)))),((char*)(right_value262=string_to_string(var_name_295))))))),come_pop_stackframe());
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
                # 729 "20method.c"
                # 713 "20method.c"
                if(_if_conditional340=(come_push_stackframe("20method.c", 713),__exception_result_var_b327=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(result_type3_298, "20method.c", 713))->mClass, "20method.c", 713))->mName,"void"), come_pop_stackframe(), __exception_result_var_b327)&&((struct sType*)come_null_check(result_type3_298, "20method.c", 713))->mPointerNum==0,                _if_conditional340) {
                    # 719 "20method.c"
                    (come_push_stackframe("20method.c", 719),add_come_last_code3(info,((char*)(right_value265=xsprintf("                    if(\%s.__method_block_result_kind__ == 4)\n                    {\n                        return;\n                    }\n",((char*)(right_value264=string_to_string(var_name_295))))))),come_pop_stackframe());
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value264;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value265);
                    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value265;
                    __freed_obj__ = 0;
                }
                else {
                    # 727 "20method.c"
                    (come_push_stackframe("20method.c", 727),add_come_last_code3(info,((char*)(right_value270=xsprintf("                    if(\%s.__method_block_result_kind__ == 3)\n                    {\n                        return (\%s)\%s.__method_block_return_value__;\n                    }\n",((char*)(right_value266=string_to_string(var_name_295))),((char*)(right_value268=string_to_string((come_push_stackframe("20method.c", 725),__exception_result_var_b328=((char*)(right_value267=make_type_name_string(result_type2_297,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b328)))),((char*)(right_value269=string_to_string(var_name_295))))))),come_pop_stackframe());
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
    # 732 "20method.c"
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
void* __exception_result_var_b101;
struct tuple2$2charphsTypeph* __result105__;
_Bool _if_conditional215;
struct tuple2$2charphsTypeph* __result106__;
struct tuple2$2charphsTypeph* result_145;
void* __exception_result_var_b102;
struct tuple2$2charphsTypeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_144, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_145, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 343 "./comelang2.h"
        # 338 "./comelang2.h"
        if(_if_conditional214=self==((void*)0),        _if_conditional214) {
            # 339 "./comelang2.h"
            # 340 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b101=memset(&result_144,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b101);
            # 341 "./comelang2.h"
            __result105__ = __result_obj__ = result_144;
            return __result105__;
        }
        # 343 "./comelang2.h"
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 343))->head;
        # 349 "./comelang2.h"
        # 345 "./comelang2.h"
        if(_if_conditional215=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 345))->it,        _if_conditional215) {
            # 346 "./comelang2.h"
            __result106__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
            return __result106__;
        }
        # 349 "./comelang2.h"
        # 350 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b102=memset(&result_145,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b102);
        # 351 "./comelang2.h"
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
        # 373 "./comelang2.h"
        __result108__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
        return __result108__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
struct tuple2$2charphsTypeph* result_147;
void* __exception_result_var_b105;
struct tuple2$2charphsTypeph* __result109__;
_Bool _if_conditional217;
struct tuple2$2charphsTypeph* __result110__;
struct tuple2$2charphsTypeph* result_148;
void* __exception_result_var_b106;
struct tuple2$2charphsTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_147, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_148, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 361 "./comelang2.h"
        # 355 "./comelang2.h"
        if(_if_conditional216=self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),        _if_conditional216) {
            # 356 "./comelang2.h"
            # 357 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b105=memset(&result_147,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b105);
            # 358 "./comelang2.h"
            __result109__ = __result_obj__ = result_147;
            return __result109__;
        }
        # 361 "./comelang2.h"
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
        # 367 "./comelang2.h"
        # 363 "./comelang2.h"
        if(_if_conditional217=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 363))->it,        _if_conditional217) {
            # 364 "./comelang2.h"
            __result110__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
            return __result110__;
        }
        # 367 "./comelang2.h"
        # 368 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b106=memset(&result_148,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b106);
        # 369 "./comelang2.h"
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
            # 157 "./comelang2.h"
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
            # 158 "./comelang2.h"
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
            # 159 "./comelang2.h"
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 159))->len=0;
            # 161 "./comelang2.h"
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
                # 176 "./comelang2.h"
                it_152=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 176))->head;
                # 182 "./comelang2.h"
                while(_while_condtional24=it_152!=((void*)0),                _while_condtional24) {
                    # 178 "./comelang2.h"
                    prev_it_153=it_152;
                    # 179 "./comelang2.h"
                    it_152=((struct list_item$1CVALUEph*)come_null_check(it_152, "./comelang2.h", 179))->next;
                    # 180 "./comelang2.h"
                    if(prev_it_153 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional220;
struct tuple2$2charphsNodeph* result_157;
void* __exception_result_var_b111;
struct tuple2$2charphsNodeph* __result113__;
_Bool _if_conditional221;
struct tuple2$2charphsNodeph* __result114__;
struct tuple2$2charphsNodeph* result_158;
void* __exception_result_var_b112;
struct tuple2$2charphsNodeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_157, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_158, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 343 "./comelang2.h"
            # 338 "./comelang2.h"
            if(_if_conditional220=self==((void*)0),            _if_conditional220) {
                # 339 "./comelang2.h"
                # 340 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b111=memset(&result_157,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b111);
                # 341 "./comelang2.h"
                __result113__ = __result_obj__ = result_157;
                return __result113__;
            }
            # 343 "./comelang2.h"
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 343))->head;
            # 349 "./comelang2.h"
            # 345 "./comelang2.h"
            if(_if_conditional221=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 345))->it,            _if_conditional221) {
                # 346 "./comelang2.h"
                __result114__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                return __result114__;
            }
            # 349 "./comelang2.h"
            # 350 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b112=memset(&result_158,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b112);
            # 351 "./comelang2.h"
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
            # 373 "./comelang2.h"
            __result116__ = self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
            return __result116__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
struct tuple2$2charphsNodeph* result_160;
void* __exception_result_var_b115;
struct tuple2$2charphsNodeph* __result117__;
_Bool _if_conditional223;
struct tuple2$2charphsNodeph* __result118__;
struct tuple2$2charphsNodeph* result_161;
void* __exception_result_var_b116;
struct tuple2$2charphsNodeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_160, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_161, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 361 "./comelang2.h"
            # 355 "./comelang2.h"
            if(_if_conditional222=self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),            _if_conditional222) {
                # 356 "./comelang2.h"
                # 357 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b115=memset(&result_160,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b115);
                # 358 "./comelang2.h"
                __result117__ = __result_obj__ = result_160;
                return __result117__;
            }
            # 361 "./comelang2.h"
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
            # 367 "./comelang2.h"
            # 363 "./comelang2.h"
            if(_if_conditional223=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 363))->it,            _if_conditional223) {
                # 364 "./comelang2.h"
                __result118__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                return __result118__;
            }
            # 367 "./comelang2.h"
            # 368 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b116=memset(&result_161,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b116);
            # 369 "./comelang2.h"
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
void* __exception_result_var_b121;
struct sType* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_165, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_166, 0, sizeof(int));
memset(&default_value_167, 0, sizeof(struct sType*));
                    # 745 "./comelang2.h"
                    # 741 "./comelang2.h"
                    if(_if_conditional226=position<0,                    _if_conditional226) {
                        # 742 "./comelang2.h"
                        position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 742))->len;
                    }
                    # 745 "./comelang2.h"
                    it_165=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 745))->head;
                    # 746 "./comelang2.h"
                    i_166=0;
                    # 753 "./comelang2.h"
                    while(_while_condtional25=it_165!=((void*)0),                    _while_condtional25) {
                        # 751 "./comelang2.h"
                        # 748 "./comelang2.h"
                        if(_if_conditional227=position==i_166,                        _if_conditional227) {
                            # 749 "./comelang2.h"
                            __result121__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(it_165, "./comelang2.h", 749))->item;
                            return __result121__;
                        }
                        # 751 "./comelang2.h"
                        it_165=((struct list_item$1sTypeph*)come_null_check(it_165, "./comelang2.h", 751))->next;
                        # 752 "./comelang2.h"
                        i_166++;
                    }
                    # 755 "./comelang2.h"
                    # 756 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 756),__exception_result_var_b121=memset(&default_value_167,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b121);
                    # 757 "./comelang2.h"
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
void* __exception_result_var_b130;
struct CVALUE* __result123__;
_Bool _if_conditional230;
struct CVALUE* __result124__;
struct CVALUE* result_172;
void* __exception_result_var_b131;
struct CVALUE* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_171, 0, sizeof(struct CVALUE*));
memset(&result_172, 0, sizeof(struct CVALUE*));
            # 343 "./comelang2.h"
            # 338 "./comelang2.h"
            if(_if_conditional229=self==((void*)0),            _if_conditional229) {
                # 339 "./comelang2.h"
                # 340 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b130=memset(&result_171,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b130);
                # 341 "./comelang2.h"
                __result123__ = __result_obj__ = result_171;
                return __result123__;
            }
            # 343 "./comelang2.h"
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 343))->head;
            # 349 "./comelang2.h"
            # 345 "./comelang2.h"
            if(_if_conditional230=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 345))->it,            _if_conditional230) {
                # 346 "./comelang2.h"
                __result124__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                return __result124__;
            }
            # 349 "./comelang2.h"
            # 350 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b131=memset(&result_172,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b131);
            # 351 "./comelang2.h"
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
            # 373 "./comelang2.h"
            __result126__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
            return __result126__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional231;
struct CVALUE* result_174;
void* __exception_result_var_b134;
struct CVALUE* __result127__;
_Bool _if_conditional232;
struct CVALUE* __result128__;
struct CVALUE* result_175;
void* __exception_result_var_b135;
struct CVALUE* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_174, 0, sizeof(struct CVALUE*));
memset(&result_175, 0, sizeof(struct CVALUE*));
            # 361 "./comelang2.h"
            # 355 "./comelang2.h"
            if(_if_conditional231=self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),            _if_conditional231) {
                # 356 "./comelang2.h"
                # 357 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b134=memset(&result_174,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b134);
                # 358 "./comelang2.h"
                __result127__ = __result_obj__ = result_174;
                return __result127__;
            }
            # 361 "./comelang2.h"
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
            # 367 "./comelang2.h"
            # 363 "./comelang2.h"
            if(_if_conditional232=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 363))->it,            _if_conditional232) {
                # 364 "./comelang2.h"
                __result128__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                return __result128__;
            }
            # 367 "./comelang2.h"
            # 368 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b135=memset(&result_175,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b135);
            # 369 "./comelang2.h"
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
                # 417 "./comelang2.h"
                __result130__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 417))->len;
                return __result130__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_182;
void* __exception_result_var_b151;
unsigned int __exception_result_var_b152;
unsigned int hash_183;
unsigned int it_184;
_Bool _while_condtional26;
_Bool _if_conditional236;
void* right_value152;
struct optional$2boolbool* __exception_result_var_b153;
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
                # 1591 "./comelang2.h"
                # 1592 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b151=memset(&default_value_182,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b151);
                # 1594 "./comelang2.h"
                hash_183=(come_push_stackframe("./comelang2.h", 1594),__exception_result_var_b152=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1594))), come_pop_stackframe(), __exception_result_var_b152)%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1594))->size;
                # 1595 "./comelang2.h"
                it_184=hash_183;
                # 1619 "./comelang2.h"
                while(_while_condtional26=(_Bool)1,                _while_condtional26) {
                    # 1617 "./comelang2.h"
                    # 1598 "./comelang2.h"
                    if(_if_conditional236=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1598))->item_existance[it_184],                    _if_conditional236) {
                        # 1605 "./comelang2.h"
                        # 1600 "./comelang2.h"
                        if(_if_conditional237=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b153=((struct optional$2boolbool*)(right_value152=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_184], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b153)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152),
                        (right_value152 && right_value152 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value152, 
                        __freed_obj__ = 0, 
                        _if_conditional237) {
                            # 1602 "./comelang2.h"
                            __result131__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1602))->items[it_184];
                            return __result131__;
                        }
                        # 1605 "./comelang2.h"
                        it_184++;
                        # 1613 "./comelang2.h"
                        # 1607 "./comelang2.h"
                        if(_if_conditional238=it_184>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->size,                        _if_conditional238) {
                            # 1608 "./comelang2.h"
                            it_184=0;
                        }
                        else {
                            # 1613 "./comelang2.h"
                            # 1610 "./comelang2.h"
                            if(_if_conditional239=it_184==hash_183,                            _if_conditional239) {
                                # 1611 "./comelang2.h"
                                __result132__ = __result_obj__ = default_value_182;
                                return __result132__;
                            }
                        }
                    }
                    else {
                        # 1615 "./comelang2.h"
                        __result133__ = __result_obj__ = default_value_182;
                        return __result133__;
                    }
                }
                # 1619 "./comelang2.h"
                __result135__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1619), ((struct optional$2sFunpbool*)(right_value154=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value153=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1619))),default_value_182,(_Bool)0))));
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
                    # 40 "./comelang2.h"
                    ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                    # 41 "./comelang2.h"
                    ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                    # 43 "./comelang2.h"
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
unsigned int __exception_result_var_b156;
unsigned int hash_185;
unsigned int it_186;
_Bool _while_condtional27;
_Bool _if_conditional242;
void* right_value156;
struct optional$2boolbool* __exception_result_var_b157;
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
                # 1265 "./comelang2.h"
                hash_185=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b156=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b156)%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1265))->size;
                # 1266 "./comelang2.h"
                it_186=hash_185;
                # 1290 "./comelang2.h"
                while(_while_condtional27=(_Bool)1,                _while_condtional27) {
                    # 1288 "./comelang2.h"
                    # 1269 "./comelang2.h"
                    if(_if_conditional242=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_186],                    _if_conditional242) {
                        # 1276 "./comelang2.h"
                        # 1271 "./comelang2.h"
                        if(_if_conditional243=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b157=((struct optional$2boolbool*)(right_value156=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_186], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b157)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156),
                        (right_value156 && right_value156 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value156, 
                        __freed_obj__ = 0, 
                        _if_conditional243) {
                            # 1273 "./comelang2.h"
                            __result136__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1273))->items[it_186];
                            return __result136__;
                        }
                        # 1276 "./comelang2.h"
                        it_186++;
                        # 1284 "./comelang2.h"
                        # 1278 "./comelang2.h"
                        if(_if_conditional244=it_186>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1278))->size,                        _if_conditional244) {
                            # 1279 "./comelang2.h"
                            it_186=0;
                        }
                        else {
                            # 1284 "./comelang2.h"
                            # 1281 "./comelang2.h"
                            if(_if_conditional245=it_186==hash_185,                            _if_conditional245) {
                                # 1282 "./comelang2.h"
                                __result137__ = __result_obj__ = default_value;
                                return __result137__;
                            }
                        }
                    }
                    else {
                        # 1286 "./comelang2.h"
                        __result138__ = __result_obj__ = default_value;
                        return __result138__;
                    }
                }
                # 1290 "./comelang2.h"
                __result139__ = __result_obj__ = default_value;
                return __result139__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional248;
struct sType* result_191;
void* __exception_result_var_b164;
struct sType* __result141__;
_Bool _if_conditional249;
struct sType* __result142__;
struct sType* result_192;
void* __exception_result_var_b165;
struct sType* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_191, 0, sizeof(struct sType*));
memset(&result_192, 0, sizeof(struct sType*));
            # 343 "./comelang2.h"
            # 338 "./comelang2.h"
            if(_if_conditional248=self==((void*)0),            _if_conditional248) {
                # 339 "./comelang2.h"
                # 340 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b164=memset(&result_191,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b164);
                # 341 "./comelang2.h"
                __result141__ = __result_obj__ = result_191;
                return __result141__;
            }
            # 343 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 343))->head;
            # 349 "./comelang2.h"
            # 345 "./comelang2.h"
            if(_if_conditional249=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 345))->it,            _if_conditional249) {
                # 346 "./comelang2.h"
                __result142__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                return __result142__;
            }
            # 349 "./comelang2.h"
            # 350 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b165=memset(&result_192,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b165);
            # 351 "./comelang2.h"
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
            # 373 "./comelang2.h"
            __result144__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
            return __result144__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional250;
struct sType* result_194;
void* __exception_result_var_b168;
struct sType* __result145__;
_Bool _if_conditional251;
struct sType* __result146__;
struct sType* result_195;
void* __exception_result_var_b169;
struct sType* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_194, 0, sizeof(struct sType*));
memset(&result_195, 0, sizeof(struct sType*));
            # 361 "./comelang2.h"
            # 355 "./comelang2.h"
            if(_if_conditional250=self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),            _if_conditional250) {
                # 356 "./comelang2.h"
                # 357 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b168=memset(&result_194,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b168);
                # 358 "./comelang2.h"
                __result145__ = __result_obj__ = result_194;
                return __result145__;
            }
            # 361 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
            # 367 "./comelang2.h"
            # 363 "./comelang2.h"
            if(_if_conditional251=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 363))->it,            _if_conditional251) {
                # 364 "./comelang2.h"
                __result146__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                return __result146__;
            }
            # 367 "./comelang2.h"
            # 368 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b169=memset(&result_195,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b169);
            # 369 "./comelang2.h"
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
                    # 309 "./comelang2.h"
                    # 278 "./comelang2.h"
                    if(_if_conditional253=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->len==0,                    _if_conditional253) {
                        # 279 "./comelang2.h"
                        litem_196=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value163=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value163;
                        __freed_obj__ = 0;
                        # 281 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(litem_196, "./comelang2.h", 281))->prev=((void*)0);
                        # 282 "./comelang2.h"
                        ((struct list_item$1sTypeph*)come_null_check(litem_196, "./comelang2.h", 282))->next=((void*)0);
                        # 283 "./comelang2.h"
                        __dec_obj59=((struct list_item$1sTypeph*)come_null_check(litem_196, "./comelang2.h", 283))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_196, "./comelang2.h", 283))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                        # 285 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_196;
                        # 286 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 286))->head=litem_196;
                    }
                    else {
                        # 309 "./comelang2.h"
                        # 288 "./comelang2.h"
                        if(_if_conditional254=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->len==1,                        _if_conditional254) {
                            # 289 "./comelang2.h"
                            litem_197=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value164=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                            if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value164;
                            __freed_obj__ = 0;
                            # 291 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(litem_197, "./comelang2.h", 291))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 291))->head;
                            # 292 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(litem_197, "./comelang2.h", 292))->next=((void*)0);
                            # 293 "./comelang2.h"
                            __dec_obj60=((struct list_item$1sTypeph*)come_null_check(litem_197, "./comelang2.h", 293))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_197, "./comelang2.h", 293))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 295 "./comelang2.h"
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_197;
                            # 296 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_197;
                        }
                        else {
                            # 299 "./comelang2.h"
                            litem_198=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value165=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value165;
                            __freed_obj__ = 0;
                            # 301 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(litem_198, "./comelang2.h", 301))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 301))->tail;
                            # 302 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(litem_198, "./comelang2.h", 302))->next=((void*)0);
                            # 303 "./comelang2.h"
                            __dec_obj61=((struct list_item$1sTypeph*)come_null_check(litem_198, "./comelang2.h", 303))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_198, "./comelang2.h", 303))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 305 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_198;
                            # 306 "./comelang2.h"
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_198;
                        }
                    }
                    # 309 "./comelang2.h"
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 309))->len++;
                    # 311 "./comelang2.h"
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
struct list$1charp* __exception_result_var_b175;
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
            # 1129 "./comelang2.h"
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1129))->keys=(char**)come_increment_ref_count(((char**)(right_value171=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1129))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
            if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value171;
            __freed_obj__ = 0;
            # 1130 "./comelang2.h"
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1130))->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value172=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1130))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value172);
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value172;
            __freed_obj__ = 0;
            # 1131 "./comelang2.h"
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1131))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value173=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1131))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value173);
            if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value173;
            __freed_obj__ = 0;
            # 1138 "./comelang2.h"
            for(
            i_201=0 ,            0;            _for_condtionalA12=            i_201<1024 ,            _for_condtionalA12;            i_201++ ,            0            ){
                # 1135 "./comelang2.h"
                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1135))->item_existance[i_201]=(_Bool)0;
            }
            # 1138 "./comelang2.h"
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1138))->size=1024;
            # 1139 "./comelang2.h"
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1139))->len=0;
            # 1141 "./comelang2.h"
            __dec_obj62=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1141))->key_list;
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1141))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 1141),__exception_result_var_b175=((struct list$1charp*)(right_value175=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value174=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1141))))))), come_pop_stackframe(), __exception_result_var_b175));
            if(__dec_obj62) { come_call_finalizer(list$1charp_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value174);
            if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value174;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value175);
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value175;
            __freed_obj__ = 0;
            # 1143 "./comelang2.h"
            ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1143))->it=0;
            # 1145 "./comelang2.h"
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
                # 157 "./comelang2.h"
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                # 158 "./comelang2.h"
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                # 159 "./comelang2.h"
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 159))->len=0;
                # 161 "./comelang2.h"
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
                # 1179 "./comelang2.h"
                for(
                i_202=0 ,                0;                _for_condtionalA13=                i_202<((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1172))->size ,                _for_condtionalA13;                i_202++ ,                0                ){
                    # 1178 "./comelang2.h"
                    # 1173 "./comelang2.h"
                    if(_if_conditional255=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1173))->item_existance[i_202],                    _if_conditional255) {
                        # 1177 "./comelang2.h"
                        # 1174 "./comelang2.h"
                        if(_if_conditional256=1,                        _if_conditional256) {
                            # 1175 "./comelang2.h"
                            if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1175))->items[i_202] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1175))->items[i_202], (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                    }
                }
                # 1179 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1179),come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1179))->items),come_pop_stackframe());
                # 1188 "./comelang2.h"
                for(
                i_203=0 ,                0;                _for_condtionalA14=                i_203<((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1181))->size ,                _for_condtionalA14;                i_203++ ,                0                ){
                    # 1187 "./comelang2.h"
                    # 1182 "./comelang2.h"
                    if(_if_conditional257=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1182))->item_existance[i_203],                    _if_conditional257) {
                        # 1186 "./comelang2.h"
                        # 1183 "./comelang2.h"
                        if(_if_conditional258=1,                        _if_conditional258) {
                            # 1184 "./comelang2.h"
                            if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1184))->keys[i_203] && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1184))->keys[i_203] = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1184))->keys[i_203], (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
                # 1188 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1188),come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1188))->keys),come_pop_stackframe());
                # 1190 "./comelang2.h"
                if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1190))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1190))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 1192 "./comelang2.h"
                if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1192))->item_existance && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1192))->item_existance = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1192))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
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
void* __exception_result_var_b184;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_210, 0, sizeof(struct list_item$1charph*));
memset(&i_211, 0, sizeof(int));
memset(&default_value_212, 0, sizeof(char*));
                            # 745 "./comelang2.h"
                            # 741 "./comelang2.h"
                            if(_if_conditional262=position<0,                            _if_conditional262) {
                                # 742 "./comelang2.h"
                                position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 742))->len;
                            }
                            # 745 "./comelang2.h"
                            it_210=((struct list$1charph*)come_null_check(self, "./comelang2.h", 745))->head;
                            # 746 "./comelang2.h"
                            i_211=0;
                            # 753 "./comelang2.h"
                            while(_while_condtional28=it_210!=((void*)0),                            _while_condtional28) {
                                # 751 "./comelang2.h"
                                # 748 "./comelang2.h"
                                if(_if_conditional263=position==i_211,                                _if_conditional263) {
                                    # 749 "./comelang2.h"
                                    __result151__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(it_210, "./comelang2.h", 749))->item;
                                    return __result151__;
                                }
                                # 751 "./comelang2.h"
                                it_210=((struct list_item$1charph*)come_null_check(it_210, "./comelang2.h", 751))->next;
                                # 752 "./comelang2.h"
                                i_211++;
                            }
                            # 755 "./comelang2.h"
                            # 756 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 756),__exception_result_var_b184=memset(&default_value_212,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b184);
                            # 757 "./comelang2.h"
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
void* __exception_result_var_b189;
char* __result154__;
_Bool _if_conditional267;
char* __result155__;
char* result_217;
void* __exception_result_var_b190;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_216, 0, sizeof(char*));
memset(&result_217, 0, sizeof(char*));
                        # 343 "./comelang2.h"
                        # 338 "./comelang2.h"
                        if(_if_conditional266=self==((void*)0),                        _if_conditional266) {
                            # 339 "./comelang2.h"
                            # 340 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b189=memset(&result_216,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b189);
                            # 341 "./comelang2.h"
                            __result154__ = __result_obj__ = result_216;
                            return __result154__;
                        }
                        # 343 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 343))->head;
                        # 349 "./comelang2.h"
                        # 345 "./comelang2.h"
                        if(_if_conditional267=((struct list$1charph*)come_null_check(self, "./comelang2.h", 345))->it,                        _if_conditional267) {
                            # 346 "./comelang2.h"
                            __result155__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                            return __result155__;
                        }
                        # 349 "./comelang2.h"
                        # 350 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b190=memset(&result_217,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b190);
                        # 351 "./comelang2.h"
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
                        # 373 "./comelang2.h"
                        __result157__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
                        return __result157__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional268;
char* result_219;
void* __exception_result_var_b193;
char* __result158__;
_Bool _if_conditional269;
char* __result159__;
char* result_220;
void* __exception_result_var_b194;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_219, 0, sizeof(char*));
memset(&result_220, 0, sizeof(char*));
                        # 361 "./comelang2.h"
                        # 355 "./comelang2.h"
                        if(_if_conditional268=self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),                        _if_conditional268) {
                            # 356 "./comelang2.h"
                            # 357 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b193=memset(&result_219,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b193);
                            # 358 "./comelang2.h"
                            __result158__ = __result_obj__ = result_219;
                            return __result158__;
                        }
                        # 361 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
                        # 367 "./comelang2.h"
                        # 363 "./comelang2.h"
                        if(_if_conditional269=((struct list$1charph*)come_null_check(self, "./comelang2.h", 363))->it,                        _if_conditional269) {
                            # 364 "./comelang2.h"
                            __result159__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                            return __result159__;
                        }
                        # 367 "./comelang2.h"
                        # 368 "./comelang2.h"
                        (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b194=memset(&result_220,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b194);
                        # 369 "./comelang2.h"
                        __result160__ = __result_obj__ = result_220;
                        return __result160__;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional276;
unsigned int __exception_result_var_b222;
unsigned int hash_238;
unsigned int it_239;
_Bool _while_condtional31;
_Bool _if_conditional288;
void* right_value191;
struct optional$2boolbool* __exception_result_var_b223;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct list$1charp* __exception_result_var_b224;
struct list$1charp* __exception_result_var_b225;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
int __exception_result_var_b226;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool same_key_exist_240;
char* __exception_result_var_b227;
char* it2_241;
_Bool __exception_result_var_b228;
_Bool _for_condtionalA18;
char* __exception_result_var_b229;
void* right_value192;
struct optional$2boolbool* __exception_result_var_b230;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct list$1charp* __exception_result_var_b231;
struct map$2charphCVALUEph* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_238, 0, sizeof(unsigned int));
memset(&it_239, 0, sizeof(unsigned int));
memset(&right_value191, 0, sizeof(void*));
memset(&same_key_exist_240, 0, sizeof(_Bool));
memset(&it2_241, 0, sizeof(char*));
memset(&right_value192, 0, sizeof(void*));
                        # 1432 "./comelang2.h"
                        # 1429 "./comelang2.h"
                        if(_if_conditional276=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1429))->len*10>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1429))->size,                        _if_conditional276) {
                            # 1430 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1430),map$2charphCVALUEph_rehash(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1430))),come_pop_stackframe());
                        }
                        # 1432 "./comelang2.h"
                        hash_238=(come_push_stackframe("./comelang2.h", 1432),__exception_result_var_b222=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1432))), come_pop_stackframe(), __exception_result_var_b222)%((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1432))->size;
                        # 1433 "./comelang2.h"
                        it_239=hash_238;
                        # 1491 "./comelang2.h"
                        while(_while_condtional31=(_Bool)1,                        _while_condtional31) {
                            # 1489 "./comelang2.h"
                            # 1436 "./comelang2.h"
                            if(_if_conditional288=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1436))->item_existance[it_239],                            _if_conditional288) {
                                # 1459 "./comelang2.h"
                                # 1438 "./comelang2.h"
                                if(_if_conditional289=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1438),__exception_result_var_b223=((struct optional$2boolbool*)(right_value191=string_equals(((char*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_239], "./comelang2.h", 1438)),key))), come_pop_stackframe(), __exception_result_var_b223)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191),
                                (right_value191 && right_value191 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value191, 
                                __freed_obj__ = 0, 
                                _if_conditional289) {
                                    # 1449 "./comelang2.h"
                                    # 1440 "./comelang2.h"
                                    if(_if_conditional290=1,                                    _if_conditional290) {
                                        # 1441 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1441),__exception_result_var_b224=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1441))->key_list, "./comelang2.h", 1441)),((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1441))->keys[it_239]), come_pop_stackframe(), __exception_result_var_b224);
                                        # 1442 "./comelang2.h"
                                        if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_239] && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_239] = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1442))->keys[it_239], (void*)0, (void*)0, 0, 0, 0); }
                                        # 1443 "./comelang2.h"
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1443))->keys[it_239]=(char*)come_increment_ref_count(key);
                                    }
                                    else {
                                        # 1446 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1446),__exception_result_var_b225=list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1446))->key_list, "./comelang2.h", 1446)),((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1446))->keys[it_239]), come_pop_stackframe(), __exception_result_var_b225);
                                        # 1447 "./comelang2.h"
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1447))->keys[it_239]=key;
                                    }
                                    # 1456 "./comelang2.h"
                                    # 1449 "./comelang2.h"
                                    if(_if_conditional291=1,                                    _if_conditional291) {
                                        # 1450 "./comelang2.h"
                                        if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1450))->items[it_239] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1450))->items[it_239], (void*)0, (void*)0, 0, 0, 0, 0); }
                                        # 1451 "./comelang2.h"
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1451))->items[it_239]=(struct CVALUE*)come_increment_ref_count(item);
                                    }
                                    else {
                                        # 1454 "./comelang2.h"
                                        ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1454))->items[it_239]=item;
                                    }
                                    # 1456 "./comelang2.h"
                                    break;
                                }
                                # 1459 "./comelang2.h"
                                it_239++;
                                # 1469 "./comelang2.h"
                                # 1461 "./comelang2.h"
                                if(_if_conditional292=it_239>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1461))->size,                                _if_conditional292) {
                                    # 1462 "./comelang2.h"
                                    it_239=0;
                                }
                                else {
                                    # 1469 "./comelang2.h"
                                    # 1464 "./comelang2.h"
                                    if(_if_conditional293=it_239==hash_238,                                    _if_conditional293) {
                                        # 1465 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1465),__exception_result_var_b226=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b226);
                                        # 1466 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1466),stackframe(),come_pop_stackframe());
                                        # 1467 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1467),exit(2),come_pop_stackframe());
                                    }
                                }
                            }
                            else {
                                # 1471 "./comelang2.h"
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1471))->item_existance[it_239]=(_Bool)1;
                                # 1478 "./comelang2.h"
                                # 1472 "./comelang2.h"
                                if(_if_conditional294=1,                                _if_conditional294) {
                                    # 1473 "./comelang2.h"
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1473))->keys[it_239]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    # 1476 "./comelang2.h"
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1476))->keys[it_239]=key;
                                }
                                # 1485 "./comelang2.h"
                                # 1478 "./comelang2.h"
                                if(_if_conditional295=1,                                _if_conditional295) {
                                    # 1479 "./comelang2.h"
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1479))->items[it_239]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    # 1482 "./comelang2.h"
                                    ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1482))->items[it_239]=item;
                                }
                                # 1485 "./comelang2.h"
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1485))->len++;
                                # 1487 "./comelang2.h"
                                break;
                            }
                        }
                        # 1491 "./comelang2.h"
                        same_key_exist_240=(_Bool)0;
                        # 1499 "./comelang2.h"
                        for(
                        it2_241=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b227=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b227) ,                        0;                        _for_condtionalA18=                        !(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b228=list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b228) ,                        _for_condtionalA18;                        it2_241=(come_push_stackframe("./comelang2.h", 1492),__exception_result_var_b229=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1492))->key_list, "./comelang2.h", 1492))), come_pop_stackframe(), __exception_result_var_b229) ,                        0                        ){
                            # 1497 "./comelang2.h"
                            # 1494 "./comelang2.h"
                            if(_if_conditional296=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1494),__exception_result_var_b230=((struct optional$2boolbool*)(right_value192=string_equals(((char*)come_null_check(it2_241, "./comelang2.h", 1494)),key))), come_pop_stackframe(), __exception_result_var_b230)),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192),
                            (right_value192 && right_value192 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value192, 
                            __freed_obj__ = 0, 
                            _if_conditional296) {
                                # 1495 "./comelang2.h"
                                same_key_exist_240=(_Bool)1;
                            }
                        }
                        # 1503 "./comelang2.h"
                        # 1499 "./comelang2.h"
                        if(_if_conditional297=!same_key_exist_240,                        _if_conditional297) {
                            # 1500 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 1500),__exception_result_var_b231=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1500))->key_list, "./comelang2.h", 1500)),key), come_pop_stackframe(), __exception_result_var_b231);
                        }
                        # 1503 "./comelang2.h"
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
char* __exception_result_var_b210;
char* it_228;
_Bool __exception_result_var_b211;
_Bool _for_condtionalA17;
char* __exception_result_var_b214;
struct CVALUE* default_value_231;
void* __exception_result_var_b215;
struct CVALUE* __exception_result_var_b218;
struct CVALUE* it2_234;
unsigned int __exception_result_var_b219;
unsigned int hash_235;
int n_236;
_Bool _while_condtional30;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
int __exception_result_var_b220;
struct CVALUE* default_value_237;
struct CVALUE* __exception_result_var_b221;
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
                                # 1376 "./comelang2.h"
                                size_221=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1376))->size*10;
                                # 1377 "./comelang2.h"
                                keys_222=(char**)come_increment_ref_count(((char**)(right_value187=(char**)come_calloc(1, sizeof(char*)*(1*(size_221)), "./comelang2.h", 1377))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value187;
                                __freed_obj__ = 0;
                                # 1378 "./comelang2.h"
                                items_223=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value188=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_221)), "./comelang2.h", 1378))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value188);
                                if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value188;
                                __freed_obj__ = 0;
                                # 1379 "./comelang2.h"
                                item_existance_224=(_Bool*)come_increment_ref_count(((_Bool*)(right_value189=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_221)), "./comelang2.h", 1379))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value189);
                                if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value189;
                                __freed_obj__ = 0;
                                # 1381 "./comelang2.h"
                                len_225=0;
                                # 1416 "./comelang2.h"
                                for(
                                it_228=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b210=map$2charphCVALUEph_begin(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b210) ,                                0;                                _for_condtionalA17=                                !(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b211=map$2charphCVALUEph_end(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b211) ,                                _for_condtionalA17;                                it_228=(come_push_stackframe("./comelang2.h", 1383),__exception_result_var_b214=map$2charphCVALUEph_next(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1383))), come_pop_stackframe(), __exception_result_var_b214) ,                                0                                ){
                                    # 1384 "./comelang2.h"
                                    # 1385 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 1385),__exception_result_var_b215=memset(&default_value_231,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b215);
                                    # 1386 "./comelang2.h"
                                    it2_234=(come_push_stackframe("./comelang2.h", 1386),__exception_result_var_b218=map$2charphCVALUEph_at(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1386)),it_228,default_value_231), come_pop_stackframe(), __exception_result_var_b218);
                                    # 1387 "./comelang2.h"
                                    hash_235=(come_push_stackframe("./comelang2.h", 1387),__exception_result_var_b219=string_get_hash_key(((char*)come_null_check(it_228, "./comelang2.h", 1387))), come_pop_stackframe(), __exception_result_var_b219)%size_221;
                                    # 1388 "./comelang2.h"
                                    n_236=hash_235;
                                    # 1414 "./comelang2.h"
                                    while(_while_condtional30=(_Bool)1,                                    _while_condtional30) {
                                        # 1413 "./comelang2.h"
                                        # 1391 "./comelang2.h"
                                        if(_if_conditional285=item_existance_224[n_236],                                        _if_conditional285) {
                                            # 1393 "./comelang2.h"
                                            n_236++;
                                            # 1403 "./comelang2.h"
                                            # 1395 "./comelang2.h"
                                            if(_if_conditional286=n_236>=size_221,                                            _if_conditional286) {
                                                # 1396 "./comelang2.h"
                                                n_236=0;
                                            }
                                            else {
                                                # 1403 "./comelang2.h"
                                                # 1398 "./comelang2.h"
                                                if(_if_conditional287=n_236==hash_235,                                                _if_conditional287) {
                                                    # 1399 "./comelang2.h"
                                                    (come_push_stackframe("./comelang2.h", 1399),__exception_result_var_b220=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b220);
                                                    # 1400 "./comelang2.h"
                                                    (come_push_stackframe("./comelang2.h", 1400),stackframe(),come_pop_stackframe());
                                                    # 1401 "./comelang2.h"
                                                    (come_push_stackframe("./comelang2.h", 1401),exit(2),come_pop_stackframe());
                                                }
                                            }
                                        }
                                        else {
                                            # 1405 "./comelang2.h"
                                            item_existance_224[n_236]=(_Bool)1;
                                            # 1406 "./comelang2.h"
                                            keys_222[n_236]=it_228;
                                            # 1407 "./comelang2.h"
                                            # 1408 "./comelang2.h"
                                            items_223[n_236]=(come_push_stackframe("./comelang2.h", 1408),__exception_result_var_b221=map$2charphCVALUEph_at(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1408)),it_228,default_value_237), come_pop_stackframe(), __exception_result_var_b221);
                                            # 1410 "./comelang2.h"
                                            len_225++;
                                            # 1411 "./comelang2.h"
                                            break;
                                        }
                                    }
                                }
                                # 1416 "./comelang2.h"
                                (come_push_stackframe("./comelang2.h", 1416),come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1416))->items),come_pop_stackframe());
                                # 1417 "./comelang2.h"
                                if(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1417))->item_existance && !__freed_obj__) { ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1417))->item_existance = come_decrement_ref_count(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1417))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                # 1418 "./comelang2.h"
                                (come_push_stackframe("./comelang2.h", 1418),come_free_object((char*)((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1418))->keys),come_pop_stackframe());
                                # 1420 "./comelang2.h"
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1420))->keys=keys_222;
                                # 1421 "./comelang2.h"
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1421))->items=items_223;
                                # 1422 "./comelang2.h"
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1422))->item_existance=item_existance_224;
                                # 1424 "./comelang2.h"
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1424))->size=size_221;
                                # 1425 "./comelang2.h"
                                ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1425))->len=len_225;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional277;
char* result_226;
void* __exception_result_var_b208;
char* __result161__;
_Bool _if_conditional278;
char* __result162__;
char* result_227;
void* __exception_result_var_b209;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_226, 0, sizeof(char*));
memset(&result_227, 0, sizeof(char*));
                                    # 1343 "./comelang2.h"
                                    # 1338 "./comelang2.h"
                                    if(_if_conditional277=self==((void*)0),                                    _if_conditional277) {
                                        # 1339 "./comelang2.h"
                                        # 1340 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1340),__exception_result_var_b208=memset(&result_226,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b208);
                                        # 1341 "./comelang2.h"
                                        __result161__ = __result_obj__ = result_226;
                                        return __result161__;
                                    }
                                    # 1343 "./comelang2.h"
                                    ((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->it=((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->head;
                                    # 1349 "./comelang2.h"
                                    # 1345 "./comelang2.h"
                                    if(_if_conditional278=((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1345))->key_list, "./comelang2.h", 1345))->it,                                    _if_conditional278) {
                                        # 1346 "./comelang2.h"
                                        __result162__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1346))->key_list, "./comelang2.h", 1346))->it, "./comelang2.h", 1346))->item;
                                        return __result162__;
                                    }
                                    # 1349 "./comelang2.h"
                                    # 1350 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 1350),__exception_result_var_b209=memset(&result_227,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b209);
                                    # 1351 "./comelang2.h"
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
                                    # 1372 "./comelang2.h"
                                    __result164__ = self==((void*)0)||((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1372))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1372))->key_list, "./comelang2.h", 1372))->it==((void*)0);
                                    return __result164__;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional279;
char* result_229;
void* __exception_result_var_b212;
char* __result165__;
_Bool _if_conditional280;
char* __result166__;
char* result_230;
void* __exception_result_var_b213;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_229, 0, sizeof(char*));
memset(&result_230, 0, sizeof(char*));
                                    # 1360 "./comelang2.h"
                                    # 1355 "./comelang2.h"
                                    if(_if_conditional279=self==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1355))->key_list, "./comelang2.h", 1355))->it==((void*)0),                                    _if_conditional279) {
                                        # 1356 "./comelang2.h"
                                        # 1357 "./comelang2.h"
                                        (come_push_stackframe("./comelang2.h", 1357),__exception_result_var_b212=memset(&result_229,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b212);
                                        # 1358 "./comelang2.h"
                                        __result165__ = __result_obj__ = result_229;
                                        return __result165__;
                                    }
                                    # 1360 "./comelang2.h"
                                    ((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it, "./comelang2.h", 1360))->next;
                                    # 1366 "./comelang2.h"
                                    # 1362 "./comelang2.h"
                                    if(_if_conditional280=((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1362))->key_list, "./comelang2.h", 1362))->it,                                    _if_conditional280) {
                                        # 1363 "./comelang2.h"
                                        __result166__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1363))->key_list, "./comelang2.h", 1363))->it, "./comelang2.h", 1363))->item;
                                        return __result166__;
                                    }
                                    # 1366 "./comelang2.h"
                                    # 1367 "./comelang2.h"
                                    (come_push_stackframe("./comelang2.h", 1367),__exception_result_var_b213=memset(&result_230,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b213);
                                    # 1368 "./comelang2.h"
                                    __result167__ = __result_obj__ = result_230;
                                    return __result167__;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b216;
unsigned int hash_232;
unsigned int it_233;
_Bool _while_condtional29;
_Bool _if_conditional281;
void* right_value190;
struct optional$2boolbool* __exception_result_var_b217;
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
                                        # 1265 "./comelang2.h"
                                        hash_232=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b216=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b216)%((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1265))->size;
                                        # 1266 "./comelang2.h"
                                        it_233=hash_232;
                                        # 1290 "./comelang2.h"
                                        while(_while_condtional29=(_Bool)1,                                        _while_condtional29) {
                                            # 1288 "./comelang2.h"
                                            # 1269 "./comelang2.h"
                                            if(_if_conditional281=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_233],                                            _if_conditional281) {
                                                # 1276 "./comelang2.h"
                                                # 1271 "./comelang2.h"
                                                if(_if_conditional282=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b217=((struct optional$2boolbool*)(right_value190=string_equals(((char*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_233], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b217)),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190),
                                                (right_value190 && right_value190 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value190, 
                                                __freed_obj__ = 0, 
                                                _if_conditional282) {
                                                    # 1273 "./comelang2.h"
                                                    __result168__ = __result_obj__ = ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1273))->items[it_233];
                                                    return __result168__;
                                                }
                                                # 1276 "./comelang2.h"
                                                it_233++;
                                                # 1284 "./comelang2.h"
                                                # 1278 "./comelang2.h"
                                                if(_if_conditional283=it_233>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1278))->size,                                                _if_conditional283) {
                                                    # 1279 "./comelang2.h"
                                                    it_233=0;
                                                }
                                                else {
                                                    # 1284 "./comelang2.h"
                                                    # 1281 "./comelang2.h"
                                                    if(_if_conditional284=it_233==hash_232,                                                    _if_conditional284) {
                                                        # 1282 "./comelang2.h"
                                                        __result169__ = __result_obj__ = default_value;
                                                        return __result169__;
                                                    }
                                                }
                                            }
                                            else {
                                                # 1286 "./comelang2.h"
                                                __result170__ = __result_obj__ = default_value;
                                                return __result170__;
                                            }
                                        }
                                        # 1290 "./comelang2.h"
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
            # 417 "./comelang2.h"
            __result173__ = ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 417))->len;
            return __result173__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 417 "./comelang2.h"
            __result174__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 417))->len;
            return __result174__;
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* default_value_244;
void* __exception_result_var_b239;
unsigned int __exception_result_var_b240;
unsigned int hash_245;
unsigned int it_246;
_Bool _while_condtional32;
_Bool _if_conditional299;
void* right_value195;
struct optional$2boolbool* __exception_result_var_b241;
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
                    # 1591 "./comelang2.h"
                    # 1592 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b239=memset(&default_value_244,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b239);
                    # 1594 "./comelang2.h"
                    hash_245=(come_push_stackframe("./comelang2.h", 1594),__exception_result_var_b240=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1594))), come_pop_stackframe(), __exception_result_var_b240)%((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1594))->size;
                    # 1595 "./comelang2.h"
                    it_246=hash_245;
                    # 1619 "./comelang2.h"
                    while(_while_condtional32=(_Bool)1,                    _while_condtional32) {
                        # 1617 "./comelang2.h"
                        # 1598 "./comelang2.h"
                        if(_if_conditional299=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1598))->item_existance[it_246],                        _if_conditional299) {
                            # 1605 "./comelang2.h"
                            # 1600 "./comelang2.h"
                            if(_if_conditional300=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b241=((struct optional$2boolbool*)(right_value195=string_equals(((char*)come_null_check(((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_246], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b241)),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195),
                            (right_value195 && right_value195 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value195, 
                            __freed_obj__ = 0, 
                            _if_conditional300) {
                                # 1602 "./comelang2.h"
                                __result175__ = __result_obj__ = ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1602))->items[it_246];
                                return __result175__;
                            }
                            # 1605 "./comelang2.h"
                            it_246++;
                            # 1613 "./comelang2.h"
                            # 1607 "./comelang2.h"
                            if(_if_conditional301=it_246>=((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1607))->size,                            _if_conditional301) {
                                # 1608 "./comelang2.h"
                                it_246=0;
                            }
                            else {
                                # 1613 "./comelang2.h"
                                # 1610 "./comelang2.h"
                                if(_if_conditional302=it_246==hash_245,                                _if_conditional302) {
                                    # 1611 "./comelang2.h"
                                    __result176__ = __result_obj__ = default_value_244;
                                    return __result176__;
                                }
                            }
                        }
                        else {
                            # 1615 "./comelang2.h"
                            __result177__ = __result_obj__ = default_value_244;
                            return __result177__;
                        }
                    }
                    # 1619 "./comelang2.h"
                    __result179__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1619), ((struct optional$2CVALUEpbool*)(right_value197=optional$2CVALUEpbool_initialize(((struct optional$2CVALUEpbool*)(right_value196=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1619))),default_value_244,(_Bool)0))));
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
                        # 40 "./comelang2.h"
                        ((struct optional$2CVALUEpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                        # 41 "./comelang2.h"
                        ((struct optional$2CVALUEpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                        # 43 "./comelang2.h"
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
            # 1334 "./comelang2.h"
            __result182__ = ((struct map$2charphCVALUEph*)come_null_check(self, "./comelang2.h", 1334))->len;
            return __result182__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 417 "./comelang2.h"
                __result183__ = ((struct list$1charph*)come_null_check(self, "./comelang2.h", 417))->len;
                return __result183__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
_Bool _if_conditional311;
struct list$1CVALUEph* __exception_result_var_b259;
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
                        # 642 "./comelang2.h"
                        # 638 "./comelang2.h"
                        if(_if_conditional310=position<0,                        _if_conditional310) {
                            # 639 "./comelang2.h"
                            position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 639))->len;
                        }
                        # 647 "./comelang2.h"
                        # 642 "./comelang2.h"
                        if(_if_conditional311=position>=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 642))->len,                        _if_conditional311) {
                            # 643 "./comelang2.h"
                            (come_push_stackframe("./comelang2.h", 643),__exception_result_var_b259=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 643)),(struct CVALUE*)come_increment_ref_count(item)), come_pop_stackframe(), __exception_result_var_b259);
                            # 644 "./comelang2.h"
                            __result184__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result184__;
                        }
                        # 647 "./comelang2.h"
                        it_256=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 647))->head;
                        # 648 "./comelang2.h"
                        i_257=0;
                        # 658 "./comelang2.h"
                        while(_while_condtional33=it_256!=((void*)0),                        _while_condtional33) {
                            # 654 "./comelang2.h"
                            # 650 "./comelang2.h"
                            if(_if_conditional312=position==i_257,                            _if_conditional312) {
                                # 651 "./comelang2.h"
                                __dec_obj65=((struct list_item$1CVALUEph*)come_null_check(it_256, "./comelang2.h", 651))->item;
                                ((struct list_item$1CVALUEph*)come_null_check(it_256, "./comelang2.h", 651))->item=(struct CVALUE*)come_increment_ref_count(item);
                                if(__dec_obj65) { come_call_finalizer(CVALUE_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 652 "./comelang2.h"
                                break;
                            }
                            # 654 "./comelang2.h"
                            it_256=((struct list_item$1CVALUEph*)come_null_check(it_256, "./comelang2.h", 654))->next;
                            # 655 "./comelang2.h"
                            i_257++;
                        }
                        # 658 "./comelang2.h"
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
                        # 3 "CVALUE_clone"
                        # 2 "CVALUE_clone"
                        if(_if_conditional313=self==(void*)0,                        _if_conditional313) {
                            # 2 "CVALUE_clone"
                            __result186__ = __result_obj__ = (void*)0;
                            return __result186__;
                        }
                        # 3 "CVALUE_clone"
                        result_258=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value204=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value204;
                        __freed_obj__ = 0;
                        # 5 "CVALUE_clone"
                        # 4 "CVALUE_clone"
                        if(_if_conditional314=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value!=((void*)0),                        _if_conditional314) {
                            # 4 "CVALUE_clone"
                            __dec_obj66=((struct CVALUE*)come_null_check(result_258, "CVALUE_clone", 4))->c_value;
                            ((struct CVALUE*)come_null_check(result_258, "CVALUE_clone", 4))->c_value=(char*)come_increment_ref_count(((char*)(right_value205=string_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value))));
                            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                            if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value205;
                            __freed_obj__ = 0;
                        }
                        # 6 "CVALUE_clone"
                        # 5 "CVALUE_clone"
                        if(_if_conditional315=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type!=((void*)0),                        _if_conditional315) {
                            # 5 "CVALUE_clone"
                            __dec_obj67=((struct CVALUE*)come_null_check(result_258, "CVALUE_clone", 5))->type;
                            ((struct CVALUE*)come_null_check(result_258, "CVALUE_clone", 5))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type))));
                            if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value206;
                            __freed_obj__ = 0;
                        }
                        # 7 "CVALUE_clone"
                        # 6 "CVALUE_clone"
                        if(_if_conditional316=self!=((void*)0),                        _if_conditional316) {
                            # 6 "CVALUE_clone"
                            ((struct CVALUE*)come_null_check(result_258, "CVALUE_clone", 6))->var=((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->var;
                        }
                        # 7 "CVALUE_clone"
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
void* __exception_result_var_b269;
unsigned int __exception_result_var_b270;
unsigned int hash_266;
unsigned int it_267;
_Bool _while_condtional34;
_Bool _if_conditional323;
void* right_value218;
struct optional$2boolbool* __exception_result_var_b271;
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
                # 1591 "./comelang2.h"
                # 1592 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b269=memset(&default_value_265,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b269);
                # 1594 "./comelang2.h"
                hash_266=(come_push_stackframe("./comelang2.h", 1594),__exception_result_var_b270=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1594))), come_pop_stackframe(), __exception_result_var_b270)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1594))->size;
                # 1595 "./comelang2.h"
                it_267=hash_266;
                # 1619 "./comelang2.h"
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    # 1617 "./comelang2.h"
                    # 1598 "./comelang2.h"
                    if(_if_conditional323=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1598))->item_existance[it_267],                    _if_conditional323) {
                        # 1605 "./comelang2.h"
                        # 1600 "./comelang2.h"
                        if(_if_conditional324=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b271=((struct optional$2boolbool*)(right_value218=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_267], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b271)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218),
                        (right_value218 && right_value218 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value218, 
                        __freed_obj__ = 0, 
                        _if_conditional324) {
                            # 1602 "./comelang2.h"
                            __result191__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1602))->items[it_267];
                            return __result191__;
                        }
                        # 1605 "./comelang2.h"
                        it_267++;
                        # 1613 "./comelang2.h"
                        # 1607 "./comelang2.h"
                        if(_if_conditional325=it_267>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->size,                        _if_conditional325) {
                            # 1608 "./comelang2.h"
                            it_267=0;
                        }
                        else {
                            # 1613 "./comelang2.h"
                            # 1610 "./comelang2.h"
                            if(_if_conditional326=it_267==hash_266,                            _if_conditional326) {
                                # 1611 "./comelang2.h"
                                __result192__ = __result_obj__ = default_value_265;
                                return __result192__;
                            }
                        }
                    }
                    else {
                        # 1615 "./comelang2.h"
                        __result193__ = __result_obj__ = default_value_265;
                        return __result193__;
                    }
                }
                # 1619 "./comelang2.h"
                __result195__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1619), ((struct optional$2sClasspbool*)(right_value220=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value219=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1619))),default_value_265,(_Bool)0))));
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
                    # 40 "./comelang2.h"
                    ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                    # 41 "./comelang2.h"
                    ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                    # 43 "./comelang2.h"
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
struct list$1tuple2$2charphsNodephph* __exception_result_var_b329;
struct list$1tuple2$2charphsNodephph* params_299;
void* right_value276;
void* right_value279;
void* right_value280;
struct tuple2$2charphsNodeph* __exception_result_var_b330;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b331;
_Bool _if_conditional343;
_Bool _if_conditional344;
int __exception_result_var_b332;
_Bool _while_condtional36;
_Bool _if_conditional345;
char* p_303;
int sline_304;
_Bool err_flag_305;
void* right_value281;
char* __exception_result_var_b333;
char* label_306;
_Bool __exception_result_var_b334;
_Bool _if_conditional346;
void* right_value282;
char* __exception_result_var_b335;
char* __dec_obj82;
_Bool _if_conditional347;
char* __dec_obj83;
_Bool no_comma_307;
void* right_value283;
struct sNode* __exception_result_var_b336;
struct sNode* node_308;
void* right_value284;
struct sNode* __exception_result_var_b337;
struct sNode* __dec_obj84;
void* right_value285;
void* right_value286;
struct tuple2$2charphsNodeph* __exception_result_var_b338;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b339;
_Bool _if_conditional348;
_Bool _if_conditional349;
struct buffer* method_block_309;
int method_block_sline_310;
_Bool _if_conditional350;
char* head_311;
void* right_value287;
char* __exception_result_var_b340;
char* tail_312;
void* right_value288;
void* right_value289;
struct buffer* __exception_result_var_b341;
struct buffer* __dec_obj85;
int len_313;
void* right_value290;
char* mem_314;
void* __exception_result_var_b342;
struct buffer* __exception_result_var_b343;
struct buffer* __exception_result_var_b344;
void* right_value291;
void* right_value292;
void* right_value293;
void* right_value294;
struct sMethodCallNode* __exception_result_var_b345;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value301;
struct sNode* node_316;
void* right_value302;
struct sNode* __exception_result_var_b346;
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
    # 737 "20method.c"
    params_299=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((come_push_stackframe("20method.c", 737),__exception_result_var_b329=((struct list$1tuple2$2charphsNodephph*)(right_value272=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value271=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 737))))))), come_pop_stackframe(), __exception_result_var_b329));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value271;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value272);
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value272;
    __freed_obj__ = 0;
    # 738 "20method.c"
    (come_push_stackframe("20method.c", 738),__exception_result_var_b331=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_299, "20method.c", 738)),(struct tuple2$2charphsNodeph*)come_increment_ref_count((come_push_stackframe("20method.c", 738),__exception_result_var_b330=((struct tuple2$2charphsNodeph*)(right_value280=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value276=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 738)))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=sNode_clone(obj))))))), come_pop_stackframe(), __exception_result_var_b330))), come_pop_stackframe(), __exception_result_var_b331);
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
    # 745 "20method.c"
    # 740 "20method.c"
    if(_if_conditional343=*((struct sInfo*)come_null_check(info, "20method.c", 740))->p==45&&*(((struct sInfo*)come_null_check(info, "20method.c", 740))->p+1)==62,    _if_conditional343) {
        # 741 "20method.c"
        ((struct sInfo*)come_null_check(info, "20method.c", 741))->p+=2;
        # 742 "20method.c"
        (come_push_stackframe("20method.c", 742),skip_spaces_and_lf(info),come_pop_stackframe());
    }
    # 799 "20method.c"
    # 745 "20method.c"
    if(_if_conditional344=*((struct sInfo*)come_null_check(info, "20method.c", 745))->p!=123,    _if_conditional344) {
        # 746 "20method.c"
        (come_push_stackframe("20method.c", 746),__exception_result_var_b332=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b332);
        # 797 "20method.c"
        while(_while_condtional36=(_Bool)1,        _while_condtional36) {
            # 755 "20method.c"
            # 749 "20method.c"
            if(_if_conditional345=*((struct sInfo*)come_null_check(info, "20method.c", 749))->p==41,            _if_conditional345) {
                # 750 "20method.c"
                ((struct sInfo*)come_null_check(info, "20method.c", 750))->p++;
                # 751 "20method.c"
                (come_push_stackframe("20method.c", 751),skip_spaces_and_lf(info),come_pop_stackframe());
                # 752 "20method.c"
                break;
            }
            # 755 "20method.c"
            p_303=((struct sInfo*)come_null_check(info, "20method.c", 755))->p;
            # 756 "20method.c"
            sline_304=((struct sInfo*)come_null_check(info, "20method.c", 756))->sline;
            # 758 "20method.c"
            err_flag_305=(_Bool)0;
            # 759 "20method.c"
            label_306=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 759),__exception_result_var_b333=((char*)(right_value281=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b333));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
            if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value281;
            __freed_obj__ = 0;
            # 763 "20method.c"
            # 760 "20method.c"
            if(_if_conditional346=(come_push_stackframe("20method.c", 760),__exception_result_var_b334=xisalpha(*((struct sInfo*)come_null_check(info, "20method.c", 760))->p), come_pop_stackframe(), __exception_result_var_b334)||*((struct sInfo*)come_null_check(info, "20method.c", 760))->p==95,            _if_conditional346) {
                # 761 "20method.c"
                __dec_obj82=label_306;
                label_306=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 761),__exception_result_var_b335=((char*)(right_value282=parse_word(info))), come_pop_stackframe(), __exception_result_var_b335));
                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
                if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value282;
                __freed_obj__ = 0;
                # 762 "20method.c"
                err_flag_305=(_Bool)1;
            }
            # 776 "20method.c"
            # 765 "20method.c"
            if(_if_conditional347=err_flag_305==(_Bool)1&&*((struct sInfo*)come_null_check(info, "20method.c", 765))->p==58,            _if_conditional347) {
                # 766 "20method.c"
                ((struct sInfo*)come_null_check(info, "20method.c", 766))->p++;
                # 767 "20method.c"
                (come_push_stackframe("20method.c", 767),skip_spaces_and_lf(info),come_pop_stackframe());
            }
            else {
                # 770 "20method.c"
                __dec_obj83=label_306;
                label_306=((void*)0);
                if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                # 772 "20method.c"
                ((struct sInfo*)come_null_check(info, "20method.c", 772))->p=p_303;
                # 773 "20method.c"
                ((struct sInfo*)come_null_check(info, "20method.c", 773))->sline=sline_304;
            }
            # 776 "20method.c"
            no_comma_307=((struct sInfo*)come_null_check(info, "20method.c", 776))->no_comma;
            # 777 "20method.c"
            ((struct sInfo*)come_null_check(info, "20method.c", 777))->no_comma=(_Bool)1;
            # 779 "20method.c"
            node_308=(struct sNode*)come_increment_ref_count((come_push_stackframe("20method.c", 779),__exception_result_var_b336=((struct sNode*)(right_value283=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b336));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value283);
            if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[1] = right_value283;
            __freed_obj__ = 0;
            # 781 "20method.c"
            __dec_obj84=node_308;
            node_308=(struct sNode*)come_increment_ref_count((come_push_stackframe("20method.c", 781),__exception_result_var_b337=((struct sNode*)(right_value284=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_308),info))), come_pop_stackframe(), __exception_result_var_b337));
            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value284);
            if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value284;
            __freed_obj__ = 0;
            # 783 "20method.c"
            ((struct sInfo*)come_null_check(info, "20method.c", 783))->no_comma=no_comma_307;
            # 785 "20method.c"
            (come_push_stackframe("20method.c", 785),__exception_result_var_b339=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_299, "20method.c", 785)),(struct tuple2$2charphsNodeph*)come_increment_ref_count((come_push_stackframe("20method.c", 785),__exception_result_var_b338=((struct tuple2$2charphsNodeph*)(right_value286=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value285=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 785)))),(char*)come_increment_ref_count(label_306),(struct sNode*)come_increment_ref_count(node_308)))), come_pop_stackframe(), __exception_result_var_b338))), come_pop_stackframe(), __exception_result_var_b339);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value285);
            if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value285;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value286);
            if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value286;
            __freed_obj__ = 0;
            # 796 "20method.c"
            # 787 "20method.c"
            if(_if_conditional348=*((struct sInfo*)come_null_check(info, "20method.c", 787))->p==44,            _if_conditional348) {
                # 788 "20method.c"
                ((struct sInfo*)come_null_check(info, "20method.c", 788))->p++;
                # 789 "20method.c"
                (come_push_stackframe("20method.c", 789),skip_spaces_and_lf(info),come_pop_stackframe());
            }
            else {
                # 796 "20method.c"
                # 791 "20method.c"
                if(_if_conditional349=*((struct sInfo*)come_null_check(info, "20method.c", 791))->p==41,                _if_conditional349) {
                    # 792 "20method.c"
                    ((struct sInfo*)come_null_check(info, "20method.c", 792))->p++;
                    # 793 "20method.c"
                    (come_push_stackframe("20method.c", 793),skip_spaces_and_lf(info),come_pop_stackframe());
                    # 794 "20method.c"
                    if(label_306 && !__freed_obj__) { label_306 = come_decrement_ref_count(label_306, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_308 && !__freed_obj__) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0); } 
                    break;
                }
            }
            if(label_306 && !__freed_obj__) { label_306 = come_decrement_ref_count(label_306, (void*)0, (void*)0, 0, 0, 0); }
            if(node_308 && !__freed_obj__) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0); } 
        }
    }
    # 799 "20method.c"
    (come_push_stackframe("20method.c", 799),parse_sharp_v5(info),come_pop_stackframe());
    # 801 "20method.c"
    method_block_309=((void*)0);
    # 802 "20method.c"
    method_block_sline_310=0;
    # 822 "20method.c"
    # 803 "20method.c"
    if(_if_conditional350=*((struct sInfo*)come_null_check(info, "20method.c", 803))->p==123,    _if_conditional350) {
        # 804 "20method.c"
        head_311=((struct sInfo*)come_null_check(info, "20method.c", 804))->p;
        # 805 "20method.c"
        method_block_sline_310=((struct sInfo*)come_null_check(info, "20method.c", 805))->sline;
        # 807 "20method.c"
        (come_push_stackframe("20method.c", 807),__exception_result_var_b340=((char*)(right_value287=skip_block(info))), come_pop_stackframe(), __exception_result_var_b340);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value287;
        __freed_obj__ = 0;
        # 809 "20method.c"
        tail_312=((struct sInfo*)come_null_check(info, "20method.c", 809))->p;
        # 811 "20method.c"
        __dec_obj85=method_block_309;
        method_block_309=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 811),__exception_result_var_b341=((struct buffer*)(right_value289=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value288=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 811))))))), come_pop_stackframe(), __exception_result_var_b341));
        if(__dec_obj85) { come_call_finalizer(buffer_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value288);
        if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value288;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value289);
        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value289;
        __freed_obj__ = 0;
        # 813 "20method.c"
        len_313=tail_312-head_311;
        # 814 "20method.c"
        mem_314=(char*)come_increment_ref_count(((char*)(right_value290=(char*)come_calloc(1, sizeof(char)*(1*(len_313+1)), "20method.c", 814))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value290);
        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value290;
        __freed_obj__ = 0;
        # 815 "20method.c"
        (come_push_stackframe("20method.c", 815),__exception_result_var_b342=memcpy(mem_314,head_311,len_313), come_pop_stackframe(), __exception_result_var_b342);
        # 816 "20method.c"
        mem_314[len_313]=0;
        # 818 "20method.c"
        (come_push_stackframe("20method.c", 818),__exception_result_var_b343=buffer_append_str(((struct buffer*)come_null_check(method_block_309, "20method.c", 818)),mem_314), come_pop_stackframe(), __exception_result_var_b343);
        # 819 "20method.c"
        (come_push_stackframe("20method.c", 819),__exception_result_var_b344=buffer_append_str(((struct buffer*)come_null_check(method_block_309, "20method.c", 819)),"\n"), come_pop_stackframe(), __exception_result_var_b344);
        if(mem_314 && !__freed_obj__) { mem_314 = come_decrement_ref_count(mem_314, (void*)0, (void*)0, 0, 0, 0); }
    }
    # 822 "20method.c"
    (come_push_stackframe("20method.c", 822),parse_sharp_v5(info),come_pop_stackframe());
    # 824 "20method.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 824);
    _inf_obj_value2=come_increment_ref_count((come_push_stackframe("20method.c", 824),__exception_result_var_b345=((struct sMethodCallNode*)(right_value294=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value291=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 824)))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value292=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value293=list$1tuple2$2charphsNodephphp_clone(params_299)))),method_block_309,method_block_sline_310,info))), come_pop_stackframe(), __exception_result_var_b345));
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
    # 827 "20method.c"
    __dec_obj91=node_316;
    node_316=(struct sNode*)come_increment_ref_count((come_push_stackframe("20method.c", 827),__exception_result_var_b346=((struct sNode*)(right_value302=exception_get_value((struct sNode*)come_increment_ref_count(node_316),info))), come_pop_stackframe(), __exception_result_var_b346));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value302);
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[10] = right_value302;
    __freed_obj__ = 0;
    # 827 "20method.c"
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
        # 309 "./comelang2.h"
        # 278 "./comelang2.h"
        if(_if_conditional341=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 278))->len==0,        _if_conditional341) {
            # 279 "./comelang2.h"
            litem_300=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value273=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
            if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value273;
            __freed_obj__ = 0;
            # 281 "./comelang2.h"
            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_300, "./comelang2.h", 281))->prev=((void*)0);
            # 282 "./comelang2.h"
            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_300, "./comelang2.h", 282))->next=((void*)0);
            # 283 "./comelang2.h"
            __dec_obj77=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_300, "./comelang2.h", 283))->item;
            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_300, "./comelang2.h", 283))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            if(__dec_obj77) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 285 "./comelang2.h"
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_300;
            # 286 "./comelang2.h"
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 286))->head=litem_300;
        }
        else {
            # 309 "./comelang2.h"
            # 288 "./comelang2.h"
            if(_if_conditional342=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 288))->len==1,            _if_conditional342) {
                # 289 "./comelang2.h"
                litem_301=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value274=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
                if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value274;
                __freed_obj__ = 0;
                # 291 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_301, "./comelang2.h", 291))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 291))->head;
                # 292 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_301, "./comelang2.h", 292))->next=((void*)0);
                # 293 "./comelang2.h"
                __dec_obj78=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_301, "./comelang2.h", 293))->item;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_301, "./comelang2.h", 293))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj78) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 295 "./comelang2.h"
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_301;
                # 296 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_301;
            }
            else {
                # 299 "./comelang2.h"
                litem_302=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value275=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
                if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value275;
                __freed_obj__ = 0;
                # 301 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_302, "./comelang2.h", 301))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 301))->tail;
                # 302 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_302, "./comelang2.h", 302))->next=((void*)0);
                # 303 "./comelang2.h"
                __dec_obj79=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_302, "./comelang2.h", 303))->item;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_302, "./comelang2.h", 303))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj79) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 305 "./comelang2.h"
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_302;
                # 306 "./comelang2.h"
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_302;
            }
        }
        # 309 "./comelang2.h"
        ((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./comelang2.h", 309))->len++;
        # 311 "./comelang2.h"
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
        # 1814 "./comelang2.h"
        __dec_obj80=((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1814))->v1;
        ((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1814))->v1=(char*)come_increment_ref_count(((char*)(right_value277=string_clone(v1))));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value277;
        __freed_obj__ = 0;
        # 1815 "./comelang2.h"
        __dec_obj81=((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1815))->v2;
        ((struct tuple2$2charphsNodeph*)come_null_check(self, "./comelang2.h", 1815))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(v2))));
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value278);
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[1] = right_value278;
        __freed_obj__ = 0;
        # 1817 "./comelang2.h"
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
        # 1 "sMethodCallNode_finalize"
        # 0 "sMethodCallNode_finalize"
        if(_if_conditional351=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj!=((void*)0),        _if_conditional351) {
            # 0 "sMethodCallNode_finalize"
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj && !__freed_obj__) { ((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj = come_decrement_ref_count(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj, ((struct sNode*)((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj)->finalize, ((struct sNode*)((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0))->obj)->_protocol_obj, 0, 0, 0); } 
        }
        # 2 "sMethodCallNode_finalize"
        # 1 "sMethodCallNode_finalize"
        if(_if_conditional352=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->fun_name!=((void*)0),        _if_conditional352) {
            # 1 "sMethodCallNode_finalize"
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->fun_name && !__freed_obj__) { ((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->fun_name = come_decrement_ref_count(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1))->fun_name, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 3 "sMethodCallNode_finalize"
        # 2 "sMethodCallNode_finalize"
        if(_if_conditional353=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2))->params!=((void*)0),        _if_conditional353) {
            # 2 "sMethodCallNode_finalize"
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2))->params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2))->params, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 4 "sMethodCallNode_finalize"
        # 3 "sMethodCallNode_finalize"
        if(_if_conditional354=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 3))->method_block!=((void*)0),        _if_conditional354) {
            # 3 "sMethodCallNode_finalize"
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 3))->method_block && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 3))->method_block, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 5 "sMethodCallNode_finalize"
        # 4 "sMethodCallNode_finalize"
        if(_if_conditional355=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->sname!=((void*)0),        _if_conditional355) {
            # 4 "sMethodCallNode_finalize"
            if(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->sname && !__freed_obj__) { ((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->sname = come_decrement_ref_count(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4))->sname, (void*)0, (void*)0, 0, 0, 0); }
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
        # 3 "sMethodCallNode_clone"
        # 2 "sMethodCallNode_clone"
        if(_if_conditional356=self==(void*)0,        _if_conditional356) {
            # 2 "sMethodCallNode_clone"
            __result202__ = __result_obj__ = (void*)0;
            return __result202__;
        }
        # 3 "sMethodCallNode_clone"
        result_315=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value295=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value295;
        __freed_obj__ = 0;
        # 5 "sMethodCallNode_clone"
        # 4 "sMethodCallNode_clone"
        if(_if_conditional357=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 4))->obj!=((void*)0),        _if_conditional357) {
            # 4 "sMethodCallNode_clone"
            __dec_obj86=((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 4))->obj;
            ((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 4))->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=sNode_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 4))->obj))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
            if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value296;
            __freed_obj__ = 0;
        }
        # 6 "sMethodCallNode_clone"
        # 5 "sMethodCallNode_clone"
        if(_if_conditional358=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 5))->fun_name!=((void*)0),        _if_conditional358) {
            # 5 "sMethodCallNode_clone"
            __dec_obj87=((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 5))->fun_name;
            ((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 5))->fun_name=(char*)come_increment_ref_count(((char*)(right_value297=string_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 5))->fun_name))));
            if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
            if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value297;
            __freed_obj__ = 0;
        }
        # 7 "sMethodCallNode_clone"
        # 6 "sMethodCallNode_clone"
        if(_if_conditional359=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 6))->params!=((void*)0),        _if_conditional359) {
            # 6 "sMethodCallNode_clone"
            __dec_obj88=((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 6))->params;
            ((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 6))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value298=list$1tuple2$2charphsNodephphp_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 6))->params))));
            if(__dec_obj88) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value298;
            __freed_obj__ = 0;
        }
        # 8 "sMethodCallNode_clone"
        # 7 "sMethodCallNode_clone"
        if(_if_conditional360=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 7))->method_block!=((void*)0),        _if_conditional360) {
            # 7 "sMethodCallNode_clone"
            __dec_obj89=((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 7))->method_block;
            ((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 7))->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=buffer_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 7))->method_block))));
            if(__dec_obj89) { come_call_finalizer(buffer_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
            if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value299;
            __freed_obj__ = 0;
        }
        # 9 "sMethodCallNode_clone"
        # 8 "sMethodCallNode_clone"
        if(_if_conditional361=self!=((void*)0),        _if_conditional361) {
            # 8 "sMethodCallNode_clone"
            ((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 8))->sline=((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 8))->sline;
        }
        # 10 "sMethodCallNode_clone"
        # 9 "sMethodCallNode_clone"
        if(_if_conditional362=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 9))->sname!=((void*)0),        _if_conditional362) {
            # 9 "sMethodCallNode_clone"
            __dec_obj90=((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 9))->sname;
            ((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 9))->sname=(char*)come_increment_ref_count(((char*)(right_value300=string_clone(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 9))->sname))));
            if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
            if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value300;
            __freed_obj__ = 0;
        }
        # 11 "sMethodCallNode_clone"
        # 10 "sMethodCallNode_clone"
        if(_if_conditional363=self!=((void*)0),        _if_conditional363) {
            # 10 "sMethodCallNode_clone"
            ((struct sMethodCallNode*)come_null_check(result_315, "sMethodCallNode_clone", 10))->method_block_sline=((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 10))->method_block_sline;
        }
        # 11 "sMethodCallNode_clone"
        __result203__ = __result_obj__ = result_315;
        if(result_315 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result203__;
        if(result_315 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b347;
_Bool _if_conditional364;
void* right_value303;
void* right_value304;
struct sCurrentNode* __exception_result_var_b348;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value307;
struct sNode* __result207__;
void* right_value308;
struct sNode* __exception_result_var_b349;
struct sNode* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
    # 836 "20method.c"
    # 832 "20method.c"
    if(_if_conditional364=(come_push_stackframe("20method.c", 832),__exception_result_var_b347=charp_operator_equals(buf,"__current__"), come_pop_stackframe(), __exception_result_var_b347),    _if_conditional364) {
        # 833 "20method.c"
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 833);
        _inf_obj_value3=come_increment_ref_count((come_push_stackframe("20method.c", 833),__exception_result_var_b348=((struct sCurrentNode*)(right_value304=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value303=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 833)))),info))), come_pop_stackframe(), __exception_result_var_b348));
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
    # 836 "20method.c"
    __result208__ = __result_obj__ = (come_push_stackframe("20method.c", 836),__exception_result_var_b349=((struct sNode*)(right_value308=string_node_v15(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b349);
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
            # 1 "sCurrentNode_finalize"
            # 0 "sCurrentNode_finalize"
            if(_if_conditional365=self!=((void*)0)&&((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0))->sname!=((void*)0),            _if_conditional365) {
                # 0 "sCurrentNode_finalize"
                if(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0))->sname && !__freed_obj__) { ((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0))->sname = come_decrement_ref_count(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
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
            # 3 "sCurrentNode_clone"
            # 2 "sCurrentNode_clone"
            if(_if_conditional366=self==(void*)0,            _if_conditional366) {
                # 2 "sCurrentNode_clone"
                __result205__ = __result_obj__ = (void*)0;
                return __result205__;
            }
            # 3 "sCurrentNode_clone"
            result_317=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value305=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
            if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value305;
            __freed_obj__ = 0;
            # 5 "sCurrentNode_clone"
            # 4 "sCurrentNode_clone"
            if(_if_conditional367=self!=((void*)0),            _if_conditional367) {
                # 4 "sCurrentNode_clone"
                ((struct sCurrentNode*)come_null_check(result_317, "sCurrentNode_clone", 4))->sline=((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 4))->sline;
            }
            # 6 "sCurrentNode_clone"
            # 5 "sCurrentNode_clone"
            if(_if_conditional368=self!=((void*)0)&&((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 5))->sname!=((void*)0),            _if_conditional368) {
                # 5 "sCurrentNode_clone"
                __dec_obj92=((struct sCurrentNode*)come_null_check(result_317, "sCurrentNode_clone", 5))->sname;
                ((struct sCurrentNode*)come_null_check(result_317, "sCurrentNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value306=string_clone(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 5))->sname))));
                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value306;
                __freed_obj__ = 0;
            }
            # 6 "sCurrentNode_clone"
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
struct sNode* __exception_result_var_b350;
struct sNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value309, 0, sizeof(void*));
    # 843 "20method.c"
    __result209__ = __result_obj__ = (come_push_stackframe("20method.c", 843),__exception_result_var_b350=((struct sNode*)(right_value309=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info))), come_pop_stackframe(), __exception_result_var_b350);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value309;
    __freed_obj__ = 0;
    return __result209__;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

