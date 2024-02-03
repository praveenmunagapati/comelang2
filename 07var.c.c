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
    char* come_fun_name;
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
struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};
struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};
struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};
struct sStoreNode
{
    char* name;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    struct sNode* right_value;
    struct sType* type;
    char* array_initializer;
    _Bool alloc;
    int sline;
    char* sname;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
    _Bool v2;
};
struct sLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct sFunLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info);

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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
_Bool sStoreNode_terminated();

char* sStoreNode_kind();

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info);

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

_Bool sLoadNode_terminated();

char* sLoadNode_kind();

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info);

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
_Bool sFunLoadNode_terminated();

char* sFunLoadNode_kind();

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info);

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static void sVar_finalize(struct sVar* self);
static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2010, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2020, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2030, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2040, "struct smart_pointer$1long"))));
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, char* array_initializer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
_Bool _if_conditional5;
void* right_value45;
struct sType* __dec_obj29;
struct sType* __dec_obj30;
struct sNode* __dec_obj31;
_Bool _if_conditional92;
void* right_value46;
struct list$1charph* __dec_obj32;
struct list$1charph* __dec_obj33;
_Bool _if_conditional93;
void* right_value57;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj40;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj41;
char* __dec_obj42;
void* right_value58;
char* __dec_obj43;
struct sStoreNode* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
    __dec_obj6=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(name))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    self->alloc=alloc;
    if(_if_conditional5=type,    _if_conditional5) {
        __dec_obj29=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=sType_clone(type))));
        if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj30=self->type;
        self->type=((void*)0);
        if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __dec_obj31=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
    if(_if_conditional92=multiple_assign,    _if_conditional92) {
        __dec_obj32=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charphp_clone(multiple_assign))));
        if(__dec_obj32) { come_call_finalizer(list$1charph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value46;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj33=self->multiple_assign;
        self->multiple_assign=((void*)0);
        if(__dec_obj33) { come_call_finalizer(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional93=multiple_declare,    _if_conditional93) {
        __dec_obj40=self->multiple_declare;
        self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value57=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        if(__dec_obj40) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj41=self->multiple_declare;
        self->multiple_declare=((void*)0);
        if(__dec_obj41) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __dec_obj42=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    self->sline=info->sline;
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value58=__builtin_string(info->sname))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value58;
    __freed_obj__ = 0;
    __result37__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value && !__freed_obj__) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0); } 
    if(array_initializer && !__freed_obj__) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1, 0); }
    return __result37__;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_value && !__freed_obj__) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0); } 
    if(array_initializer && !__freed_obj__) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
struct sType* __result13__;
void* right_value11;
struct sType* result_5;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value15;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional29;
void* right_value16;
char* __dec_obj10;
_Bool _if_conditional30;
void* right_value23;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional34;
void* right_value31;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value32;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional49;
void* right_value39;
struct list$1charph* __dec_obj23;
_Bool _if_conditional53;
void* right_value40;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value41;
struct sNode* __dec_obj25;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
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
void* right_value42;
struct sNode* __dec_obj26;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value43;
char* __dec_obj27;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value44;
char* __dec_obj28;
struct sType* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
            if(_if_conditional6=self==(void*)0,            _if_conditional6) {
                __result13__ = __result_obj__ = (void*)0;
                return __result13__;
            }
            result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value11;
            __freed_obj__ = 0;
            if(_if_conditional23=self!=((void*)0),            _if_conditional23) {
                result_5->mClass=self->mClass;
            }
            if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional24) {
                __dec_obj8=result_5->mNoSolvedGenericsType;
                result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value14;
                __freed_obj__ = 0;
            }
            if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional28) {
                __dec_obj9=result_5->mOriginalLoadVarType;
                result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value15=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value15;
                __freed_obj__ = 0;
            }
            if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional29) {
                __dec_obj10=result_5->mGenericsName;
                result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value16=string_clone(self->mGenericsName))));
                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16;
                __freed_obj__ = 0;
            }
            if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional30) {
                __dec_obj14=result_5->mGenericsTypes;
                result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23;
                __freed_obj__ = 0;
            }
            if(_if_conditional34=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional34) {
                __dec_obj18=result_5->mArrayNum;
                result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value31;
                __freed_obj__ = 0;
            }
            if(_if_conditional47=self!=((void*)0),            _if_conditional47) {
                result_5->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional48=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional48) {
                __dec_obj19=result_5->mParamTypes;
                result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = 0;
            }
            if(_if_conditional49=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional49) {
                __dec_obj23=result_5->mParamNames;
                result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value39=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value39;
                __freed_obj__ = 0;
            }
            if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional53) {
                __dec_obj24=result_5->mResultType;
                result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value40=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value40;
                __freed_obj__ = 0;
            }
            if(_if_conditional54=self!=((void*)0),            _if_conditional54) {
                result_5->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional55=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional55) {
                __dec_obj25=result_5->mAlignas;
                result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(self->mAlignas))));
                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value41;
                __freed_obj__ = 0;
            }
            if(_if_conditional56=self!=((void*)0),            _if_conditional56) {
                result_5->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional57=self!=((void*)0),            _if_conditional57) {
                result_5->mShort=self->mShort;
            }
            if(_if_conditional58=self!=((void*)0),            _if_conditional58) {
                result_5->mLong=self->mLong;
            }
            if(_if_conditional59=self!=((void*)0),            _if_conditional59) {
                result_5->mLongLong=self->mLongLong;
            }
            if(_if_conditional60=self!=((void*)0),            _if_conditional60) {
                result_5->mConstant=self->mConstant;
            }
            if(_if_conditional61=self!=((void*)0),            _if_conditional61) {
                result_5->mRegister=self->mRegister;
            }
            if(_if_conditional62=self!=((void*)0),            _if_conditional62) {
                result_5->mVolatile=self->mVolatile;
            }
            if(_if_conditional63=self!=((void*)0),            _if_conditional63) {
                result_5->mStatic=self->mStatic;
            }
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                result_5->mExtern=self->mExtern;
            }
            if(_if_conditional65=self!=((void*)0),            _if_conditional65) {
                result_5->mRestrict=self->mRestrict;
            }
            if(_if_conditional66=self!=((void*)0),            _if_conditional66) {
                result_5->mImmutable=self->mImmutable;
            }
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                result_5->mHeap=self->mHeap;
            }
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                result_5->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional69=self!=((void*)0),            _if_conditional69) {
                result_5->mDelegate=self->mDelegate;
            }
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                result_5->mShare=self->mShare;
            }
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                result_5->mClone=self->mClone;
            }
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                result_5->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                result_5->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_5->mRefference=self->mRefference;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_5->mException=self->mException;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_5->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional79=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional79) {
                __dec_obj26=result_5->mSizeNum;
                result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value42=sNode_clone(self->mSizeNum))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, ((struct sNode*)right_value42)->finalize, ((struct sNode*)right_value42)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value42;
                __freed_obj__ = 0;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_5->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_5->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional82=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional82) {
                __dec_obj27=result_5->mOriginalTypeName;
                result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mOriginalTypeName))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value43;
                __freed_obj__ = 0;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_5->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_5->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_5->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_5->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_5->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_5->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_5->mInline=self->mInline;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_5->mNullValue=self->mNullValue;
            }
            if(_if_conditional91=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional91) {
                __dec_obj28=result_5->mAsmName;
                result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value44=string_clone(self->mAsmName))));
                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value44;
                __freed_obj__ = 0;
            }
            __result30__ = __result_obj__ = result_5;
            if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result30__;
            if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional7=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional7) {
                    if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional9=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional9) {
                    if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional10=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional10) {
                    if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional11=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional11) {
                    if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional13=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional13) {
                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional15=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional15) {
                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional16=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional16) {
                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional18=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional18) {
                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional19=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional19) {
                    if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional20=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional20) {
                    if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional21=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional21) {
                    if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional22=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional22) {
                    if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional8=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional8) {
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
                        it_6=self->head;
                        while(_while_condtional1=it_6!=((void*)0),                        _while_condtional1) {
                            prev_it_7=it_6;
                            it_6=it_6->next;
                            if(prev_it_7 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional12=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional12) {
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
                        it_8=self->head;
                        while(_while_condtional2=it_8!=((void*)0),                        _while_condtional2) {
                            prev_it_9=it_8;
                            it_8=it_8->next;
                            if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional14) {
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
                        it_10=self->head;
                        while(_while_condtional3=it_10!=((void*)0),                        _while_condtional3) {
                            prev_it_11=it_10;
                            it_10=it_10->next;
                            if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional17) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
struct tuple1$1sTypeph* __result14__;
void* right_value12;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional27;
void* right_value13;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value13, 0, sizeof(void*));
                    if(_if_conditional25=self==(void*)0,                    _if_conditional25) {
                        __result14__ = __result_obj__ = (void*)0;
                        return __result14__;
                    }
                    result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value12=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12;
                    __freed_obj__ = 0;
                    if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional27) {
                        __dec_obj7=result_12->v1;
                        result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_clone(self->v1))));
                        if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
                        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value13;
                        __freed_obj__ = 0;
                    }
                    __result15__ = __result_obj__ = result_12;
                    if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result15__;
                    if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional26) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
struct list$1sTypeph* __result16__;
void* right_value17;
void* right_value18;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value22;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value22, 0, sizeof(void*));
                    if(_if_conditional31=self==((void*)0),                    _if_conditional31) {
                        __result16__ = __result_obj__ = ((void*)0);
                        return __result16__;
                    }
                    result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value17;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value18);
                    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value18;
                    __freed_obj__ = 0;
                    it_14=self->head;
                    while(_while_condtional4=it_14!=((void*)0),                    _while_condtional4) {
                        list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=sType_clone(it_14->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value22;
                        __freed_obj__ = 0;
                        it_14=it_14->next;
                    }
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
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result17__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result17__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
void* right_value19;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj11;
_Bool _if_conditional33;
void* right_value20;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj12;
void* right_value21;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj13;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional32=self->len==0,                            _if_conditional32) {
                                litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19;
                                __freed_obj__ = 0;
                                litem_15->prev=((void*)0);
                                litem_15->next=((void*)0);
                                __dec_obj11=litem_15->item;
                                litem_15->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_15;
                                self->head=litem_15;
                            }
                            else {
                                if(_if_conditional33=self->len==1,                                _if_conditional33) {
                                    litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value20;
                                    __freed_obj__ = 0;
                                    litem_16->prev=self->head;
                                    litem_16->next=((void*)0);
                                    __dec_obj12=litem_16->item;
                                    litem_16->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail=litem_16;
                                    self->head->next=litem_16;
                                }
                                else {
                                    litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value21;
                                    __freed_obj__ = 0;
                                    litem_17->prev=self->tail;
                                    litem_17->next=((void*)0);
                                    __dec_obj13=litem_17->item;
                                    litem_17->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->tail->next=litem_17;
                                    self->tail=litem_17;
                                }
                            }
                            self->len++;
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
_Bool _if_conditional35;
struct list$1sNodeph* __result20__;
void* right_value24;
void* right_value25;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value30;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value30, 0, sizeof(void*));
                    if(_if_conditional35=self==((void*)0),                    _if_conditional35) {
                        __result20__ = __result_obj__ = ((void*)0);
                        return __result20__;
                    }
                    result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value25=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value24;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value25);
                    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value25;
                    __freed_obj__ = 0;
                    it_19=self->head;
                    while(_while_condtional5=it_19!=((void*)0),                    _while_condtional5) {
                        list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=sNode_clone(it_19->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value30;
                        __freed_obj__ = 0;
                        it_19=it_19->next;
                    }
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
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result21__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result21__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional36;
void* right_value26;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
_Bool _if_conditional37;
void* right_value27;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
void* right_value28;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional36=self->len==0,                            _if_conditional36) {
                                litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26;
                                __freed_obj__ = 0;
                                litem_20->prev=((void*)0);
                                litem_20->next=((void*)0);
                                __dec_obj15=litem_20->item;
                                litem_20->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                self->tail=litem_20;
                                self->head=litem_20;
                            }
                            else {
                                if(_if_conditional37=self->len==1,                                _if_conditional37) {
                                    litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value27;
                                    __freed_obj__ = 0;
                                    litem_21->prev=self->head;
                                    litem_21->next=((void*)0);
                                    __dec_obj16=litem_21->item;
                                    litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                    self->tail=litem_21;
                                    self->head->next=litem_21;
                                }
                                else {
                                    litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                                    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value28;
                                    __freed_obj__ = 0;
                                    litem_22->prev=self->tail;
                                    litem_22->next=((void*)0);
                                    __dec_obj17=litem_22->item;
                                    litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                    self->tail->next=litem_22;
                                    self->tail=litem_22;
                                }
                            }
                            self->len++;
                            __result22__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            return __result22__;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
struct sNode* __result23__;
void* right_value29;
struct sNode* result_23;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
struct sNode* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                            if(_if_conditional38=self==(void*)0,                            _if_conditional38) {
                                __result23__ = __result_obj__ = (void*)0;
                                return __result23__;
                            }
                            result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value29;
                            __freed_obj__ = 0;
                            if(_if_conditional39=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional39) {
                                result_23->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional40=self!=((void*)0),                            _if_conditional40) {
                                result_23->finalize=self->finalize;
                            }
                            if(_if_conditional41=self!=((void*)0),                            _if_conditional41) {
                                result_23->clone=self->clone;
                            }
                            if(_if_conditional42=self!=((void*)0),                            _if_conditional42) {
                                result_23->compile=self->compile;
                            }
                            if(_if_conditional43=self!=((void*)0),                            _if_conditional43) {
                                result_23->sline=self->sline;
                            }
                            if(_if_conditional44=self!=((void*)0),                            _if_conditional44) {
                                result_23->sname=self->sname;
                            }
                            if(_if_conditional45=self!=((void*)0),                            _if_conditional45) {
                                result_23->terminated=self->terminated;
                            }
                            if(_if_conditional46=self!=((void*)0),                            _if_conditional46) {
                                result_23->kind=self->kind;
                            }
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
_Bool _if_conditional50;
struct list$1charph* __result26__;
void* right_value33;
void* right_value34;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value38;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value38, 0, sizeof(void*));
                    if(_if_conditional50=self==((void*)0),                    _if_conditional50) {
                        __result26__ = __result_obj__ = ((void*)0);
                        return __result26__;
                    }
                    result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value34=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value34;
                    __freed_obj__ = 0;
                    it_25=self->head;
                    while(_while_condtional6=it_25!=((void*)0),                    _while_condtional6) {
                        list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value38=string_clone(it_25->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value38;
                        __freed_obj__ = 0;
                        it_25=it_25->next;
                    }
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
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result27__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result27__;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
void* right_value35;
struct list_item$1charph* litem_26;
char* __dec_obj20;
_Bool _if_conditional52;
void* right_value36;
struct list_item$1charph* litem_27;
char* __dec_obj21;
void* right_value37;
struct list_item$1charph* litem_28;
char* __dec_obj22;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional51=self->len==0,                            _if_conditional51) {
                                litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35;
                                __freed_obj__ = 0;
                                litem_26->prev=((void*)0);
                                litem_26->next=((void*)0);
                                __dec_obj20=litem_26->item;
                                litem_26->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_26;
                                self->head=litem_26;
                            }
                            else {
                                if(_if_conditional52=self->len==1,                                _if_conditional52) {
                                    litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value36;
                                    __freed_obj__ = 0;
                                    litem_27->prev=self->head;
                                    litem_27->next=((void*)0);
                                    __dec_obj21=litem_27->item;
                                    litem_27->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                    self->tail=litem_27;
                                    self->head->next=litem_27;
                                }
                                else {
                                    litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value37;
                                    __freed_obj__ = 0;
                                    litem_28->prev=self->tail;
                                    litem_28->next=((void*)0);
                                    __dec_obj22=litem_28->item;
                                    litem_28->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                    self->tail->next=litem_28;
                                    self->tail=litem_28;
                                }
                            }
                            self->len++;
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

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
struct list$1tuple3$3sTypephcharphsNodephph* __result31__;
void* right_value47;
void* right_value48;
struct list$1tuple3$3sTypephcharphsNodephph* result_31;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_32;
_Bool _while_condtional8;
void* right_value56;
struct list$1tuple3$3sTypephcharphsNodephph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&result_31, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_32, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value56, 0, sizeof(void*));
            if(_if_conditional94=self==((void*)0),            _if_conditional94) {
                __result31__ = __result_obj__ = ((void*)0);
                return __result31__;
            }
            result_31=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value48=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value47=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 198, "struct list$1tuple3$3sTypephcharphsNodephph"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value47;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value48;
            __freed_obj__ = 0;
            it_32=self->head;
            while(_while_condtional8=it_32!=((void*)0),            _while_condtional8) {
                list$1tuple3$3sTypephcharphsNodephph_add(result_31,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value56=tuple3$3sTypephcharphsNodephp_clone(it_32->item)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value56;
                __freed_obj__ = 0;
                it_32=it_32->next;
            }
            __result36__ = __result_obj__ = result_31;
            if(result_31 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result36__;
            if(result_31 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,result_31, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple3$3sTypephcharphsNodephph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result32__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result32__;
                if(self && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple3$3sTypephcharphsNodephph* it_29;
_Bool _while_condtional7;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_29, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_30, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    it_29=self->head;
                    while(_while_condtional7=it_29!=((void*)0),                    _while_condtional7) {
                        prev_it_30=it_29;
                        it_29=it_29->next;
                        if(prev_it_30 && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,prev_it_30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional95=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional95) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional96=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional96) {
                                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional97=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional97) {
                                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional98=self!=((void*)0)&&self->v3!=((void*)0),                                    _if_conditional98) {
                                        if(self->v3 && !__freed_obj__) { self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0); } 
                                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
void* right_value49;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_33;
struct tuple3$3sTypephcharphsNodeph* __dec_obj34;
_Bool _if_conditional103;
void* right_value50;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_34;
struct tuple3$3sTypephcharphsNodeph* __dec_obj35;
void* right_value51;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_35;
struct tuple3$3sTypephcharphsNodeph* __dec_obj36;
struct list$1tuple3$3sTypephcharphsNodephph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value50, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional99=self->len==0,                    _if_conditional99) {
                        litem_33=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value49=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 212, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value49;
                        __freed_obj__ = 0;
                        litem_33->prev=((void*)0);
                        litem_33->next=((void*)0);
                        __dec_obj34=litem_33->item;
                        litem_33->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj34) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_33;
                        self->head=litem_33;
                    }
                    else {
                        if(_if_conditional103=self->len==1,                        _if_conditional103) {
                            litem_34=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value50=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 222, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                            if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value50;
                            __freed_obj__ = 0;
                            litem_34->prev=self->head;
                            litem_34->next=((void*)0);
                            __dec_obj35=litem_34->item;
                            litem_34->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj35) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_34;
                            self->head->next=litem_34;
                        }
                        else {
                            litem_35=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value51=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 232, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value51;
                            __freed_obj__ = 0;
                            litem_35->prev=self->tail;
                            litem_35->next=((void*)0);
                            __dec_obj36=litem_35->item;
                            litem_35->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            if(__dec_obj36) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_35;
                            self->tail=litem_35;
                        }
                    }
                    self->len++;
                    __result33__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result33__;
                    if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional100=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional100) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional101=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional101) {
                                if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->v3!=((void*)0),                            _if_conditional102) {
                                if(self->v3 && !__freed_obj__) { self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0); } 
                            }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
struct tuple3$3sTypephcharphsNodeph* __result34__;
void* right_value52;
struct tuple3$3sTypephcharphsNodeph* result_36;
_Bool _if_conditional105;
void* right_value53;
struct sType* __dec_obj37;
_Bool _if_conditional106;
void* right_value54;
char* __dec_obj38;
_Bool _if_conditional107;
void* right_value55;
struct sNode* __dec_obj39;
struct tuple3$3sTypephcharphsNodeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
                    if(_if_conditional104=self==(void*)0,                    _if_conditional104) {
                        __result34__ = __result_obj__ = (void*)0;
                        return __result34__;
                    }
                    result_36=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value52=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "struct tuple3$3sTypephcharphsNodeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value52;
                    __freed_obj__ = 0;
                    if(_if_conditional105=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional105) {
                        __dec_obj37=result_36->v1;
                        result_36->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_clone(self->v1))));
                        if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional106=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional106) {
                        __dec_obj38=result_36->v2;
                        result_36->v2=(char*)come_increment_ref_count(((char*)(right_value54=string_clone(self->v2))));
                        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value54;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional107=self!=((void*)0)&&self->v3!=((void*)0),                    _if_conditional107) {
                        __dec_obj39=result_36->v3;
                        result_36->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(self->v3))));
                        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value55;
                        __freed_obj__ = 0;
                    }
                    __result35__ = __result_obj__ = result_36;
                    if(result_36 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result35__;
                    if(result_36 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sStoreNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result38__ = (_Bool)0;
    return __result38__;
}

char* sStoreNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value59;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
    __result39__ = __result_obj__ = ((char*)(right_value59=__builtin_string("sStoreNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value59;
    __freed_obj__ = 0;
    return __result39__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value60;
char* array_initializer_37;
_Bool _if_conditional115;
struct sVar* var__42;
_Bool _if_conditional121;
_Bool __result47__;
_Bool _if_conditional122;
_Bool __result48__;
void* right_value64;
struct sType* type_43;
void* right_value65;
void* right_value66;
struct sType* var_type_44;
void* right_value67;
_Bool _if_conditional123;
struct sVar* var__45;
_Bool _if_conditional124;
_Bool __result49__;
_Bool _if_conditional125;
_Bool __result50__;
void* right_value68;
struct sType* type_46;
_Bool _if_conditional126;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_47;
struct tuple3$3sTypephcharphsNodeph* it_50;
_Bool _for_condtionalA1;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_53;
char* var_name_54;
struct sNode* right_value_55;
void* right_value69;
_Bool _if_conditional131;
_Bool __result58__;
void* right_value70;
struct sType* left_type_56;
void* right_value71;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool __result59__;
void* right_value72;
struct CVALUE* come_value_57;
void* right_value73;
struct sType* left_type2_58;
_Bool _if_conditional136;
_Bool _if_conditional137;
void* right_value74;
struct list$1sNodeph* o2_saved_59;
struct sNode* it_62;
_Bool _for_condtionalA2;
_Bool _if_conditional142;
void* right_value75;
struct CVALUE* come_value_65;
void* right_value76;
void* right_value77;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool __result68__;
void* right_value78;
struct sType* left_type_66;
_Bool _if_conditional145;
void* right_value79;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value80;
struct list$1sNodeph* o2_saved_67;
struct sNode* it_68;
_Bool _for_condtionalA3;
_Bool _if_conditional148;
void* right_value81;
struct CVALUE* come_value_69;
void* right_value82;
void* right_value83;
struct sType* left_type2_70;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value84;
struct list$1sNodeph* o2_saved_71;
struct sNode* it_72;
_Bool _for_condtionalA4;
_Bool _if_conditional151;
void* right_value85;
struct CVALUE* come_value_73;
void* right_value86;
void* right_value87;
struct CVALUE* come_value_74;
void* right_value88;
char* __dec_obj44;
void* right_value89;
struct sType* __dec_obj45;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool __result70__;
void* right_value93;
struct CVALUE* right_value_78;
struct sType* right_type_79;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct sVar* var__80;
_Bool _if_conditional160;
_Bool __result71__;
_Bool _if_conditional161;
int i_81;
struct list$1charph* o2_saved_82;
char* it_85;
_Bool _for_condtionalA5;
_Bool _if_conditional166;
struct sType* right_type2_91;
void* right_value94;
void* right_value95;
struct sType* var_type_92;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value96;
struct list$1sNodeph* o2_saved_93;
struct sNode* it_94;
_Bool _for_condtionalA6;
_Bool _if_conditional171;
void* right_value97;
struct CVALUE* come_value_95;
void* right_value98;
_Bool _if_conditional172;
void* right_value99;
void* right_value100;
struct sType* type_96;
void* right_value101;
void* right_value102;
struct sType* var_type_97;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value103;
struct list$1sNodeph* o2_saved_98;
struct sNode* it_99;
_Bool _for_condtionalA7;
_Bool _if_conditional175;
void* right_value104;
struct CVALUE* come_value_100;
void* right_value105;
struct sClass* current_stack_frame_struct_101;
_Bool _if_conditional176;
struct sVar* parent_var_102;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value106;
struct CVALUE* come_value_103;
struct sType* left_type_104;
_Bool _if_conditional179;
void* right_value107;
char* c_value_105;
void* right_value108;
char* __dec_obj49;
int right_value_id_106;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value109;
char* c_value_107;
void* right_value110;
char* __dec_obj50;
void* right_value111;
char* __dec_obj51;
void* right_value112;
struct sType* __dec_obj52;
void* right_value113;
void* right_value114;
_Bool __result82__;
_Bool _if_conditional182;
static int num_multiple_var_108=0;
void* right_value115;
char* multiple_var_name_109;
void* right_value116;
void* right_value117;
char* __dec_obj53;
int i_110;
struct list$1charph* o2_saved_111;
char* it_112;
_Bool _for_condtionalA8;
_Bool _if_conditional183;
void* right_value118;
struct sType* right_type2_113;
struct sVar* var__114;
void* right_value119;
struct sType* var_type_115;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value120;
struct list$1sNodeph* o2_saved_116;
struct sNode* it_117;
_Bool _for_condtionalA9;
_Bool _if_conditional186;
void* right_value121;
struct CVALUE* come_value_118;
void* right_value122;
void* right_value123;
struct sType* left_type_119;
void* right_value124;
struct CVALUE* right_value2_120;
void* right_value125;
char* __dec_obj54;
void* right_value126;
struct sType* __dec_obj55;
void* right_value127;
struct CVALUE* come_value_121;
void* right_value128;
void* right_value129;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value130;
char* __dec_obj56;
int right_value_id_122;
_Bool _if_conditional189;
void* right_value131;
char* __dec_obj57;
void* right_value132;
struct sType* __dec_obj58;
_Bool _if_conditional190;
void* right_value133;
struct sVar* var__123;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool __result83__;
_Bool _if_conditional193;
void* right_value134;
struct sType* __dec_obj59;
void* right_value135;
struct sType* left_type_124;
void* right_value136;
struct CVALUE* come_value_125;
_Bool _if_conditional194;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
char* __dec_obj60;
_Bool _if_conditional195;
void* right_value141;
void* right_value142;
_Bool _if_conditional196;
void* right_value143;
void* right_value144;
char* __dec_obj61;
_Bool _if_conditional197;
void* right_value145;
void* right_value146;
_Bool _if_conditional198;
void* right_value147;
char* __dec_obj62;
void* right_value148;
char* __dec_obj63;
int right_value_id_126;
_Bool _if_conditional199;
void* right_value149;
struct sType* __dec_obj64;
_Bool _if_conditional200;
void* right_value150;
void* right_value151;
_Bool _if_conditional201;
void* right_value152;
char* __dec_obj65;
void* right_value153;
char* __dec_obj66;
void* right_value154;
struct sType* __dec_obj67;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool __result84__;
void* right_value155;
void* right_value156;
void* right_value157;
char* __dec_obj68;
void* right_value158;
struct sType* __dec_obj69;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value159;
void* right_value160;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value60, 0, sizeof(void*));
memset(&array_initializer_37, 0, sizeof(char*));
memset(&var__42, 0, sizeof(struct sVar*));
memset(&right_value64, 0, sizeof(void*));
memset(&type_43, 0, sizeof(struct sType*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&var_type_44, 0, sizeof(struct sType*));
memset(&right_value67, 0, sizeof(void*));
memset(&var__45, 0, sizeof(struct sVar*));
memset(&right_value68, 0, sizeof(void*));
memset(&type_46, 0, sizeof(struct sType*));
memset(&o2_saved_47, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_50, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&type_53, 0, sizeof(struct sType*));
memset(&var_name_54, 0, sizeof(char*));
memset(&right_value_55, 0, sizeof(struct sNode*));
memset(&type_53, 0, sizeof(struct sType*));
memset(&var_name_54, 0, sizeof(char*));
memset(&right_value_55, 0, sizeof(struct sNode*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&left_type_56, 0, sizeof(struct sType*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&come_value_57, 0, sizeof(struct CVALUE*));
memset(&right_value73, 0, sizeof(void*));
memset(&left_type2_58, 0, sizeof(struct sType*));
memset(&right_value74, 0, sizeof(void*));
memset(&o2_saved_59, 0, sizeof(struct list$1sNodeph*));
memset(&it_62, 0, sizeof(struct sNode*));
memset(&right_value75, 0, sizeof(void*));
memset(&come_value_65, 0, sizeof(struct CVALUE*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&left_type_66, 0, sizeof(struct sType*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&o2_saved_67, 0, sizeof(struct list$1sNodeph*));
memset(&it_68, 0, sizeof(struct sNode*));
memset(&right_value81, 0, sizeof(void*));
memset(&come_value_69, 0, sizeof(struct CVALUE*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&left_type2_70, 0, sizeof(struct sType*));
memset(&right_value84, 0, sizeof(void*));
memset(&o2_saved_71, 0, sizeof(struct list$1sNodeph*));
memset(&it_72, 0, sizeof(struct sNode*));
memset(&right_value85, 0, sizeof(void*));
memset(&come_value_73, 0, sizeof(struct CVALUE*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&come_value_74, 0, sizeof(struct CVALUE*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value_78, 0, sizeof(struct CVALUE*));
memset(&right_type_79, 0, sizeof(struct sType*));
memset(&var__80, 0, sizeof(struct sVar*));
memset(&i_81, 0, sizeof(int));
memset(&o2_saved_82, 0, sizeof(struct list$1charph*));
memset(&it_85, 0, sizeof(char*));
memset(&right_type2_91, 0, sizeof(struct sType*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&var_type_92, 0, sizeof(struct sType*));
memset(&right_value96, 0, sizeof(void*));
memset(&o2_saved_93, 0, sizeof(struct list$1sNodeph*));
memset(&it_94, 0, sizeof(struct sNode*));
memset(&right_value97, 0, sizeof(void*));
memset(&come_value_95, 0, sizeof(struct CVALUE*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&type_96, 0, sizeof(struct sType*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&var_type_97, 0, sizeof(struct sType*));
memset(&right_value103, 0, sizeof(void*));
memset(&o2_saved_98, 0, sizeof(struct list$1sNodeph*));
memset(&it_99, 0, sizeof(struct sNode*));
memset(&right_value104, 0, sizeof(void*));
memset(&come_value_100, 0, sizeof(struct CVALUE*));
memset(&right_value105, 0, sizeof(void*));
memset(&current_stack_frame_struct_101, 0, sizeof(struct sClass*));
memset(&parent_var_102, 0, sizeof(struct sVar*));
memset(&right_value106, 0, sizeof(void*));
memset(&come_value_103, 0, sizeof(struct CVALUE*));
memset(&left_type_104, 0, sizeof(struct sType*));
memset(&right_value107, 0, sizeof(void*));
memset(&c_value_105, 0, sizeof(char*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value_id_106, 0, sizeof(int));
memset(&right_value109, 0, sizeof(void*));
memset(&c_value_107, 0, sizeof(char*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&multiple_var_name_109, 0, sizeof(char*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&i_110, 0, sizeof(int));
memset(&o2_saved_111, 0, sizeof(struct list$1charph*));
memset(&it_112, 0, sizeof(char*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_type2_113, 0, sizeof(struct sType*));
memset(&var__114, 0, sizeof(struct sVar*));
memset(&right_value119, 0, sizeof(void*));
memset(&var_type_115, 0, sizeof(struct sType*));
memset(&right_value120, 0, sizeof(void*));
memset(&o2_saved_116, 0, sizeof(struct list$1sNodeph*));
memset(&it_117, 0, sizeof(struct sNode*));
memset(&right_value121, 0, sizeof(void*));
memset(&come_value_118, 0, sizeof(struct CVALUE*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&left_type_119, 0, sizeof(struct sType*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value2_120, 0, sizeof(struct CVALUE*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&come_value_121, 0, sizeof(struct CVALUE*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value_id_122, 0, sizeof(int));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&var__123, 0, sizeof(struct sVar*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&left_type_124, 0, sizeof(struct sType*));
memset(&right_value136, 0, sizeof(void*));
memset(&come_value_125, 0, sizeof(struct CVALUE*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value_id_126, 0, sizeof(int));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
    array_initializer_37=(char*)come_increment_ref_count(((char*)(right_value60=string_clone(self->array_initializer))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value60;
    __freed_obj__ = 0;
    if(_if_conditional115=array_initializer_37,    _if_conditional115) {
        var__42=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        if(_if_conditional121=var__42,        _if_conditional121) {
            err_msg(info,"Already appended this var name(%s)(2)",self->name);
            __result47__ = (_Bool)0;
            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
            return __result47__;
        }
        if(_if_conditional122=self->type==((void*)0),        _if_conditional122) {
            err_msg(info,"Require type name(%s)",self->name);
            __result48__ = (_Bool)0;
            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
            return __result48__;
        }
        else {
            type_43=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=solve_generics(self->type,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value64;
            __freed_obj__ = 0;
            type_43->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(type_43)))),info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value65;
            __freed_obj__ = 0;
            if(type_43 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_43, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        var__42=get_variable_from_table(info->lv_table,self->name);
        var_type_44=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(var__42->mType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value66;
        __freed_obj__ = 0;
        var_type_44->mStatic=(_Bool)0;
        add_come_code(info,"%s=%s;\n",((char*)(right_value67=make_define_var(var_type_44,var__42->mCValueName,(_Bool)0,info))),array_initializer_37);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value67;
        __freed_obj__ = 0;
        if(var_type_44 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional123=self->right_value==((void*)0),        _if_conditional123) {
            var__45=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
            if(_if_conditional124=var__45,            _if_conditional124) {
                err_msg(info,"Already appended this var name(%s)(1)",self->name);
                __result49__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result49__;
            }
            if(_if_conditional125=self->type==((void*)0),            _if_conditional125) {
                err_msg(info,"Require concrete variable type(%s)",self->name);
                __result50__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result50__;
            }
            type_46=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=solve_generics(self->type,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value68;
            __freed_obj__ = 0;
            type_46->mFunctionParam=(_Bool)0;
            if(_if_conditional126=self->multiple_declare,            _if_conditional126) {
                for(
                o2_saved_47=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_50=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_47)) ,                0;                _for_condtionalA1=                !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_47)) ,                _for_condtionalA1;                it_50=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_47)) ,                0                ){
                    multiple_assign_var1=it_50;
                    type_53=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                    var_name_54=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    right_value_55=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
                    add_variable_to_table(var_name_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value69=sType_clone(type_53)))),info);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value69;
                    __freed_obj__ = 0;
                    var__45=get_variable_from_table(info->lv_table,var_name_54);
                    if(_if_conditional131=var__45==((void*)0),                    _if_conditional131) {
                        err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_50);
                        __result58__ = (_Bool)1;
                        if(type_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_54 && !__freed_obj__) { var_name_54 = come_decrement_ref_count(var_name_54, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value_55 && !__freed_obj__) { right_value_55 = come_decrement_ref_count(right_value_55, ((struct sNode*)right_value_55)->finalize, ((struct sNode*)right_value_55)->_protocol_obj, 0, 0, 0); } 
                        if(o2_saved_47 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_47, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_46 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result58__;
                    }
                    left_type_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sType_clone(var__45->mType))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value70);
                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value70;
                    __freed_obj__ = 0;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value71=make_define_var(left_type_56,var__45->mCValueName,(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value71);
                    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value71;
                    __freed_obj__ = 0;
                    if(_if_conditional132=right_value_55,                    _if_conditional132) {
                        if(_if_conditional133=!node_compile(right_value_55,info),                        _if_conditional133) {
                            __result59__ = (_Bool)0;
                            if(type_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(var_name_54 && !__freed_obj__) { var_name_54 = come_decrement_ref_count(var_name_54, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value_55 && !__freed_obj__) { right_value_55 = come_decrement_ref_count(right_value_55, ((struct sNode*)right_value_55)->finalize, ((struct sNode*)right_value_55)->_protocol_obj, 0, 0, 0); } 
                            if(left_type_56 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_56, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(o2_saved_47 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_47, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(type_46 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                            return __result59__;
                        }
                        come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value72=get_value_from_stack(-1,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value72;
                        __freed_obj__ = 0;
                        dec_stack_ptr(1,info);
                        add_come_code(info,"%s=%s;\n",var__45->mCValueName,come_value_57->c_value);
                        if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    left_type2_58=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(left_type_56))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value73;
                    __freed_obj__ = 0;
                    left_type2_58->mStatic=(_Bool)0;
                    if(_if_conditional136=!var__45->mType->mConstant&&!var__45->mType->mStatic,                    _if_conditional136) {
                        if(_if_conditional137=list$1sNodeph_length(left_type2_58->mArrayNum)>0,                        _if_conditional137) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__45->mCValueName,((char*)(right_value74=make_type_name_string(left_type2_58,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value74;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_59=(struct list$1sNodeph*)come_increment_ref_count((left_type2_58->mArrayNum)),it_62=list$1sNodeph_begin((o2_saved_59)) ,                            0;                            _for_condtionalA2=                            !list$1sNodeph_end((o2_saved_59)) ,                            _for_condtionalA2;                            it_62=list$1sNodeph_next((o2_saved_59)) ,                            0                            ){
                                if(_if_conditional142=!node_compile(it_62,info),                                _if_conditional142) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value75=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                                if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value75;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_65->c_value);
                                if(come_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_59 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__45->mCValueName,((char*)(right_value76=make_type_name_string(left_type2_58,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value76;
                            __freed_obj__ = 0;
                        }
                    }
                    if(type_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_54 && !__freed_obj__) { var_name_54 = come_decrement_ref_count(var_name_54, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value_55 && !__freed_obj__) { right_value_55 = come_decrement_ref_count(right_value_55, ((struct sNode*)right_value_55)->finalize, ((struct sNode*)right_value_55)->_protocol_obj, 0, 0, 0); } 
                    if(left_type_56 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_56, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(o2_saved_47 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,o2_saved_47, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(type_46)))),info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value77;
                __freed_obj__ = 0;
                var__45=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional143=var__45==((void*)0),                _if_conditional143) {
                    var__45=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional144=var__45==((void*)0),                    _if_conditional144) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result68__ = (_Bool)1;
                        if(type_46 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result68__;
                    }
                }
                left_type_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value78=sType_clone(var__45->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value78;
                __freed_obj__ = 0;
                if(_if_conditional145=list$1sNodeph_length(left_type_66->mArrayNum)>0,                _if_conditional145) {
                    add_come_code(info,"%s;\n",((char*)(right_value79=make_define_var(left_type_66,var__45->mCValueName,(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value79;
                    __freed_obj__ = 0;
                    if(_if_conditional146=!left_type_66->mStatic,                    _if_conditional146) {
                        if(_if_conditional147=list$1sNodeph_length(left_type_66->mArrayNum)>0,                        _if_conditional147) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__45->mCValueName,((char*)(right_value80=make_type_name_string(left_type_66,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value80;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_67=(struct list$1sNodeph*)come_increment_ref_count((left_type_66->mArrayNum)),it_68=list$1sNodeph_begin((o2_saved_67)) ,                            0;                            _for_condtionalA3=                            !list$1sNodeph_end((o2_saved_67)) ,                            _for_condtionalA3;                            it_68=list$1sNodeph_next((o2_saved_67)) ,                            0                            ){
                                if(_if_conditional148=!node_compile(it_68,info),                                _if_conditional148) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value81=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                                if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value81;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_69->c_value);
                                if(come_value_69 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_67 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_67, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__45->mCValueName,var__45->mCValueName);
                        }
                    }
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value82=make_define_var(left_type_66,var__45->mCValueName,(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value82;
                    __freed_obj__ = 0;
                    left_type2_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(left_type_66))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value83);
                    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value83;
                    __freed_obj__ = 0;
                    left_type2_70->mStatic=(_Bool)0;
                    if(_if_conditional149=!var__45->mType->mConstant&&!var__45->mType->mStatic,                    _if_conditional149) {
                        if(_if_conditional150=list$1sNodeph_length(left_type2_70->mArrayNum)>0,                        _if_conditional150) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__45->mCValueName,((char*)(right_value84=make_type_name_string(left_type2_70,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
                            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value84;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_71=(struct list$1sNodeph*)come_increment_ref_count((left_type2_70->mArrayNum)),it_72=list$1sNodeph_begin((o2_saved_71)) ,                            0;                            _for_condtionalA4=                            !list$1sNodeph_end((o2_saved_71)) ,                            _for_condtionalA4;                            it_72=list$1sNodeph_next((o2_saved_71)) ,                            0                            ){
                                if(_if_conditional151=!node_compile(it_72,info),                                _if_conditional151) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value85=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                                if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value85;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_73->c_value);
                                if(come_value_73 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_71 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__45->mCValueName,((char*)(right_value86=make_type_name_string(left_type2_70,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value86;
                            __freed_obj__ = 0;
                        }
                    }
                    if(left_type2_70 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_70, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                come_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value87=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 216, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value87;
                __freed_obj__ = 0;
                __dec_obj44=come_value_74->c_value;
                come_value_74->c_value=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s",var__45->mCValueName))));
                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value88;
                __freed_obj__ = 0;
                __dec_obj45=come_value_74->type;
                come_value_74->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(left_type_66))));
                if(__dec_obj45) { come_call_finalizer(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value89);
                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value89;
                __freed_obj__ = 0;
                come_value_74->var=var__45;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_74));
                if(_if_conditional155=self->alloc&&!left_type_66->mClass->mNumber&&left_type_66->mPointerNum==0,                _if_conditional155) {
                    var__45->mType->mAllocaValue=(_Bool)1;
                }
                if(left_type_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_66, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(type_46 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_46, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional156=!node_compile(self->right_value,info),            _if_conditional156) {
                __result70__ = (_Bool)0;
                if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                return __result70__;
            }
            right_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value93=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value93;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            right_type_79=right_value_78->type;
            if(_if_conditional157=self->multiple_assign,            _if_conditional157) {
                if(_if_conditional158=right_type_79->mNoSolvedGenericsType->v1,                _if_conditional158) {
                    right_type_79=right_type_79->mNoSolvedGenericsType->v1;
                }
            }
            if(_if_conditional159=self->alloc,            _if_conditional159) {
                var__80=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                if(_if_conditional160=var__80,                _if_conditional160) {
                    err_msg(info,"Already appended this var name(%s)(2)",self->name);
                    __result71__ = (_Bool)0;
                    if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                    return __result71__;
                }
                if(_if_conditional161=self->multiple_assign,                _if_conditional161) {
                    i_81=0;
                    for(
                    o2_saved_82=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_85=list$1charph_begin((o2_saved_82)) ,                    0;                    _for_condtionalA5=                    !list$1charph_end((o2_saved_82)) ,                    _for_condtionalA5;                    it_85=list$1charph_next((o2_saved_82)) ,                    0                    ){
                        if(_if_conditional166=i_81<list$1sTypeph_length(right_type_79->mGenericsTypes),                        _if_conditional166) {
                            right_type2_91=list$1sTypephp_operator_load_element(right_type_79->mGenericsTypes,i_81);
                            right_type2_91->mFunctionParam=(_Bool)0;
                            add_variable_to_table(it_85,(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(right_type2_91)))),info);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value94;
                            __freed_obj__ = 0;
                            var__80=get_variable_from_table(info->lv_table,it_85);
                            var_type_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(var__80->mType))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value95);
                            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value95;
                            __freed_obj__ = 0;
                            var_type_92->mStatic=(_Bool)0;
                            if(_if_conditional169=!var_type_92->mConstant&&!var_type_92->mStatic,                            _if_conditional169) {
                                if(_if_conditional170=list$1sNodeph_length(var_type_92->mArrayNum)>0,                                _if_conditional170) {
                                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__80->mCValueName,((char*)(right_value96=make_type_name_string(var_type_92,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value96;
                                    __freed_obj__ = 0;
                                    for(
                                    o2_saved_93=(struct list$1sNodeph*)come_increment_ref_count((var_type_92->mArrayNum)),it_94=list$1sNodeph_begin((o2_saved_93)) ,                                    0;                                    _for_condtionalA6=                                    !list$1sNodeph_end((o2_saved_93)) ,                                    _for_condtionalA6;                                    it_94=list$1sNodeph_next((o2_saved_93)) ,                                    0                                    ){
                                        if(_if_conditional171=!node_compile(it_94,info),                                        _if_conditional171) {
                                            err_msg(info,"invalid array num");
                                            exit(1);
                                        }
                                        come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=get_value_from_stack(-1,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                                        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value97;
                                        __freed_obj__ = 0;
                                        dec_stack_ptr(1,info);
                                        add_come_code(info,"*(%s)",come_value_95->c_value);
                                        if(come_value_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(o2_saved_93 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    add_come_code(info,");\n");
                                }
                                else {
                                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__80->mCValueName,((char*)(right_value98=make_type_name_string(var_type_92,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                                    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value98;
                                    __freed_obj__ = 0;
                                }
                            }
                            if(var_type_92 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        i_81++;
                    }
                    if(o2_saved_82 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_82, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional172=self->type==((void*)0),                    _if_conditional172) {
                        right_type_79->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(right_type_79)))),info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value99;
                        __freed_obj__ = 0;
                    }
                    else {
                        type_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=solve_generics(self->type,info->generics_type,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                        if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value100;
                        __freed_obj__ = 0;
                        type_96->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(type_96)))),info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
                        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value101;
                        __freed_obj__ = 0;
                        if(type_96 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    var__80=get_variable_from_table(info->lv_table,self->name);
                    var_type_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(var__80->mType))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value102;
                    __freed_obj__ = 0;
                    var_type_97->mStatic=(_Bool)0;
                    if(_if_conditional173=!var__80->mType->mStatic&&!var_type_97->mConstant&&list$1sNodeph_length(var_type_97->mArrayNum)==0,                    _if_conditional173) {
                        if(_if_conditional174=list$1sNodeph_length(var_type_97->mArrayNum)>0,                        _if_conditional174) {
                            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__80->mCValueName,((char*)(right_value103=make_type_name_string(var_type_97,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value103;
                            __freed_obj__ = 0;
                            for(
                            o2_saved_98=(struct list$1sNodeph*)come_increment_ref_count((var_type_97->mArrayNum)),it_99=list$1sNodeph_begin((o2_saved_98)) ,                            0;                            _for_condtionalA7=                            !list$1sNodeph_end((o2_saved_98)) ,                            _for_condtionalA7;                            it_99=list$1sNodeph_next((o2_saved_98)) ,                            0                            ){
                                if(_if_conditional175=!node_compile(it_99,info),                                _if_conditional175) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value104=get_value_from_stack(-1,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                                if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value104;
                                __freed_obj__ = 0;
                                dec_stack_ptr(1,info);
                                add_come_code(info,"*(%s)",come_value_100->c_value);
                                if(come_value_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_100, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(o2_saved_98 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_98, (void*)0, (void*)0, 0, 0, 0, 0); }
                            add_come_code(info,");\n");
                        }
                        else {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__80->mCValueName,((char*)(right_value105=make_type_name_string(var_type_97,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                            if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value105;
                            __freed_obj__ = 0;
                        }
                    }
                    if(var_type_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_97, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
            }
            current_stack_frame_struct_101=info->current_stack_frame_struct;
            if(_if_conditional176=current_stack_frame_struct_101&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),            _if_conditional176) {
                parent_var_102=get_variable_from_table(info->lv_table->mParent,self->name);
                if(_if_conditional177=parent_var_102!=((void*)0),                _if_conditional177) {
                    if(_if_conditional178=string_operator_not_equals(parent_var_102->mFunName,info->come_fun->mName),                    _if_conditional178) {
                        come_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 335, "struct CVALUE"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value106;
                        __freed_obj__ = 0;
                        left_type_104=parent_var_102->mType;
                        if(_if_conditional179=left_type_104->mPointerNum>0&&right_type_79->mPointerNum>0&&right_type_79->mHeap&&left_type_104->mHeap,                        _if_conditional179) {
                            c_value_105=(char*)come_increment_ref_count(((char*)(right_value107=xsprintf("*(parent->%s)",parent_var_102->mCValueName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value107;
                            __freed_obj__ = 0;
                            decrement_ref_count_object(parent_var_102->mType,c_value_105,info,(_Bool)0);
                            std_move(left_type_104,right_type_79,right_value_78,info);
                            __dec_obj49=come_value_103->c_value;
                            come_value_103->c_value=(char*)come_increment_ref_count(((char*)(right_value108=xsprintf("(*(parent->%s))=%s",parent_var_102->mCValueName,right_value_78->c_value))));
                            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
                            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value108;
                            __freed_obj__ = 0;
                            right_value_id_106=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_78->c_value));
                            if(_if_conditional180=right_value_id_106!=-1,                            _if_conditional180) {
                                remove_object_from_right_values(right_value_id_106,info);
                            }
                            if(c_value_105 && !__freed_obj__) { c_value_105 = come_decrement_ref_count(c_value_105, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional181=left_type_104->mPointerNum>0&&right_type_79->mPointerNum>0&&string_operator_equals(right_type_79->mClass->mName,"void")&&left_type_104->mHeap,                            _if_conditional181) {
                                c_value_107=(char*)come_increment_ref_count(((char*)(right_value109=xsprintf("*(parent->%s)",parent_var_102->mCValueName))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value109;
                                __freed_obj__ = 0;
                                decrement_ref_count_object(parent_var_102->mType,c_value_107,info,(_Bool)0);
                                __dec_obj50=come_value_103->c_value;
                                come_value_103->c_value=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("(*(parent->%s))=%s",parent_var_102->mCValueName,right_value_78->c_value))));
                                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
                                if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value110;
                                __freed_obj__ = 0;
                                if(c_value_107 && !__freed_obj__) { c_value_107 = come_decrement_ref_count(c_value_107, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            else {
                                __dec_obj51=come_value_103->c_value;
                                come_value_103->c_value=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("(*(parent->%s))=%s",parent_var_102->mCValueName,right_value_78->c_value))));
                                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value111;
                                __freed_obj__ = 0;
                            }
                        }
                        __dec_obj52=come_value_103->type;
                        come_value_103->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(left_type_104))));
                        if(__dec_obj52) { come_call_finalizer(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value112);
                        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value112;
                        __freed_obj__ = 0;
                        come_value_103->var=((void*)0);
                        check_assign_type(((char*)(right_value114=xsprintf("\%s is assigning to",((char*)(right_value113=string_to_string(self->name)))))),left_type_104,right_type_79,come_value_103,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value113);
                        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value113;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value114);
                        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value114;
                        __freed_obj__ = 0;
                        add_come_last_code(info,"%s;\n",come_value_103->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_103));
                        __result82__ = (_Bool)1;
                        if(come_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result82__;
                        if(come_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                }
            }
            if(_if_conditional182=self->multiple_assign,            _if_conditional182) {
                multiple_var_name_109=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("multiple_assign_var%d",++num_multiple_var_108))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value115;
                __freed_obj__ = 0;
                add_come_code_at_function_head(info,"%s;\n",((char*)(right_value116=make_define_var(right_value_78->type,multiple_var_name_109,(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value116);
                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value116;
                __freed_obj__ = 0;
                add_come_code(info,"%s=%s;\n",multiple_var_name_109,right_value_78->c_value);
                __dec_obj53=right_value_78->c_value;
                right_value_78->c_value=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(multiple_var_name_109))));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value117);
                if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value117;
                __freed_obj__ = 0;
                i_110=0;
                for(
                o2_saved_111=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_112=list$1charph_begin((o2_saved_111)) ,                0;                _for_condtionalA8=                !list$1charph_end((o2_saved_111)) ,                _for_condtionalA8;                it_112=list$1charph_next((o2_saved_111)) ,                0                ){
                    if(_if_conditional183=i_110<list$1sTypeph_length(right_type_79->mGenericsTypes),                    _if_conditional183) {
                        right_type2_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(list$1sTypephp_operator_load_element(right_type_79->mGenericsTypes,i_110)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value118;
                        __freed_obj__ = 0;
                        var__114=get_variable_from_table(info->lv_table,it_112);
                        var_type_115=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(var__114->mType))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
                        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value119;
                        __freed_obj__ = 0;
                        var_type_115->mStatic=(_Bool)0;
                        if(_if_conditional184=!var_type_115->mConstant,                        _if_conditional184) {
                            if(_if_conditional185=list$1sNodeph_length(var_type_115->mArrayNum)>0,                            _if_conditional185) {
                                add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__114->mCValueName,((char*)(right_value120=make_type_name_string(var_type_115,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                                if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value120;
                                __freed_obj__ = 0;
                                for(
                                o2_saved_116=(struct list$1sNodeph*)come_increment_ref_count((var_type_115->mArrayNum)),it_117=list$1sNodeph_begin((o2_saved_116)) ,                                0;                                _for_condtionalA9=                                !list$1sNodeph_end((o2_saved_116)) ,                                _for_condtionalA9;                                it_117=list$1sNodeph_next((o2_saved_116)) ,                                0                                ){
                                    if(_if_conditional186=!node_compile(it_117,info),                                    _if_conditional186) {
                                        err_msg(info,"invalid array num");
                                        exit(1);
                                    }
                                    come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=get_value_from_stack(-1,info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value121;
                                    __freed_obj__ = 0;
                                    dec_stack_ptr(1,info);
                                    add_come_code(info,"*(%s)",come_value_118->c_value);
                                    if(come_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(o2_saved_116 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_116, (void*)0, (void*)0, 0, 0, 0, 0); }
                                add_come_code(info,");\n");
                            }
                            else {
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__114->mCValueName,((char*)(right_value122=make_type_name_string(var_type_115,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                                if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value122;
                                __freed_obj__ = 0;
                            }
                        }
                        left_type_119=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(var__114->mType))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value123);
                        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value123;
                        __freed_obj__ = 0;
                        right_value2_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value124=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 418, "struct CVALUE"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value124);
                        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value124;
                        __freed_obj__ = 0;
                        __dec_obj54=right_value2_120->c_value;
                        right_value2_120->c_value=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s->v%d",right_value_78->c_value,i_110+1))));
                        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value125);
                        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value125;
                        __freed_obj__ = 0;
                        __dec_obj55=right_value2_120->type;
                        right_value2_120->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(right_type2_113))));
                        if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value126);
                        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value126;
                        __freed_obj__ = 0;
                        right_value2_120->var=((void*)0);
                        come_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 424, "struct CVALUE"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[6] = right_value127;
                        __freed_obj__ = 0;
                        check_assign_type(((char*)(right_value129=xsprintf("\%s is assining to}",((char*)(right_value128=string_to_string(self->name)))))),left_type_119,right_type2_113,come_value_121,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value128);
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[7] = right_value128;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value129);
                        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[8] = right_value129;
                        __freed_obj__ = 0;
                        if(_if_conditional187=right_type2_113->mHeap&&left_type_119->mHeap&&left_type_119->mPointerNum>0&&right_type2_113->mPointerNum>0,                        _if_conditional187) {
                            if(_if_conditional188=self->alloc,                            _if_conditional188) {
                                std_move(left_type_119,right_type2_113,right_value2_120,info);
                                __dec_obj56=come_value_121->c_value;
                                come_value_121->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s=%s",var__114->mCValueName,right_value2_120->c_value))));
                                if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value130;
                                __freed_obj__ = 0;
                            }
                            right_value_id_122=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_120->c_value));
                            if(_if_conditional189=right_value_id_122!=-1,                            _if_conditional189) {
                                remove_object_from_right_values(right_value_id_122,info);
                            }
                        }
                        else {
                            __dec_obj57=come_value_121->c_value;
                            come_value_121->c_value=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("%s=%s",var__114->mCValueName,right_value2_120->c_value))));
                            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value131;
                            __freed_obj__ = 0;
                        }
                        __dec_obj58=come_value_121->type;
                        come_value_121->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(left_type_119))));
                        if(__dec_obj58) { come_call_finalizer(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value132);
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[9] = right_value132;
                        __freed_obj__ = 0;
                        come_value_121->var=var__114;
                        if(_if_conditional190=self->alloc,                        _if_conditional190) {
                            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value133=make_define_var(left_type_119,var__114->mCValueName,(_Bool)0,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value133;
                            __freed_obj__ = 0;
                            add_come_code(info,"%s;\n",come_value_121->c_value);
                        }
                        else {
                            add_come_code(info,"%s;\n",come_value_121->c_value);
                        }
                        if(right_type2_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,right_type2_113, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_type_115 && !__freed_obj__) { come_call_finalizer(sType_finalize,var_type_115, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(left_type_119 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_119, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(right_value2_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value2_120, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_value_121 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    i_110++;
                }
                if(o2_saved_111 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_111, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(multiple_var_name_109 && !__freed_obj__) { multiple_var_name_109 = come_decrement_ref_count(multiple_var_name_109, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                var__123=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional191=var__123==((void*)0),                _if_conditional191) {
                    var__123=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional192=var__123==((void*)0),                    _if_conditional192) {
                        err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                        __result83__ = (_Bool)1;
                        if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                        return __result83__;
                    }
                }
                if(_if_conditional193=var__123->mType==((void*)0),                _if_conditional193) {
                    __dec_obj59=var__123->mType;
                    var__123->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(right_type_79))));
                    if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value134;
                    __freed_obj__ = 0;
                }
                left_type_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(var__123->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value135;
                __freed_obj__ = 0;
                come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 477, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value136;
                __freed_obj__ = 0;
                if(_if_conditional194=var__123->mType->mStatic&&!var__123->mGlobal,                _if_conditional194) {
                    check_assign_type(((char*)(right_value138=xsprintf("\%s is assining to",((char*)(right_value137=string_to_string(self->name)))))),left_type_124,right_type_79,right_value_78,(_Bool)0,info);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value137;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value138);
                    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value138;
                    __freed_obj__ = 0;
                    add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value139=make_define_var(left_type_124,var__123->mCValueName,(_Bool)0,info))),right_value_78->c_value);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value139);
                    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value139;
                    __freed_obj__ = 0;
                    __dec_obj60=come_value_125->c_value;
                    come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(""))));
                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value140);
                    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value140;
                    __freed_obj__ = 0;
                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
                    transpiler_clear_last_code(info);
                }
                else {
                    if(_if_conditional195=var__123->mType->mConstant,                    _if_conditional195) {
                        check_assign_type(((char*)(right_value142=xsprintf("\%s is assining to",((char*)(right_value141=string_to_string(self->name)))))),left_type_124,right_type_79,right_value_78,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value141;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value142);
                        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value142;
                        __freed_obj__ = 0;
                        if(_if_conditional196=self->alloc,                        _if_conditional196) {
                            add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value143=make_define_var(left_type_124,var__123->mCValueName,(_Bool)0,info))),right_value_78->c_value);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value143;
                            __freed_obj__ = 0;
                        }
                        else {
                            add_come_code_at_function_head(info,"%s=%s;\n",var__123->mCValueName,right_value_78->c_value);
                        }
                        __dec_obj61=come_value_125->c_value;
                        come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(""))));
                        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value144);
                        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value144;
                        __freed_obj__ = 0;
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
                        transpiler_clear_last_code(info);
                    }
                    else {
                        if(_if_conditional197=right_type_79->mHeap&&left_type_124->mHeap&&left_type_124->mPointerNum>0&&right_type_79->mPointerNum>0,                        _if_conditional197) {
                            check_assign_type(((char*)(right_value146=xsprintf("\%s is assining to",((char*)(right_value145=string_to_string(self->name)))))),left_type_124,right_type_79,right_value_78,(_Bool)0,info);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                            if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value145;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
                            if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value146;
                            __freed_obj__ = 0;
                            if(_if_conditional198=self->alloc,                            _if_conditional198) {
                                std_move(left_type_124,right_type_79,right_value_78,info);
                                __dec_obj62=come_value_125->c_value;
                                come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("%s=%s",var__123->mCValueName,right_value_78->c_value))));
                                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
                                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value147;
                                __freed_obj__ = 0;
                            }
                            else {
                                decrement_ref_count_object(left_type_124,var__123->mCValueName,info,(_Bool)0);
                                std_move(left_type_124,right_type_79,right_value_78,info);
                                __dec_obj63=come_value_125->c_value;
                                come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s=%s",var__123->mCValueName,right_value_78->c_value))));
                                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                                if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value148;
                                __freed_obj__ = 0;
                            }
                            right_value_id_126=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_78->c_value));
                            if(_if_conditional199=right_value_id_126!=-1,                            _if_conditional199) {
                                remove_object_from_right_values(right_value_id_126,info);
                            }
                            __dec_obj64=come_value_125->type;
                            come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(left_type_124))));
                            if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value149;
                            __freed_obj__ = 0;
                            come_value_125->var=var__123;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
                            add_come_last_code(info,"%s;\n",come_value_125->c_value);
                        }
                        else {
                            if(_if_conditional200=string_operator_equals(right_type_79->mClass->mName,"void")&&left_type_124->mHeap&&left_type_124->mPointerNum>0&&right_type_79->mPointerNum>0,                            _if_conditional200) {
                                check_assign_type(((char*)(right_value151=xsprintf("\%s is assining to",((char*)(right_value150=string_to_string(self->name)))))),left_type_124,right_type_79,right_value_78,(_Bool)0,info);
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value150;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value151);
                                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value151;
                                __freed_obj__ = 0;
                                if(_if_conditional201=self->alloc,                                _if_conditional201) {
                                    __dec_obj65=come_value_125->c_value;
                                    come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s=%s",var__123->mCValueName,right_value_78->c_value))));
                                    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                                    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value152;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    decrement_ref_count_object(left_type_124,var__123->mCValueName,info,(_Bool)0);
                                    __dec_obj66=come_value_125->c_value;
                                    come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s=%s",var__123->mCValueName,right_value_78->c_value))));
                                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                                    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value153;
                                    __freed_obj__ = 0;
                                }
                                __dec_obj67=come_value_125->type;
                                come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(left_type_124))));
                                if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value154);
                                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value154;
                                __freed_obj__ = 0;
                                come_value_125->var=var__123;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
                                add_come_last_code(info,"%s;\n",come_value_125->c_value);
                            }
                            else {
                                if(_if_conditional202=left_type_124->mHeap&&!right_type_79->mHeap,                                _if_conditional202) {
                                    if(_if_conditional203=string_operator_equals(right_type_79->mClass->mName,"void")&&right_type_79->mPointerNum==1,                                    _if_conditional203) {
                                    }
                                    else {
                                        if(_if_conditional204=!right_type_79->mDelegate&&!right_type_79->mShare&&!gComeGC,                                        _if_conditional204) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __result84__ = (_Bool)0;
                                            if(left_type_124 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_124, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(come_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
                                            return __result84__;
                                        }
                                    }
                                }
                                check_assign_type(((char*)(right_value156=xsprintf("\%s is assining to",((char*)(right_value155=string_to_string(self->name)))))),left_type_124,right_type_79,right_value_78,(_Bool)0,info);
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value155;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value156);
                                if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value156;
                                __freed_obj__ = 0;
                                __dec_obj68=come_value_125->c_value;
                                come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%s=%s",var__123->mCValueName,right_value_78->c_value))));
                                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value157);
                                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value157;
                                __freed_obj__ = 0;
                                __dec_obj69=come_value_125->type;
                                come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(left_type_124))));
                                if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value158);
                                if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value158;
                                __freed_obj__ = 0;
                                come_value_125->var=var__123;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
                                add_come_last_code(info,"%s;\n",come_value_125->c_value);
                            }
                        }
                    }
                }
                if(_if_conditional205=self->alloc&&!left_type_124->mConstant&&!left_type_124->mStatic,                _if_conditional205) {
                    if(_if_conditional206=list$1sNodeph_length(left_type_124->mArrayNum)>0,                    _if_conditional206) {
                        add_come_code(info,"%s;\n",((char*)(right_value159=make_define_var(left_type_124,var__123->mCValueName,(_Bool)0,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value159;
                        __freed_obj__ = 0;
                    }
                    else {
                        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value160=make_define_var(left_type_124,var__123->mCValueName,(_Bool)0,info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value160;
                        __freed_obj__ = 0;
                    }
                }
                if(left_type_124 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_124, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    __result85__ = (_Bool)1;
    if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
    return __result85__;
    if(array_initializer_37 && !__freed_obj__) { array_initializer_37 = come_decrement_ref_count(array_initializer_37, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_38;
unsigned int hash_39;
unsigned int it_40;
_Bool _while_condtional9;
_Bool _if_conditional116;
void* right_value61;
_Bool _if_conditional118;
struct sVar* __result42__;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct sVar* __result43__;
struct sVar* __result44__;
void* right_value62;
void* right_value63;
struct sVar* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_38, 0, sizeof(struct sVar*));
memset(&hash_39, 0, sizeof(unsigned int));
memset(&it_40, 0, sizeof(unsigned int));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
            memset(&default_value_38,0,sizeof(struct sVar*));
            hash_39=string_get_hash_key(((char*)key))%self->size;
            it_40=hash_39;
            while(_while_condtional9=(_Bool)1,            _while_condtional9) {
                if(_if_conditional116=self->item_existance[it_40],                _if_conditional116) {
                    if(_if_conditional118=optional$2boolbool_value(((struct optional$2boolbool*)(right_value61=string_equals(self->keys[it_40],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61),
                    (right_value61 && right_value61 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value61, 
                    __freed_obj__ = 0, 
                    _if_conditional118) {
                        __result42__ = __result_obj__ = self->items[it_40];
                        return __result42__;
                    }
                    it_40++;
                    if(_if_conditional119=it_40>=self->size,                    _if_conditional119) {
                        it_40=0;
                    }
                    else {
                        if(_if_conditional120=it_40==hash_39,                        _if_conditional120) {
                            __result43__ = __result_obj__ = default_value_38;
                            return __result43__;
                        }
                    }
                }
                else {
                    __result44__ = __result_obj__ = default_value_38;
                    return __result44__;
                }
            }
            __result46__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value63=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value62=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1622, "struct optional$2sVarpbool"))),default_value_38,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value62;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value63;
            __freed_obj__ = 0;
            return __result46__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
_Bool default_value_41;
_Bool __result40__;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_41, 0, sizeof(_Bool));
                        if(_if_conditional117=self==((void*)0),                        _if_conditional117) {
                            memset(&default_value_41,0,sizeof(_Bool));
                            __result40__ = default_value_41;
                            return __result40__;
                        }
                        else {
                            __result41__ = self->v1;
                            return __result41__;
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
struct optional$2sVarpbool* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->v1=v1;
                self->v2=v2;
                __result45__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result45__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
struct tuple3$3sTypephcharphsNodeph* result_48;
struct tuple3$3sTypephcharphsNodeph* __result51__;
_Bool _if_conditional128;
struct tuple3$3sTypephcharphsNodeph* __result52__;
struct tuple3$3sTypephcharphsNodeph* result_49;
struct tuple3$3sTypephcharphsNodeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_48, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_49, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional127=self==((void*)0),                    _if_conditional127) {
                        memset(&result_48,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result51__ = __result_obj__ = result_48;
                        return __result51__;
                    }
                    self->it=self->head;
                    if(_if_conditional128=self->it,                    _if_conditional128) {
                        __result52__ = __result_obj__ = self->it->item;
                        return __result52__;
                    }
                    memset(&result_49,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result53__ = __result_obj__ = result_49;
                    return __result53__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result54__ = self==((void*)0)||self->it==((void*)0);
                    return __result54__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional129;
struct tuple3$3sTypephcharphsNodeph* result_51;
struct tuple3$3sTypephcharphsNodeph* __result55__;
_Bool _if_conditional130;
struct tuple3$3sTypephcharphsNodeph* __result56__;
struct tuple3$3sTypephcharphsNodeph* result_52;
struct tuple3$3sTypephcharphsNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_51, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_52, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    if(_if_conditional129=self==((void*)0)||self->it==((void*)0),                    _if_conditional129) {
                        memset(&result_51,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                        __result55__ = __result_obj__ = result_51;
                        return __result55__;
                    }
                    self->it=self->it->next;
                    if(_if_conditional130=self->it,                    _if_conditional130) {
                        __result56__ = __result_obj__ = self->it->item;
                        return __result56__;
                    }
                    memset(&result_52,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                    __result57__ = __result_obj__ = result_52;
                    return __result57__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
_Bool _if_conditional135;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional134=self!=((void*)0)&&self->c_value!=((void*)0),                            _if_conditional134) {
                                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional135=self!=((void*)0)&&self->type!=((void*)0),                            _if_conditional135) {
                                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result60__ = self->len;
                            return __result60__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
struct sNode* result_60;
struct sNode* __result61__;
_Bool _if_conditional139;
struct sNode* __result62__;
struct sNode* result_61;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_60, 0, sizeof(struct sNode*));
memset(&result_61, 0, sizeof(struct sNode*));
                                if(_if_conditional138=self==((void*)0),                                _if_conditional138) {
                                    memset(&result_60,0,sizeof(struct sNode*));
                                    __result61__ = __result_obj__ = result_60;
                                    return __result61__;
                                }
                                self->it=self->head;
                                if(_if_conditional139=self->it,                                _if_conditional139) {
                                    __result62__ = __result_obj__ = self->it->item;
                                    return __result62__;
                                }
                                memset(&result_61,0,sizeof(struct sNode*));
                                __result63__ = __result_obj__ = result_61;
                                return __result63__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __result64__ = self==((void*)0)||self->it==((void*)0);
                                return __result64__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
struct sNode* result_63;
struct sNode* __result65__;
_Bool _if_conditional141;
struct sNode* __result66__;
struct sNode* result_64;
struct sNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_63, 0, sizeof(struct sNode*));
memset(&result_64, 0, sizeof(struct sNode*));
                                if(_if_conditional140=self==((void*)0)||self->it==((void*)0),                                _if_conditional140) {
                                    memset(&result_63,0,sizeof(struct sNode*));
                                    __result65__ = __result_obj__ = result_63;
                                    return __result65__;
                                }
                                self->it=self->it->next;
                                if(_if_conditional141=self->it,                                _if_conditional141) {
                                    __result66__ = __result_obj__ = self->it->item;
                                    return __result66__;
                                }
                                memset(&result_64,0,sizeof(struct sNode*));
                                __result67__ = __result_obj__ = result_64;
                                return __result67__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional152;
void* right_value90;
struct list_item$1CVALUEph* litem_75;
struct CVALUE* __dec_obj46;
_Bool _if_conditional154;
void* right_value91;
struct list_item$1CVALUEph* litem_76;
struct CVALUE* __dec_obj47;
void* right_value92;
struct list_item$1CVALUEph* litem_77;
struct CVALUE* __dec_obj48;
struct list$1CVALUEph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
memset(&litem_75, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value91, 0, sizeof(void*));
memset(&litem_76, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value92, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional152=self->len==0,                    _if_conditional152) {
                        litem_75=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value90=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282, "struct list_item$1CVALUEph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value90;
                        __freed_obj__ = 0;
                        litem_75->prev=((void*)0);
                        litem_75->next=((void*)0);
                        __dec_obj46=litem_75->item;
                        litem_75->item=(struct CVALUE*)come_increment_ref_count(item);
                        if(__dec_obj46) { come_call_finalizer(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_75;
                        self->head=litem_75;
                    }
                    else {
                        if(_if_conditional154=self->len==1,                        _if_conditional154) {
                            litem_76=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value91=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292, "struct list_item$1CVALUEph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value91;
                            __freed_obj__ = 0;
                            litem_76->prev=self->head;
                            litem_76->next=((void*)0);
                            __dec_obj47=litem_76->item;
                            litem_76->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj47) { come_call_finalizer(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_76;
                            self->head->next=litem_76;
                        }
                        else {
                            litem_77=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value92=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 302, "struct list_item$1CVALUEph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value92;
                            __freed_obj__ = 0;
                            litem_77->prev=self->tail;
                            litem_77->next=((void*)0);
                            __dec_obj48=litem_77->item;
                            litem_77->item=(struct CVALUE*)come_increment_ref_count(item);
                            if(__dec_obj48) { come_call_finalizer(CVALUE_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail->next=litem_77;
                            self->tail=litem_77;
                        }
                    }
                    self->len++;
                    __result69__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result69__;
                    if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional153=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional153) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
char* result_83;
char* __result72__;
_Bool _if_conditional163;
char* __result73__;
char* result_84;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_83, 0, sizeof(char*));
memset(&result_84, 0, sizeof(char*));
                        if(_if_conditional162=self==((void*)0),                        _if_conditional162) {
                            memset(&result_83,0,sizeof(char*));
                            __result72__ = __result_obj__ = result_83;
                            return __result72__;
                        }
                        self->it=self->head;
                        if(_if_conditional163=self->it,                        _if_conditional163) {
                            __result73__ = __result_obj__ = self->it->item;
                            return __result73__;
                        }
                        memset(&result_84,0,sizeof(char*));
                        __result74__ = __result_obj__ = result_84;
                        return __result74__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result75__ = self==((void*)0)||self->it==((void*)0);
                        return __result75__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional164;
char* result_86;
char* __result76__;
_Bool _if_conditional165;
char* __result77__;
char* result_87;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_86, 0, sizeof(char*));
memset(&result_87, 0, sizeof(char*));
                        if(_if_conditional164=self==((void*)0)||self->it==((void*)0),                        _if_conditional164) {
                            memset(&result_86,0,sizeof(char*));
                            __result76__ = __result_obj__ = result_86;
                            return __result76__;
                        }
                        self->it=self->it->next;
                        if(_if_conditional165=self->it,                        _if_conditional165) {
                            __result77__ = __result_obj__ = self->it->item;
                            return __result77__;
                        }
                        memset(&result_87,0,sizeof(char*));
                        __result78__ = __result_obj__ = result_87;
                        return __result78__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result79__ = self->len;
                            return __result79__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
struct list_item$1sTypeph* it_88;
int i_89;
_Bool _while_condtional10;
_Bool _if_conditional168;
struct sType* __result80__;
struct sType* default_value_90;
struct sType* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_88, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_89, 0, sizeof(int));
memset(&default_value_90, 0, sizeof(struct sType*));
                                if(_if_conditional167=position<0,                                _if_conditional167) {
                                    position+=self->len;
                                }
                                it_88=self->head;
                                i_89=0;
                                while(_while_condtional10=it_88!=((void*)0),                                _while_condtional10) {
                                    if(_if_conditional168=position==i_89,                                    _if_conditional168) {
                                        __result80__ = __result_obj__ = it_88->item;
                                        return __result80__;
                                    }
                                    it_88=it_88->next;
                                    i_89++;
                                }
                                memset(&default_value_90,0,sizeof(struct sType*));
                                __result81__ = __result_obj__ = default_value_90;
                                if(default_value_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_90, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result81__;
                                if(default_value_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_90, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result86__ = self->sline;
    return __result86__;
}

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value161;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
    __result87__ = __result_obj__ = ((char*)(right_value161=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value161;
    __freed_obj__ = 0;
    return __result87__;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value162;
void* right_value163;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value172;
struct sNode* result_128;
struct sNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct sNode*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 592, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value163=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value162=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 592, "struct sStoreNode")))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),((void*)0),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sStoreNode_sline;
    _inf_value1->sname=(void*)sStoreNode_sname;
    _inf_value1->terminated=(void*)sStoreNode_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    result_128=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value172=_inf_value1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value163;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value172;
    __freed_obj__ = 0;
    __result90__ = __result_obj__ = result_128;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_128 && !__freed_obj__) { result_128 = come_decrement_ref_count(result_128, ((struct sNode*)result_128)->finalize, ((struct sNode*)result_128)->_protocol_obj, 0, 1, 0); } 
    return __result90__;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right_node && !__freed_obj__) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0); } 
    if(result_128 && !__freed_obj__) { result_128 = come_decrement_ref_count(result_128, ((struct sNode*)result_128)->finalize, ((struct sNode*)result_128)->_protocol_obj, 0, 0, 0); } 
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value173;
char* __dec_obj77;
void* right_value174;
char* __dec_obj78;
struct sLoadNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
    __dec_obj77=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(name))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value173;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(info->sname))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value174;
    __freed_obj__ = 0;
    __result91__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result91__;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result92__ = (_Bool)0;
    return __result92__;
}

char* sLoadNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value175;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value175, 0, sizeof(void*));
    __result93__ = __result_obj__ = ((char*)(right_value175=__builtin_string("sLoadNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value175;
    __freed_obj__ = 0;
    return __result93__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* current_stack_frame_struct_129;
_Bool _if_conditional226;
struct sVar* parent_var_130;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value176;
struct CVALUE* come_value_131;
struct sType* type_132;
void* right_value177;
char* __dec_obj79;
void* right_value178;
struct sType* __dec_obj80;
_Bool __result94__;
struct sVar* var__133;
_Bool _if_conditional229;
_Bool _if_conditional230;
struct sFun* fun_137;
_Bool _if_conditional235;
void* right_value182;
struct CVALUE* come_value_138;
void* right_value183;
char* __dec_obj81;
struct sType* __dec_obj82;
_Bool __result100__;
_Bool __result101__;
void* right_value184;
struct CVALUE* come_value_139;
void* right_value185;
char* __dec_obj83;
void* right_value186;
struct sType* __dec_obj84;
_Bool _if_conditional236;
void* right_value187;
struct sType* __dec_obj85;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&current_stack_frame_struct_129, 0, sizeof(struct sClass*));
memset(&parent_var_130, 0, sizeof(struct sVar*));
memset(&right_value176, 0, sizeof(void*));
memset(&come_value_131, 0, sizeof(struct CVALUE*));
memset(&type_132, 0, sizeof(struct sType*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&var__133, 0, sizeof(struct sVar*));
memset(&fun_137, 0, sizeof(struct sFun*));
memset(&right_value182, 0, sizeof(void*));
memset(&come_value_138, 0, sizeof(struct CVALUE*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&come_value_139, 0, sizeof(struct CVALUE*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
    current_stack_frame_struct_129=info->current_stack_frame_struct;
    if(_if_conditional226=current_stack_frame_struct_129&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),    _if_conditional226) {
        parent_var_130=get_variable_from_table(info->lv_table->mParent,self->name);
        if(_if_conditional227=parent_var_130!=((void*)0),        _if_conditional227) {
            if(_if_conditional228=string_operator_not_equals(parent_var_130->mFunName,info->come_fun->mName),            _if_conditional228) {
                come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value176=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 635, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value176;
                __freed_obj__ = 0;
                type_132=parent_var_130->mType;
                __dec_obj79=come_value_131->c_value;
                come_value_131->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("(*(parent->%s))",parent_var_130->mCValueName))));
                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value177);
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value177;
                __freed_obj__ = 0;
                __dec_obj80=come_value_131->type;
                come_value_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(type_132))));
                if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value178);
                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value178;
                __freed_obj__ = 0;
                come_value_131->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_131->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
                __result94__ = (_Bool)1;
                if(come_value_131 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result94__;
                if(come_value_131 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
        }
    }
    var__133=get_variable_from_table(info->lv_table,self->name);
    if(_if_conditional229=var__133==((void*)0),    _if_conditional229) {
        var__133=get_variable_from_table(info->gv_table,self->name);
        if(_if_conditional230=var__133==((void*)0),        _if_conditional230) {
            fun_137=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            if(_if_conditional235=fun_137,            _if_conditional235) {
                come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 662, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value182;
                __freed_obj__ = 0;
                __dec_obj81=come_value_138->c_value;
                come_value_138->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s",fun_137->mName))));
                if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value183;
                __freed_obj__ = 0;
                __dec_obj82=come_value_138->type;
                come_value_138->type=(struct sType*)come_increment_ref_count(fun_137->mLambdaType);
                if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
                come_value_138->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
                __result100__ = (_Bool)1;
                if(come_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result100__;
                if(come_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                __result101__ = (_Bool)1;
                return __result101__;
            }
        }
    }
    come_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 679, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value184;
    __freed_obj__ = 0;
    __dec_obj83=come_value_139->c_value;
    come_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s",var__133->mCValueName))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value185;
    __freed_obj__ = 0;
    __dec_obj84=come_value_139->type;
    come_value_139->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(var__133->mType))));
    if(__dec_obj84) { come_call_finalizer(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value186;
    __freed_obj__ = 0;
    come_value_139->var=var__133;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
    if(_if_conditional236=list$1sNodeph_length(come_value_139->type->mArrayNum)==1,    _if_conditional236) {
        __dec_obj85=come_value_139->type->mOriginalLoadVarType->v1;
        come_value_139->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(come_value_139->type))));
        if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value187;
        __freed_obj__ = 0;
        list$1sNodeph_reset(come_value_139->type->mArrayNum);
        come_value_139->type->mPointerNum++;
        come_value_139->type->mOriginalTypeNamePointerNum=come_value_139->type->mPointerNum;
    }
    __result103__ = (_Bool)1;
    if(come_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result103__;
    if(come_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_134;
unsigned int hash_135;
unsigned int it_136;
_Bool _while_condtional11;
_Bool _if_conditional231;
void* right_value179;
_Bool _if_conditional232;
struct sFun* __result95__;
_Bool _if_conditional233;
_Bool _if_conditional234;
struct sFun* __result96__;
struct sFun* __result97__;
void* right_value180;
void* right_value181;
struct sFun* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_134, 0, sizeof(struct sFun*));
memset(&hash_135, 0, sizeof(unsigned int));
memset(&it_136, 0, sizeof(unsigned int));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
                memset(&default_value_134,0,sizeof(struct sFun*));
                hash_135=string_get_hash_key(((char*)key))%self->size;
                it_136=hash_135;
                while(_while_condtional11=(_Bool)1,                _while_condtional11) {
                    if(_if_conditional231=self->item_existance[it_136],                    _if_conditional231) {
                        if(_if_conditional232=optional$2boolbool_value(((struct optional$2boolbool*)(right_value179=string_equals(self->keys[it_136],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179),
                        (right_value179 && right_value179 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value179, 
                        __freed_obj__ = 0, 
                        _if_conditional232) {
                            __result95__ = __result_obj__ = self->items[it_136];
                            return __result95__;
                        }
                        it_136++;
                        if(_if_conditional233=it_136>=self->size,                        _if_conditional233) {
                            it_136=0;
                        }
                        else {
                            if(_if_conditional234=it_136==hash_135,                            _if_conditional234) {
                                __result96__ = __result_obj__ = default_value_134;
                                return __result96__;
                            }
                        }
                    }
                    else {
                        __result97__ = __result_obj__ = default_value_134;
                        return __result97__;
                    }
                }
                __result99__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value181=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value180=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1622, "struct optional$2sFunpbool"))),default_value_134,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value180;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value181);
                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value181;
                __freed_obj__ = 0;
                return __result99__;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    __result98__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result98__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_140;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_141;
struct list$1sNodeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_140, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_141, 0, sizeof(struct list_item$1sNodeph*));
            it_140=self->head;
            while(_while_condtional12=it_140!=((void*)0),            _while_condtional12) {
                prev_it_141=it_140;
                it_140=it_140->next;
                if(prev_it_141 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_141, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result102__ = __result_obj__ = self;
            return __result102__;
}

int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result104__ = self->sline;
    return __result104__;
}

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value188;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
    __result105__ = __result_obj__ = ((char*)(right_value188=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value188;
    __freed_obj__ = 0;
    return __result105__;
}

struct sNode* load_var(char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value189;
void* right_value190;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value194;
struct sNode* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 709, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value190=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value189=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 709, "struct sLoadNode")))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sLoadNode_sline;
    _inf_value2->sname=(void*)sLoadNode_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result108__ = __result_obj__ = ((struct sNode*)(right_value194=_inf_value2));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value189;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value190;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value194;
    __freed_obj__ = 0;
    return __result108__;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value195;
char* __dec_obj88;
void* right_value196;
char* __dec_obj89;
struct sFunLoadNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
    __dec_obj88=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(name))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value195;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __dec_obj89=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(info->sname))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value196;
    __freed_obj__ = 0;
    __result109__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result109__;
    if(self && !__freed_obj__) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional243;
_Bool _if_conditional244;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional243=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional243) {
            if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional244) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

_Bool sFunLoadNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result110__ = (_Bool)0;
    return __result110__;
}

char* sFunLoadNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value197;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
    __result111__ = __result_obj__ = ((char*)(right_value197=__builtin_string("sFunLoadNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value197;
    __freed_obj__ = 0;
    return __result111__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* fun_143;
_Bool _if_conditional245;
_Bool __result112__;
void* right_value198;
struct CVALUE* come_value_144;
void* right_value199;
char* __dec_obj90;
struct sType* __dec_obj91;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&fun_143, 0, sizeof(struct sFun*));
memset(&right_value198, 0, sizeof(void*));
memset(&come_value_144, 0, sizeof(struct CVALUE*));
memset(&right_value199, 0, sizeof(void*));
    fun_143=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    if(_if_conditional245=fun_143==((void*)0),    _if_conditional245) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        __result112__ = (_Bool)0;
        return __result112__;
    }
    else {
        come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 748, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value198;
        __freed_obj__ = 0;
        __dec_obj90=come_value_144->c_value;
        come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value199=xsprintf("%s",fun_143->mName))));
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value199;
        __freed_obj__ = 0;
        __dec_obj91=come_value_144->type;
        come_value_144->type=(struct sType*)come_increment_ref_count(fun_143->mLambdaType);
        if(__dec_obj91) { come_call_finalizer(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
        come_value_144->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
        if(come_value_144 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result113__ = (_Bool)1;
    return __result113__;
}

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = self->sline;
    return __result114__;
}

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value200;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value200, 0, sizeof(void*));
    __result115__ = __result_obj__ = ((char*)(right_value200=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value200;
    __freed_obj__ = 0;
    return __result115__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value201;
struct sVar* self_145;
void* right_value202;
char* __dec_obj92;
void* right_value203;
struct sType* __dec_obj93;
_Bool _if_conditional250;
void* right_value204;
char* __dec_obj94;
static int n_146=0;
void* right_value205;
char* __dec_obj95;
_Bool _if_conditional251;
void* right_value206;
char* __dec_obj96;
char* __dec_obj97;
void* right_value217;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value201, 0, sizeof(void*));
memset(&self_145, 0, sizeof(struct sVar*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
    self_145=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value201=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 773, "struct sVar"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value201;
    __freed_obj__ = 0;
    __dec_obj92=self_145->mName;
    self_145->mName=(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string(name))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value202;
    __freed_obj__ = 0;
    __dec_obj93=self_145->mType;
    self_145->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(type))));
    if(__dec_obj93) { come_call_finalizer(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value203;
    __freed_obj__ = 0;
    if(_if_conditional250=type->mFunctionParam,    _if_conditional250) {
        __dec_obj94=self_145->mCValueName;
        self_145->mCValueName=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(name))));
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value204;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj95=self_145->mCValueName;
        self_145->mCValueName=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("%s_%d",name,n_146++))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value205;
        __freed_obj__ = 0;
    }
    self_145->mBlockLevel=info->block_level;
    self_145->mAllocaValue=(_Bool)0;
    self_145->mFunctionParam=(_Bool)0;
    self_145->mNoFree=(_Bool)0;
    if(_if_conditional251=info->come_fun,    _if_conditional251) {
        __dec_obj96=self_145->mFunName;
        self_145->mFunName=(char*)come_increment_ref_count(((char*)(right_value206=string_clone(info->come_fun->mName))));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj97=self_145->mFunName;
        self_145->mFunName=((void*)0);
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_145));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value217;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_145 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_145, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional246=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional246) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional247=self!=((void*)0)&&self->mCValueName!=((void*)0),        _if_conditional247) {
            if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional248=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional248) {
            if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional249=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional249) {
            if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional252;
unsigned int hash_164;
unsigned int it_165;
_Bool _while_condtional15;
_Bool _if_conditional264;
void* right_value211;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool same_key_exist_182;
char* it2_185;
_Bool _for_condtionalA11;
void* right_value213;
_Bool _if_conditional295;
_Bool _if_conditional296;
struct map$2charphsVarph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_164, 0, sizeof(unsigned int));
memset(&it_165, 0, sizeof(unsigned int));
memset(&right_value211, 0, sizeof(void*));
memset(&same_key_exist_182, 0, sizeof(_Bool));
memset(&it2_185, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
        if(_if_conditional252=self->len*10>=self->size,        _if_conditional252) {
            map$2charphsVarph_rehash(self);
        }
        hash_164=string_get_hash_key(key)%self->size;
        it_165=hash_164;
        while(_while_condtional15=(_Bool)1,        _while_condtional15) {
            if(_if_conditional264=self->item_existance[it_165],            _if_conditional264) {
                if(_if_conditional265=optional$2boolbool_value(((struct optional$2boolbool*)(right_value211=string_equals(self->keys[it_165],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211),
                (right_value211 && right_value211 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value211, 
                __freed_obj__ = 0, 
                _if_conditional265) {
                    if(_if_conditional266=1,                    _if_conditional266) {
                        list$1charp_remove(self->key_list,self->keys[it_165]);
                        if(self->keys[it_165] && !__freed_obj__) { self->keys[it_165] = come_decrement_ref_count(self->keys[it_165], (void*)0, (void*)0, 0, 0, 0); }
                        self->keys[it_165]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_165]);
                        self->keys[it_165]=key;
                    }
                    if(_if_conditional286=1,                    _if_conditional286) {
                        if(self->items[it_165] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[it_165], (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->items[it_165]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_165]=item;
                    }
                    break;
                }
                it_165++;
                if(_if_conditional287=it_165>=self->size,                _if_conditional287) {
                    it_165=0;
                }
                else {
                    if(_if_conditional288=it_165==hash_164,                    _if_conditional288) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_165]=(_Bool)1;
                if(_if_conditional289=1,                _if_conditional289) {
                    self->keys[it_165]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_165]=key;
                }
                if(_if_conditional290=1,                _if_conditional290) {
                    self->items[it_165]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_165]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_182=(_Bool)0;
        for(
        it2_185=list$1charp_begin(self->key_list) ,        0;        _for_condtionalA11=        !list$1charp_end(self->key_list) ,        _for_condtionalA11;        it2_185=list$1charp_next(self->key_list) ,        0        ){
            if(_if_conditional295=optional$2boolbool_value(((struct optional$2boolbool*)(right_value213=string_equals(it2_185,key)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213),
            (right_value213 && right_value213 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value213, 
            __freed_obj__ = 0, 
            _if_conditional295) {
                same_key_exist_182=(_Bool)1;
            }
        }
        if(_if_conditional296=!same_key_exist_182,        _if_conditional296) {
            list$1charp_push_back(self->key_list,key);
        }
        __result139__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result139__;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_147;
void* right_value207;
char** keys_148;
void* right_value208;
struct sVar** items_149;
void* right_value209;
_Bool* item_existance_150;
int len_151;
char* it_154;
_Bool _for_condtionalA10;
struct sVar* default_value_157;
struct sVar* it2_160;
unsigned int hash_161;
int n_162;
_Bool _while_condtional14;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct sVar* default_value_163;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_147, 0, sizeof(int));
memset(&right_value207, 0, sizeof(void*));
memset(&keys_148, 0, sizeof(char**));
memset(&right_value208, 0, sizeof(void*));
memset(&items_149, 0, sizeof(struct sVar**));
memset(&right_value209, 0, sizeof(void*));
memset(&item_existance_150, 0, sizeof(_Bool*));
memset(&len_151, 0, sizeof(int));
memset(&it_154, 0, sizeof(char*));
memset(&default_value_157, 0, sizeof(struct sVar*));
memset(&it2_160, 0, sizeof(struct sVar*));
memset(&hash_161, 0, sizeof(unsigned int));
memset(&n_162, 0, sizeof(int));
memset(&default_value_163, 0, sizeof(struct sVar*));
                size_147=self->size*10;
                keys_148=(char**)come_increment_ref_count(((char**)(right_value207=(char**)come_calloc(1, sizeof(char*)*(1*(size_147)), "./comelang2.h", 1380, "char*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value207;
                __freed_obj__ = 0;
                items_149=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value208=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_147)), "./comelang2.h", 1381, "struct sVar*"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value208);
                if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value208;
                __freed_obj__ = 0;
                item_existance_150=(_Bool*)come_increment_ref_count(((_Bool*)(right_value209=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_147)), "./comelang2.h", 1382, "_Bool"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value209);
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value209;
                __freed_obj__ = 0;
                len_151=0;
                for(
                it_154=map$2charphsVarph_begin(self) ,                0;                _for_condtionalA10=                !map$2charphsVarph_end(self) ,                _for_condtionalA10;                it_154=map$2charphsVarph_next(self) ,                0                ){
                    memset(&default_value_157,0,sizeof(struct sVar*));
                    it2_160=map$2charphsVarph_at(self,it_154,default_value_157);
                    hash_161=string_get_hash_key(it_154)%size_147;
                    n_162=hash_161;
                    while(_while_condtional14=(_Bool)1,                    _while_condtional14) {
                        if(_if_conditional261=item_existance_150[n_162],                        _if_conditional261) {
                            n_162++;
                            if(_if_conditional262=n_162>=size_147,                            _if_conditional262) {
                                n_162=0;
                            }
                            else {
                                if(_if_conditional263=n_162==hash_161,                                _if_conditional263) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_150[n_162]=(_Bool)1;
                            keys_148[n_162]=it_154;
                            items_149[n_162]=map$2charphsVarph_at(self,it_154,default_value_163);
                            len_151++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_148;
                self->items=items_149;
                self->item_existance=item_existance_150;
                self->size=size_147;
                self->len=len_151;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional253;
char* result_152;
char* __result116__;
_Bool _if_conditional254;
char* __result117__;
char* result_153;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_152, 0, sizeof(char*));
memset(&result_153, 0, sizeof(char*));
                    if(_if_conditional253=self==((void*)0),                    _if_conditional253) {
                        memset(&result_152,0,sizeof(char*));
                        __result116__ = __result_obj__ = result_152;
                        return __result116__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(_if_conditional254=self->key_list->it,                    _if_conditional254) {
                        __result117__ = __result_obj__ = self->key_list->it->item;
                        return __result117__;
                    }
                    memset(&result_153,0,sizeof(char*));
                    __result118__ = __result_obj__ = result_153;
                    return __result118__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result119__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result119__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional255;
char* result_155;
char* __result120__;
_Bool _if_conditional256;
char* __result121__;
char* result_156;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_155, 0, sizeof(char*));
memset(&result_156, 0, sizeof(char*));
                    if(_if_conditional255=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional255) {
                        memset(&result_155,0,sizeof(char*));
                        __result120__ = __result_obj__ = result_155;
                        return __result120__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(_if_conditional256=self->key_list->it,                    _if_conditional256) {
                        __result121__ = __result_obj__ = self->key_list->it->item;
                        return __result121__;
                    }
                    memset(&result_156,0,sizeof(char*));
                    __result122__ = __result_obj__ = result_156;
                    return __result122__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_158;
unsigned int it_159;
_Bool _while_condtional13;
_Bool _if_conditional257;
void* right_value210;
_Bool _if_conditional258;
struct sVar* __result123__;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct sVar* __result124__;
struct sVar* __result125__;
struct sVar* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_158, 0, sizeof(unsigned int));
memset(&it_159, 0, sizeof(unsigned int));
memset(&right_value210, 0, sizeof(void*));
                        hash_158=string_get_hash_key(((char*)key))%self->size;
                        it_159=hash_158;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional257=self->item_existance[it_159],                            _if_conditional257) {
                                if(_if_conditional258=optional$2boolbool_value(((struct optional$2boolbool*)(right_value210=string_equals(self->keys[it_159],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210),
                                (right_value210 && right_value210 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value210, 
                                __freed_obj__ = 0, 
                                _if_conditional258) {
                                    __result123__ = __result_obj__ = self->items[it_159];
                                    return __result123__;
                                }
                                it_159++;
                                if(_if_conditional259=it_159>=self->size,                                _if_conditional259) {
                                    it_159=0;
                                }
                                else {
                                    if(_if_conditional260=it_159==hash_158,                                    _if_conditional260) {
                                        __result124__ = __result_obj__ = default_value;
                                        return __result124__;
                                    }
                                }
                            }
                            else {
                                __result125__ = __result_obj__ = default_value;
                                return __result125__;
                            }
                        }
                        __result126__ = __result_obj__ = default_value;
                        return __result126__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_166;
struct list_item$1charp* it_167;
_Bool _while_condtional16;
void* right_value212;
_Bool _if_conditional267;
struct list$1charp* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_166, 0, sizeof(int));
memset(&it_167, 0, sizeof(struct list_item$1charp*));
memset(&right_value212, 0, sizeof(void*));
                            it2_166=0;
                            it_167=self->head;
                            while(_while_condtional16=it_167!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional267=optional$2boolbool_value(((struct optional$2boolbool*)(right_value212=string_equals(it_167->item,item)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212),
                                (right_value212 && right_value212 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value212, 
                                __freed_obj__ = 0, 
                                _if_conditional267) {
                                    list$1charp_delete(self,it2_166,it2_166+1);
                                    break;
                                }
                                it2_166++;
                                it_167=it_167->next;
                            }
                            __result130__ = __result_obj__ = self;
                            return __result130__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
int tmp_168;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
struct list$1charp* __result127__;
_Bool _if_conditional274;
_Bool _if_conditional275;
struct list_item$1charp* it_171;
int i_172;
_Bool _while_condtional18;
_Bool _if_conditional276;
struct list_item$1charp* prev_it_173;
_Bool _if_conditional277;
_Bool _if_conditional278;
struct list_item$1charp* it_174;
int i_175;
_Bool _while_condtional19;
_Bool _if_conditional279;
_Bool _if_conditional280;
struct list_item$1charp* prev_it_176;
struct list_item$1charp* it_177;
struct list_item$1charp* head_prev_it_178;
struct list_item$1charp* tail_it_179;
int i_180;
_Bool _while_condtional20;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
struct list_item$1charp* prev_it_181;
_Bool _if_conditional284;
_Bool _if_conditional285;
struct list$1charp* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_168, 0, sizeof(int));
memset(&it_171, 0, sizeof(struct list_item$1charp*));
memset(&i_172, 0, sizeof(int));
memset(&prev_it_173, 0, sizeof(struct list_item$1charp*));
memset(&it_174, 0, sizeof(struct list_item$1charp*));
memset(&i_175, 0, sizeof(int));
memset(&prev_it_176, 0, sizeof(struct list_item$1charp*));
memset(&it_177, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_178, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_179, 0, sizeof(struct list_item$1charp*));
memset(&i_180, 0, sizeof(int));
memset(&prev_it_181, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional268=head<0,                                        _if_conditional268) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional269=tail<0,                                        _if_conditional269) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional270=head>tail,                                        _if_conditional270) {
                                            tmp_168=tail;
                                            tail=head;
                                            head=tmp_168;
                                        }
                                        if(_if_conditional271=head<0,                                        _if_conditional271) {
                                            head=0;
                                        }
                                        if(_if_conditional272=tail>self->len,                                        _if_conditional272) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional273=head==tail,                                        _if_conditional273) {
                                            __result127__ = __result_obj__ = self;
                                            return __result127__;
                                        }
                                        if(_if_conditional274=head==0&&tail==self->len,                                        _if_conditional274) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional275=head==0,                                            _if_conditional275) {
                                                it_171=self->head;
                                                i_172=0;
                                                while(_while_condtional18=it_171!=((void*)0),                                                _while_condtional18) {
                                                    if(_if_conditional276=i_172<tail,                                                    _if_conditional276) {
                                                        prev_it_173=it_171;
                                                        it_171=it_171->next;
                                                        i_172++;
                                                        if(prev_it_173 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_173, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional277=i_172==tail,                                                        _if_conditional277) {
                                                            self->head=it_171;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_171=it_171->next;
                                                            i_172++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional278=tail==self->len,                                                _if_conditional278) {
                                                    it_174=self->head;
                                                    i_175=0;
                                                    while(_while_condtional19=it_174!=((void*)0),                                                    _while_condtional19) {
                                                        if(_if_conditional279=i_175==head,                                                        _if_conditional279) {
                                                            self->tail=it_174->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional280=i_175>=head,                                                        _if_conditional280) {
                                                            prev_it_176=it_174;
                                                            it_174=it_174->next;
                                                            i_175++;
                                                            if(prev_it_176 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_176, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_174=it_174->next;
                                                            i_175++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_177=self->head;
                                                    head_prev_it_178=((void*)0);
                                                    tail_it_179=((void*)0);
                                                    i_180=0;
                                                    while(_while_condtional20=it_177!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional281=i_180==head,                                                        _if_conditional281) {
                                                            head_prev_it_178=it_177->prev;
                                                        }
                                                        if(_if_conditional282=i_180==tail,                                                        _if_conditional282) {
                                                            tail_it_179=it_177;
                                                        }
                                                        if(_if_conditional283=i_180>=head&&i_180<tail,                                                        _if_conditional283) {
                                                            prev_it_181=it_177;
                                                            it_177=it_177->next;
                                                            i_180++;
                                                            if(prev_it_181 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_177=it_177->next;
                                                            i_180++;
                                                        }
                                                    }
                                                    if(_if_conditional284=head_prev_it_178!=((void*)0),                                                    _if_conditional284) {
                                                        head_prev_it_178->next=tail_it_179;
                                                    }
                                                    if(_if_conditional285=tail_it_179!=((void*)0),                                                    _if_conditional285) {
                                                        tail_it_179->prev=head_prev_it_178;
                                                    }
                                                }
                                            }
                                        }
                                        __result129__ = __result_obj__ = self;
                                        return __result129__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_169;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_170;
struct list$1charp* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_169, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_170, 0, sizeof(struct list_item$1charp*));
                                                it_169=self->head;
                                                while(_while_condtional17=it_169!=((void*)0),                                                _while_condtional17) {
                                                    prev_it_170=it_169;
                                                    it_169=it_169->next;
                                                    if(prev_it_170 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_170, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result128__ = __result_obj__ = self;
                                                return __result128__;
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
_Bool _if_conditional291;
char* result_183;
char* __result131__;
_Bool _if_conditional292;
char* __result132__;
char* result_184;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_183, 0, sizeof(char*));
memset(&result_184, 0, sizeof(char*));
            if(_if_conditional291=self==((void*)0),            _if_conditional291) {
                memset(&result_183,0,sizeof(char*));
                __result131__ = __result_obj__ = result_183;
                return __result131__;
            }
            self->it=self->head;
            if(_if_conditional292=self->it,            _if_conditional292) {
                __result132__ = __result_obj__ = self->it->item;
                return __result132__;
            }
            memset(&result_184,0,sizeof(char*));
            __result133__ = __result_obj__ = result_184;
            return __result133__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result134__ = self==((void*)0)||self->it==((void*)0);
            return __result134__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional293;
char* result_186;
char* __result135__;
_Bool _if_conditional294;
char* __result136__;
char* result_187;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_186, 0, sizeof(char*));
memset(&result_187, 0, sizeof(char*));
            if(_if_conditional293=self==((void*)0)||self->it==((void*)0),            _if_conditional293) {
                memset(&result_186,0,sizeof(char*));
                __result135__ = __result_obj__ = result_186;
                return __result135__;
            }
            self->it=self->it->next;
            if(_if_conditional294=self->it,            _if_conditional294) {
                __result136__ = __result_obj__ = self->it->item;
                return __result136__;
            }
            memset(&result_187,0,sizeof(char*));
            __result137__ = __result_obj__ = result_187;
            return __result137__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional297;
void* right_value214;
struct list_item$1charp* litem_188;
_Bool _if_conditional298;
void* right_value215;
struct list_item$1charp* litem_189;
void* right_value216;
struct list_item$1charp* litem_190;
struct list$1charp* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value214, 0, sizeof(void*));
memset(&litem_188, 0, sizeof(struct list_item$1charp*));
memset(&right_value215, 0, sizeof(void*));
memset(&litem_189, 0, sizeof(struct list_item$1charp*));
memset(&right_value216, 0, sizeof(void*));
memset(&litem_190, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional297=self->len==0,                _if_conditional297) {
                    litem_188=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value214=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282, "struct list_item$1charp"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
                    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value214;
                    __freed_obj__ = 0;
                    litem_188->prev=((void*)0);
                    litem_188->next=((void*)0);
                    litem_188->item=item;
                    self->tail=litem_188;
                    self->head=litem_188;
                }
                else {
                    if(_if_conditional298=self->len==1,                    _if_conditional298) {
                        litem_189=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value215=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value215;
                        __freed_obj__ = 0;
                        litem_189->prev=self->head;
                        litem_189->next=((void*)0);
                        litem_189->item=item;
                        self->tail=litem_189;
                        self->head->next=litem_189;
                    }
                    else {
                        litem_190=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value216=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 302, "struct list_item$1charp"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
                        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value216;
                        __freed_obj__ = 0;
                        litem_190->prev=self->tail;
                        litem_190->next=((void*)0);
                        litem_190->item=item;
                        self->tail->next=litem_190;
                        self->tail=litem_190;
                    }
                }
                self->len++;
                __result138__ = __result_obj__ = self;
                return __result138__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value218;
struct sVar* self_191;
void* right_value219;
char* __dec_obj98;
void* right_value220;
struct sType* __dec_obj99;
void* right_value221;
char* __dec_obj100;
void* right_value222;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value218, 0, sizeof(void*));
memset(&self_191, 0, sizeof(struct sVar*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
    self_191=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value218=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 802, "struct sVar"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value218;
    __freed_obj__ = 0;
    __dec_obj98=self_191->mName;
    self_191->mName=(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string(name))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value219;
    __freed_obj__ = 0;
    __dec_obj99=self_191->mType;
    self_191->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(type))));
    if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value220;
    __freed_obj__ = 0;
    self_191->mGlobal=(_Bool)1;
    __dec_obj100=self_191->mCValueName;
    self_191->mCValueName=(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(name))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value221;
    __freed_obj__ = 0;
    self_191->mBlockLevel=info->block_level;
    self_191->mAllocaValue=(_Bool)0;
    self_191->mFunctionParam=(_Bool)0;
    self_191->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_191));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value222;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_191 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_191, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value223;
struct sVar* self_192;
void* right_value224;
char* __dec_obj101;
void* right_value225;
struct sType* __dec_obj102;
void* right_value226;
char* __dec_obj103;
void* right_value227;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value223, 0, sizeof(void*));
memset(&self_192, 0, sizeof(struct sVar*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
    self_192=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value223=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 821, "struct sVar"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value223;
    __freed_obj__ = 0;
    __dec_obj101=self_192->mName;
    self_192->mName=(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string(name))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value224;
    __freed_obj__ = 0;
    __dec_obj102=self_192->mType;
    self_192->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(type))));
    if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value225;
    __freed_obj__ = 0;
    self_192->mGlobal=(_Bool)1;
    __dec_obj103=self_192->mCValueName;
    self_192->mCValueName=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(c_value))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value226;
    __freed_obj__ = 0;
    self_192->mBlockLevel=info->block_level;
    self_192->mAllocaValue=(_Bool)0;
    self_192->mFunctionParam=(_Bool)0;
    self_192->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_192));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value227;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(self_192 && !__freed_obj__) { come_call_finalizer(sVar_finalize,self_192, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool is_type_name_flag_193;
_Bool multiple_declare_194;
_Bool _if_conditional299;
char* p_195;
int sline_196;
void* right_value228;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_197;
char* name_198;
_Bool err_199;
_Bool _if_conditional302;
_Bool multiple_declare2_200;
_Bool _if_conditional303;
char* p_201;
int sline_202;
void* right_value229;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_203;
char* name_204;
_Bool err_205;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool no_output_err_206;
_Bool no_comma_207;
_Bool no_output_come_code_208;
void* right_value230;
struct sNode* exp_209;
_Bool _if_conditional306;
struct sFun* fun_210;
_Bool _if_conditional307;
void* right_value231;
char* buf2_211;
struct list$1charph* multiple_assign_212;
_Bool _if_conditional308;
void* right_value232;
void* right_value233;
struct list$1charph* __dec_obj104;
void* right_value237;
_Bool _while_condtional21;
void* right_value238;
char* buf3_216;
void* right_value239;
_Bool _if_conditional311;
_Bool no_comma_217;
void* right_value240;
struct sNode* right_value_218;
void* right_value241;
struct sNode* __dec_obj108;
void* right_value242;
void* right_value243;
void* right_value244;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value253;
struct sNode* result_220;
struct sNode* __result143__;
_Bool _if_conditional329;
void* right_value254;
void* right_value255;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_221;
void* right_value256;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* base_type_222;
char* name_223;
_Bool err_224;
void* right_value257;
struct tuple2$2sTypephcharph* variable_name_225;
void* right_value258;
void* right_value261;
struct tuple3$3sTypephcharphsNodeph* variable_name2_226;
_Bool _while_condtional22;
void* right_value265;
struct tuple2$2sTypephcharph* variable_name_230;
void* right_value266;
void* right_value267;
struct tuple3$3sTypephcharphsNodeph* variable_name2_231;
void* right_value268;
void* right_value269;
void* right_value270;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value279;
struct sNode* result_233;
struct sNode* __result148__;
_Bool _if_conditional353;
void* right_value280;
void* right_value281;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_234;
void* right_value282;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_235;
char* name_236;
_Bool err_237;
void* right_value283;
struct tuple2$2sTypephcharph* variable_name_238;
_Bool _if_conditional354;
_Bool no_comma_239;
void* right_value284;
struct sNode* exp_240;
void* right_value285;
void* right_value289;
struct tuple3$3sTypephcharphsNodeph* variable_name2_241;
_Bool _while_condtional23;
void* right_value290;
struct tuple2$2sTypephcharph* variable_name_242;
_Bool _if_conditional355;
_Bool no_comma_243;
void* right_value291;
struct sNode* exp_244;
void* right_value292;
void* right_value293;
struct tuple3$3sTypephcharphsNodeph* variable_name2_245;
void* right_value294;
void* right_value295;
void* right_value296;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value305;
struct sNode* result_247;
struct sNode* __result152__;
_Bool _if_conditional373;
void* right_value306;
struct sNode* right_value_248;
void* right_value307;
struct sNode* __dec_obj138;
void* right_value308;
void* right_value309;
void* right_value310;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value319;
struct sNode* result_250;
struct sNode* __result155__;
_Bool _if_conditional391;
void* right_value320;
void* right_value321;
void* right_value322;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* right_value326;
struct sNode* node_252;
void* right_value327;
struct sNode* __dec_obj148;
void* right_value328;
struct sNode* __dec_obj149;
struct sNode* __result158__;
void* right_value329;
char* word_253;
_Bool _if_conditional398;
void* right_value330;
char* __dec_obj150;
_Bool is_type_name_flag_254;
_Bool _if_conditional399;
void* right_value331;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_255;
char* name_256;
_Bool err_257;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value332;
void* right_value333;
struct buffer* buf2_258;
_Bool squort_259;
_Bool dquort_260;
int nest_261;
_Bool _while_condtional24;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
void* right_value334;
char* array_initializer_262;
void* right_value335;
void* right_value336;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value345;
struct sNode* result_264;
struct sNode* __result161__;
void* right_value346;
struct sNode* right_value_265;
void* right_value347;
void* right_value348;
struct list$1sNodeph* right_values_266;
_Bool _while_condtional25;
char* anonymous_var_nameX1390_267;
void* right_value349;
struct sNode* __dec_obj158;
void* right_value350;
void* right_value351;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* right_value360;
struct sNode* result_269;
struct sNode* __result164__;
void* right_value361;
void* right_value362;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* right_value371;
struct sNode* result_271;
struct sNode* __result167__;
void* right_value372;
struct sNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&is_type_name_flag_193, 0, sizeof(_Bool));
memset(&multiple_declare_194, 0, sizeof(_Bool));
memset(&p_195, 0, sizeof(char*));
memset(&sline_196, 0, sizeof(int));
memset(&right_value228, 0, sizeof(void*));
memset(&type_197, 0, sizeof(struct sType*));
memset(&name_198, 0, sizeof(char*));
memset(&err_199, 0, sizeof(_Bool));
memset(&type_197, 0, sizeof(struct sType*));
memset(&name_198, 0, sizeof(char*));
memset(&err_199, 0, sizeof(_Bool));
memset(&multiple_declare2_200, 0, sizeof(_Bool));
memset(&p_201, 0, sizeof(char*));
memset(&sline_202, 0, sizeof(int));
memset(&right_value229, 0, sizeof(void*));
memset(&type_203, 0, sizeof(struct sType*));
memset(&name_204, 0, sizeof(char*));
memset(&err_205, 0, sizeof(_Bool));
memset(&type_203, 0, sizeof(struct sType*));
memset(&name_204, 0, sizeof(char*));
memset(&err_205, 0, sizeof(_Bool));
memset(&no_output_err_206, 0, sizeof(_Bool));
memset(&no_comma_207, 0, sizeof(_Bool));
memset(&no_output_come_code_208, 0, sizeof(_Bool));
memset(&right_value230, 0, sizeof(void*));
memset(&exp_209, 0, sizeof(struct sNode*));
memset(&fun_210, 0, sizeof(struct sFun*));
memset(&right_value231, 0, sizeof(void*));
memset(&buf2_211, 0, sizeof(char*));
memset(&multiple_assign_212, 0, sizeof(struct list$1charph*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&buf3_216, 0, sizeof(char*));
memset(&right_value239, 0, sizeof(void*));
memset(&no_comma_217, 0, sizeof(_Bool));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value_218, 0, sizeof(struct sNode*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&result_220, 0, sizeof(struct sNode*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&multiple_declare_221, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value256, 0, sizeof(void*));
memset(&base_type_222, 0, sizeof(struct sType*));
memset(&name_223, 0, sizeof(char*));
memset(&err_224, 0, sizeof(_Bool));
memset(&base_type_222, 0, sizeof(struct sType*));
memset(&name_223, 0, sizeof(char*));
memset(&err_224, 0, sizeof(_Bool));
memset(&right_value257, 0, sizeof(void*));
memset(&variable_name_225, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&variable_name2_226, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value265, 0, sizeof(void*));
memset(&variable_name_230, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&variable_name2_231, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&result_233, 0, sizeof(struct sNode*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&multiple_declare_234, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value282, 0, sizeof(void*));
memset(&base_type_235, 0, sizeof(struct sType*));
memset(&name_236, 0, sizeof(char*));
memset(&err_237, 0, sizeof(_Bool));
memset(&base_type_235, 0, sizeof(struct sType*));
memset(&name_236, 0, sizeof(char*));
memset(&err_237, 0, sizeof(_Bool));
memset(&right_value283, 0, sizeof(void*));
memset(&variable_name_238, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_239, 0, sizeof(_Bool));
memset(&right_value284, 0, sizeof(void*));
memset(&exp_240, 0, sizeof(struct sNode*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&variable_name2_241, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value290, 0, sizeof(void*));
memset(&variable_name_242, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&no_comma_243, 0, sizeof(_Bool));
memset(&right_value291, 0, sizeof(void*));
memset(&exp_244, 0, sizeof(struct sNode*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&variable_name2_245, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&result_247, 0, sizeof(struct sNode*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value_248, 0, sizeof(struct sNode*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&result_250, 0, sizeof(struct sNode*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&node_252, 0, sizeof(struct sNode*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&word_253, 0, sizeof(char*));
memset(&right_value330, 0, sizeof(void*));
memset(&is_type_name_flag_254, 0, sizeof(_Bool));
memset(&right_value331, 0, sizeof(void*));
memset(&type_255, 0, sizeof(struct sType*));
memset(&name_256, 0, sizeof(char*));
memset(&err_257, 0, sizeof(_Bool));
memset(&type_255, 0, sizeof(struct sType*));
memset(&name_256, 0, sizeof(char*));
memset(&err_257, 0, sizeof(_Bool));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&buf2_258, 0, sizeof(struct buffer*));
memset(&squort_259, 0, sizeof(_Bool));
memset(&dquort_260, 0, sizeof(_Bool));
memset(&nest_261, 0, sizeof(int));
memset(&right_value334, 0, sizeof(void*));
memset(&array_initializer_262, 0, sizeof(char*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&result_264, 0, sizeof(struct sNode*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value_265, 0, sizeof(struct sNode*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_values_266, 0, sizeof(struct list$1sNodeph*));
memset(&anonymous_var_nameX1390_267, 0, sizeof(char*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&result_269, 0, sizeof(struct sNode*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&result_271, 0, sizeof(struct sNode*));
memset(&right_value372, 0, sizeof(void*));
    is_type_name_flag_193=is_type_name(buf,info);
    multiple_declare_194=(_Bool)0;
    if(_if_conditional299=is_type_name_flag_193,    _if_conditional299) {
        p_195=info->p;
        sline_196=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value228=parse_type(info,(_Bool)1,(_Bool)1)));
        type_197=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_198=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_199=multiple_assign_var2->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value228;
        __freed_obj__ = 0;
        if(_if_conditional302=err_199&&*info->p==44,        _if_conditional302) {
            multiple_declare_194=(_Bool)1;
        }
        info->p=p_195;
        info->sline=sline_196;
        if(type_197 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_197, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_198 && !__freed_obj__) { name_198 = come_decrement_ref_count(name_198, (void*)0, (void*)0, 0, 0, 0); }
    }
    multiple_declare2_200=(_Bool)0;
    if(_if_conditional303=is_type_name_flag_193,    _if_conditional303) {
        p_201=info->p;
        sline_202=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value229=parse_type(info,(_Bool)1,(_Bool)1)));
        type_203=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
        name_204=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        err_205=multiple_assign_var3->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value229;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        if(_if_conditional304=err_205&&*info->p==61,        _if_conditional304) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional305=*info->p==123,            _if_conditional305) {
            }
            else {
                no_output_err_206=info->no_output_err;
                no_comma_207=info->no_comma;
                no_output_come_code_208=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_209=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value230;
                __freed_obj__ = 0;
                info->no_comma=no_comma_207;
                info->no_output_err=no_output_err_206;
                info->no_output_come_code=no_output_come_code_208;
                if(_if_conditional306=*info->p==44,                _if_conditional306) {
                    multiple_declare2_200=(_Bool)1;
                }
                if(exp_209 && !__freed_obj__) { exp_209 = come_decrement_ref_count(exp_209, ((struct sNode*)exp_209)->finalize, ((struct sNode*)exp_209)->_protocol_obj, 0, 0, 0); } 
            }
        }
        info->p=p_201;
        info->sline=sline_202;
        if(type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_204 && !__freed_obj__) { name_204 = come_decrement_ref_count(name_204, (void*)0, (void*)0, 0, 0, 0); }
    }
    parse_sharp_v5(info);
    fun_210=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    if(_if_conditional307=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional307) {
        parse_sharp_v5(info);
        buf2_211=(char*)come_increment_ref_count(((char*)(right_value231=parse_word(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value231;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        multiple_assign_212=((void*)0);
        if(_if_conditional308=*info->p==44,        _if_conditional308) {
            __dec_obj104=multiple_assign_212;
            multiple_assign_212=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value233=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 919, "struct list$1charph"))))))));
            if(__dec_obj104) { come_call_finalizer(list$1charph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value232;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value233);
            if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value233;
            __freed_obj__ = 0;
            list$1charph_push_back(multiple_assign_212,(char*)come_increment_ref_count(((char*)(right_value237=string_clone(buf2_211)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
            if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value237;
            __freed_obj__ = 0;
            while(_while_condtional21=*info->p==44,            _while_condtional21) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_216=(char*)come_increment_ref_count(((char*)(right_value238=parse_word(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
                if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value238;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_212,(char*)come_increment_ref_count(((char*)(right_value239=string_clone(buf3_216)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value239);
                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value239;
                __freed_obj__ = 0;
                if(buf3_216 && !__freed_obj__) { buf3_216 = come_decrement_ref_count(buf3_216, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional311=*info->p==61&&*(info->p+1)!=61,        _if_conditional311) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_217=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
            if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value240;
            __freed_obj__ = 0;
            info->no_comma=no_comma_217;
            parse_sharp_v5(info);
            __dec_obj108=right_value_218;
            right_value_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_218),info))));
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value241);
            if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[1] = right_value241;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 949, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value244=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value242=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 949, "struct sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(buf2_211)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_212),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_218),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sStoreNode_sline;
            _inf_value3->sname=(void*)sStoreNode_sname;
            _inf_value3->terminated=(void*)sStoreNode_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            result_220=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=_inf_value3)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value242);
            if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value242;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value243);
            if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value243;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value244);
            if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value244;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value253);
            if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[5] = right_value253;
            __freed_obj__ = 0;
            __result143__ = __result_obj__ = result_220;
            if(right_value_218 && !__freed_obj__) { right_value_218 = come_decrement_ref_count(right_value_218, ((struct sNode*)right_value_218)->finalize, ((struct sNode*)right_value_218)->_protocol_obj, 0, 0, 0); } 
            if(result_220 && !__freed_obj__) { result_220 = come_decrement_ref_count(result_220, ((struct sNode*)result_220)->finalize, ((struct sNode*)result_220)->_protocol_obj, 0, 1, 0); } 
            if(buf2_211 && !__freed_obj__) { buf2_211 = come_decrement_ref_count(buf2_211, (void*)0, (void*)0, 0, 0, 0); }
            if(multiple_assign_212 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result143__;
            if(right_value_218 && !__freed_obj__) { right_value_218 = come_decrement_ref_count(right_value_218, ((struct sNode*)right_value_218)->finalize, ((struct sNode*)right_value_218)->_protocol_obj, 0, 0, 0); } 
            if(result_220 && !__freed_obj__) { result_220 = come_decrement_ref_count(result_220, ((struct sNode*)result_220)->finalize, ((struct sNode*)result_220)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        if(buf2_211 && !__freed_obj__) { buf2_211 = come_decrement_ref_count(buf2_211, (void*)0, (void*)0, 0, 0, 0); }
        if(multiple_assign_212 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,multiple_assign_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional329=multiple_declare_194,        _if_conditional329) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_221=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value255=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value254=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 964, "struct list$1tuple3$3sTypephcharphsNodephph"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
            if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value254;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value255);
            if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value255;
            __freed_obj__ = 0;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value256=parse_type(info,(_Bool)0,(_Bool)1)));
            base_type_222=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_223=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_224=multiple_assign_var4->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value256);
            if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value256;
            __freed_obj__ = 0;
            variable_name_225=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value257=parse_variable_name((struct sType*)come_increment_ref_count(base_type_222),(_Bool)1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value257);
            if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value257;
            __freed_obj__ = 0;
            variable_name2_226=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value261=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value258=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 970, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_225->v1),(char*)come_increment_ref_count(variable_name_225->v2),((void*)0)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value258);
            if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value258;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value261);
            if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value261;
            __freed_obj__ = 0;
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_221,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_226));
            while(_while_condtional22=*info->p==44,            _while_condtional22) {
                info->p++;
                skip_spaces_and_lf(info);
                variable_name_230=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value265=parse_variable_name((struct sType*)come_increment_ref_count(base_type_222),(_Bool)0,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
                if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value265;
                __freed_obj__ = 0;
                variable_name2_231=(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value267=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value266=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 980, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(variable_name_230->v1),(char*)come_increment_ref_count(variable_name_230->v2),((void*)0)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value266);
                if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value266;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value267);
                if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value267;
                __freed_obj__ = 0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_221,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_231));
                if(variable_name_230 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_230, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(variable_name2_231 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 985, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value270=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value268=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 985, "struct sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_221),(struct sType*)come_increment_ref_count(base_type_222),(_Bool)1,((void*)0),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStoreNode_finalize;
            _inf_value4->clone=(void*)sStoreNode_clone;
            _inf_value4->compile=(void*)sStoreNode_compile;
            _inf_value4->sline=(void*)sStoreNode_sline;
            _inf_value4->sname=(void*)sStoreNode_sname;
            _inf_value4->terminated=(void*)sStoreNode_terminated;
            _inf_value4->kind=(void*)sStoreNode_kind;
            result_233=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=_inf_value4)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value268);
            if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value268;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value269);
            if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value269;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value270);
            if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[8] = right_value270;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value279);
            if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[9] = right_value279;
            __freed_obj__ = 0;
            __result148__ = __result_obj__ = result_233;
            if(multiple_declare_221 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_221, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_223 && !__freed_obj__) { name_223 = come_decrement_ref_count(name_223, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_225 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_226 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_233 && !__freed_obj__) { result_233 = come_decrement_ref_count(result_233, ((struct sNode*)result_233)->finalize, ((struct sNode*)result_233)->_protocol_obj, 0, 1, 0); } 
            return __result148__;
            if(multiple_declare_221 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_221, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(base_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_223 && !__freed_obj__) { name_223 = come_decrement_ref_count(name_223, (void*)0, (void*)0, 0, 0, 0); }
            if(variable_name_225 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(variable_name2_226 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_233 && !__freed_obj__) { result_233 = come_decrement_ref_count(result_233, ((struct sNode*)result_233)->finalize, ((struct sNode*)result_233)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional353=multiple_declare2_200,            _if_conditional353) {
                info->p=head;
                info->sline=head_sline;
                multiple_declare_234=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value281=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value280=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 995, "struct list$1tuple3$3sTypephcharphsNodephph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
                if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value280;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value281);
                if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value281;
                __freed_obj__ = 0;
                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value282=parse_type(info,(_Bool)0,(_Bool)1)));
                base_type_235=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_236=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                err_237=multiple_assign_var5->v3;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value282);
                if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value282;
                __freed_obj__ = 0;
                variable_name_238=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value283=parse_variable_name((struct sType*)come_increment_ref_count(base_type_235),(_Bool)1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value283);
                if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value283;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                if(_if_conditional354=*info->p==61,                _if_conditional354) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    no_comma_239=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
                    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value284;
                    __freed_obj__ = 0;
                    info->no_comma=no_comma_239;
                    variable_name2_241=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value289=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value285=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1014, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_238->v1),(char*)come_increment_ref_count(variable_name_238->v2),(struct sNode*)come_increment_ref_count(exp_240)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value285);
                    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value285;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value289);
                    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value289;
                    __freed_obj__ = 0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_234,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_241));
                    if(exp_240 && !__freed_obj__) { exp_240 = come_decrement_ref_count(exp_240, ((struct sNode*)exp_240)->finalize, ((struct sNode*)exp_240)->_protocol_obj, 0, 0, 0); } 
                    if(variable_name2_241 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_241, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                while(_while_condtional23=*info->p==44,                _while_condtional23) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    variable_name_242=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value290=parse_variable_name((struct sType*)come_increment_ref_count(base_type_235),(_Bool)0,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
                    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value290;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    if(_if_conditional355=*info->p==61,                    _if_conditional355) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        no_comma_243=info->no_comma;
                        info->no_comma=(_Bool)1;
                        exp_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value291);
                        if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value291;
                        __freed_obj__ = 0;
                        info->no_comma=no_comma_243;
                        variable_name2_245=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value293=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value292=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1038, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(variable_name_242->v1),(char*)come_increment_ref_count(variable_name_242->v2),(struct sNode*)come_increment_ref_count(exp_244)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value292);
                        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value292;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value293);
                        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value293;
                        __freed_obj__ = 0;
                        list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_234,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(variable_name2_245));
                        if(exp_244 && !__freed_obj__) { exp_244 = come_decrement_ref_count(exp_244, ((struct sNode*)exp_244)->finalize, ((struct sNode*)exp_244)->_protocol_obj, 0, 0, 0); } 
                        if(variable_name2_245 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,variable_name2_245, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    else {
                        if(variable_name_242 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_242, (void*)0, (void*)0, 0, 0, 0, 0); }
                        break;
                    }
                    if(variable_name_242 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_242, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1047, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value296=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value294=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1047, "struct sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value295=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_234),(struct sType*)come_increment_ref_count(base_type_235),(_Bool)1,((void*)0),((void*)0),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreNode_finalize;
                _inf_value5->clone=(void*)sStoreNode_clone;
                _inf_value5->compile=(void*)sStoreNode_compile;
                _inf_value5->sline=(void*)sStoreNode_sline;
                _inf_value5->sname=(void*)sStoreNode_sname;
                _inf_value5->terminated=(void*)sStoreNode_terminated;
                _inf_value5->kind=(void*)sStoreNode_kind;
                result_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value305=_inf_value5)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value294);
                if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value294;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value295);
                if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value295;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value296);
                if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value296;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value305);
                if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[7] = right_value305;
                __freed_obj__ = 0;
                __result152__ = __result_obj__ = result_247;
                if(multiple_declare_234 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_234, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_236 && !__freed_obj__) { name_236 = come_decrement_ref_count(name_236, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_238 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_238, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_247 && !__freed_obj__) { result_247 = come_decrement_ref_count(result_247, ((struct sNode*)result_247)->finalize, ((struct sNode*)result_247)->_protocol_obj, 0, 1, 0); } 
                return __result152__;
                if(multiple_declare_234 && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,multiple_declare_234, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(base_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_236 && !__freed_obj__) { name_236 = come_decrement_ref_count(name_236, (void*)0, (void*)0, 0, 0, 0); }
                if(variable_name_238 && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,variable_name_238, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_247 && !__freed_obj__) { result_247 = come_decrement_ref_count(result_247, ((struct sNode*)result_247)->finalize, ((struct sNode*)result_247)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional373=!is_type_name_flag_193&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional373) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value306;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __dec_obj138=right_value_248;
                    right_value_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_248),info))));
                    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value307);
                    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[1] = right_value307;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1065, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value310=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value308=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1065, "struct sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value309=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_248),((void*)0),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreNode_finalize;
                    _inf_value6->clone=(void*)sStoreNode_clone;
                    _inf_value6->compile=(void*)sStoreNode_compile;
                    _inf_value6->sline=(void*)sStoreNode_sline;
                    _inf_value6->sname=(void*)sStoreNode_sname;
                    _inf_value6->terminated=(void*)sStoreNode_terminated;
                    _inf_value6->kind=(void*)sStoreNode_kind;
                    result_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=_inf_value6)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value308);
                    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value308;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value309);
                    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value309;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value310);
                    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value310;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value319);
                    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { right_value319 = come_decrement_ref_count(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[5] = right_value319;
                    __freed_obj__ = 0;
                    __result155__ = __result_obj__ = result_250;
                    if(right_value_248 && !__freed_obj__) { right_value_248 = come_decrement_ref_count(right_value_248, ((struct sNode*)right_value_248)->finalize, ((struct sNode*)right_value_248)->_protocol_obj, 0, 0, 0); } 
                    if(result_250 && !__freed_obj__) { result_250 = come_decrement_ref_count(result_250, ((struct sNode*)result_250)->finalize, ((struct sNode*)result_250)->_protocol_obj, 0, 1, 0); } 
                    return __result155__;
                    if(right_value_248 && !__freed_obj__) { right_value_248 = come_decrement_ref_count(right_value_248, ((struct sNode*)right_value_248)->finalize, ((struct sNode*)right_value_248)->_protocol_obj, 0, 0, 0); } 
                    if(result_250 && !__freed_obj__) { result_250 = come_decrement_ref_count(result_250, ((struct sNode*)result_250)->finalize, ((struct sNode*)result_250)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional391=!is_type_name_flag_193||map$2charphsFunphp_operator_load_element(info->funcs,buf),                    _if_conditional391) {
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1072, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(right_value322=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value320=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1072, "struct sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value321=__builtin_string(buf)))),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLoadNode_finalize;
                        _inf_value7->clone=(void*)sLoadNode_clone;
                        _inf_value7->compile=(void*)sLoadNode_compile;
                        _inf_value7->sline=(void*)sLoadNode_sline;
                        _inf_value7->sname=(void*)sLoadNode_sname;
                        _inf_value7->terminated=(void*)sLoadNode_terminated;
                        _inf_value7->kind=(void*)sLoadNode_kind;
                        node_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=_inf_value7)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
                        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value320;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value321);
                        if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value321;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value322);
                        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value322;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value326);
                        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value326;
                        __freed_obj__ = 0;
                        __dec_obj148=node_252;
                        node_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_252),info))));
                        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value327);
                        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[4] = right_value327;
                        __freed_obj__ = 0;
                        __dec_obj149=node_252;
                        node_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_252),info))));
                        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value328);
                        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[5] = right_value328;
                        __freed_obj__ = 0;
                        __result158__ = __result_obj__ = node_252;
                        if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 1, 0); } 
                        return __result158__;
                        if(node_252 && !__freed_obj__) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        info->p=head;
                        info->sline=head_sline;
                        word_253=(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string(""))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
                        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value329;
                        __freed_obj__ = 0;
                        if(_if_conditional398=xisalpha(*info->p)||*info->p==95,                        _if_conditional398) {
                            __dec_obj150=word_253;
                            word_253=(char*)come_increment_ref_count(((char*)(right_value330=parse_word(info))));
                            if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330);
                            if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value330;
                            __freed_obj__ = 0;
                        }
                        is_type_name_flag_254=is_type_name(word_253,info);
                        info->p=head;
                        info->sline=head_sline;
                        if(_if_conditional399=is_type_name_flag_254,                        _if_conditional399) {
                            parse_sharp_v5(info);
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value331=parse_type(info,(_Bool)1,(_Bool)1)));
                            type_255=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_256=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_257=multiple_assign_var6->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value331);
                            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value331;
                            __freed_obj__ = 0;
                            if(_if_conditional400=!err_257,                            _if_conditional400) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            parse_sharp_v5(info);
                            if(_if_conditional401=*info->p==61,                            _if_conditional401) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                if(_if_conditional402=*info->p==123,                                _if_conditional402) {
                                    buf2_258=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value333=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value332=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1111, "struct buffer"))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value332);
                                    if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value332;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value333);
                                    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value333;
                                    __freed_obj__ = 0;
                                    buffer_append_char(buf2_258,*info->p);
                                    info->p++;
                                    squort_259=(_Bool)0;
                                    dquort_260=(_Bool)0;
                                    nest_261=1;
                                    while(_while_condtional24=1,                                    _while_condtional24) {
                                        if(_if_conditional403=*info->p==0,                                        _if_conditional403) {
                                            err_msg(info,"unexpected source end in array initiailizer");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional404=*info->p==92,                                            _if_conditional404) {
                                                buffer_append_char(buf2_258,*info->p);
                                                info->p++;
                                                buffer_append_char(buf2_258,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional405=!squort_259&&*info->p==34,                                                _if_conditional405) {
                                                    buffer_append_char(buf2_258,*info->p);
                                                    info->p++;
                                                    dquort_260=!dquort_260;
                                                }
                                                else {
                                                    if(_if_conditional406=!dquort_260&&*info->p==39,                                                    _if_conditional406) {
                                                        buffer_append_char(buf2_258,*info->p);
                                                        info->p++;
                                                        squort_259=!squort_259;
                                                    }
                                                    else {
                                                        if(_if_conditional407=squort_259||dquort_260,                                                        _if_conditional407) {
                                                            buffer_append_char(buf2_258,*info->p);
                                                            info->p++;
                                                        }
                                                        else {
                                                            if(_if_conditional408=*info->p==123,                                                            _if_conditional408) {
                                                                nest_261++;
                                                                buffer_append_char(buf2_258,*info->p);
                                                                info->p++;
                                                            }
                                                            else {
                                                                if(_if_conditional409=*info->p==125,                                                                _if_conditional409) {
                                                                    nest_261--;
                                                                    buffer_append_char(buf2_258,*info->p);
                                                                    info->p++;
                                                                    if(_if_conditional410=nest_261==0,                                                                    _if_conditional410) {
                                                                        skip_spaces_and_lf(info);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    buffer_append_char(buf2_258,*info->p);
                                                                    info->p++;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    array_initializer_262=(char*)come_increment_ref_count(((char*)(right_value334=buffer_to_string(buf2_258))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value334);
                                    if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value334;
                                    __freed_obj__ = 0;
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1166, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value336=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value335=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1166, "struct sStoreNode")))),(char*)come_increment_ref_count(name_256),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_255),(_Bool)1,((void*)0),(char*)come_increment_ref_count(array_initializer_262),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreNode_finalize;
                                    _inf_value8->clone=(void*)sStoreNode_clone;
                                    _inf_value8->compile=(void*)sStoreNode_compile;
                                    _inf_value8->sline=(void*)sStoreNode_sline;
                                    _inf_value8->sname=(void*)sStoreNode_sname;
                                    _inf_value8->terminated=(void*)sStoreNode_terminated;
                                    _inf_value8->kind=(void*)sStoreNode_kind;
                                    result_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=_inf_value8)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value335);
                                    if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value335;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value336);
                                    if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value336;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value345);
                                    if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[5] = right_value345;
                                    __freed_obj__ = 0;
                                    __result161__ = __result_obj__ = result_264;
                                    if(buf2_258 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_262 && !__freed_obj__) { array_initializer_262 = come_decrement_ref_count(array_initializer_262, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_264 && !__freed_obj__) { result_264 = come_decrement_ref_count(result_264, ((struct sNode*)result_264)->finalize, ((struct sNode*)result_264)->_protocol_obj, 0, 1, 0); } 
                                    if(type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_256 && !__freed_obj__) { name_256 = come_decrement_ref_count(name_256, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_253 && !__freed_obj__) { word_253 = come_decrement_ref_count(word_253, (void*)0, (void*)0, 0, 0, 0); }
                                    return __result161__;
                                    if(buf2_258 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(array_initializer_262 && !__freed_obj__) { array_initializer_262 = come_decrement_ref_count(array_initializer_262, (void*)0, (void*)0, 0, 0, 0); }
                                    if(result_264 && !__freed_obj__) { result_264 = come_decrement_ref_count(result_264, ((struct sNode*)result_264)->finalize, ((struct sNode*)result_264)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    parse_sharp_v5(info);
                                    right_value_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=expression_v13(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
                                    if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value346;
                                    __freed_obj__ = 0;
                                    parse_sharp_v5(info);
                                    right_values_266=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value348=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value347=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 1177, "struct list$1sNodeph"))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value347);
                                    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value347;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value348);
                                    if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value348;
                                    __freed_obj__ = 0;
                                    while(_while_condtional25=*info->p==44,                                    _while_condtional25) {
                                        if(anonymous_var_nameX1390_267 && !__freed_obj__) { anonymous_var_nameX1390_267 = come_decrement_ref_count(anonymous_var_nameX1390_267, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    __dec_obj158=right_value_265;
                                    right_value_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_265),info))));
                                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value349);
                                    if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[3] = right_value349;
                                    __freed_obj__ = 0;
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1184, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(right_value351=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value350=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1184, "struct sStoreNode")))),(char*)come_increment_ref_count(name_256),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_255),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_265),((void*)0),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreNode_finalize;
                                    _inf_value9->clone=(void*)sStoreNode_clone;
                                    _inf_value9->compile=(void*)sStoreNode_compile;
                                    _inf_value9->sline=(void*)sStoreNode_sline;
                                    _inf_value9->sname=(void*)sStoreNode_sname;
                                    _inf_value9->terminated=(void*)sStoreNode_terminated;
                                    _inf_value9->kind=(void*)sStoreNode_kind;
                                    result_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=_inf_value9)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value350);
                                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value350;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value351);
                                    if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[5] = right_value351;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value360);
                                    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[6] = right_value360;
                                    __freed_obj__ = 0;
                                    __result164__ = __result_obj__ = result_269;
                                    if(right_value_265 && !__freed_obj__) { right_value_265 = come_decrement_ref_count(right_value_265, ((struct sNode*)right_value_265)->finalize, ((struct sNode*)right_value_265)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_266 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_269 && !__freed_obj__) { result_269 = come_decrement_ref_count(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 1, 0); } 
                                    if(type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(name_256 && !__freed_obj__) { name_256 = come_decrement_ref_count(name_256, (void*)0, (void*)0, 0, 0, 0); }
                                    if(word_253 && !__freed_obj__) { word_253 = come_decrement_ref_count(word_253, (void*)0, (void*)0, 0, 0, 0); }
                                    return __result164__;
                                    if(right_value_265 && !__freed_obj__) { right_value_265 = come_decrement_ref_count(right_value_265, ((struct sNode*)right_value_265)->finalize, ((struct sNode*)right_value_265)->_protocol_obj, 0, 0, 0); } 
                                    if(right_values_266 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_values_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(result_269 && !__freed_obj__) { result_269 = come_decrement_ref_count(result_269, ((struct sNode*)result_269)->finalize, ((struct sNode*)result_269)->_protocol_obj, 0, 0, 0); } 
                                }
                            }
                            else {
                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1192, "struct sNode");
                                _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(right_value362=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value361=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1192, "struct sStoreNode")))),(char*)come_increment_ref_count(name_256),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_255),(_Bool)1,((void*)0),((void*)0),info))));
                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                _inf_value10->finalize=(void*)sStoreNode_finalize;
                                _inf_value10->clone=(void*)sStoreNode_clone;
                                _inf_value10->compile=(void*)sStoreNode_compile;
                                _inf_value10->sline=(void*)sStoreNode_sline;
                                _inf_value10->sname=(void*)sStoreNode_sname;
                                _inf_value10->terminated=(void*)sStoreNode_terminated;
                                _inf_value10->kind=(void*)sStoreNode_kind;
                                result_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=_inf_value10)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
                                if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value361;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value362);
                                if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value362;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value371);
                                if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value371;
                                __freed_obj__ = 0;
                                __result167__ = __result_obj__ = result_271;
                                if(result_271 && !__freed_obj__) { result_271 = come_decrement_ref_count(result_271, ((struct sNode*)result_271)->finalize, ((struct sNode*)result_271)->_protocol_obj, 0, 1, 0); } 
                                if(type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_256 && !__freed_obj__) { name_256 = come_decrement_ref_count(name_256, (void*)0, (void*)0, 0, 0, 0); }
                                if(word_253 && !__freed_obj__) { word_253 = come_decrement_ref_count(word_253, (void*)0, (void*)0, 0, 0, 0); }
                                return __result167__;
                                if(result_271 && !__freed_obj__) { result_271 = come_decrement_ref_count(result_271, ((struct sNode*)result_271)->finalize, ((struct sNode*)result_271)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(type_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_256 && !__freed_obj__) { name_256 = come_decrement_ref_count(name_256, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(word_253 && !__freed_obj__) { word_253 = come_decrement_ref_count(word_253, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
        }
    }
    __result168__ = __result_obj__ = ((struct sNode*)(right_value372=string_node_v5(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value372;
    __freed_obj__ = 0;
    return __result168__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional300;
_Bool _if_conditional301;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional300=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional300) {
                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional301=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional301) {
                if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional309;
void* right_value234;
struct list_item$1charph* litem_213;
char* __dec_obj105;
_Bool _if_conditional310;
void* right_value235;
struct list_item$1charph* litem_214;
char* __dec_obj106;
void* right_value236;
struct list_item$1charph* litem_215;
char* __dec_obj107;
struct list$1charph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value234, 0, sizeof(void*));
memset(&litem_213, 0, sizeof(struct list_item$1charph*));
memset(&right_value235, 0, sizeof(void*));
memset(&litem_214, 0, sizeof(struct list_item$1charph*));
memset(&right_value236, 0, sizeof(void*));
memset(&litem_215, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional309=self->len==0,                _if_conditional309) {
                    litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value234=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282, "struct list_item$1charph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value234;
                    __freed_obj__ = 0;
                    litem_213->prev=((void*)0);
                    litem_213->next=((void*)0);
                    __dec_obj105=litem_213->item;
                    litem_213->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_213;
                    self->head=litem_213;
                }
                else {
                    if(_if_conditional310=self->len==1,                    _if_conditional310) {
                        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value235=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value235;
                        __freed_obj__ = 0;
                        litem_214->prev=self->head;
                        litem_214->next=((void*)0);
                        __dec_obj106=litem_214->item;
                        litem_214->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_214;
                        self->head->next=litem_214;
                    }
                    else {
                        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value236=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 302, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value236;
                        __freed_obj__ = 0;
                        litem_215->prev=self->tail;
                        litem_215->next=((void*)0);
                        __dec_obj107=litem_215->item;
                        litem_215->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_215;
                        self->tail=litem_215;
                    }
                }
                self->len++;
                __result140__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result140__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional330;
_Bool _if_conditional331;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional330=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional330) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional331=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional331) {
                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value259;
struct sType* __dec_obj116;
void* right_value260;
char* __dec_obj117;
struct tuple3$3sTypephcharphvoidp* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
                __dec_obj116=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_clone(v1))));
                if(__dec_obj116) { come_call_finalizer(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
                if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value259;
                __freed_obj__ = 0;
                __dec_obj117=self->v2;
                self->v2=(char*)come_increment_ref_count(((char*)(right_value260=string_clone(v2))));
                if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value260);
                if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value260;
                __freed_obj__ = 0;
                self->v3=v3;
                __result144__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                return __result144__;
                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional332;
_Bool _if_conditional333;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional332=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional332) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional333=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional333) {
                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional334;
void* right_value262;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_227;
struct tuple3$3sTypephcharphsNodeph* __dec_obj118;
_Bool _if_conditional335;
void* right_value263;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_228;
struct tuple3$3sTypephcharphsNodeph* __dec_obj119;
void* right_value264;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_229;
struct tuple3$3sTypephcharphsNodeph* __dec_obj120;
struct list$1tuple3$3sTypephcharphsNodephph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value262, 0, sizeof(void*));
memset(&litem_227, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value263, 0, sizeof(void*));
memset(&litem_228, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&right_value264, 0, sizeof(void*));
memset(&litem_229, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(_if_conditional334=self->len==0,                _if_conditional334) {
                    litem_227=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value262=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 282, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
                    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value262;
                    __freed_obj__ = 0;
                    litem_227->prev=((void*)0);
                    litem_227->next=((void*)0);
                    __dec_obj118=litem_227->item;
                    litem_227->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj118) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_227;
                    self->head=litem_227;
                }
                else {
                    if(_if_conditional335=self->len==1,                    _if_conditional335) {
                        litem_228=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value263=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 292, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
                        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value263;
                        __freed_obj__ = 0;
                        litem_228->prev=self->head;
                        litem_228->next=((void*)0);
                        __dec_obj119=litem_228->item;
                        litem_228->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj119) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail=litem_228;
                        self->head->next=litem_228;
                    }
                    else {
                        litem_229=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value264=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang2.h", 302, "struct list_item$1tuple3$3sTypephcharphsNodephph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple3$3sTypephcharphsNodephphp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value264;
                        __freed_obj__ = 0;
                        litem_229->prev=self->tail;
                        litem_229->next=((void*)0);
                        __dec_obj120=litem_229->item;
                        litem_229->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj120) { come_call_finalizer(tuple3$3sTypephcharphsNodeph_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                        self->tail->next=litem_229;
                        self->tail=litem_229;
                    }
                }
                self->len++;
                __result145__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result145__;
                if(item && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value286;
struct sType* __dec_obj128;
void* right_value287;
char* __dec_obj129;
void* right_value288;
struct sNode* __dec_obj130;
struct tuple3$3sTypephcharphsNodeph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
                        __dec_obj128=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value286=sType_clone(v1))));
                        if(__dec_obj128) { come_call_finalizer(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
                        if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value286;
                        __freed_obj__ = 0;
                        __dec_obj129=self->v2;
                        self->v2=(char*)come_increment_ref_count(((char*)(right_value287=string_clone(v2))));
                        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value287);
                        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value287;
                        __freed_obj__ = 0;
                        __dec_obj130=self->v3;
                        self->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value288=sNode_clone(v3))));
                        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value288);
                        if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value288;
                        __freed_obj__ = 0;
                        __result149__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
                        return __result149__;
                        if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                        if(v3 && !__freed_obj__) { v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0); } 
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional392;
_Bool _if_conditional393;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional392=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional392) {
                                if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional393=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional393) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional394;
struct sLoadNode* __result156__;
void* right_value323;
struct sLoadNode* result_251;
_Bool _if_conditional395;
void* right_value324;
char* __dec_obj146;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value325;
char* __dec_obj147;
struct sLoadNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value323, 0, sizeof(void*));
memset(&result_251, 0, sizeof(struct sLoadNode*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
                            if(_if_conditional394=self==(void*)0,                            _if_conditional394) {
                                __result156__ = __result_obj__ = (void*)0;
                                return __result156__;
                            }
                            result_251=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value323=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
                            if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value323;
                            __freed_obj__ = 0;
                            if(_if_conditional395=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional395) {
                                __dec_obj146=result_251->name;
                                result_251->name=(char*)come_increment_ref_count(((char*)(right_value324=string_clone(self->name))));
                                if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
                                if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value324;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional396=self!=((void*)0),                            _if_conditional396) {
                                result_251->sline=self->sline;
                            }
                            if(_if_conditional397=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional397) {
                                __dec_obj147=result_251->sname;
                                result_251->sname=(char*)come_increment_ref_count(((char*)(right_value325=string_clone(self->sname))));
                                if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
                                if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value325;
                                __freed_obj__ = 0;
                            }
                            __result157__ = __result_obj__ = result_251;
                            if(result_251 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result157__;
                            if(result_251 && !__freed_obj__) { come_call_finalizer(sLoadNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional445=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional445) {
                                        if(self->name && !__freed_obj__) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional446=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional446) {
                                        if(self->multiple_assign && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->multiple_assign, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional447=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional447) {
                                        if(self->multiple_declare && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional448=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional448) {
                                        if(self->right_value && !__freed_obj__) { self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional449=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional449) {
                                        if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional450=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional450) {
                                        if(self->array_initializer && !__freed_obj__) { self->array_initializer = come_decrement_ref_count(self->array_initializer, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional451=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional451) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional452;
struct sStoreNode* __result165__;
void* right_value363;
struct sStoreNode* result_270;
_Bool _if_conditional453;
void* right_value364;
char* __dec_obj166;
_Bool _if_conditional454;
void* right_value365;
struct list$1charph* __dec_obj167;
_Bool _if_conditional455;
void* right_value366;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj168;
_Bool _if_conditional456;
void* right_value367;
struct sNode* __dec_obj169;
_Bool _if_conditional457;
void* right_value368;
struct sType* __dec_obj170;
_Bool _if_conditional458;
void* right_value369;
char* __dec_obj171;
_Bool _if_conditional459;
_Bool _if_conditional460;
_Bool _if_conditional461;
void* right_value370;
char* __dec_obj172;
struct sStoreNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value363, 0, sizeof(void*));
memset(&result_270, 0, sizeof(struct sStoreNode*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
                                    if(_if_conditional452=self==(void*)0,                                    _if_conditional452) {
                                        __result165__ = __result_obj__ = (void*)0;
                                        return __result165__;
                                    }
                                    result_270=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value363=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
                                    if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value363;
                                    __freed_obj__ = 0;
                                    if(_if_conditional453=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional453) {
                                        __dec_obj166=result_270->name;
                                        result_270->name=(char*)come_increment_ref_count(((char*)(right_value364=string_clone(self->name))));
                                        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                                        if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value364;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional454=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional454) {
                                        __dec_obj167=result_270->multiple_assign;
                                        result_270->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value365=list$1charphp_clone(self->multiple_assign))));
                                        if(__dec_obj167) { come_call_finalizer(list$1charph_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                                        if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value365;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional455=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional455) {
                                        __dec_obj168=result_270->multiple_declare;
                                        result_270->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value366=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        if(__dec_obj168) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephph_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
                                        if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple3$3sTypephcharphsNodephphp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value366;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional456=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional456) {
                                        __dec_obj169=result_270->right_value;
                                        result_270->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=sNode_clone(self->right_value))));
                                        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
                                        if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value367;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional457=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional457) {
                                        __dec_obj170=result_270->type;
                                        result_270->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value368=sType_clone(self->type))));
                                        if(__dec_obj170) { come_call_finalizer(sType_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
                                        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value368;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional458=self!=((void*)0)&&self->array_initializer!=((void*)0),                                    _if_conditional458) {
                                        __dec_obj171=result_270->array_initializer;
                                        result_270->array_initializer=(char*)come_increment_ref_count(((char*)(right_value369=string_clone(self->array_initializer))));
                                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value369);
                                        if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value369;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional459=self!=((void*)0),                                    _if_conditional459) {
                                        result_270->alloc=self->alloc;
                                    }
                                    if(_if_conditional460=self!=((void*)0),                                    _if_conditional460) {
                                        result_270->sline=self->sline;
                                    }
                                    if(_if_conditional461=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional461) {
                                        __dec_obj172=result_270->sname;
                                        result_270->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(self->sname))));
                                        if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
                                        if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value370;
                                        __freed_obj__ = 0;
                                    }
                                    __result166__ = __result_obj__ = result_270;
                                    if(result_270 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_270, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result166__;
                                    if(result_270 && !__freed_obj__) { come_call_finalizer(sStoreNode_finalize,result_270, (void*)0, (void*)0, 0, 0, 0, 0); }
}

