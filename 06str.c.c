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
struct sStrNode
{
    char* value;
    int sline;
    char* sname;
};
struct sSStringNode
{
    char* value;
    struct list$1sNodeph* exps;
    int sline;
    char* sname;
};
struct sCharNode
{
    int value;
    int sline;
    char* sname;
};
struct sWCharNode
{
    int value;
    int sline;
    char* sname;
};
struct sWStringNode
{
    int* value;
    int sline;
    char* sname;
};
struct sRegexNode
{
    char* str;
    _Bool global;
    _Bool ignore_case;
    int sline;
    char* sname;
};
struct sListNode
{
    struct list$1sNodeph* list_elements;
    int sline;
    char* sname;
};
struct sTupleNode
{
    struct list$1sNodeph* tuple_elements;
    int sline;
    char* sname;
};
struct sNoneNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sSomeNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sMapNode
{
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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

long int __sysconf(int __name);

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

_Bool sStrNode_terminated();

static char* double_quoted_string(char* str);
char* sStrNode_kind();

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
int sStrNode_sline(struct sStrNode* self, struct sInfo* info);

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info);

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
_Bool sSStringNode_terminated();

char* sSStringNode_kind();

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info);

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info);

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);

_Bool sCharNode_terminated();

char* sCharNode_kind();

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);

int sCharNode_sline(struct sCharNode* self, struct sInfo* info);

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info);

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, struct sInfo* info);

_Bool sWCharNode_terminated();

char* sWCharNode_kind();

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info);

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info);

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info);

_Bool sWStringNode_terminated();

char* sWStringNode_kind();

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info);

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info);

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);

_Bool sRegexNode_terminated();

char* sRegexNode_kind();

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info);

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info);

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);

_Bool sListNode_terminated();

char* sListNode_kind();

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
int sListNode_sline(struct sListNode* self, struct sInfo* info);

char* sListNode_sname(struct sListNode* self, struct sInfo* info);

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);

_Bool sTupleNode_terminated();

char* sTupleNode_kind();

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info);

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info);

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sNode* value, struct sInfo* info);

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info);

static void sNoneNode_finalize(struct sNoneNode* self);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
_Bool sNoneNode_terminated();

char* sNoneNode_kind();

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
int sNoneNode_sline(struct sNoneNode* self, struct sInfo* info);

char* sNoneNode_sname(struct sNoneNode* self, struct sInfo* info);

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct sNode* value, struct sInfo* info);

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info);

static void sSomeNode_finalize(struct sSomeNode* self);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
_Bool sSomeNode_terminated();

char* sSomeNode_kind();

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);

int sSomeNode_sline(struct sSomeNode* self, struct sInfo* info);

char* sSomeNode_sname(struct sSomeNode* self, struct sInfo* info);

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);

_Bool sMapNode_terminated();

char* sMapNode_kind();

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
int sMapNode_sline(struct sMapNode* self, struct sInfo* info);

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info);

static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __exception_result_var_b1;
char* __dec_obj6;
void* right_value11;
char* __exception_result_var_b2;
char* __dec_obj7;
struct sStrNode* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
    # 13 "06str.c"
    __dec_obj6=((struct sStrNode*)come_null_check(self, "06str.c", 13))->value;
    ((struct sStrNode*)come_null_check(self, "06str.c", 13))->value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 13),__exception_result_var_b1=((char*)(right_value10=__builtin_string(value))), come_pop_stackframe(), __exception_result_var_b1));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    # 15 "06str.c"
    ((struct sStrNode*)come_null_check(self, "06str.c", 15))->sline=sline;
    # 16 "06str.c"
    __dec_obj7=((struct sStrNode*)come_null_check(self, "06str.c", 16))->sname;
    ((struct sStrNode*)come_null_check(self, "06str.c", 16))->sname=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 16),__exception_result_var_b2=((char*)(right_value11=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 16))->sname))), come_pop_stackframe(), __exception_result_var_b2));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11;
    __freed_obj__ = 0;
    # 18 "06str.c"
    __result13__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    return __result13__;
    if(self && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 23 "06str.c"
    __result14__ = (_Bool)0;
    return __result14__;
}

static char* double_quoted_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
void* right_value13;
struct buffer* __exception_result_var_b3;
struct buffer* buf_5;
char* p_6;
_Bool _while_condtional1;
_Bool _if_conditional7;
struct buffer* __exception_result_var_b4;
struct buffer* __exception_result_var_b5;
struct buffer* __exception_result_var_b6;
void* right_value14;
char* __exception_result_var_b7;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&p_6, 0, sizeof(char*));
memset(&right_value14, 0, sizeof(void*));
    # 28 "06str.c"
    buf_5=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 28),__exception_result_var_b3=((struct buffer*)(right_value13=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value12=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 28))))))), come_pop_stackframe(), __exception_result_var_b3));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value13;
    __freed_obj__ = 0;
    # 29 "06str.c"
    p_6=str;
    # 43 "06str.c"
    while(_while_condtional1=*p_6,    _while_condtional1) {
        # 41 "06str.c"
        # 31 "06str.c"
        if(_if_conditional7=*p_6==34,        _if_conditional7) {
            # 32 "06str.c"
            p_6++;
            # 34 "06str.c"
            (come_push_stackframe("06str.c", 34),__exception_result_var_b4=buffer_append_char(((struct buffer*)come_null_check(buf_5, "06str.c", 34)),92), come_pop_stackframe(), __exception_result_var_b4);
            # 35 "06str.c"
            (come_push_stackframe("06str.c", 35),__exception_result_var_b5=buffer_append_char(((struct buffer*)come_null_check(buf_5, "06str.c", 35)),34), come_pop_stackframe(), __exception_result_var_b5);
        }
        else {
            # 38 "06str.c"
            (come_push_stackframe("06str.c", 38),__exception_result_var_b6=buffer_append_char(((struct buffer*)come_null_check(buf_5, "06str.c", 38)),*p_6), come_pop_stackframe(), __exception_result_var_b6);
            # 39 "06str.c"
            p_6++;
        }
    }
    # 43 "06str.c"
    __result15__ = __result_obj__ = (come_push_stackframe("06str.c", 43),__exception_result_var_b7=((char*)(right_value14=buffer_to_string(((struct buffer*)come_null_check(buf_5, "06str.c", 43))))), come_pop_stackframe(), __exception_result_var_b7);
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value14;
    __freed_obj__ = 0;
    return __result15__;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sStrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value15;
char* __exception_result_var_b8;
char* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
    # 48 "06str.c"
    __result16__ = __result_obj__ = (come_push_stackframe("06str.c", 48),__exception_result_var_b8=((char*)(right_value15=__builtin_string("sStrNode"))), come_pop_stackframe(), __exception_result_var_b8);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value15;
    __freed_obj__ = 0;
    return __result16__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value16;
struct CVALUE* come_value_7;
void* right_value17;
char* __exception_result_var_b9;
char* __dec_obj8;
void* right_value18;
void* right_value19;
struct sType* __exception_result_var_b10;
struct sType* __dec_obj9;
struct list$1CVALUEph* __exception_result_var_b11;
_Bool __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&come_value_7, 0, sizeof(struct CVALUE*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
    # 53 "06str.c"
    come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value16=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 53))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value16;
    __freed_obj__ = 0;
    # 55 "06str.c"
    __dec_obj8=((struct CVALUE*)come_null_check(come_value_7, "06str.c", 55))->c_value;
    ((struct CVALUE*)come_null_check(come_value_7, "06str.c", 55))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 55),__exception_result_var_b9=((char*)(right_value17=xsprintf("\"%s\"",((struct sStrNode*)come_null_check(self, "06str.c", 55))->value))), come_pop_stackframe(), __exception_result_var_b9));
    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value17;
    __freed_obj__ = 0;
    # 56 "06str.c"
    __dec_obj9=((struct CVALUE*)come_null_check(come_value_7, "06str.c", 56))->type;
    ((struct CVALUE*)come_null_check(come_value_7, "06str.c", 56))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 56),__exception_result_var_b10=((struct sType*)(right_value19=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value18=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 56)))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b10));
    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value18;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value19;
    __freed_obj__ = 0;
    # 58 "06str.c"
    ((struct CVALUE*)come_null_check(come_value_7, "06str.c", 58))->var=((void*)0);
    # 60 "06str.c"
    (come_push_stackframe("06str.c", 60),__exception_result_var_b11=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 60))->stack, "06str.c", 60)),(struct CVALUE*)come_increment_ref_count(come_value_7)), come_pop_stackframe(), __exception_result_var_b11);
    # 62 "06str.c"
    (come_push_stackframe("06str.c", 62),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_7, "06str.c", 62))->c_value),come_pop_stackframe());
    # 64 "06str.c"
    __result18__ = (_Bool)1;
    if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result18__;
    if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional8=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value!=((void*)0),        _if_conditional8) {
            # 0 "CVALUE_finalize"
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional9=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type!=((void*)0),        _if_conditional9) {
            # 1 "CVALUE_finalize"
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "sType_finalize"
                # 0 "sType_finalize"
                if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType!=((void*)0),                _if_conditional10) {
                    # 0 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 2 "sType_finalize"
                # 1 "sType_finalize"
                if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType!=((void*)0),                _if_conditional12) {
                    # 1 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 3 "sType_finalize"
                # 2 "sType_finalize"
                if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName!=((void*)0),                _if_conditional13) {
                    # 2 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                }
                # 4 "sType_finalize"
                # 3 "sType_finalize"
                if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes!=((void*)0),                _if_conditional14) {
                    # 3 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 5 "sType_finalize"
                # 4 "sType_finalize"
                if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum!=((void*)0),                _if_conditional16) {
                    # 4 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 6 "sType_finalize"
                # 5 "sType_finalize"
                if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes!=((void*)0),                _if_conditional18) {
                    # 5 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 7 "sType_finalize"
                # 6 "sType_finalize"
                if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames!=((void*)0),                _if_conditional19) {
                    # 6 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 8 "sType_finalize"
                # 7 "sType_finalize"
                if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType!=((void*)0),                _if_conditional21) {
                    # 7 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                # 9 "sType_finalize"
                # 8 "sType_finalize"
                if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas!=((void*)0),                _if_conditional22) {
                    # 8 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                }
                # 10 "sType_finalize"
                # 9 "sType_finalize"
                if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum!=((void*)0),                _if_conditional23) {
                    # 9 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                }
                # 11 "sType_finalize"
                # 10 "sType_finalize"
                if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName!=((void*)0),                _if_conditional24) {
                    # 10 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                }
                # 12 "sType_finalize"
                # 11 "sType_finalize"
                if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName!=((void*)0),                _if_conditional25) {
                    # 11 "sType_finalize"
                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        # 1 "tuple1$1sTypephp_finalize"
                        # 0 "tuple1$1sTypephp_finalize"
                        if(_if_conditional11=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1!=((void*)0),                        _if_conditional11) {
                            # 0 "tuple1$1sTypephp_finalize"
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_8;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                        # 176 "./comelang2.h"
                        it_8=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 176))->head;
                        # 182 "./comelang2.h"
                        while(_while_condtional2=it_8!=((void*)0),                        _while_condtional2) {
                            # 178 "./comelang2.h"
                            prev_it_9=it_8;
                            # 179 "./comelang2.h"
                            it_8=((struct list_item$1sTypeph*)come_null_check(it_8, "./comelang2.h", 179))->next;
                            # 180 "./comelang2.h"
                            if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                # 1 "list_item$1sTypephp_finalize"
                                # 0 "list_item$1sTypephp_finalize"
                                if(_if_conditional15=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item!=((void*)0),                                _if_conditional15) {
                                    # 0 "list_item$1sTypephp_finalize"
                                    if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_10;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                        # 176 "./comelang2.h"
                        it_10=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 176))->head;
                        # 182 "./comelang2.h"
                        while(_while_condtional3=it_10!=((void*)0),                        _while_condtional3) {
                            # 178 "./comelang2.h"
                            prev_it_11=it_10;
                            # 179 "./comelang2.h"
                            it_10=((struct list_item$1sNodeph*)come_null_check(it_10, "./comelang2.h", 179))->next;
                            # 180 "./comelang2.h"
                            if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                # 1 "list_item$1sNodephp_finalize"
                                # 0 "list_item$1sNodephp_finalize"
                                if(_if_conditional17=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item!=((void*)0),                                _if_conditional17) {
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_12;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                        # 176 "./comelang2.h"
                        it_12=((struct list$1charph*)come_null_check(self, "./comelang2.h", 176))->head;
                        # 182 "./comelang2.h"
                        while(_while_condtional4=it_12!=((void*)0),                        _while_condtional4) {
                            # 178 "./comelang2.h"
                            prev_it_13=it_12;
                            # 179 "./comelang2.h"
                            it_12=((struct list_item$1charph*)come_null_check(it_12, "./comelang2.h", 179))->next;
                            # 180 "./comelang2.h"
                            if(prev_it_13 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                # 1 "list_item$1charphp_finalize"
                                # 0 "list_item$1charphp_finalize"
                                if(_if_conditional20=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item!=((void*)0),                                _if_conditional20) {
                                    # 0 "list_item$1charphp_finalize"
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
void* right_value20;
struct list_item$1CVALUEph* litem_14;
struct CVALUE* __dec_obj10;
_Bool _if_conditional28;
void* right_value21;
struct list_item$1CVALUEph* litem_15;
struct CVALUE* __dec_obj11;
void* right_value22;
struct list_item$1CVALUEph* litem_16;
struct CVALUE* __dec_obj12;
struct list$1CVALUEph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1CVALUEph*));
        # 309 "./comelang2.h"
        # 278 "./comelang2.h"
        if(_if_conditional26=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->len==0,        _if_conditional26) {
            # 279 "./comelang2.h"
            litem_14=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value20=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20;
            __freed_obj__ = 0;
            # 281 "./comelang2.h"
            ((struct list_item$1CVALUEph*)come_null_check(litem_14, "./comelang2.h", 281))->prev=((void*)0);
            # 282 "./comelang2.h"
            ((struct list_item$1CVALUEph*)come_null_check(litem_14, "./comelang2.h", 282))->next=((void*)0);
            # 283 "./comelang2.h"
            __dec_obj10=((struct list_item$1CVALUEph*)come_null_check(litem_14, "./comelang2.h", 283))->item;
            ((struct list_item$1CVALUEph*)come_null_check(litem_14, "./comelang2.h", 283))->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj10) { come_call_finalizer(CVALUE_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 285 "./comelang2.h"
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_14;
            # 286 "./comelang2.h"
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 286))->head=litem_14;
        }
        else {
            # 309 "./comelang2.h"
            # 288 "./comelang2.h"
            if(_if_conditional28=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->len==1,            _if_conditional28) {
                # 289 "./comelang2.h"
                litem_15=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value21=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value21;
                __freed_obj__ = 0;
                # 291 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 291))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 291))->head;
                # 292 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 292))->next=((void*)0);
                # 293 "./comelang2.h"
                __dec_obj11=((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 293))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_15, "./comelang2.h", 293))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj11) { come_call_finalizer(CVALUE_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 295 "./comelang2.h"
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_15;
                # 296 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_15;
            }
            else {
                # 299 "./comelang2.h"
                litem_16=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value22=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value22;
                __freed_obj__ = 0;
                # 301 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 301))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 301))->tail;
                # 302 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 302))->next=((void*)0);
                # 303 "./comelang2.h"
                __dec_obj12=((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 303))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_16, "./comelang2.h", 303))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj12) { come_call_finalizer(CVALUE_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 305 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_16;
                # 306 "./comelang2.h"
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_16;
            }
        }
        # 309 "./comelang2.h"
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 309))->len++;
        # 311 "./comelang2.h"
        __result17__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result17__;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional27=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item!=((void*)0),                _if_conditional27) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

int sStrNode_sline(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 69 "06str.c"
    __result19__ = ((struct sStrNode*)come_null_check(self, "06str.c", 69))->sline;
    return __result19__;
}

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value23;
char* __exception_result_var_b12;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
    # 74 "06str.c"
    __result20__ = __result_obj__ = (come_push_stackframe("06str.c", 74),__exception_result_var_b12=((char*)(right_value23=__builtin_string(((struct sStrNode*)come_null_check(self, "06str.c", 74))->sname))), come_pop_stackframe(), __exception_result_var_b12);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value23;
    __freed_obj__ = 0;
    return __result20__;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value24;
char* __exception_result_var_b13;
char* __dec_obj13;
void* right_value32;
struct list$1sNodeph* __dec_obj17;
void* right_value33;
char* __exception_result_var_b16;
char* __dec_obj18;
struct sSStringNode* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
    # 88 "06str.c"
    __dec_obj13=((struct sSStringNode*)come_null_check(self, "06str.c", 88))->value;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 88))->value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 88),__exception_result_var_b13=((char*)(right_value24=__builtin_string(value))), come_pop_stackframe(), __exception_result_var_b13));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value24;
    __freed_obj__ = 0;
    # 89 "06str.c"
    __dec_obj17=((struct sSStringNode*)come_null_check(self, "06str.c", 89))->exps;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 89))->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value32=list$1sNodephp_clone(exps))));
    if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value32;
    __freed_obj__ = 0;
    # 91 "06str.c"
    ((struct sSStringNode*)come_null_check(self, "06str.c", 91))->sline=sline;
    # 92 "06str.c"
    __dec_obj18=((struct sSStringNode*)come_null_check(self, "06str.c", 92))->sname;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 92))->sname=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 92),__exception_result_var_b16=((char*)(right_value33=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 92))->sname))), come_pop_stackframe(), __exception_result_var_b16));
    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value33);
    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value33;
    __freed_obj__ = 0;
    # 94 "06str.c"
    __result27__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result27__;
    if(self && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    if(exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
struct list$1sNodeph* __result21__;
void* right_value25;
void* right_value26;
struct list$1sNodeph* __exception_result_var_b14;
struct list$1sNodeph* result_17;
struct list_item$1sNodeph* it_18;
_Bool _while_condtional5;
void* right_value31;
struct list$1sNodeph* __exception_result_var_b15;
struct list$1sNodeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct list$1sNodeph*));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value31, 0, sizeof(void*));
        # 195 "./comelang2.h"
        # 192 "./comelang2.h"
        if(_if_conditional29=self==((void*)0),        _if_conditional29) {
            # 193 "./comelang2.h"
            __result21__ = __result_obj__ = ((void*)0);
            return __result21__;
        }
        # 195 "./comelang2.h"
        result_17=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b14=((struct list$1sNodeph*)(right_value26=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value25=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b14));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value25;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value26;
        __freed_obj__ = 0;
        # 197 "./comelang2.h"
        it_18=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 197))->head;
        # 204 "./comelang2.h"
        while(_while_condtional5=it_18!=((void*)0),        _while_condtional5) {
            # 199 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b15=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_17, "./comelang2.h", 199)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_18, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b15);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value31;
            __freed_obj__ = 0;
            # 201 "./comelang2.h"
            it_18=((struct list_item$1sNodeph*)come_null_check(it_18, "./comelang2.h", 201))->next;
        }
        # 204 "./comelang2.h"
        __result26__ = __result_obj__ = result_17;
        if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result26__;
        if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 157 "./comelang2.h"
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
            # 158 "./comelang2.h"
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
            # 159 "./comelang2.h"
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 159))->len=0;
            # 161 "./comelang2.h"
            __result22__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result22__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
void* right_value27;
struct list_item$1sNodeph* litem_19;
struct sNode* __dec_obj14;
_Bool _if_conditional31;
void* right_value28;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
void* right_value29;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
                # 239 "./comelang2.h"
                # 208 "./comelang2.h"
                if(_if_conditional30=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                _if_conditional30) {
                    # 209 "./comelang2.h"
                    litem_19=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 209))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value27;
                    __freed_obj__ = 0;
                    # 211 "./comelang2.h"
                    ((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 211))->prev=((void*)0);
                    # 212 "./comelang2.h"
                    ((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 212))->next=((void*)0);
                    # 213 "./comelang2.h"
                    __dec_obj14=((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 213))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 213))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                    # 215 "./comelang2.h"
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_19;
                    # 216 "./comelang2.h"
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_19;
                }
                else {
                    # 239 "./comelang2.h"
                    # 218 "./comelang2.h"
                    if(_if_conditional31=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                    _if_conditional31) {
                        # 219 "./comelang2.h"
                        litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 219))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value28;
                        __freed_obj__ = 0;
                        # 221 "./comelang2.h"
                        ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 221))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 221))->head;
                        # 222 "./comelang2.h"
                        ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 222))->next=((void*)0);
                        # 223 "./comelang2.h"
                        __dec_obj15=((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 223))->item;
                        ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 223))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                        # 225 "./comelang2.h"
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_20;
                        # 226 "./comelang2.h"
                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_20;
                    }
                    else {
                        # 229 "./comelang2.h"
                        litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 229))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value29;
                        __freed_obj__ = 0;
                        # 231 "./comelang2.h"
                        ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 231))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                        # 232 "./comelang2.h"
                        ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 232))->next=((void*)0);
                        # 233 "./comelang2.h"
                        __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 233))->item;
                        ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 233))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                        # 235 "./comelang2.h"
                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_21;
                        # 236 "./comelang2.h"
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_21;
                    }
                }
                # 239 "./comelang2.h"
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 239))->len++;
                # 241 "./comelang2.h"
                __result23__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                return __result23__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
struct sNode* __result24__;
void* right_value30;
struct sNode* result_22;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
struct sNode* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&result_22, 0, sizeof(struct sNode*));
                # 3 "sNode_clone"
                # 2 "sNode_clone"
                if(_if_conditional32=self==(void*)0,                _if_conditional32) {
                    # 2 "sNode_clone"
                    __result24__ = __result_obj__ = (void*)0;
                    return __result24__;
                }
                # 3 "sNode_clone"
                result_22=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value30;
                __freed_obj__ = 0;
                # 5 "sNode_clone"
                # 4 "sNode_clone"
                if(_if_conditional33=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone!=((void*)0),                _if_conditional33) {
                    # 4 "sNode_clone"
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                }
                # 6 "sNode_clone"
                # 5 "sNode_clone"
                if(_if_conditional34=self!=((void*)0),                _if_conditional34) {
                    # 5 "sNode_clone"
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                }
                # 7 "sNode_clone"
                # 6 "sNode_clone"
                if(_if_conditional35=self!=((void*)0),                _if_conditional35) {
                    # 6 "sNode_clone"
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                }
                # 8 "sNode_clone"
                # 7 "sNode_clone"
                if(_if_conditional36=self!=((void*)0),                _if_conditional36) {
                    # 7 "sNode_clone"
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                }
                # 9 "sNode_clone"
                # 8 "sNode_clone"
                if(_if_conditional37=self!=((void*)0),                _if_conditional37) {
                    # 8 "sNode_clone"
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                }
                # 10 "sNode_clone"
                # 9 "sNode_clone"
                if(_if_conditional38=self!=((void*)0),                _if_conditional38) {
                    # 9 "sNode_clone"
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                }
                # 11 "sNode_clone"
                # 10 "sNode_clone"
                if(_if_conditional39=self!=((void*)0),                _if_conditional39) {
                    # 10 "sNode_clone"
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                }
                # 12 "sNode_clone"
                # 11 "sNode_clone"
                if(_if_conditional40=self!=((void*)0),                _if_conditional40) {
                    # 11 "sNode_clone"
                    ((struct sNode*)come_null_check(result_22, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                }
                # 12 "sNode_clone"
                __result25__ = __result_obj__ = result_22;
                if(result_22 && !__freed_obj__) { result_22 = come_decrement_ref_count(result_22, ((struct sNode*)result_22)->finalize, ((struct sNode*)result_22)->_protocol_obj, 0, 1, 0); } 
                return __result25__;
                if(result_22 && !__freed_obj__) { result_22 = come_decrement_ref_count(result_22, ((struct sNode*)result_22)->finalize, ((struct sNode*)result_22)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sSStringNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 99 "06str.c"
    __result28__ = (_Bool)0;
    return __result28__;
}

char* sSStringNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value34;
char* __exception_result_var_b17;
char* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
    # 104 "06str.c"
    __result29__ = __result_obj__ = (come_push_stackframe("06str.c", 104),__exception_result_var_b17=((char*)(right_value34=__builtin_string("sSStringNode"))), come_pop_stackframe(), __exception_result_var_b17);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value34;
    __freed_obj__ = 0;
    return __result29__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value35;
struct CVALUE* come_value_23;
void* right_value36;
void* right_value37;
struct buffer* __exception_result_var_b18;
struct buffer* buf_24;
struct buffer* __exception_result_var_b19;
struct buffer* __exception_result_var_b20;
struct buffer* __exception_result_var_b21;
int __exception_result_var_b22;
_Bool _if_conditional44;
struct list$1sNodeph* o2_saved_25;
struct sNode* __exception_result_var_b25;
struct sNode* it_28;
_Bool __exception_result_var_b26;
_Bool _for_condtionalA1;
struct sNode* __exception_result_var_b29;
_Bool __exception_result_var_b30;
_Bool _if_conditional49;
_Bool __result38__;
void* right_value38;
struct CVALUE* __exception_result_var_b31;
struct CVALUE* come_value_31;
void* right_value39;
char* __exception_result_var_b32;
char* method_name_32;
struct sFun* __exception_result_var_b36;
_Bool _if_conditional55;
struct sType* obj_type_36;
int __exception_result_var_b37;
_Bool _if_conditional56;
struct sType* obj_type2_37;
void* right_value41;
char* __exception_result_var_b38;
void* right_value42;
char* __exception_result_var_b39;
char* __dec_obj19;
void* right_value43;
void* right_value44;
struct buffer* __exception_result_var_b40;
struct buffer* buf2_38;
struct buffer* __exception_result_var_b41;
struct buffer* __exception_result_var_b42;
struct buffer* __exception_result_var_b43;
struct buffer* __exception_result_var_b44;
void* right_value45;
void* right_value46;
struct sType* __exception_result_var_b45;
struct sType* type_39;
void* right_value47;
char* __exception_result_var_b46;
void* right_value48;
char* __exception_result_var_b47;
char* c_value_40;
struct buffer* __exception_result_var_b48;
struct buffer* __exception_result_var_b49;
struct buffer* __exception_result_var_b50;
void* right_value49;
void* right_value50;
struct sType* __exception_result_var_b51;
struct sType* type2_41;
void* right_value51;
char* __exception_result_var_b52;
char* __dec_obj20;
void* right_value52;
char* __exception_result_var_b53;
char* __dec_obj21;
void* right_value80;
struct sType* __dec_obj41;
struct list$1CVALUEph* __exception_result_var_b58;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&come_value_23, 0, sizeof(struct CVALUE*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&o2_saved_25, 0, sizeof(struct list$1sNodeph*));
memset(&it_28, 0, sizeof(struct sNode*));
memset(&right_value38, 0, sizeof(void*));
memset(&come_value_31, 0, sizeof(struct CVALUE*));
memset(&right_value39, 0, sizeof(void*));
memset(&method_name_32, 0, sizeof(char*));
memset(&obj_type_36, 0, sizeof(struct sType*));
memset(&obj_type2_37, 0, sizeof(struct sType*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&buf2_38, 0, sizeof(struct buffer*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&type_39, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&c_value_40, 0, sizeof(char*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&type2_41, 0, sizeof(struct sType*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
    # 109 "06str.c"
    come_value_23=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value35=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 109))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value35;
    __freed_obj__ = 0;
    # 111 "06str.c"
    buf_24=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 111),__exception_result_var_b18=((struct buffer*)(right_value37=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 111))))))), come_pop_stackframe(), __exception_result_var_b18));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value36);
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value36;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value37;
    __freed_obj__ = 0;
    # 113 "06str.c"
    (come_push_stackframe("06str.c", 113),__exception_result_var_b19=buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 113)),"xsprintf(\""), come_pop_stackframe(), __exception_result_var_b19);
    # 114 "06str.c"
    (come_push_stackframe("06str.c", 114),__exception_result_var_b20=buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 114)),((struct sSStringNode*)come_null_check(self, "06str.c", 114))->value), come_pop_stackframe(), __exception_result_var_b20);
    # 115 "06str.c"
    (come_push_stackframe("06str.c", 115),__exception_result_var_b21=buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 115)),"\""), come_pop_stackframe(), __exception_result_var_b21);
    # 157 "06str.c"
    # 117 "06str.c"
    if(_if_conditional44=(come_push_stackframe("06str.c", 117),__exception_result_var_b22=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sSStringNode*)come_null_check(self, "06str.c", 117))->exps, "06str.c", 117))), come_pop_stackframe(), __exception_result_var_b22)>0,    _if_conditional44) {
        # 155 "06str.c"
        for(
        o2_saved_25=(struct list$1sNodeph*)come_increment_ref_count((((struct sSStringNode*)come_null_check(self, "06str.c", 118))->exps)),it_28=(come_push_stackframe("06str.c", 118),__exception_result_var_b25=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_25), "06str.c", 118))), come_pop_stackframe(), __exception_result_var_b25) ,        0;        _for_condtionalA1=        !(come_push_stackframe("06str.c", 118),__exception_result_var_b26=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_25), "06str.c", 118))), come_pop_stackframe(), __exception_result_var_b26) ,        _for_condtionalA1;        it_28=(come_push_stackframe("06str.c", 118),__exception_result_var_b29=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_25), "06str.c", 118))), come_pop_stackframe(), __exception_result_var_b29) ,        0        ){
            # 123 "06str.c"
            # 119 "06str.c"
            if(_if_conditional49=!(come_push_stackframe("06str.c", 119),__exception_result_var_b30=node_compile(it_28,info), come_pop_stackframe(), __exception_result_var_b30),            _if_conditional49) {
                # 120 "06str.c"
                __result38__ = (_Bool)0;
                if(o2_saved_25 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_25, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result38__;
            }
            # 123 "06str.c"
            come_value_31=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 123),__exception_result_var_b31=((struct CVALUE*)(right_value38=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b31));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38;
            __freed_obj__ = 0;
            # 124 "06str.c"
            (come_push_stackframe("06str.c", 124),dec_stack_ptr(1,info),come_pop_stackframe());
            # 126 "06str.c"
            method_name_32=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 126),__exception_result_var_b32=((char*)(right_value39=create_method_name(((struct CVALUE*)come_null_check(come_value_31, "06str.c", 126))->type,(_Bool)0,"to_string",info))), come_pop_stackframe(), __exception_result_var_b32));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value39;
            __freed_obj__ = 0;
            # 140 "06str.c"
            # 128 "06str.c"
            if(_if_conditional55=(come_push_stackframe("06str.c", 128),__exception_result_var_b36=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 128))->funcs, "06str.c", 128)),method_name_32,((void*)0)), come_pop_stackframe(), __exception_result_var_b36)==((void*)0),            _if_conditional55) {
                # 129 "06str.c"
                obj_type_36=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_31, "06str.c", 129))->type, "06str.c", 129))->mNoSolvedGenericsType, "06str.c", 129))->v1;
                # 138 "06str.c"
                # 130 "06str.c"
                if(_if_conditional56=obj_type_36&&(come_push_stackframe("06str.c", 130),__exception_result_var_b37=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_36, "06str.c", 130))->mGenericsTypes, "06str.c", 130))), come_pop_stackframe(), __exception_result_var_b37)>0,                _if_conditional56) {
                    # 131 "06str.c"
                    obj_type2_37=((struct CVALUE*)come_null_check(come_value_31, "06str.c", 131))->type;
                    # 132 "06str.c"
                    __dec_obj19=method_name_32;
                    method_name_32=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 132),__exception_result_var_b39=((char*)(right_value42=make_generics_function(obj_type2_37,(char*)come_increment_ref_count((come_push_stackframe("06str.c", 132),__exception_result_var_b38=((char*)(right_value41=__builtin_string("to_string"))), come_pop_stackframe(), __exception_result_var_b38)),info))), come_pop_stackframe(), __exception_result_var_b39));
                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value41;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value42;
                    __freed_obj__ = 0;
                }
                else {
                    # 135 "06str.c"
                    (come_push_stackframe("06str.c", 135),err_msg(info,"require to_string implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_31, "06str.c", 135))->type, "06str.c", 135))->mClass, "06str.c", 135))->mName),come_pop_stackframe());
                    # 136 "06str.c"
                    (come_push_stackframe("06str.c", 136),exit(1),come_pop_stackframe());
                }
            }
            # 140 "06str.c"
            buf2_38=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 140),__exception_result_var_b40=((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 140))))))), come_pop_stackframe(), __exception_result_var_b40));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value43;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value44);
            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value44;
            __freed_obj__ = 0;
            # 142 "06str.c"
            (come_push_stackframe("06str.c", 142),__exception_result_var_b41=buffer_append_str(((struct buffer*)come_null_check(buf2_38, "06str.c", 142)),method_name_32), come_pop_stackframe(), __exception_result_var_b41);
            # 143 "06str.c"
            (come_push_stackframe("06str.c", 143),__exception_result_var_b42=buffer_append_str(((struct buffer*)come_null_check(buf2_38, "06str.c", 143)),"("), come_pop_stackframe(), __exception_result_var_b42);
            # 144 "06str.c"
            (come_push_stackframe("06str.c", 144),__exception_result_var_b43=buffer_append_str(((struct buffer*)come_null_check(buf2_38, "06str.c", 144)),((struct CVALUE*)come_null_check(come_value_31, "06str.c", 144))->c_value), come_pop_stackframe(), __exception_result_var_b43);
            # 145 "06str.c"
            (come_push_stackframe("06str.c", 145),__exception_result_var_b44=buffer_append_str(((struct buffer*)come_null_check(buf2_38, "06str.c", 145)),")"), come_pop_stackframe(), __exception_result_var_b44);
            # 147 "06str.c"
            type_39=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 147),__exception_result_var_b45=((struct sType*)(right_value46=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value45=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 147)))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b45));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value45);
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value45;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value46);
            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value46;
            __freed_obj__ = 0;
            # 148 "06str.c"
            ((struct sType*)come_null_check(type_39, "06str.c", 148))->mHeap=(_Bool)1;
            # 150 "06str.c"
            c_value_40=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 150),__exception_result_var_b47=((char*)(right_value48=append_object_to_right_values((come_push_stackframe("06str.c", 150),__exception_result_var_b46=((char*)(right_value47=buffer_to_string(((struct buffer*)come_null_check(buf2_38, "06str.c", 150))))), come_pop_stackframe(), __exception_result_var_b46),(struct sType*)come_increment_ref_count(type_39),info))), come_pop_stackframe(), __exception_result_var_b47));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value47;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value48;
            __freed_obj__ = 0;
            # 152 "06str.c"
            (come_push_stackframe("06str.c", 152),__exception_result_var_b48=buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 152)),","), come_pop_stackframe(), __exception_result_var_b48);
            # 153 "06str.c"
            (come_push_stackframe("06str.c", 153),__exception_result_var_b49=buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 153)),c_value_40), come_pop_stackframe(), __exception_result_var_b49);
            if(come_value_31 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_31, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_name_32 && !__freed_obj__) { method_name_32 = come_decrement_ref_count(method_name_32, (void*)0, (void*)0, 0, 0, 0); }
            if(buf2_38 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_38, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_39 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_39, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(c_value_40 && !__freed_obj__) { c_value_40 = come_decrement_ref_count(c_value_40, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_25 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_25, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    # 157 "06str.c"
    (come_push_stackframe("06str.c", 157),__exception_result_var_b50=buffer_append_str(((struct buffer*)come_null_check(buf_24, "06str.c", 157)),")"), come_pop_stackframe(), __exception_result_var_b50);
    # 159 "06str.c"
    type2_41=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 159),__exception_result_var_b51=((struct sType*)(right_value50=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value49=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 159)))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b51));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value49;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value50;
    __freed_obj__ = 0;
    # 160 "06str.c"
    ((struct sType*)come_null_check(type2_41, "06str.c", 160))->mHeap=(_Bool)1;
    # 162 "06str.c"
    __dec_obj20=((struct CVALUE*)come_null_check(come_value_23, "06str.c", 162))->c_value;
    ((struct CVALUE*)come_null_check(come_value_23, "06str.c", 162))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 162),__exception_result_var_b52=((char*)(right_value51=buffer_to_string(((struct buffer*)come_null_check(buf_24, "06str.c", 162))))), come_pop_stackframe(), __exception_result_var_b52));
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value51;
    __freed_obj__ = 0;
    # 163 "06str.c"
    __dec_obj21=((struct CVALUE*)come_null_check(come_value_23, "06str.c", 163))->c_value;
    ((struct CVALUE*)come_null_check(come_value_23, "06str.c", 163))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 163),__exception_result_var_b53=((char*)(right_value52=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_23, "06str.c", 163))->c_value,(struct sType*)come_increment_ref_count(type2_41),info))), come_pop_stackframe(), __exception_result_var_b53));
    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value52);
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value52;
    __freed_obj__ = 0;
    # 164 "06str.c"
    __dec_obj41=((struct CVALUE*)come_null_check(come_value_23, "06str.c", 164))->type;
    ((struct CVALUE*)come_null_check(come_value_23, "06str.c", 164))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(type2_41))));
    if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value80;
    __freed_obj__ = 0;
    # 165 "06str.c"
    ((struct CVALUE*)come_null_check(come_value_23, "06str.c", 165))->var=((void*)0);
    # 167 "06str.c"
    (come_push_stackframe("06str.c", 167),__exception_result_var_b58=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 167))->stack, "06str.c", 167)),(struct CVALUE*)come_increment_ref_count(come_value_23)), come_pop_stackframe(), __exception_result_var_b58);
    # 169 "06str.c"
    (come_push_stackframe("06str.c", 169),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_23, "06str.c", 169))->c_value),come_pop_stackframe());
    # 171 "06str.c"
    __result58__ = (_Bool)1;
    if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_41, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result58__;
    if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 417 "./comelang2.h"
        __result30__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 417))->len;
        return __result30__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
struct sNode* result_26;
void* __exception_result_var_b23;
struct sNode* __result31__;
_Bool _if_conditional46;
struct sNode* __result32__;
struct sNode* result_27;
void* __exception_result_var_b24;
struct sNode* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_26, 0, sizeof(struct sNode*));
memset(&result_27, 0, sizeof(struct sNode*));
            # 343 "./comelang2.h"
            # 338 "./comelang2.h"
            if(_if_conditional45=self==((void*)0),            _if_conditional45) {
                # 339 "./comelang2.h"
                # 340 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b23=memset(&result_26,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b23);
                # 341 "./comelang2.h"
                __result31__ = __result_obj__ = result_26;
                return __result31__;
            }
            # 343 "./comelang2.h"
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 343))->head;
            # 349 "./comelang2.h"
            # 345 "./comelang2.h"
            if(_if_conditional46=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 345))->it,            _if_conditional46) {
                # 346 "./comelang2.h"
                __result32__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
                return __result32__;
            }
            # 349 "./comelang2.h"
            # 350 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b24=memset(&result_27,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b24);
            # 351 "./comelang2.h"
            __result33__ = __result_obj__ = result_27;
            return __result33__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            # 373 "./comelang2.h"
            __result34__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
            return __result34__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
struct sNode* result_29;
void* __exception_result_var_b27;
struct sNode* __result35__;
_Bool _if_conditional48;
struct sNode* __result36__;
struct sNode* result_30;
void* __exception_result_var_b28;
struct sNode* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_29, 0, sizeof(struct sNode*));
memset(&result_30, 0, sizeof(struct sNode*));
            # 361 "./comelang2.h"
            # 355 "./comelang2.h"
            if(_if_conditional47=self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),            _if_conditional47) {
                # 356 "./comelang2.h"
                # 357 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b27=memset(&result_29,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b27);
                # 358 "./comelang2.h"
                __result35__ = __result_obj__ = result_29;
                return __result35__;
            }
            # 361 "./comelang2.h"
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
            # 367 "./comelang2.h"
            # 363 "./comelang2.h"
            if(_if_conditional48=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 363))->it,            _if_conditional48) {
                # 364 "./comelang2.h"
                __result36__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
                return __result36__;
            }
            # 367 "./comelang2.h"
            # 368 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b28=memset(&result_30,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b28);
            # 369 "./comelang2.h"
            __result37__ = __result_obj__ = result_30;
            return __result37__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b33;
unsigned int hash_33;
unsigned int it_34;
_Bool _while_condtional6;
_Bool _if_conditional50;
void* right_value40;
struct optional$2boolbool* __exception_result_var_b34;
_Bool _if_conditional52;
struct sFun* __result41__;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sFun* __result42__;
struct sFun* __result43__;
struct sFun* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_33, 0, sizeof(unsigned int));
memset(&it_34, 0, sizeof(unsigned int));
memset(&right_value40, 0, sizeof(void*));
                # 1265 "./comelang2.h"
                hash_33=(come_push_stackframe("./comelang2.h", 1265),__exception_result_var_b33=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1265))), come_pop_stackframe(), __exception_result_var_b33)%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1265))->size;
                # 1266 "./comelang2.h"
                it_34=hash_33;
                # 1290 "./comelang2.h"
                while(_while_condtional6=(_Bool)1,                _while_condtional6) {
                    # 1288 "./comelang2.h"
                    # 1269 "./comelang2.h"
                    if(_if_conditional50=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1269))->item_existance[it_34],                    _if_conditional50) {
                        # 1276 "./comelang2.h"
                        # 1271 "./comelang2.h"
                        if(_if_conditional52=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1271),__exception_result_var_b34=((struct optional$2boolbool*)(right_value40=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1271))->keys[it_34], "./comelang2.h", 1271)),key))), come_pop_stackframe(), __exception_result_var_b34)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40),
                        (right_value40 && right_value40 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value40, 
                        __freed_obj__ = 0, 
                        _if_conditional52) {
                            # 1273 "./comelang2.h"
                            __result41__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1273))->items[it_34];
                            return __result41__;
                        }
                        # 1276 "./comelang2.h"
                        it_34++;
                        # 1284 "./comelang2.h"
                        # 1278 "./comelang2.h"
                        if(_if_conditional53=it_34>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1278))->size,                        _if_conditional53) {
                            # 1279 "./comelang2.h"
                            it_34=0;
                        }
                        else {
                            # 1284 "./comelang2.h"
                            # 1281 "./comelang2.h"
                            if(_if_conditional54=it_34==hash_33,                            _if_conditional54) {
                                # 1282 "./comelang2.h"
                                __result42__ = __result_obj__ = default_value;
                                return __result42__;
                            }
                        }
                    }
                    else {
                        # 1286 "./comelang2.h"
                        __result43__ = __result_obj__ = default_value;
                        return __result43__;
                    }
                }
                # 1290 "./comelang2.h"
                __result44__ = __result_obj__ = default_value;
                return __result44__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
_Bool default_value_35;
void* __exception_result_var_b35;
_Bool __result39__;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_35, 0, sizeof(_Bool));
                            # 69 "./comelang2.h"
                            # 61 "./comelang2.h"
                            if(_if_conditional51=self==((void*)0),                            _if_conditional51) {
                                # 62 "./comelang2.h"
                                # 63 "./comelang2.h"
                                (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b35=memset(&default_value_35,0,sizeof(_Bool)), come_pop_stackframe(), __exception_result_var_b35);
                                # 64 "./comelang2.h"
                                __result39__ = default_value_35;
                                return __result39__;
                            }
                            else {
                                # 67 "./comelang2.h"
                                __result40__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                                return __result40__;
                            }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
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
int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 417 "./comelang2.h"
                    __result45__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 417))->len;
                    return __result45__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
struct sType* __result46__;
void* right_value53;
struct sType* result_42;
_Bool _if_conditional58;
_Bool _if_conditional59;
void* right_value56;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional63;
void* right_value57;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional64;
void* right_value58;
char* __dec_obj25;
_Bool _if_conditional65;
void* right_value65;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional69;
void* right_value66;
struct list$1sNodeph* __dec_obj30;
_Bool _if_conditional70;
_Bool _if_conditional71;
void* right_value67;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional72;
void* right_value74;
struct list$1charph* __dec_obj35;
_Bool _if_conditional76;
void* right_value75;
struct tuple1$1sTypeph* __dec_obj36;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value76;
struct sNode* __dec_obj37;
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
void* right_value77;
struct sNode* __dec_obj38;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
void* right_value78;
char* __dec_obj39;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
void* right_value79;
char* __dec_obj40;
struct sType* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&result_42, 0, sizeof(struct sType*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional57=self==(void*)0,        _if_conditional57) {
            # 2 "sType_clone"
            __result46__ = __result_obj__ = (void*)0;
            return __result46__;
        }
        # 3 "sType_clone"
        result_42=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value53;
        __freed_obj__ = 0;
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            # 4 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional59=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType!=((void*)0),        _if_conditional59) {
            # 5 "sType_clone"
            __dec_obj23=((struct sType*)come_null_check(result_42, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_42, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value56=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value56;
            __freed_obj__ = 0;
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional63=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType!=((void*)0),        _if_conditional63) {
            # 6 "sType_clone"
            __dec_obj24=((struct sType*)come_null_check(result_42, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_42, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value57;
            __freed_obj__ = 0;
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional64=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName!=((void*)0),        _if_conditional64) {
            # 7 "sType_clone"
            __dec_obj25=((struct sType*)come_null_check(result_42, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_42, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value58;
            __freed_obj__ = 0;
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional65=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes!=((void*)0),        _if_conditional65) {
            # 8 "sType_clone"
            __dec_obj29=((struct sType*)come_null_check(result_42, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_42, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value65=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj29) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65;
            __freed_obj__ = 0;
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum!=((void*)0),        _if_conditional69) {
            # 9 "sType_clone"
            __dec_obj30=((struct sType*)come_null_check(result_42, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_42, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value66=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj30) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value66;
            __freed_obj__ = 0;
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            # 10 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional71=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes!=((void*)0),        _if_conditional71) {
            # 11 "sType_clone"
            __dec_obj31=((struct sType*)come_null_check(result_42, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_42, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value67=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj31) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value67;
            __freed_obj__ = 0;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional72=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames!=((void*)0),        _if_conditional72) {
            # 12 "sType_clone"
            __dec_obj35=((struct sType*)come_null_check(result_42, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_42, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value74=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj35) { come_call_finalizer(list$1charph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value74;
            __freed_obj__ = 0;
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType!=((void*)0),        _if_conditional76) {
            # 13 "sType_clone"
            __dec_obj36=((struct sType*)come_null_check(result_42, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_42, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value75=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj36) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value75;
            __freed_obj__ = 0;
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 14 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas!=((void*)0),        _if_conditional78) {
            # 15 "sType_clone"
            __dec_obj37=((struct sType*)come_null_check(result_42, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_42, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value76;
            __freed_obj__ = 0;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 16 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 17 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 18 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 19 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 20 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 21 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 22 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 23 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 24 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 25 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 26 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 27 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 28 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 29 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 30 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 31 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 32 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 33 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 34 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            # 35 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            # 36 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            # 37 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            # 38 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional102=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum!=((void*)0),        _if_conditional102) {
            # 39 "sType_clone"
            __dec_obj38=((struct sType*)come_null_check(result_42, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_42, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value77;
            __freed_obj__ = 0;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            # 40 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            # 41 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional105=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName!=((void*)0),        _if_conditional105) {
            # 42 "sType_clone"
            __dec_obj39=((struct sType*)come_null_check(result_42, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_42, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value78;
            __freed_obj__ = 0;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            # 43 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            # 44 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            # 45 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            # 46 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            # 47 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            # 48 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            # 49 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            # 50 "sType_clone"
            ((struct sType*)come_null_check(result_42, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional114=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName!=((void*)0),        _if_conditional114) {
            # 51 "sType_clone"
            __dec_obj40=((struct sType*)come_null_check(result_42, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_42, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value79=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value79;
            __freed_obj__ = 0;
        }
        # 52 "sType_clone"
        __result57__ = __result_obj__ = result_42;
        if(result_42 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result57__;
        if(result_42 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
struct tuple1$1sTypeph* __result47__;
void* right_value54;
struct tuple1$1sTypeph* result_43;
_Bool _if_conditional62;
void* right_value55;
struct sType* __dec_obj22;
struct tuple1$1sTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
memset(&result_43, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value55, 0, sizeof(void*));
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional60=self==(void*)0,                _if_conditional60) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result47__ = __result_obj__ = (void*)0;
                    return __result47__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_43=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value54=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional62=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1!=((void*)0),                _if_conditional62) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj22=((struct tuple1$1sTypeph*)come_null_check(result_43, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_43, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value55;
                    __freed_obj__ = 0;
                }
                # 5 "tuple1$1sTypephp_clone"
                __result48__ = __result_obj__ = result_43;
                if(result_43 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_43, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result48__;
                if(result_43 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_43, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional61=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1!=((void*)0),                    _if_conditional61) {
                        # 0 "tuple1$1sTypeph_finalize"
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
struct list$1sTypeph* __result49__;
void* right_value59;
void* right_value60;
struct list$1sTypeph* __exception_result_var_b54;
struct list$1sTypeph* result_44;
struct list_item$1sTypeph* it_45;
_Bool _while_condtional7;
void* right_value64;
struct list$1sTypeph* __exception_result_var_b55;
struct list$1sTypeph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&result_44, 0, sizeof(struct list$1sTypeph*));
memset(&it_45, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value64, 0, sizeof(void*));
                # 195 "./comelang2.h"
                # 192 "./comelang2.h"
                if(_if_conditional66=self==((void*)0),                _if_conditional66) {
                    # 193 "./comelang2.h"
                    __result49__ = __result_obj__ = ((void*)0);
                    return __result49__;
                }
                # 195 "./comelang2.h"
                result_44=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b54=((struct list$1sTypeph*)(right_value60=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value59=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b54));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value59;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value60;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_45=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 197))->head;
                # 204 "./comelang2.h"
                while(_while_condtional7=it_45!=((void*)0),                _while_condtional7) {
                    # 199 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b55=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_44, "./comelang2.h", 199)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_45, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b55);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value64;
                    __freed_obj__ = 0;
                    # 201 "./comelang2.h"
                    it_45=((struct list_item$1sTypeph*)come_null_check(it_45, "./comelang2.h", 201))->next;
                }
                # 204 "./comelang2.h"
                __result52__ = __result_obj__ = result_44;
                if(result_44 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_44, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result52__;
                if(result_44 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_44, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 157 "./comelang2.h"
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                    # 158 "./comelang2.h"
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                    # 159 "./comelang2.h"
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                    # 161 "./comelang2.h"
                    __result50__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result50__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
void* right_value61;
struct list_item$1sTypeph* litem_46;
struct sType* __dec_obj26;
_Bool _if_conditional68;
void* right_value62;
struct list_item$1sTypeph* litem_47;
struct sType* __dec_obj27;
void* right_value63;
struct list_item$1sTypeph* litem_48;
struct sType* __dec_obj28;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_48, 0, sizeof(struct list_item$1sTypeph*));
                        # 239 "./comelang2.h"
                        # 208 "./comelang2.h"
                        if(_if_conditional67=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->len==0,                        _if_conditional67) {
                            # 209 "./comelang2.h"
                            litem_46=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value61=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value61;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 211))->prev=((void*)0);
                            # 212 "./comelang2.h"
                            ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 212))->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj26=((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 213))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_46, "./comelang2.h", 213))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                            # 215 "./comelang2.h"
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_46;
                            # 216 "./comelang2.h"
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 216))->head=litem_46;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional68=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->len==1,                            _if_conditional68) {
                                # 219 "./comelang2.h"
                                litem_47=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value62=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value62;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 221))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 221))->head;
                                # 222 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 222))->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj27=((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 223))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_47, "./comelang2.h", 223))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 225 "./comelang2.h"
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_47;
                                # 226 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_47;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_48=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value63=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value63;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_48, "./comelang2.h", 231))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                # 232 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(litem_48, "./comelang2.h", 232))->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj28=((struct list_item$1sTypeph*)come_null_check(litem_48, "./comelang2.h", 233))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_48, "./comelang2.h", 233))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                                # 235 "./comelang2.h"
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_48;
                                # 236 "./comelang2.h"
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_48;
                            }
                        }
                        # 239 "./comelang2.h"
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 239))->len++;
                        # 241 "./comelang2.h"
                        __result51__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result51__;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
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
_Bool _if_conditional73;
struct list$1charph* __result53__;
void* right_value68;
void* right_value69;
struct list$1charph* __exception_result_var_b56;
struct list$1charph* result_49;
struct list_item$1charph* it_50;
_Bool _while_condtional8;
void* right_value73;
struct list$1charph* __exception_result_var_b57;
struct list$1charph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct list$1charph*));
memset(&it_50, 0, sizeof(struct list_item$1charph*));
memset(&right_value73, 0, sizeof(void*));
                # 195 "./comelang2.h"
                # 192 "./comelang2.h"
                if(_if_conditional73=self==((void*)0),                _if_conditional73) {
                    # 193 "./comelang2.h"
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                # 195 "./comelang2.h"
                result_49=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 195),__exception_result_var_b56=((struct list$1charph*)(right_value69=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value68=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 195))), "./comelang2.h", 195)))))), come_pop_stackframe(), __exception_result_var_b56));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value68;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value69);
                if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value69;
                __freed_obj__ = 0;
                # 197 "./comelang2.h"
                it_50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 197))->head;
                # 204 "./comelang2.h"
                while(_while_condtional8=it_50!=((void*)0),                _while_condtional8) {
                    # 199 "./comelang2.h"
                    (come_push_stackframe("./comelang2.h", 199),__exception_result_var_b57=list$1charph_add(((struct list$1charph*)come_null_check(result_49, "./comelang2.h", 199)),(char*)come_increment_ref_count(((char*)(right_value73=string_clone(((struct list_item$1charph*)come_null_check(it_50, "./comelang2.h", 199))->item))))), come_pop_stackframe(), __exception_result_var_b57);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value73;
                    __freed_obj__ = 0;
                    # 201 "./comelang2.h"
                    it_50=((struct list_item$1charph*)come_null_check(it_50, "./comelang2.h", 201))->next;
                }
                # 204 "./comelang2.h"
                __result56__ = __result_obj__ = result_49;
                if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result56__;
                if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 157 "./comelang2.h"
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
                    # 158 "./comelang2.h"
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
                    # 159 "./comelang2.h"
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 159))->len=0;
                    # 161 "./comelang2.h"
                    __result54__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result54__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional74;
void* right_value70;
struct list_item$1charph* litem_51;
char* __dec_obj32;
_Bool _if_conditional75;
void* right_value71;
struct list_item$1charph* litem_52;
char* __dec_obj33;
void* right_value72;
struct list_item$1charph* litem_53;
char* __dec_obj34;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value70, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
memset(&right_value71, 0, sizeof(void*));
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
memset(&right_value72, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
                        # 239 "./comelang2.h"
                        # 208 "./comelang2.h"
                        if(_if_conditional74=((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->len==0,                        _if_conditional74) {
                            # 209 "./comelang2.h"
                            litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value70=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 209))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value70;
                            __freed_obj__ = 0;
                            # 211 "./comelang2.h"
                            ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 211))->prev=((void*)0);
                            # 212 "./comelang2.h"
                            ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 212))->next=((void*)0);
                            # 213 "./comelang2.h"
                            __dec_obj32=((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 213))->item;
                            ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 213))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                            # 215 "./comelang2.h"
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_51;
                            # 216 "./comelang2.h"
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 216))->head=litem_51;
                        }
                        else {
                            # 239 "./comelang2.h"
                            # 218 "./comelang2.h"
                            if(_if_conditional75=((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->len==1,                            _if_conditional75) {
                                # 219 "./comelang2.h"
                                litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value71=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 219))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value71;
                                __freed_obj__ = 0;
                                # 221 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 221))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 221))->head;
                                # 222 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 222))->next=((void*)0);
                                # 223 "./comelang2.h"
                                __dec_obj33=((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 223))->item;
                                ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 223))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                                # 225 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_52;
                                # 226 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_52;
                            }
                            else {
                                # 229 "./comelang2.h"
                                litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value72=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 229))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value72;
                                __freed_obj__ = 0;
                                # 231 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 231))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 231))->tail;
                                # 232 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 232))->next=((void*)0);
                                # 233 "./comelang2.h"
                                __dec_obj34=((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 233))->item;
                                ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 233))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                # 235 "./comelang2.h"
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_53;
                                # 236 "./comelang2.h"
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_53;
                            }
                        }
                        # 239 "./comelang2.h"
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 239))->len++;
                        # 241 "./comelang2.h"
                        __result55__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result55__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 176 "06str.c"
    __result59__ = ((struct sSStringNode*)come_null_check(self, "06str.c", 176))->sline;
    return __result59__;
}

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value81;
char* __exception_result_var_b59;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
    # 181 "06str.c"
    __result60__ = __result_obj__ = (come_push_stackframe("06str.c", 181),__exception_result_var_b59=((char*)(right_value81=__builtin_string(((struct sSStringNode*)come_null_check(self, "06str.c", 181))->sname))), come_pop_stackframe(), __exception_result_var_b59);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value81;
    __freed_obj__ = 0;
    return __result60__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value82;
char* __exception_result_var_b60;
char* __dec_obj42;
struct sCharNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
    # 193 "06str.c"
    ((struct sCharNode*)come_null_check(self, "06str.c", 193))->value=value;
    # 195 "06str.c"
    ((struct sCharNode*)come_null_check(self, "06str.c", 195))->sline=((struct sInfo*)come_null_check(info, "06str.c", 195))->sline;
    # 196 "06str.c"
    __dec_obj42=((struct sCharNode*)come_null_check(self, "06str.c", 196))->sname;
    ((struct sCharNode*)come_null_check(self, "06str.c", 196))->sname=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 196),__exception_result_var_b60=((char*)(right_value82=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 196))->sname))), come_pop_stackframe(), __exception_result_var_b60));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value82;
    __freed_obj__ = 0;
    # 198 "06str.c"
    __result61__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result61__;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 203 "06str.c"
    __result62__ = (_Bool)0;
    return __result62__;
}

char* sCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
char* __exception_result_var_b61;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
    # 208 "06str.c"
    __result63__ = __result_obj__ = (come_push_stackframe("06str.c", 208),__exception_result_var_b61=((char*)(right_value83=__builtin_string("sCharNode"))), come_pop_stackframe(), __exception_result_var_b61);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    return __result63__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value84;
struct CVALUE* come_value_54;
void* right_value85;
char* __exception_result_var_b62;
char* __dec_obj43;
void* right_value86;
void* right_value87;
struct sType* __exception_result_var_b63;
struct sType* __dec_obj44;
struct list$1CVALUEph* __exception_result_var_b64;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&come_value_54, 0, sizeof(struct CVALUE*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
    # 213 "06str.c"
    come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value84=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 213))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value84;
    __freed_obj__ = 0;
    # 215 "06str.c"
    __dec_obj43=((struct CVALUE*)come_null_check(come_value_54, "06str.c", 215))->c_value;
    ((struct CVALUE*)come_null_check(come_value_54, "06str.c", 215))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 215),__exception_result_var_b62=((char*)(right_value85=xsprintf("%d",((struct sCharNode*)come_null_check(self, "06str.c", 215))->value))), come_pop_stackframe(), __exception_result_var_b62));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value85;
    __freed_obj__ = 0;
    # 216 "06str.c"
    __dec_obj44=((struct CVALUE*)come_null_check(come_value_54, "06str.c", 216))->type;
    ((struct CVALUE*)come_null_check(come_value_54, "06str.c", 216))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 216),__exception_result_var_b63=((struct sType*)(right_value87=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 216)))),"char",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b63));
    if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value86;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value87;
    __freed_obj__ = 0;
    # 217 "06str.c"
    ((struct CVALUE*)come_null_check(come_value_54, "06str.c", 217))->var=((void*)0);
    # 219 "06str.c"
    (come_push_stackframe("06str.c", 219),__exception_result_var_b64=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 219))->stack, "06str.c", 219)),(struct CVALUE*)come_increment_ref_count(come_value_54)), come_pop_stackframe(), __exception_result_var_b64);
    # 221 "06str.c"
    (come_push_stackframe("06str.c", 221),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_54, "06str.c", 221))->c_value),come_pop_stackframe());
    # 223 "06str.c"
    __result64__ = (_Bool)1;
    if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result64__;
    if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCharNode_sline(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 228 "06str.c"
    __result65__ = ((struct sCharNode*)come_null_check(self, "06str.c", 228))->sline;
    return __result65__;
}

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value88;
char* __exception_result_var_b65;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
    # 233 "06str.c"
    __result66__ = __result_obj__ = (come_push_stackframe("06str.c", 233),__exception_result_var_b65=((char*)(right_value88=__builtin_string(((struct sCharNode*)come_null_check(self, "06str.c", 233))->sname))), come_pop_stackframe(), __exception_result_var_b65);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value88;
    __freed_obj__ = 0;
    return __result66__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value89;
char* __exception_result_var_b66;
char* __dec_obj45;
struct sWCharNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
    # 245 "06str.c"
    ((struct sWCharNode*)come_null_check(self, "06str.c", 245))->value=value;
    # 247 "06str.c"
    ((struct sWCharNode*)come_null_check(self, "06str.c", 247))->sline=((struct sInfo*)come_null_check(info, "06str.c", 247))->sline;
    # 248 "06str.c"
    __dec_obj45=((struct sWCharNode*)come_null_check(self, "06str.c", 248))->sname;
    ((struct sWCharNode*)come_null_check(self, "06str.c", 248))->sname=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 248),__exception_result_var_b66=((char*)(right_value89=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 248))->sname))), come_pop_stackframe(), __exception_result_var_b66));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89;
    __freed_obj__ = 0;
    # 250 "06str.c"
    __result67__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result67__;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sWCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 255 "06str.c"
    __result68__ = (_Bool)0;
    return __result68__;
}

char* sWCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value90;
char* __exception_result_var_b67;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
    # 260 "06str.c"
    __result69__ = __result_obj__ = (come_push_stackframe("06str.c", 260),__exception_result_var_b67=((char*)(right_value90=__builtin_string("sWCharNode"))), come_pop_stackframe(), __exception_result_var_b67);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value90;
    __freed_obj__ = 0;
    return __result69__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value91;
struct CVALUE* come_value_55;
void* right_value92;
char* __exception_result_var_b68;
char* __dec_obj46;
void* right_value93;
void* right_value94;
struct sType* __exception_result_var_b69;
struct sType* __dec_obj47;
struct list$1CVALUEph* __exception_result_var_b70;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value91, 0, sizeof(void*));
memset(&come_value_55, 0, sizeof(struct CVALUE*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
    # 265 "06str.c"
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 265))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value91;
    __freed_obj__ = 0;
    # 267 "06str.c"
    __dec_obj46=((struct CVALUE*)come_null_check(come_value_55, "06str.c", 267))->c_value;
    ((struct CVALUE*)come_null_check(come_value_55, "06str.c", 267))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 267),__exception_result_var_b68=((char*)(right_value92=xsprintf("L'%lc'",((struct sWCharNode*)come_null_check(self, "06str.c", 267))->value))), come_pop_stackframe(), __exception_result_var_b68));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value92;
    __freed_obj__ = 0;
    # 268 "06str.c"
    __dec_obj47=((struct CVALUE*)come_null_check(come_value_55, "06str.c", 268))->type;
    ((struct CVALUE*)come_null_check(come_value_55, "06str.c", 268))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 268),__exception_result_var_b69=((struct sType*)(right_value94=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value93=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 268)))),"wchar_t",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b69));
    if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value93;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value94;
    __freed_obj__ = 0;
    # 269 "06str.c"
    ((struct CVALUE*)come_null_check(come_value_55, "06str.c", 269))->var=((void*)0);
    # 271 "06str.c"
    (come_push_stackframe("06str.c", 271),__exception_result_var_b70=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 271))->stack, "06str.c", 271)),(struct CVALUE*)come_increment_ref_count(come_value_55)), come_pop_stackframe(), __exception_result_var_b70);
    # 273 "06str.c"
    (come_push_stackframe("06str.c", 273),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_55, "06str.c", 273))->c_value),come_pop_stackframe());
    # 275 "06str.c"
    __result70__ = (_Bool)1;
    if(come_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result70__;
    if(come_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 280 "06str.c"
    __result71__ = ((struct sWCharNode*)come_null_check(self, "06str.c", 280))->sline;
    return __result71__;
}

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value95;
char* __exception_result_var_b71;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
    # 285 "06str.c"
    __result72__ = __result_obj__ = (come_push_stackframe("06str.c", 285),__exception_result_var_b71=((char*)(right_value95=__builtin_string(((struct sWCharNode*)come_null_check(self, "06str.c", 285))->sname))), come_pop_stackframe(), __exception_result_var_b71);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95;
    __freed_obj__ = 0;
    return __result72__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int* __dec_obj48;
void* right_value96;
char* __exception_result_var_b72;
char* __dec_obj49;
struct sWStringNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
    # 297 "06str.c"
    __dec_obj48=((struct sWStringNode*)come_null_check(self, "06str.c", 297))->value;
    ((struct sWStringNode*)come_null_check(self, "06str.c", 297))->value=(int*)come_increment_ref_count(value);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    # 299 "06str.c"
    ((struct sWStringNode*)come_null_check(self, "06str.c", 299))->sline=sline;
    # 300 "06str.c"
    __dec_obj49=((struct sWStringNode*)come_null_check(self, "06str.c", 300))->sname;
    ((struct sWStringNode*)come_null_check(self, "06str.c", 300))->sname=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 300),__exception_result_var_b72=((char*)(right_value96=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 300))->sname))), come_pop_stackframe(), __exception_result_var_b72));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96;
    __freed_obj__ = 0;
    # 302 "06str.c"
    __result73__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    return __result73__;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sWStringNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 307 "06str.c"
    __result74__ = (_Bool)0;
    return __result74__;
}

char* sWStringNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value97;
char* __exception_result_var_b73;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
    # 312 "06str.c"
    __result75__ = __result_obj__ = (come_push_stackframe("06str.c", 312),__exception_result_var_b73=((char*)(right_value97=__builtin_string("sWStringNode"))), come_pop_stackframe(), __exception_result_var_b73);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97;
    __freed_obj__ = 0;
    return __result75__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value98;
struct CVALUE* come_value_56;
void* right_value99;
char* __exception_result_var_b74;
char* __dec_obj50;
void* right_value100;
void* right_value101;
struct sType* __exception_result_var_b75;
struct sType* __dec_obj51;
struct list$1CVALUEph* __exception_result_var_b76;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&come_value_56, 0, sizeof(struct CVALUE*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
    # 317 "06str.c"
    come_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 317))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value98;
    __freed_obj__ = 0;
    # 319 "06str.c"
    __dec_obj50=((struct CVALUE*)come_null_check(come_value_56, "06str.c", 319))->c_value;
    ((struct CVALUE*)come_null_check(come_value_56, "06str.c", 319))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 319),__exception_result_var_b74=((char*)(right_value99=xsprintf("L'%ls'",((struct sWStringNode*)come_null_check(self, "06str.c", 319))->value))), come_pop_stackframe(), __exception_result_var_b74));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value99;
    __freed_obj__ = 0;
    # 320 "06str.c"
    __dec_obj51=((struct CVALUE*)come_null_check(come_value_56, "06str.c", 320))->type;
    ((struct CVALUE*)come_null_check(come_value_56, "06str.c", 320))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 320),__exception_result_var_b75=((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 320)))),"wchar_t*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b75));
    if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value100;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value101;
    __freed_obj__ = 0;
    # 321 "06str.c"
    ((struct CVALUE*)come_null_check(come_value_56, "06str.c", 321))->var=((void*)0);
    # 323 "06str.c"
    (come_push_stackframe("06str.c", 323),__exception_result_var_b76=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 323))->stack, "06str.c", 323)),(struct CVALUE*)come_increment_ref_count(come_value_56)), come_pop_stackframe(), __exception_result_var_b76);
    # 325 "06str.c"
    (come_push_stackframe("06str.c", 325),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_56, "06str.c", 325))->c_value),come_pop_stackframe());
    # 327 "06str.c"
    __result76__ = (_Bool)1;
    if(come_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result76__;
    if(come_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 332 "06str.c"
    __result77__ = ((struct sWStringNode*)come_null_check(self, "06str.c", 332))->sline;
    return __result77__;
}

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value102;
char* __exception_result_var_b77;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
    # 337 "06str.c"
    __result78__ = __result_obj__ = (come_push_stackframe("06str.c", 337),__exception_result_var_b77=((char*)(right_value102=__builtin_string(((struct sWStringNode*)come_null_check(self, "06str.c", 337))->sname))), come_pop_stackframe(), __exception_result_var_b77);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value102;
    __freed_obj__ = 0;
    return __result78__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
char* __exception_result_var_b78;
char* __dec_obj52;
void* right_value104;
char* __exception_result_var_b79;
char* __dec_obj53;
struct sRegexNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
    # 352 "06str.c"
    __dec_obj52=((struct sRegexNode*)come_null_check(self, "06str.c", 352))->str;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 352))->str=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 352),__exception_result_var_b78=((char*)(right_value103=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b78));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value103;
    __freed_obj__ = 0;
    # 353 "06str.c"
    ((struct sRegexNode*)come_null_check(self, "06str.c", 353))->global=global;
    # 354 "06str.c"
    ((struct sRegexNode*)come_null_check(self, "06str.c", 354))->ignore_case=ignore_case;
    # 356 "06str.c"
    ((struct sRegexNode*)come_null_check(self, "06str.c", 356))->sline=sline;
    # 357 "06str.c"
    __dec_obj53=((struct sRegexNode*)come_null_check(self, "06str.c", 357))->sname;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 357))->sname=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 357),__exception_result_var_b79=((char*)(right_value104=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 357))->sname))), come_pop_stackframe(), __exception_result_var_b79));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value104;
    __freed_obj__ = 0;
    # 359 "06str.c"
    __result79__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
    return __result79__;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sRegexNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 364 "06str.c"
    __result80__ = (_Bool)0;
    return __result80__;
}

char* sRegexNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value105;
char* __exception_result_var_b80;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
    # 369 "06str.c"
    __result81__ = __result_obj__ = (come_push_stackframe("06str.c", 369),__exception_result_var_b80=((char*)(right_value105=__builtin_string("sRegexNode"))), come_pop_stackframe(), __exception_result_var_b80);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value105;
    __freed_obj__ = 0;
    return __result81__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value106;
struct CVALUE* come_value_57;
void* right_value107;
char* __exception_result_var_b81;
void* right_value108;
char* __exception_result_var_b82;
void* right_value109;
char* __exception_result_var_b83;
void* right_value110;
char* __exception_result_var_b84;
void* right_value111;
char* __exception_result_var_b85;
char* __dec_obj54;
void* right_value112;
void* right_value113;
struct sType* __exception_result_var_b86;
struct sType* __dec_obj55;
struct list$1CVALUEph* __exception_result_var_b87;
void* right_value114;
char* __exception_result_var_b88;
char* __dec_obj56;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
memset(&come_value_57, 0, sizeof(struct CVALUE*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
    # 374 "06str.c"
    come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106;
    __freed_obj__ = 0;
    # 376 "06str.c"
    __dec_obj54=((struct CVALUE*)come_null_check(come_value_57, "06str.c", 376))->c_value;
    ((struct CVALUE*)come_null_check(come_value_57, "06str.c", 376))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 376),__exception_result_var_b85=((char*)(right_value111=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",((struct sRegexNode*)come_null_check(self, "06str.c", 376))->str,((struct sRegexNode*)come_null_check(self, "06str.c", 376))->ignore_case?(come_push_stackframe("06str.c", 376),__exception_result_var_b81=((char*)(right_value107=__builtin_string("1"))), come_pop_stackframe(), __exception_result_var_b81):(come_push_stackframe("06str.c", 376),__exception_result_var_b82=((char*)(right_value108=__builtin_string("0"))), come_pop_stackframe(), __exception_result_var_b82),((struct sRegexNode*)come_null_check(self, "06str.c", 376))->global?(come_push_stackframe("06str.c", 376),__exception_result_var_b83=((char*)(right_value109=__builtin_string("1"))), come_pop_stackframe(), __exception_result_var_b83):(come_push_stackframe("06str.c", 376),__exception_result_var_b84=((char*)(right_value110=__builtin_string("0"))), come_pop_stackframe(), __exception_result_var_b84)))), come_pop_stackframe(), __exception_result_var_b85));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value107;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value108;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value109;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value110;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value111;
    __freed_obj__ = 0;
    # 377 "06str.c"
    __dec_obj55=((struct CVALUE*)come_null_check(come_value_57, "06str.c", 377))->type;
    ((struct CVALUE*)come_null_check(come_value_57, "06str.c", 377))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 377),__exception_result_var_b86=((struct sType*)(right_value113=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value112=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 377)))),"come_regex",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b86));
    if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value112;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value113;
    __freed_obj__ = 0;
    # 378 "06str.c"
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_57, "06str.c", 378))->type, "06str.c", 378))->mPointerNum=1;
    # 379 "06str.c"
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_57, "06str.c", 379))->type, "06str.c", 379))->mHeap=(_Bool)1;
    # 380 "06str.c"
    ((struct CVALUE*)come_null_check(come_value_57, "06str.c", 380))->var=((void*)0);
    # 382 "06str.c"
    (come_push_stackframe("06str.c", 382),__exception_result_var_b87=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 382))->stack, "06str.c", 382)),(struct CVALUE*)come_increment_ref_count(come_value_57)), come_pop_stackframe(), __exception_result_var_b87);
    # 384 "06str.c"
    (come_push_stackframe("06str.c", 384),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_57, "06str.c", 384))->c_value),come_pop_stackframe());
    # 386 "06str.c"
    __dec_obj56=((struct CVALUE*)come_null_check(come_value_57, "06str.c", 386))->c_value;
    ((struct CVALUE*)come_null_check(come_value_57, "06str.c", 386))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 386),__exception_result_var_b88=((char*)(right_value114=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_57, "06str.c", 386))->c_value,(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(come_value_57, "06str.c", 386))->type),info))), come_pop_stackframe(), __exception_result_var_b88));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value114;
    __freed_obj__ = 0;
    # 388 "06str.c"
    __result82__ = (_Bool)1;
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result82__;
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 393 "06str.c"
    __result83__ = ((struct sRegexNode*)come_null_check(self, "06str.c", 393))->sline;
    return __result83__;
}

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value115;
char* __exception_result_var_b89;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
    # 398 "06str.c"
    __result84__ = __result_obj__ = (come_push_stackframe("06str.c", 398),__exception_result_var_b89=((char*)(right_value115=__builtin_string(((struct sRegexNode*)come_null_check(self, "06str.c", 398))->sname))), come_pop_stackframe(), __exception_result_var_b89);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value115;
    __freed_obj__ = 0;
    return __result84__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj57;
void* right_value116;
char* __exception_result_var_b90;
char* __dec_obj58;
struct sListNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
    # 410 "06str.c"
    __dec_obj57=((struct sListNode*)come_null_check(self, "06str.c", 410))->list_elements;
    ((struct sListNode*)come_null_check(self, "06str.c", 410))->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    if(__dec_obj57) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 412 "06str.c"
    ((struct sListNode*)come_null_check(self, "06str.c", 412))->sline=((struct sInfo*)come_null_check(info, "06str.c", 412))->sline;
    # 413 "06str.c"
    __dec_obj58=((struct sListNode*)come_null_check(self, "06str.c", 413))->sname;
    ((struct sListNode*)come_null_check(self, "06str.c", 413))->sname=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 413),__exception_result_var_b90=((char*)(right_value116=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 413))->sname))), come_pop_stackframe(), __exception_result_var_b90));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value116;
    __freed_obj__ = 0;
    # 415 "06str.c"
    __result85__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result85__;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sListNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 420 "06str.c"
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sListNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value117;
char* __exception_result_var_b91;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
    # 425 "06str.c"
    __result87__ = __result_obj__ = (come_push_stackframe("06str.c", 425),__exception_result_var_b91=((char*)(right_value117=__builtin_string("sListNode"))), come_pop_stackframe(), __exception_result_var_b91);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = 0;
    return __result87__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* list_elements_58;
void* right_value118;
void* right_value119;
struct list$1CVALUEph* __exception_result_var_b92;
struct list$1CVALUEph* params_61;
struct sType* list_element_type_62;
struct list$1sNodeph* o2_saved_63;
struct sNode* __exception_result_var_b93;
struct sNode* it_64;
_Bool __exception_result_var_b94;
_Bool _for_condtionalA2;
struct sNode* __exception_result_var_b95;
_Bool __exception_result_var_b96;
_Bool _if_conditional123;
_Bool __result89__;
void* right_value120;
struct CVALUE* __exception_result_var_b97;
struct CVALUE* come_value_65;
struct list$1CVALUEph* __exception_result_var_b98;
void* right_value121;
struct sType* __dec_obj59;
void* right_value122;
struct sType* type_values_66;
int __exception_result_var_b99;
void* right_value126;
struct sNode* __exception_result_var_b100;
struct list$1sNodeph* __exception_result_var_b101;
static int list_value_num_70=0;
void* right_value127;
char* __exception_result_var_b102;
char* var_name_71;
void* right_value128;
struct sVar* __exception_result_var_b103;
struct sVar* var__72;
void* right_value129;
char* __exception_result_var_b104;
void* right_value130;
void* right_value131;
struct buffer* __exception_result_var_b105;
struct buffer* source_73;
struct buffer* __exception_result_var_b106;
int i_74;
struct list$1CVALUEph* o2_saved_75;
struct CVALUE* __exception_result_var_b109;
struct CVALUE* it_78;
_Bool __exception_result_var_b110;
_Bool _for_condtionalA3;
struct CVALUE* __exception_result_var_b113;
_Bool _if_conditional130;
struct CVALUE* __exception_result_var_b115;
void* right_value132;
char* __exception_result_var_b116;
struct buffer* __exception_result_var_b117;
struct CVALUE* __exception_result_var_b118;
void* right_value133;
char* __exception_result_var_b119;
struct buffer* __exception_result_var_b120;
struct buffer* __exception_result_var_b121;
void* right_value134;
char* __exception_result_var_b122;
void* right_value135;
void* right_value136;
struct sType* __exception_result_var_b123;
struct sType* list_type_84;
void* right_value140;
struct list$1sTypeph* __exception_result_var_b124;
void* right_value141;
struct sType* obj_type_88;
char* fun_name_89;
void* right_value142;
char* __exception_result_var_b125;
void* right_value143;
char* __exception_result_var_b126;
void* right_value144;
char* __exception_result_var_b127;
char* generics_fun_name_90;
struct sFun* __exception_result_var_b128;
struct sFun* fun_91;
_Bool _if_conditional135;
void* right_value145;
char* __exception_result_var_b129;
void* right_value146;
char* __exception_result_var_b130;
char* __dec_obj66;
struct sFun* __exception_result_var_b131;
_Bool _if_conditional136;
_Bool __result102__;
void* right_value147;
struct sType* result_type_92;
struct sType* type_93;
void* right_value148;
struct CVALUE* obj_value_94;
void* right_value149;
void* right_value150;
struct buffer* __exception_result_var_b132;
struct buffer* num_string_95;
struct buffer* __exception_result_var_b133;
void* right_value151;
struct sType* __exception_result_var_b134;
struct sType* type2_96;
void* right_value152;
char* __exception_result_var_b135;
char* type_name_97;
void* right_value153;
char* __exception_result_var_b136;
void* right_value154;
char* __exception_result_var_b137;
char* __dec_obj67;
void* right_value155;
struct sType* type3_98;
void* right_value156;
struct sType* __dec_obj68;
void* right_value157;
char* __exception_result_var_b138;
char* __dec_obj69;
void* right_value158;
void* right_value159;
struct list$1CVALUEph* __exception_result_var_b139;
struct list$1CVALUEph* come_params_99;
struct sType* __exception_result_var_b141;
_Bool _if_conditional139;
struct sType* __exception_result_var_b142;
struct list$1CVALUEph* __exception_result_var_b143;
void* right_value160;
struct CVALUE* come_value2_103;
int __exception_result_var_b144;
void* right_value161;
char* __exception_result_var_b145;
char* __dec_obj70;
struct sType* __dec_obj71;
struct list$1CVALUEph* __exception_result_var_b146;
void* right_value162;
struct CVALUE* come_value3_104;
void* right_value163;
char* __exception_result_var_b147;
char* __dec_obj72;
struct sType* __dec_obj73;
struct list$1CVALUEph* __exception_result_var_b148;
void* right_value164;
void* right_value165;
struct buffer* __exception_result_var_b149;
struct buffer* buf_105;
struct buffer* __exception_result_var_b150;
struct buffer* __exception_result_var_b151;
int j_106;
struct list$1CVALUEph* o2_saved_107;
struct CVALUE* __exception_result_var_b152;
struct CVALUE* it_108;
_Bool __exception_result_var_b153;
_Bool _for_condtionalA4;
struct CVALUE* __exception_result_var_b154;
struct buffer* __exception_result_var_b155;
int __exception_result_var_b156;
_Bool _if_conditional140;
struct buffer* __exception_result_var_b157;
struct buffer* __exception_result_var_b158;
void* right_value166;
struct CVALUE* come_value4_109;
void* right_value167;
char* __exception_result_var_b159;
char* __dec_obj74;
_Bool _if_conditional141;
void* right_value168;
char* __exception_result_var_b160;
void* right_value169;
char* __exception_result_var_b161;
char* __dec_obj75;
void* right_value170;
struct sType* __dec_obj76;
void* right_value171;
char* __exception_result_var_b162;
struct list$1CVALUEph* __exception_result_var_b163;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&list_elements_58, 0, sizeof(struct list$1sNodeph*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&params_61, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_62, 0, sizeof(struct sType*));
memset(&o2_saved_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct sNode*));
memset(&right_value120, 0, sizeof(void*));
memset(&come_value_65, 0, sizeof(struct CVALUE*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&type_values_66, 0, sizeof(struct sType*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&var_name_71, 0, sizeof(char*));
memset(&right_value128, 0, sizeof(void*));
memset(&var__72, 0, sizeof(struct sVar*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&source_73, 0, sizeof(struct buffer*));
memset(&i_74, 0, sizeof(int));
memset(&o2_saved_75, 0, sizeof(struct list$1CVALUEph*));
memset(&it_78, 0, sizeof(struct CVALUE*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&list_type_84, 0, sizeof(struct sType*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&obj_type_88, 0, sizeof(struct sType*));
memset(&fun_name_89, 0, sizeof(char*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&generics_fun_name_90, 0, sizeof(char*));
memset(&fun_91, 0, sizeof(struct sFun*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&result_type_92, 0, sizeof(struct sType*));
memset(&type_93, 0, sizeof(struct sType*));
memset(&right_value148, 0, sizeof(void*));
memset(&obj_value_94, 0, sizeof(struct CVALUE*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&num_string_95, 0, sizeof(struct buffer*));
memset(&right_value151, 0, sizeof(void*));
memset(&type2_96, 0, sizeof(struct sType*));
memset(&right_value152, 0, sizeof(void*));
memset(&type_name_97, 0, sizeof(char*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&type3_98, 0, sizeof(struct sType*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&come_params_99, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value160, 0, sizeof(void*));
memset(&come_value2_103, 0, sizeof(struct CVALUE*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&come_value3_104, 0, sizeof(struct CVALUE*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&buf_105, 0, sizeof(struct buffer*));
memset(&j_106, 0, sizeof(int));
memset(&o2_saved_107, 0, sizeof(struct list$1CVALUEph*));
memset(&it_108, 0, sizeof(struct CVALUE*));
memset(&right_value166, 0, sizeof(void*));
memset(&come_value4_109, 0, sizeof(struct CVALUE*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
    # 430 "06str.c"
    list_elements_58=((struct sListNode*)come_null_check(self, "06str.c", 430))->list_elements;
    # 432 "06str.c"
    params_61=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 432),__exception_result_var_b92=((struct list$1CVALUEph*)(right_value119=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value118=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 432))))))), come_pop_stackframe(), __exception_result_var_b92));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value119;
    __freed_obj__ = 0;
    # 433 "06str.c"
    # 448 "06str.c"
    for(
    o2_saved_63=(list_elements_58),it_64=(come_push_stackframe("06str.c", 435),__exception_result_var_b93=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_63), "06str.c", 435))), come_pop_stackframe(), __exception_result_var_b93) ,    0;    _for_condtionalA2=    !(come_push_stackframe("06str.c", 435),__exception_result_var_b94=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_63), "06str.c", 435))), come_pop_stackframe(), __exception_result_var_b94) ,    _for_condtionalA2;    it_64=(come_push_stackframe("06str.c", 435),__exception_result_var_b95=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_63), "06str.c", 435))), come_pop_stackframe(), __exception_result_var_b95) ,    0    ){
        # 440 "06str.c"
        # 436 "06str.c"
        if(_if_conditional123=!(come_push_stackframe("06str.c", 436),__exception_result_var_b96=node_compile(it_64,info), come_pop_stackframe(), __exception_result_var_b96),        _if_conditional123) {
            # 437 "06str.c"
            __result89__ = (_Bool)0;
            if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result89__;
        }
        # 440 "06str.c"
        come_value_65=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 440),__exception_result_var_b97=((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b97));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value120;
        __freed_obj__ = 0;
        # 441 "06str.c"
        (come_push_stackframe("06str.c", 441),dec_stack_ptr(1,info),come_pop_stackframe());
        # 443 "06str.c"
        (come_push_stackframe("06str.c", 443),__exception_result_var_b98=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(params_61, "06str.c", 443)),(struct CVALUE*)come_increment_ref_count(come_value_65)), come_pop_stackframe(), __exception_result_var_b98);
        # 445 "06str.c"
        __dec_obj59=list_element_type_62;
        list_element_type_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(((struct CVALUE*)come_null_check(come_value_65, "06str.c", 445))->type))));
        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value121;
        __freed_obj__ = 0;
        if(come_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    # 448 "06str.c"
    type_values_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(list_element_type_62))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value122;
    __freed_obj__ = 0;
    # 449 "06str.c"
    (come_push_stackframe("06str.c", 449),__exception_result_var_b101=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type_values_66, "06str.c", 449))->mArrayNum, "06str.c", 449)),(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 449),__exception_result_var_b100=((struct sNode*)(right_value126=create_int_node((come_push_stackframe("06str.c", 449),__exception_result_var_b99=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(params_61, "06str.c", 449))), come_pop_stackframe(), __exception_result_var_b99),info))), come_pop_stackframe(), __exception_result_var_b100))), come_pop_stackframe(), __exception_result_var_b101);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value126;
    __freed_obj__ = 0;
    # 450 "06str.c"
    ((struct sType*)come_null_check(type_values_66, "06str.c", 450))->mHeap=(_Bool)0;
    # 452 "06str.c"
    # 453 "06str.c"
    var_name_71=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 453),__exception_result_var_b102=((char*)(right_value127=xsprintf("__list_values%d__",++list_value_num_70))), come_pop_stackframe(), __exception_result_var_b102));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value127;
    __freed_obj__ = 0;
    # 455 "06str.c"
    (come_push_stackframe("06str.c", 455),add_variable_to_table(var_name_71,(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(type_values_66)))),info),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value128;
    __freed_obj__ = 0;
    # 457 "06str.c"
    var__72=(come_push_stackframe("06str.c", 457),__exception_result_var_b103=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 457))->lv_table,var_name_71), come_pop_stackframe(), __exception_result_var_b103);
    # 459 "06str.c"
    (come_push_stackframe("06str.c", 459),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("06str.c", 459),__exception_result_var_b104=((char*)(right_value129=make_define_var(type_values_66,((struct sVar*)come_null_check(var__72, "06str.c", 459))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b104)),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value129;
    __freed_obj__ = 0;
    # 461 "06str.c"
    source_73=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 461),__exception_result_var_b105=((struct buffer*)(right_value131=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 461))))))), come_pop_stackframe(), __exception_result_var_b105));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value130;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value131;
    __freed_obj__ = 0;
    # 463 "06str.c"
    (come_push_stackframe("06str.c", 463),__exception_result_var_b106=buffer_append_str(((struct buffer*)come_null_check(source_73, "06str.c", 463)),"{"), come_pop_stackframe(), __exception_result_var_b106);
    # 465 "06str.c"
    i_74=0;
    # 476 "06str.c"
    for(
    o2_saved_75=(struct list$1CVALUEph*)come_increment_ref_count((params_61)),it_78=(come_push_stackframe("06str.c", 466),__exception_result_var_b109=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_75), "06str.c", 466))), come_pop_stackframe(), __exception_result_var_b109) ,    0;    _for_condtionalA3=    !(come_push_stackframe("06str.c", 466),__exception_result_var_b110=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_75), "06str.c", 466))), come_pop_stackframe(), __exception_result_var_b110) ,    _for_condtionalA3;    it_78=(come_push_stackframe("06str.c", 466),__exception_result_var_b113=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_75), "06str.c", 466))), come_pop_stackframe(), __exception_result_var_b113) ,    0    ){
        # 473 "06str.c"
        # 467 "06str.c"
        if(_if_conditional130=((struct sType*)come_null_check(list_element_type_62, "06str.c", 467))->mHeap,        _if_conditional130) {
            # 468 "06str.c"
            (come_push_stackframe("06str.c", 468),__exception_result_var_b117=buffer_append_str(((struct buffer*)come_null_check(source_73, "06str.c", 468)),(come_push_stackframe("06str.c", 468),__exception_result_var_b116=((char*)(right_value132=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var__72, "06str.c", 468))->mCValueName,i_74,((struct CVALUE*)come_null_check((come_push_stackframe("06str.c", 468),__exception_result_var_b115=list$1CVALUEphp_operator_load_element(params_61,i_74), come_pop_stackframe(), __exception_result_var_b115), "06str.c", 468))->c_value))), come_pop_stackframe(), __exception_result_var_b116)), come_pop_stackframe(), __exception_result_var_b117);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value132;
            __freed_obj__ = 0;
        }
        else {
            # 471 "06str.c"
            (come_push_stackframe("06str.c", 471),__exception_result_var_b120=buffer_append_str(((struct buffer*)come_null_check(source_73, "06str.c", 471)),(come_push_stackframe("06str.c", 471),__exception_result_var_b119=((char*)(right_value133=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var__72, "06str.c", 471))->mCValueName,i_74,((struct CVALUE*)come_null_check((come_push_stackframe("06str.c", 471),__exception_result_var_b118=list$1CVALUEphp_operator_load_element(params_61,i_74), come_pop_stackframe(), __exception_result_var_b118), "06str.c", 471))->c_value))), come_pop_stackframe(), __exception_result_var_b119)), come_pop_stackframe(), __exception_result_var_b120);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value133;
            __freed_obj__ = 0;
        }
        # 473 "06str.c"
        i_74++;
    }
    if(o2_saved_75 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_75, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 476 "06str.c"
    (come_push_stackframe("06str.c", 476),__exception_result_var_b121=buffer_append_str(((struct buffer*)come_null_check(source_73, "06str.c", 476)),"}"), come_pop_stackframe(), __exception_result_var_b121);
    # 478 "06str.c"
    (come_push_stackframe("06str.c", 478),add_come_code(info,"%s",(come_push_stackframe("06str.c", 478),__exception_result_var_b122=((char*)(right_value134=buffer_to_string(((struct buffer*)come_null_check(source_73, "06str.c", 478))))), come_pop_stackframe(), __exception_result_var_b122)),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value134;
    __freed_obj__ = 0;
    # 480 "06str.c"
    list_type_84=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 480),__exception_result_var_b123=((struct sType*)(right_value136=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value135=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 480)))),"list",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b123));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value135;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value136;
    __freed_obj__ = 0;
    # 481 "06str.c"
    (come_push_stackframe("06str.c", 481),__exception_result_var_b124=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(list_type_84, "06str.c", 481))->mGenericsTypes, "06str.c", 481)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(list_element_type_62))))), come_pop_stackframe(), __exception_result_var_b124);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value140;
    __freed_obj__ = 0;
    # 483 "06str.c"
    obj_type_88=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(list_type_84))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value141;
    __freed_obj__ = 0;
    # 484 "06str.c"
    fun_name_89="initialize_with_values";
    # 486 "06str.c"
    generics_fun_name_90=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 486),__exception_result_var_b127=((char*)(right_value144=string_to_string(((char*)come_null_check((come_push_stackframe("06str.c", 486),__exception_result_var_b126=((char*)(right_value143=make_generics_function(obj_type_88,(char*)come_increment_ref_count((come_push_stackframe("06str.c", 486),__exception_result_var_b125=((char*)(right_value142=__builtin_string(fun_name_89))), come_pop_stackframe(), __exception_result_var_b125)),info))), come_pop_stackframe(), __exception_result_var_b126), "06str.c", 486))))), come_pop_stackframe(), __exception_result_var_b127));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value142;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value143;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value144;
    __freed_obj__ = 0;
    # 488 "06str.c"
    fun_91=(come_push_stackframe("06str.c", 488),__exception_result_var_b128=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 488))->funcs, "06str.c", 488)),generics_fun_name_90,((void*)0)), come_pop_stackframe(), __exception_result_var_b128);
    # 501 "06str.c"
    # 490 "06str.c"
    if(_if_conditional135=fun_91==((void*)0),    _if_conditional135) {
        # 491 "06str.c"
        __dec_obj66=generics_fun_name_90;
        generics_fun_name_90=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 491),__exception_result_var_b130=((char*)(right_value146=create_method_name(obj_type_88,(_Bool)0,(come_push_stackframe("06str.c", 491),__exception_result_var_b129=((char*)(right_value145=__builtin_string(fun_name_89))), come_pop_stackframe(), __exception_result_var_b129),info))), come_pop_stackframe(), __exception_result_var_b130));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value145;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value146;
        __freed_obj__ = 0;
        # 493 "06str.c"
        fun_91=(come_push_stackframe("06str.c", 493),__exception_result_var_b131=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 493))->funcs, "06str.c", 493)),generics_fun_name_90,((void*)0)), come_pop_stackframe(), __exception_result_var_b131);
        # 499 "06str.c"
        # 495 "06str.c"
        if(_if_conditional136=fun_91==((void*)0),        _if_conditional136) {
            # 496 "06str.c"
            (come_push_stackframe("06str.c", 496),err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_90,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 496))->come_fun, "06str.c", 496))->mName),come_pop_stackframe());
            # 497 "06str.c"
            __result102__ = (_Bool)1;
            if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_values_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_66, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
            if(source_73 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_73, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_type_84 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_84, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_88 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_88, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_90 && !__freed_obj__) { generics_fun_name_90 = come_decrement_ref_count(generics_fun_name_90, (void*)0, (void*)0, 0, 0, 0); }
            return __result102__;
        }
    }
    # 501 "06str.c"
    result_type_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(((struct sFun*)come_null_check(fun_91, "06str.c", 501))->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value147;
    __freed_obj__ = 0;
    # 502 "06str.c"
    ((struct sType*)come_null_check(result_type_92, "06str.c", 502))->mStatic=(_Bool)0;
    # 504 "06str.c"
    type_93=list_type_84;
    # 506 "06str.c"
    obj_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 506))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value148;
    __freed_obj__ = 0;
    # 508 "06str.c"
    num_string_95=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 508),__exception_result_var_b132=((struct buffer*)(right_value150=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value149=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 508))))))), come_pop_stackframe(), __exception_result_var_b132));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value149;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value150;
    __freed_obj__ = 0;
    # 510 "06str.c"
    (come_push_stackframe("06str.c", 510),__exception_result_var_b133=buffer_append_str(((struct buffer*)come_null_check(num_string_95, "06str.c", 510)),"1"), come_pop_stackframe(), __exception_result_var_b133);
    # 512 "06str.c"
    type2_96=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 512),__exception_result_var_b134=((struct sType*)(right_value151=solve_generics(type_93,type_93,info))), come_pop_stackframe(), __exception_result_var_b134));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value151;
    __freed_obj__ = 0;
    # 514 "06str.c"
    type_name_97=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 514),__exception_result_var_b135=((char*)(right_value152=make_type_name_string(type2_96,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b135));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value152;
    __freed_obj__ = 0;
    # 516 "06str.c"
    __dec_obj67=((struct CVALUE*)come_null_check(obj_value_94, "06str.c", 516))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_94, "06str.c", 516))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 516),__exception_result_var_b137=((char*)(right_value154=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_97,type_name_97,(come_push_stackframe("06str.c", 516),__exception_result_var_b136=((char*)(right_value153=buffer_to_string(((struct buffer*)come_null_check(num_string_95, "06str.c", 516))))), come_pop_stackframe(), __exception_result_var_b136),((struct sInfo*)come_null_check(info, "06str.c", 516))->sname,((struct sInfo*)come_null_check(info, "06str.c", 516))->sline))), come_pop_stackframe(), __exception_result_var_b137));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value153;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value154;
    __freed_obj__ = 0;
    # 518 "06str.c"
    type3_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(type2_96))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value155;
    __freed_obj__ = 0;
    # 519 "06str.c"
    ((struct sType*)come_null_check(type3_98, "06str.c", 519))->mPointerNum++;
    # 520 "06str.c"
    ((struct sType*)come_null_check(type3_98, "06str.c", 520))->mHeap=(_Bool)1;
    # 521 "06str.c"
    ((struct sType*)come_null_check(type2_96, "06str.c", 521))->mHeap=(_Bool)1;
    # 522 "06str.c"
    __dec_obj68=((struct CVALUE*)come_null_check(obj_value_94, "06str.c", 522))->type;
    ((struct CVALUE*)come_null_check(obj_value_94, "06str.c", 522))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(type2_96))));
    if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value156;
    __freed_obj__ = 0;
    # 523 "06str.c"
    __dec_obj69=((struct CVALUE*)come_null_check(obj_value_94, "06str.c", 523))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_94, "06str.c", 523))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 523),__exception_result_var_b138=((char*)(right_value157=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_94, "06str.c", 523))->c_value,(struct sType*)come_increment_ref_count(type3_98),info))), come_pop_stackframe(), __exception_result_var_b138));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value157;
    __freed_obj__ = 0;
    # 524 "06str.c"
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_94, "06str.c", 524))->type, "06str.c", 524))->mPointerNum++;
    # 525 "06str.c"
    ((struct CVALUE*)come_null_check(obj_value_94, "06str.c", 525))->var=((void*)0);
    # 527 "06str.c"
    come_params_99=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 527),__exception_result_var_b139=((struct list$1CVALUEph*)(right_value159=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value158=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 527))))))), come_pop_stackframe(), __exception_result_var_b139));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value158;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value159;
    __freed_obj__ = 0;
    # 532 "06str.c"
    # 529 "06str.c"
    if(_if_conditional139=((struct sType*)come_null_check((come_push_stackframe("06str.c", 529),__exception_result_var_b141=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_91, "06str.c", 529))->mParamTypes,0), come_pop_stackframe(), __exception_result_var_b141), "06str.c", 529))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_94, "06str.c", 529))->type, "06str.c", 529))->mHeap,    _if_conditional139) {
        # 530 "06str.c"
        (come_push_stackframe("06str.c", 530),std_move((come_push_stackframe("06str.c", 530),__exception_result_var_b142=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_91, "06str.c", 530))->mParamTypes,0), come_pop_stackframe(), __exception_result_var_b142),((struct CVALUE*)come_null_check(obj_value_94, "06str.c", 530))->type,obj_value_94,info),come_pop_stackframe());
    }
    # 532 "06str.c"
    (come_push_stackframe("06str.c", 532),__exception_result_var_b143=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_99, "06str.c", 532)),(struct CVALUE*)come_increment_ref_count(obj_value_94)), come_pop_stackframe(), __exception_result_var_b143);
    # 534 "06str.c"
    come_value2_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 534))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value160;
    __freed_obj__ = 0;
    # 536 "06str.c"
    __dec_obj70=((struct CVALUE*)come_null_check(come_value2_103, "06str.c", 536))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_103, "06str.c", 536))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 536),__exception_result_var_b145=((char*)(right_value161=xsprintf("%d",(come_push_stackframe("06str.c", 536),__exception_result_var_b144=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(params_61, "06str.c", 536))), come_pop_stackframe(), __exception_result_var_b144)))), come_pop_stackframe(), __exception_result_var_b145));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value161;
    __freed_obj__ = 0;
    # 537 "06str.c"
    __dec_obj71=((struct CVALUE*)come_null_check(come_value2_103, "06str.c", 537))->type;
    ((struct CVALUE*)come_null_check(come_value2_103, "06str.c", 537))->type=((void*)0);
    if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 538 "06str.c"
    ((struct CVALUE*)come_null_check(come_value2_103, "06str.c", 538))->var=((void*)0);
    # 540 "06str.c"
    (come_push_stackframe("06str.c", 540),__exception_result_var_b146=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_99, "06str.c", 540)),(struct CVALUE*)come_increment_ref_count(come_value2_103)), come_pop_stackframe(), __exception_result_var_b146);
    # 542 "06str.c"
    come_value3_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 542))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[32] = right_value162;
    __freed_obj__ = 0;
    # 544 "06str.c"
    __dec_obj72=((struct CVALUE*)come_null_check(come_value3_104, "06str.c", 544))->c_value;
    ((struct CVALUE*)come_null_check(come_value3_104, "06str.c", 544))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 544),__exception_result_var_b147=((char*)(right_value163=xsprintf("%s",((struct sVar*)come_null_check(var__72, "06str.c", 544))->mCValueName))), come_pop_stackframe(), __exception_result_var_b147));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 33, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[33] = right_value163;
    __freed_obj__ = 0;
    # 545 "06str.c"
    __dec_obj73=((struct CVALUE*)come_null_check(come_value3_104, "06str.c", 545))->type;
    ((struct CVALUE*)come_null_check(come_value3_104, "06str.c", 545))->type=((void*)0);
    if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 546 "06str.c"
    ((struct CVALUE*)come_null_check(come_value3_104, "06str.c", 546))->var=((void*)0);
    # 548 "06str.c"
    (come_push_stackframe("06str.c", 548),__exception_result_var_b148=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_99, "06str.c", 548)),(struct CVALUE*)come_increment_ref_count(come_value3_104)), come_pop_stackframe(), __exception_result_var_b148);
    # 550 "06str.c"
    buf_105=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 550),__exception_result_var_b149=((struct buffer*)(right_value165=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value164=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 550))))))), come_pop_stackframe(), __exception_result_var_b149));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 34, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[34] = right_value164;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 35, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[35] = right_value165;
    __freed_obj__ = 0;
    # 552 "06str.c"
    (come_push_stackframe("06str.c", 552),__exception_result_var_b150=buffer_append_str(((struct buffer*)come_null_check(buf_105, "06str.c", 552)),generics_fun_name_90), come_pop_stackframe(), __exception_result_var_b150);
    # 553 "06str.c"
    (come_push_stackframe("06str.c", 553),__exception_result_var_b151=buffer_append_str(((struct buffer*)come_null_check(buf_105, "06str.c", 553)),"("), come_pop_stackframe(), __exception_result_var_b151);
    # 555 "06str.c"
    j_106=0;
    # 565 "06str.c"
    for(
    o2_saved_107=(struct list$1CVALUEph*)come_increment_ref_count((come_params_99)),it_108=(come_push_stackframe("06str.c", 556),__exception_result_var_b152=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_107), "06str.c", 556))), come_pop_stackframe(), __exception_result_var_b152) ,    0;    _for_condtionalA4=    !(come_push_stackframe("06str.c", 556),__exception_result_var_b153=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_107), "06str.c", 556))), come_pop_stackframe(), __exception_result_var_b153) ,    _for_condtionalA4;    it_108=(come_push_stackframe("06str.c", 556),__exception_result_var_b154=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_107), "06str.c", 556))), come_pop_stackframe(), __exception_result_var_b154) ,    0    ){
        # 557 "06str.c"
        (come_push_stackframe("06str.c", 557),__exception_result_var_b155=buffer_append_str(((struct buffer*)come_null_check(buf_105, "06str.c", 557)),((struct CVALUE*)come_null_check(it_108, "06str.c", 557))->c_value), come_pop_stackframe(), __exception_result_var_b155);
        # 563 "06str.c"
        # 559 "06str.c"
        if(_if_conditional140=j_106!=(come_push_stackframe("06str.c", 559),__exception_result_var_b156=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_99, "06str.c", 559))), come_pop_stackframe(), __exception_result_var_b156)-1,        _if_conditional140) {
            # 560 "06str.c"
            (come_push_stackframe("06str.c", 560),__exception_result_var_b157=buffer_append_str(((struct buffer*)come_null_check(buf_105, "06str.c", 560)),","), come_pop_stackframe(), __exception_result_var_b157);
        }
        # 563 "06str.c"
        j_106++;
    }
    if(o2_saved_107 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 565 "06str.c"
    (come_push_stackframe("06str.c", 565),__exception_result_var_b158=buffer_append_str(((struct buffer*)come_null_check(buf_105, "06str.c", 565)),")"), come_pop_stackframe(), __exception_result_var_b158);
    # 567 "06str.c"
    come_value4_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 567))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 36, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[36] = right_value166;
    __freed_obj__ = 0;
    # 569 "06str.c"
    __dec_obj74=((struct CVALUE*)come_null_check(come_value4_109, "06str.c", 569))->c_value;
    ((struct CVALUE*)come_null_check(come_value4_109, "06str.c", 569))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 569),__exception_result_var_b159=((char*)(right_value167=buffer_to_string(((struct buffer*)come_null_check(buf_105, "06str.c", 569))))), come_pop_stackframe(), __exception_result_var_b159));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 37, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[37] = right_value167;
    __freed_obj__ = 0;
    # 575 "06str.c"
    # 571 "06str.c"
    if(_if_conditional141=((struct sType*)come_null_check(result_type_92, "06str.c", 571))->mHeap,    _if_conditional141) {
        # 572 "06str.c"
        __dec_obj75=((struct CVALUE*)come_null_check(come_value4_109, "06str.c", 572))->c_value;
        ((struct CVALUE*)come_null_check(come_value4_109, "06str.c", 572))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 572),__exception_result_var_b161=((char*)(right_value169=append_object_to_right_values((come_push_stackframe("06str.c", 572),__exception_result_var_b160=((char*)(right_value168=buffer_to_string(((struct buffer*)come_null_check(buf_105, "06str.c", 572))))), come_pop_stackframe(), __exception_result_var_b160),(struct sType*)come_increment_ref_count(result_type_92),info))), come_pop_stackframe(), __exception_result_var_b161));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value168;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value169);
        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value169;
        __freed_obj__ = 0;
    }
    # 575 "06str.c"
    __dec_obj76=((struct CVALUE*)come_null_check(come_value4_109, "06str.c", 575))->type;
    ((struct CVALUE*)come_null_check(come_value4_109, "06str.c", 575))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_clone(result_type_92))));
    if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 38, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[38] = right_value170;
    __freed_obj__ = 0;
    # 576 "06str.c"
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value4_109, "06str.c", 576))->type, "06str.c", 576))->mStatic=(_Bool)0;
    # 577 "06str.c"
    ((struct CVALUE*)come_null_check(come_value4_109, "06str.c", 577))->var=((void*)0);
    # 579 "06str.c"
    (come_push_stackframe("06str.c", 579),add_come_last_code(info,"%s;\n",(come_push_stackframe("06str.c", 579),__exception_result_var_b162=((char*)(right_value171=buffer_to_string(((struct buffer*)come_null_check(buf_105, "06str.c", 579))))), come_pop_stackframe(), __exception_result_var_b162)),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 39, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[39] = right_value171;
    __freed_obj__ = 0;
    # 581 "06str.c"
    (come_push_stackframe("06str.c", 581),__exception_result_var_b163=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 581))->stack, "06str.c", 581)),(struct CVALUE*)come_increment_ref_count(come_value4_109)), come_pop_stackframe(), __exception_result_var_b163);
    # 583 "06str.c"
    __result105__ = (_Bool)1;
    if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
    if(source_73 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_84 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_88 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_90 && !__freed_obj__) { generics_fun_name_90 = come_decrement_ref_count(generics_fun_name_90, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_92 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_95 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_96 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_97 && !__freed_obj__) { type_name_97 = come_decrement_ref_count(type_name_97, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_99 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_105 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result105__;
    if(params_61 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
    if(source_73 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_84 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_88 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_90 && !__freed_obj__) { generics_fun_name_90 = come_decrement_ref_count(generics_fun_name_90, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_92 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_95 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_96 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_97 && !__freed_obj__) { type_name_97 = come_decrement_ref_count(type_name_97, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_99 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_105 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_109, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 157 "./comelang2.h"
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 157))->head=((void*)0);
        # 158 "./comelang2.h"
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 158))->tail=((void*)0);
        # 159 "./comelang2.h"
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 159))->len=0;
        # 161 "./comelang2.h"
        __result88__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result88__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_59;
_Bool _while_condtional9;
struct list_item$1CVALUEph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_59, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1CVALUEph*));
            # 176 "./comelang2.h"
            it_59=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 176))->head;
            # 182 "./comelang2.h"
            while(_while_condtional9=it_59!=((void*)0),            _while_condtional9) {
                # 178 "./comelang2.h"
                prev_it_60=it_59;
                # 179 "./comelang2.h"
                it_59=((struct list_item$1CVALUEph*)come_null_check(it_59, "./comelang2.h", 179))->next;
                # 180 "./comelang2.h"
                if(prev_it_60 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
void* right_value123;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj60;
_Bool _if_conditional125;
void* right_value124;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj61;
void* right_value125;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj62;
struct list$1sNodeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value124, 0, sizeof(void*));
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value125, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1sNodeph*));
        # 309 "./comelang2.h"
        # 278 "./comelang2.h"
        if(_if_conditional124=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 278))->len==0,        _if_conditional124) {
            # 279 "./comelang2.h"
            litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value123=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value123;
            __freed_obj__ = 0;
            # 281 "./comelang2.h"
            ((struct list_item$1sNodeph*)come_null_check(litem_67, "./comelang2.h", 281))->prev=((void*)0);
            # 282 "./comelang2.h"
            ((struct list_item$1sNodeph*)come_null_check(litem_67, "./comelang2.h", 282))->next=((void*)0);
            # 283 "./comelang2.h"
            __dec_obj60=((struct list_item$1sNodeph*)come_null_check(litem_67, "./comelang2.h", 283))->item;
            ((struct list_item$1sNodeph*)come_null_check(litem_67, "./comelang2.h", 283))->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0); }
            # 285 "./comelang2.h"
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_67;
            # 286 "./comelang2.h"
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 286))->head=litem_67;
        }
        else {
            # 309 "./comelang2.h"
            # 288 "./comelang2.h"
            if(_if_conditional125=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->len==1,            _if_conditional125) {
                # 289 "./comelang2.h"
                litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value124=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value124;
                __freed_obj__ = 0;
                # 291 "./comelang2.h"
                ((struct list_item$1sNodeph*)come_null_check(litem_68, "./comelang2.h", 291))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 291))->head;
                # 292 "./comelang2.h"
                ((struct list_item$1sNodeph*)come_null_check(litem_68, "./comelang2.h", 292))->next=((void*)0);
                # 293 "./comelang2.h"
                __dec_obj61=((struct list_item$1sNodeph*)come_null_check(litem_68, "./comelang2.h", 293))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_68, "./comelang2.h", 293))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0); }
                # 295 "./comelang2.h"
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_68;
                # 296 "./comelang2.h"
                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_68;
            }
            else {
                # 299 "./comelang2.h"
                litem_69=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value125=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value125;
                __freed_obj__ = 0;
                # 301 "./comelang2.h"
                ((struct list_item$1sNodeph*)come_null_check(litem_69, "./comelang2.h", 301))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 301))->tail;
                # 302 "./comelang2.h"
                ((struct list_item$1sNodeph*)come_null_check(litem_69, "./comelang2.h", 302))->next=((void*)0);
                # 303 "./comelang2.h"
                __dec_obj62=((struct list_item$1sNodeph*)come_null_check(litem_69, "./comelang2.h", 303))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_69, "./comelang2.h", 303))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0); }
                # 305 "./comelang2.h"
                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_69;
                # 306 "./comelang2.h"
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_69;
            }
        }
        # 309 "./comelang2.h"
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 309))->len++;
        # 311 "./comelang2.h"
        __result90__ = __result_obj__ = self;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
        return __result90__;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 417 "./comelang2.h"
        __result91__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 417))->len;
        return __result91__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
struct CVALUE* result_76;
void* __exception_result_var_b107;
struct CVALUE* __result92__;
_Bool _if_conditional127;
struct CVALUE* __result93__;
struct CVALUE* result_77;
void* __exception_result_var_b108;
struct CVALUE* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_76, 0, sizeof(struct CVALUE*));
memset(&result_77, 0, sizeof(struct CVALUE*));
        # 343 "./comelang2.h"
        # 338 "./comelang2.h"
        if(_if_conditional126=self==((void*)0),        _if_conditional126) {
            # 339 "./comelang2.h"
            # 340 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b107=memset(&result_76,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b107);
            # 341 "./comelang2.h"
            __result92__ = __result_obj__ = result_76;
            return __result92__;
        }
        # 343 "./comelang2.h"
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 343))->head;
        # 349 "./comelang2.h"
        # 345 "./comelang2.h"
        if(_if_conditional127=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 345))->it,        _if_conditional127) {
            # 346 "./comelang2.h"
            __result93__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
            return __result93__;
        }
        # 349 "./comelang2.h"
        # 350 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b108=memset(&result_77,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b108);
        # 351 "./comelang2.h"
        __result94__ = __result_obj__ = result_77;
        return __result94__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 373 "./comelang2.h"
        __result95__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
        return __result95__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
struct CVALUE* result_79;
void* __exception_result_var_b111;
struct CVALUE* __result96__;
_Bool _if_conditional129;
struct CVALUE* __result97__;
struct CVALUE* result_80;
void* __exception_result_var_b112;
struct CVALUE* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_79, 0, sizeof(struct CVALUE*));
memset(&result_80, 0, sizeof(struct CVALUE*));
        # 361 "./comelang2.h"
        # 355 "./comelang2.h"
        if(_if_conditional128=self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),        _if_conditional128) {
            # 356 "./comelang2.h"
            # 357 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b111=memset(&result_79,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b111);
            # 358 "./comelang2.h"
            __result96__ = __result_obj__ = result_79;
            return __result96__;
        }
        # 361 "./comelang2.h"
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
        # 367 "./comelang2.h"
        # 363 "./comelang2.h"
        if(_if_conditional129=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 363))->it,        _if_conditional129) {
            # 364 "./comelang2.h"
            __result97__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
            return __result97__;
        }
        # 367 "./comelang2.h"
        # 368 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b112=memset(&result_80,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b112);
        # 369 "./comelang2.h"
        __result98__ = __result_obj__ = result_80;
        return __result98__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
struct list_item$1CVALUEph* it_81;
int i_82;
_Bool _while_condtional10;
_Bool _if_conditional132;
struct CVALUE* __result99__;
struct CVALUE* default_value_83;
void* __exception_result_var_b114;
struct CVALUE* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_81, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_82, 0, sizeof(int));
memset(&default_value_83, 0, sizeof(struct CVALUE*));
                # 745 "./comelang2.h"
                # 741 "./comelang2.h"
                if(_if_conditional131=position<0,                _if_conditional131) {
                    # 742 "./comelang2.h"
                    position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 742))->len;
                }
                # 745 "./comelang2.h"
                it_81=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 745))->head;
                # 746 "./comelang2.h"
                i_82=0;
                # 753 "./comelang2.h"
                while(_while_condtional10=it_81!=((void*)0),                _while_condtional10) {
                    # 751 "./comelang2.h"
                    # 748 "./comelang2.h"
                    if(_if_conditional132=position==i_82,                    _if_conditional132) {
                        # 749 "./comelang2.h"
                        __result99__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(it_81, "./comelang2.h", 749))->item;
                        return __result99__;
                    }
                    # 751 "./comelang2.h"
                    it_81=((struct list_item$1CVALUEph*)come_null_check(it_81, "./comelang2.h", 751))->next;
                    # 752 "./comelang2.h"
                    i_82++;
                }
                # 755 "./comelang2.h"
                # 756 "./comelang2.h"
                (come_push_stackframe("./comelang2.h", 756),__exception_result_var_b114=memset(&default_value_83,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b114);
                # 757 "./comelang2.h"
                __result100__ = __result_obj__ = default_value_83;
                if(default_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_83, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result100__;
                if(default_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
void* right_value137;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj63;
_Bool _if_conditional134;
void* right_value138;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj64;
void* right_value139;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj65;
struct list$1sTypeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value137, 0, sizeof(void*));
memset(&litem_85, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value138, 0, sizeof(void*));
memset(&litem_86, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value139, 0, sizeof(void*));
memset(&litem_87, 0, sizeof(struct list_item$1sTypeph*));
        # 309 "./comelang2.h"
        # 278 "./comelang2.h"
        if(_if_conditional133=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 278))->len==0,        _if_conditional133) {
            # 279 "./comelang2.h"
            litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 279))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value137;
            __freed_obj__ = 0;
            # 281 "./comelang2.h"
            ((struct list_item$1sTypeph*)come_null_check(litem_85, "./comelang2.h", 281))->prev=((void*)0);
            # 282 "./comelang2.h"
            ((struct list_item$1sTypeph*)come_null_check(litem_85, "./comelang2.h", 282))->next=((void*)0);
            # 283 "./comelang2.h"
            __dec_obj63=((struct list_item$1sTypeph*)come_null_check(litem_85, "./comelang2.h", 283))->item;
            ((struct list_item$1sTypeph*)come_null_check(litem_85, "./comelang2.h", 283))->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj63) { come_call_finalizer(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
            # 285 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 285))->tail=litem_85;
            # 286 "./comelang2.h"
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 286))->head=litem_85;
        }
        else {
            # 309 "./comelang2.h"
            # 288 "./comelang2.h"
            if(_if_conditional134=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 288))->len==1,            _if_conditional134) {
                # 289 "./comelang2.h"
                litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value138=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 289))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value138;
                __freed_obj__ = 0;
                # 291 "./comelang2.h"
                ((struct list_item$1sTypeph*)come_null_check(litem_86, "./comelang2.h", 291))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 291))->head;
                # 292 "./comelang2.h"
                ((struct list_item$1sTypeph*)come_null_check(litem_86, "./comelang2.h", 292))->next=((void*)0);
                # 293 "./comelang2.h"
                __dec_obj64=((struct list_item$1sTypeph*)come_null_check(litem_86, "./comelang2.h", 293))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_86, "./comelang2.h", 293))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 295 "./comelang2.h"
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 295))->tail=litem_86;
                # 296 "./comelang2.h"
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 296))->head, "./comelang2.h", 296))->next=litem_86;
            }
            else {
                # 299 "./comelang2.h"
                litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value139=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 299))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value139;
                __freed_obj__ = 0;
                # 301 "./comelang2.h"
                ((struct list_item$1sTypeph*)come_null_check(litem_87, "./comelang2.h", 301))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 301))->tail;
                # 302 "./comelang2.h"
                ((struct list_item$1sTypeph*)come_null_check(litem_87, "./comelang2.h", 302))->next=((void*)0);
                # 303 "./comelang2.h"
                __dec_obj65=((struct list_item$1sTypeph*)come_null_check(litem_87, "./comelang2.h", 303))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_87, "./comelang2.h", 303))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 305 "./comelang2.h"
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 305))->tail, "./comelang2.h", 305))->next=litem_87;
                # 306 "./comelang2.h"
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 306))->tail=litem_87;
            }
        }
        # 309 "./comelang2.h"
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 309))->len++;
        # 311 "./comelang2.h"
        __result101__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result101__;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional137;
struct list_item$1sTypeph* it_100;
int i_101;
_Bool _while_condtional11;
_Bool _if_conditional138;
struct sType* __result103__;
struct sType* default_value_102;
void* __exception_result_var_b140;
struct sType* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_100, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_101, 0, sizeof(int));
memset(&default_value_102, 0, sizeof(struct sType*));
        # 745 "./comelang2.h"
        # 741 "./comelang2.h"
        if(_if_conditional137=position<0,        _if_conditional137) {
            # 742 "./comelang2.h"
            position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 742))->len;
        }
        # 745 "./comelang2.h"
        it_100=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 745))->head;
        # 746 "./comelang2.h"
        i_101=0;
        # 753 "./comelang2.h"
        while(_while_condtional11=it_100!=((void*)0),        _while_condtional11) {
            # 751 "./comelang2.h"
            # 748 "./comelang2.h"
            if(_if_conditional138=position==i_101,            _if_conditional138) {
                # 749 "./comelang2.h"
                __result103__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(it_100, "./comelang2.h", 749))->item;
                return __result103__;
            }
            # 751 "./comelang2.h"
            it_100=((struct list_item$1sTypeph*)come_null_check(it_100, "./comelang2.h", 751))->next;
            # 752 "./comelang2.h"
            i_101++;
        }
        # 755 "./comelang2.h"
        # 756 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 756),__exception_result_var_b140=memset(&default_value_102,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b140);
        # 757 "./comelang2.h"
        __result104__ = __result_obj__ = default_value_102;
        if(default_value_102 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_102, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result104__;
        if(default_value_102 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 588 "06str.c"
    __result106__ = ((struct sListNode*)come_null_check(self, "06str.c", 588))->sline;
    return __result106__;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value172;
char* __exception_result_var_b164;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value172, 0, sizeof(void*));
    # 593 "06str.c"
    __result107__ = __result_obj__ = (come_push_stackframe("06str.c", 593),__exception_result_var_b164=((char*)(right_value172=__builtin_string(((struct sListNode*)come_null_check(self, "06str.c", 593))->sname))), come_pop_stackframe(), __exception_result_var_b164);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value172;
    __freed_obj__ = 0;
    return __result107__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj77;
void* right_value173;
char* __exception_result_var_b165;
char* __dec_obj78;
struct sTupleNode* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value173, 0, sizeof(void*));
    # 605 "06str.c"
    __dec_obj77=((struct sTupleNode*)come_null_check(self, "06str.c", 605))->tuple_elements;
    ((struct sTupleNode*)come_null_check(self, "06str.c", 605))->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    if(__dec_obj77) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 607 "06str.c"
    ((struct sTupleNode*)come_null_check(self, "06str.c", 607))->sline=((struct sInfo*)come_null_check(info, "06str.c", 607))->sline;
    # 608 "06str.c"
    __dec_obj78=((struct sTupleNode*)come_null_check(self, "06str.c", 608))->sname;
    ((struct sTupleNode*)come_null_check(self, "06str.c", 608))->sname=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 608),__exception_result_var_b165=((char*)(right_value173=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 608))->sname))), come_pop_stackframe(), __exception_result_var_b165));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value173;
    __freed_obj__ = 0;
    # 610 "06str.c"
    __result108__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result108__;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sTupleNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 615 "06str.c"
    __result109__ = (_Bool)0;
    return __result109__;
}

char* sTupleNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value174;
char* __exception_result_var_b166;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value174, 0, sizeof(void*));
    # 620 "06str.c"
    __result110__ = __result_obj__ = (come_push_stackframe("06str.c", 620),__exception_result_var_b166=((char*)(right_value174=__builtin_string("sTupleNode"))), come_pop_stackframe(), __exception_result_var_b166);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value174;
    __freed_obj__ = 0;
    return __result110__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* tuple_elements_110;
void* right_value175;
void* right_value176;
struct list$1sTypeph* __exception_result_var_b167;
struct list$1sTypeph* tuple_types_111;
void* right_value177;
void* right_value178;
struct list$1CVALUEph* __exception_result_var_b168;
struct list$1CVALUEph* tuple_values_112;
struct list$1sNodeph* o2_saved_113;
struct sNode* __exception_result_var_b169;
struct sNode* it_114;
_Bool __exception_result_var_b170;
_Bool _for_condtionalA5;
struct sNode* __exception_result_var_b171;
_Bool __exception_result_var_b172;
_Bool _if_conditional144;
_Bool __result111__;
void* right_value179;
struct CVALUE* __exception_result_var_b173;
struct CVALUE* come_value_115;
void* right_value183;
struct list$1CVALUEph* __exception_result_var_b174;
void* right_value184;
struct list$1sTypeph* __exception_result_var_b175;
void* right_value185;
int __exception_result_var_b176;
void* right_value186;
char* __exception_result_var_b177;
void* right_value187;
struct sType* __exception_result_var_b178;
struct sType* type_117;
struct list$1sTypeph* o2_saved_118;
struct sType* __exception_result_var_b181;
struct sType* it_121;
_Bool __exception_result_var_b182;
_Bool _for_condtionalA6;
struct sType* __exception_result_var_b185;
void* right_value188;
struct list$1sTypeph* __exception_result_var_b186;
void* right_value189;
struct CVALUE* obj_value_124;
void* right_value190;
void* right_value191;
struct buffer* __exception_result_var_b187;
struct buffer* num_string_125;
struct buffer* __exception_result_var_b188;
void* right_value192;
struct sType* __exception_result_var_b189;
struct sType* type2_126;
void* right_value193;
char* __exception_result_var_b190;
char* type_name_127;
void* right_value194;
char* __exception_result_var_b191;
void* right_value195;
char* __exception_result_var_b192;
char* __dec_obj81;
void* right_value196;
struct sType* type3_128;
void* right_value197;
struct sType* __dec_obj82;
void* right_value198;
char* __exception_result_var_b193;
char* __dec_obj83;
void* right_value199;
struct sType* obj_type_129;
char* fun_name_130;
void* right_value200;
char* __exception_result_var_b194;
void* right_value201;
char* __exception_result_var_b195;
void* right_value202;
char* __exception_result_var_b196;
char* generics_fun_name_131;
struct sFun* __exception_result_var_b197;
struct sFun* fun_132;
_Bool _if_conditional153;
void* right_value203;
char* __exception_result_var_b198;
void* right_value204;
char* __exception_result_var_b199;
char* __dec_obj84;
struct sFun* __exception_result_var_b200;
_Bool _if_conditional154;
_Bool __result121__;
void* right_value205;
struct sType* result_type_133;
void* right_value206;
void* right_value207;
struct list$1CVALUEph* __exception_result_var_b201;
struct list$1CVALUEph* come_params_134;
struct sType* __exception_result_var_b202;
_Bool _if_conditional155;
struct sType* __exception_result_var_b203;
struct list$1CVALUEph* __exception_result_var_b204;
int i_135;
struct list$1CVALUEph* o2_saved_136;
struct CVALUE* __exception_result_var_b205;
struct CVALUE* it_137;
_Bool __exception_result_var_b206;
_Bool _for_condtionalA7;
struct CVALUE* __exception_result_var_b207;
void* right_value208;
struct CVALUE* come_value_138;
struct sType* __exception_result_var_b208;
struct sType* __exception_result_var_b209;
_Bool _if_conditional156;
struct sType* __exception_result_var_b210;
struct list$1CVALUEph* __exception_result_var_b211;
void* right_value209;
void* right_value210;
struct buffer* __exception_result_var_b212;
struct buffer* buf_139;
struct buffer* __exception_result_var_b213;
struct buffer* __exception_result_var_b214;
int j_140;
struct list$1CVALUEph* o2_saved_141;
struct CVALUE* __exception_result_var_b215;
struct CVALUE* it_142;
_Bool __exception_result_var_b216;
_Bool _for_condtionalA8;
struct CVALUE* __exception_result_var_b217;
struct buffer* __exception_result_var_b218;
int __exception_result_var_b219;
_Bool _if_conditional157;
struct buffer* __exception_result_var_b220;
struct buffer* __exception_result_var_b221;
void* right_value211;
struct CVALUE* come_value2_143;
void* right_value212;
char* __exception_result_var_b222;
char* __dec_obj85;
_Bool _if_conditional158;
void* right_value213;
char* __exception_result_var_b223;
void* right_value214;
char* __exception_result_var_b224;
char* __dec_obj86;
void* right_value215;
struct sType* __dec_obj87;
void* right_value216;
char* __exception_result_var_b225;
struct list$1CVALUEph* __exception_result_var_b226;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tuple_elements_110, 0, sizeof(struct list$1sNodeph*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&tuple_types_111, 0, sizeof(struct list$1sTypeph*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&tuple_values_112, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_113, 0, sizeof(struct list$1sNodeph*));
memset(&it_114, 0, sizeof(struct sNode*));
memset(&right_value179, 0, sizeof(void*));
memset(&come_value_115, 0, sizeof(struct CVALUE*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&type_117, 0, sizeof(struct sType*));
memset(&o2_saved_118, 0, sizeof(struct list$1sTypeph*));
memset(&it_121, 0, sizeof(struct sType*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&obj_value_124, 0, sizeof(struct CVALUE*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&num_string_125, 0, sizeof(struct buffer*));
memset(&right_value192, 0, sizeof(void*));
memset(&type2_126, 0, sizeof(struct sType*));
memset(&right_value193, 0, sizeof(void*));
memset(&type_name_127, 0, sizeof(char*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&type3_128, 0, sizeof(struct sType*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&obj_type_129, 0, sizeof(struct sType*));
memset(&fun_name_130, 0, sizeof(char*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&generics_fun_name_131, 0, sizeof(char*));
memset(&fun_132, 0, sizeof(struct sFun*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&result_type_133, 0, sizeof(struct sType*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&come_params_134, 0, sizeof(struct list$1CVALUEph*));
memset(&i_135, 0, sizeof(int));
memset(&o2_saved_136, 0, sizeof(struct list$1CVALUEph*));
memset(&it_137, 0, sizeof(struct CVALUE*));
memset(&right_value208, 0, sizeof(void*));
memset(&come_value_138, 0, sizeof(struct CVALUE*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&buf_139, 0, sizeof(struct buffer*));
memset(&j_140, 0, sizeof(int));
memset(&o2_saved_141, 0, sizeof(struct list$1CVALUEph*));
memset(&it_142, 0, sizeof(struct CVALUE*));
memset(&right_value211, 0, sizeof(void*));
memset(&come_value2_143, 0, sizeof(struct CVALUE*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
    # 625 "06str.c"
    tuple_elements_110=((struct sTupleNode*)come_null_check(self, "06str.c", 625))->tuple_elements;
    # 626 "06str.c"
    tuple_types_111=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("06str.c", 626),__exception_result_var_b167=((struct list$1sTypeph*)(right_value176=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value175=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 626))))))), come_pop_stackframe(), __exception_result_var_b167));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value175;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value176;
    __freed_obj__ = 0;
    # 627 "06str.c"
    tuple_values_112=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 627),__exception_result_var_b168=((struct list$1CVALUEph*)(right_value178=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value177=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 627))))))), come_pop_stackframe(), __exception_result_var_b168));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value177;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value178;
    __freed_obj__ = 0;
    # 641 "06str.c"
    for(
    o2_saved_113=(tuple_elements_110),it_114=(come_push_stackframe("06str.c", 629),__exception_result_var_b169=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_113), "06str.c", 629))), come_pop_stackframe(), __exception_result_var_b169) ,    0;    _for_condtionalA5=    !(come_push_stackframe("06str.c", 629),__exception_result_var_b170=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_113), "06str.c", 629))), come_pop_stackframe(), __exception_result_var_b170) ,    _for_condtionalA5;    it_114=(come_push_stackframe("06str.c", 629),__exception_result_var_b171=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_113), "06str.c", 629))), come_pop_stackframe(), __exception_result_var_b171) ,    0    ){
        # 634 "06str.c"
        # 630 "06str.c"
        if(_if_conditional144=!(come_push_stackframe("06str.c", 630),__exception_result_var_b172=node_compile(it_114,info), come_pop_stackframe(), __exception_result_var_b172),        _if_conditional144) {
            # 631 "06str.c"
            __result111__ = (_Bool)0;
            if(tuple_types_111 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_111, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_112 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_112, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result111__;
        }
        # 634 "06str.c"
        come_value_115=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 634),__exception_result_var_b173=((struct CVALUE*)(right_value179=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b173));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value179;
        __freed_obj__ = 0;
        # 635 "06str.c"
        (come_push_stackframe("06str.c", 635),dec_stack_ptr(1,info),come_pop_stackframe());
        # 637 "06str.c"
        (come_push_stackframe("06str.c", 637),__exception_result_var_b174=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_112, "06str.c", 637)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value183=CVALUE_clone(come_value_115))))), come_pop_stackframe(), __exception_result_var_b174);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value183;
        __freed_obj__ = 0;
        # 638 "06str.c"
        (come_push_stackframe("06str.c", 638),__exception_result_var_b175=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_111, "06str.c", 638)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(((struct CVALUE*)come_null_check(come_value_115, "06str.c", 638))->type))))), come_pop_stackframe(), __exception_result_var_b175);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value184;
        __freed_obj__ = 0;
        if(come_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    # 641 "06str.c"
    type_117=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 641),__exception_result_var_b178=((struct sType*)(right_value187=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value185=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 641)))),(come_push_stackframe("06str.c", 641),__exception_result_var_b177=((char*)(right_value186=xsprintf("tuple%d",(come_push_stackframe("06str.c", 641),__exception_result_var_b176=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(tuple_types_111, "06str.c", 641))), come_pop_stackframe(), __exception_result_var_b176)))), come_pop_stackframe(), __exception_result_var_b177),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b178));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value185;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value186;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value187;
    __freed_obj__ = 0;
    # 647 "06str.c"
    for(
    o2_saved_118=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_111)),it_121=(come_push_stackframe("06str.c", 643),__exception_result_var_b181=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_118), "06str.c", 643))), come_pop_stackframe(), __exception_result_var_b181) ,    0;    _for_condtionalA6=    !(come_push_stackframe("06str.c", 643),__exception_result_var_b182=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_118), "06str.c", 643))), come_pop_stackframe(), __exception_result_var_b182) ,    _for_condtionalA6;    it_121=(come_push_stackframe("06str.c", 643),__exception_result_var_b185=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_118), "06str.c", 643))), come_pop_stackframe(), __exception_result_var_b185) ,    0    ){
        # 644 "06str.c"
        (come_push_stackframe("06str.c", 644),__exception_result_var_b186=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_117, "06str.c", 644))->mGenericsTypes, "06str.c", 644)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(it_121))))), come_pop_stackframe(), __exception_result_var_b186);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value188;
        __freed_obj__ = 0;
    }
    if(o2_saved_118 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 647 "06str.c"
    obj_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 647))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value189;
    __freed_obj__ = 0;
    # 649 "06str.c"
    num_string_125=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 649),__exception_result_var_b187=((struct buffer*)(right_value191=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value190=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 649))))))), come_pop_stackframe(), __exception_result_var_b187));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value190;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value191;
    __freed_obj__ = 0;
    # 651 "06str.c"
    (come_push_stackframe("06str.c", 651),__exception_result_var_b188=buffer_append_str(((struct buffer*)come_null_check(num_string_125, "06str.c", 651)),"1"), come_pop_stackframe(), __exception_result_var_b188);
    # 653 "06str.c"
    type2_126=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 653),__exception_result_var_b189=((struct sType*)(right_value192=solve_generics(type_117,type_117,info))), come_pop_stackframe(), __exception_result_var_b189));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value192;
    __freed_obj__ = 0;
    # 655 "06str.c"
    type_name_127=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 655),__exception_result_var_b190=((char*)(right_value193=make_type_name_string(type2_126,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b190));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value193;
    __freed_obj__ = 0;
    # 657 "06str.c"
    __dec_obj81=((struct CVALUE*)come_null_check(obj_value_124, "06str.c", 657))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_124, "06str.c", 657))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 657),__exception_result_var_b192=((char*)(right_value195=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_127,type_name_127,(come_push_stackframe("06str.c", 657),__exception_result_var_b191=((char*)(right_value194=buffer_to_string(((struct buffer*)come_null_check(num_string_125, "06str.c", 657))))), come_pop_stackframe(), __exception_result_var_b191),((struct sInfo*)come_null_check(info, "06str.c", 657))->sname,((struct sInfo*)come_null_check(info, "06str.c", 657))->sline))), come_pop_stackframe(), __exception_result_var_b192));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value194;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value195;
    __freed_obj__ = 0;
    # 659 "06str.c"
    type3_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(type2_126))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value196;
    __freed_obj__ = 0;
    # 660 "06str.c"
    ((struct sType*)come_null_check(type3_128, "06str.c", 660))->mPointerNum++;
    # 661 "06str.c"
    ((struct sType*)come_null_check(type3_128, "06str.c", 661))->mHeap=(_Bool)1;
    # 662 "06str.c"
    ((struct sType*)come_null_check(type2_126, "06str.c", 662))->mHeap=(_Bool)1;
    # 663 "06str.c"
    __dec_obj82=((struct CVALUE*)come_null_check(obj_value_124, "06str.c", 663))->type;
    ((struct CVALUE*)come_null_check(obj_value_124, "06str.c", 663))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_clone(type2_126))));
    if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value197;
    __freed_obj__ = 0;
    # 664 "06str.c"
    __dec_obj83=((struct CVALUE*)come_null_check(obj_value_124, "06str.c", 664))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_124, "06str.c", 664))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 664),__exception_result_var_b193=((char*)(right_value198=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_124, "06str.c", 664))->c_value,(struct sType*)come_increment_ref_count(type3_128),info))), come_pop_stackframe(), __exception_result_var_b193));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value198;
    __freed_obj__ = 0;
    # 665 "06str.c"
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_124, "06str.c", 665))->type, "06str.c", 665))->mPointerNum++;
    # 666 "06str.c"
    ((struct CVALUE*)come_null_check(obj_value_124, "06str.c", 666))->var=((void*)0);
    # 668 "06str.c"
    obj_type_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_clone(type2_126))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value199;
    __freed_obj__ = 0;
    # 669 "06str.c"
    fun_name_130="initialize";
    # 671 "06str.c"
    generics_fun_name_131=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 671),__exception_result_var_b196=((char*)(right_value202=string_to_string(((char*)come_null_check((come_push_stackframe("06str.c", 671),__exception_result_var_b195=((char*)(right_value201=make_generics_function(obj_type_129,(char*)come_increment_ref_count((come_push_stackframe("06str.c", 671),__exception_result_var_b194=((char*)(right_value200=__builtin_string(fun_name_130))), come_pop_stackframe(), __exception_result_var_b194)),info))), come_pop_stackframe(), __exception_result_var_b195), "06str.c", 671))))), come_pop_stackframe(), __exception_result_var_b196));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value200;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value201;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value202;
    __freed_obj__ = 0;
    # 673 "06str.c"
    fun_132=(come_push_stackframe("06str.c", 673),__exception_result_var_b197=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 673))->funcs, "06str.c", 673)),generics_fun_name_131,((void*)0)), come_pop_stackframe(), __exception_result_var_b197);
    # 686 "06str.c"
    # 675 "06str.c"
    if(_if_conditional153=fun_132==((void*)0),    _if_conditional153) {
        # 676 "06str.c"
        __dec_obj84=generics_fun_name_131;
        generics_fun_name_131=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 676),__exception_result_var_b199=((char*)(right_value204=create_method_name(obj_type_129,(_Bool)0,(come_push_stackframe("06str.c", 676),__exception_result_var_b198=((char*)(right_value203=__builtin_string(fun_name_130))), come_pop_stackframe(), __exception_result_var_b198),info))), come_pop_stackframe(), __exception_result_var_b199));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value203;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value204;
        __freed_obj__ = 0;
        # 678 "06str.c"
        fun_132=(come_push_stackframe("06str.c", 678),__exception_result_var_b200=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 678))->funcs, "06str.c", 678)),generics_fun_name_131,((void*)0)), come_pop_stackframe(), __exception_result_var_b200);
        # 684 "06str.c"
        # 680 "06str.c"
        if(_if_conditional154=fun_132==((void*)0),        _if_conditional154) {
            # 681 "06str.c"
            (come_push_stackframe("06str.c", 681),err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_131,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 681))->come_fun, "06str.c", 681))->mName),come_pop_stackframe());
            # 682 "06str.c"
            __result121__ = (_Bool)1;
            if(tuple_types_111 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_111, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_112 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_112, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(num_string_125 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type2_126 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_126, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_127 && !__freed_obj__) { type_name_127 = come_decrement_ref_count(type_name_127, (void*)0, (void*)0, 0, 0, 0); }
            if(type3_128 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_128, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_129, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_131 && !__freed_obj__) { generics_fun_name_131 = come_decrement_ref_count(generics_fun_name_131, (void*)0, (void*)0, 0, 0, 0); }
            return __result121__;
        }
    }
    # 686 "06str.c"
    result_type_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(((struct sFun*)come_null_check(fun_132, "06str.c", 686))->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value205;
    __freed_obj__ = 0;
    # 687 "06str.c"
    ((struct sType*)come_null_check(result_type_133, "06str.c", 687))->mStatic=(_Bool)0;
    # 689 "06str.c"
    come_params_134=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 689),__exception_result_var_b201=((struct list$1CVALUEph*)(right_value207=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value206=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 689))))))), come_pop_stackframe(), __exception_result_var_b201));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value206;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value207;
    __freed_obj__ = 0;
    # 694 "06str.c"
    # 691 "06str.c"
    if(_if_conditional155=((struct sType*)come_null_check((come_push_stackframe("06str.c", 691),__exception_result_var_b202=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_132, "06str.c", 691))->mParamTypes,0), come_pop_stackframe(), __exception_result_var_b202), "06str.c", 691))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_124, "06str.c", 691))->type, "06str.c", 691))->mHeap,    _if_conditional155) {
        # 692 "06str.c"
        (come_push_stackframe("06str.c", 692),std_move((come_push_stackframe("06str.c", 692),__exception_result_var_b203=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_132, "06str.c", 692))->mParamTypes,0), come_pop_stackframe(), __exception_result_var_b203),((struct CVALUE*)come_null_check(obj_value_124, "06str.c", 692))->type,obj_value_124,info),come_pop_stackframe());
    }
    # 694 "06str.c"
    (come_push_stackframe("06str.c", 694),__exception_result_var_b204=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_134, "06str.c", 694)),(struct CVALUE*)come_increment_ref_count(obj_value_124)), come_pop_stackframe(), __exception_result_var_b204);
    # 696 "06str.c"
    i_135=1;
    # 708 "06str.c"
    for(
    o2_saved_136=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_112)),it_137=(come_push_stackframe("06str.c", 697),__exception_result_var_b205=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_136), "06str.c", 697))), come_pop_stackframe(), __exception_result_var_b205) ,    0;    _for_condtionalA7=    !(come_push_stackframe("06str.c", 697),__exception_result_var_b206=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_136), "06str.c", 697))), come_pop_stackframe(), __exception_result_var_b206) ,    _for_condtionalA7;    it_137=(come_push_stackframe("06str.c", 697),__exception_result_var_b207=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_136), "06str.c", 697))), come_pop_stackframe(), __exception_result_var_b207) ,    0    ){
        # 698 "06str.c"
        come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=CVALUE_clone(it_137))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value208;
        __freed_obj__ = 0;
        # 703 "06str.c"
        # 700 "06str.c"
        if(_if_conditional156=(come_push_stackframe("06str.c", 700),__exception_result_var_b208=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_132, "06str.c", 700))->mParamTypes,i_135), come_pop_stackframe(), __exception_result_var_b208)&&((struct sType*)come_null_check((come_push_stackframe("06str.c", 700),__exception_result_var_b209=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_132, "06str.c", 700))->mParamTypes,i_135), come_pop_stackframe(), __exception_result_var_b209), "06str.c", 700))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "06str.c", 700))->type, "06str.c", 700))->mHeap,        _if_conditional156) {
            # 701 "06str.c"
            (come_push_stackframe("06str.c", 701),std_move((come_push_stackframe("06str.c", 701),__exception_result_var_b210=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_132, "06str.c", 701))->mParamTypes,i_135), come_pop_stackframe(), __exception_result_var_b210),((struct CVALUE*)come_null_check(come_value_138, "06str.c", 701))->type,come_value_138,info),come_pop_stackframe());
        }
        # 703 "06str.c"
        (come_push_stackframe("06str.c", 703),__exception_result_var_b211=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_134, "06str.c", 703)),(struct CVALUE*)come_increment_ref_count(come_value_138)), come_pop_stackframe(), __exception_result_var_b211);
        # 705 "06str.c"
        i_135++;
        if(come_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_136 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 708 "06str.c"
    buf_139=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 708),__exception_result_var_b212=((struct buffer*)(right_value210=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value209=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 708))))))), come_pop_stackframe(), __exception_result_var_b212));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value209;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value210;
    __freed_obj__ = 0;
    # 710 "06str.c"
    (come_push_stackframe("06str.c", 710),__exception_result_var_b213=buffer_append_str(((struct buffer*)come_null_check(buf_139, "06str.c", 710)),generics_fun_name_131), come_pop_stackframe(), __exception_result_var_b213);
    # 711 "06str.c"
    (come_push_stackframe("06str.c", 711),__exception_result_var_b214=buffer_append_str(((struct buffer*)come_null_check(buf_139, "06str.c", 711)),"("), come_pop_stackframe(), __exception_result_var_b214);
    # 713 "06str.c"
    j_140=0;
    # 723 "06str.c"
    for(
    o2_saved_141=(struct list$1CVALUEph*)come_increment_ref_count((come_params_134)),it_142=(come_push_stackframe("06str.c", 714),__exception_result_var_b215=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_141), "06str.c", 714))), come_pop_stackframe(), __exception_result_var_b215) ,    0;    _for_condtionalA8=    !(come_push_stackframe("06str.c", 714),__exception_result_var_b216=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_141), "06str.c", 714))), come_pop_stackframe(), __exception_result_var_b216) ,    _for_condtionalA8;    it_142=(come_push_stackframe("06str.c", 714),__exception_result_var_b217=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_141), "06str.c", 714))), come_pop_stackframe(), __exception_result_var_b217) ,    0    ){
        # 715 "06str.c"
        (come_push_stackframe("06str.c", 715),__exception_result_var_b218=buffer_append_str(((struct buffer*)come_null_check(buf_139, "06str.c", 715)),((struct CVALUE*)come_null_check(it_142, "06str.c", 715))->c_value), come_pop_stackframe(), __exception_result_var_b218);
        # 721 "06str.c"
        # 717 "06str.c"
        if(_if_conditional157=j_140!=(come_push_stackframe("06str.c", 717),__exception_result_var_b219=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_134, "06str.c", 717))), come_pop_stackframe(), __exception_result_var_b219)-1,        _if_conditional157) {
            # 718 "06str.c"
            (come_push_stackframe("06str.c", 718),__exception_result_var_b220=buffer_append_str(((struct buffer*)come_null_check(buf_139, "06str.c", 718)),","), come_pop_stackframe(), __exception_result_var_b220);
        }
        # 721 "06str.c"
        j_140++;
    }
    if(o2_saved_141 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_141, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 723 "06str.c"
    (come_push_stackframe("06str.c", 723),__exception_result_var_b221=buffer_append_str(((struct buffer*)come_null_check(buf_139, "06str.c", 723)),")"), come_pop_stackframe(), __exception_result_var_b221);
    # 725 "06str.c"
    come_value2_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 725))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value211;
    __freed_obj__ = 0;
    # 727 "06str.c"
    __dec_obj85=((struct CVALUE*)come_null_check(come_value2_143, "06str.c", 727))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_143, "06str.c", 727))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 727),__exception_result_var_b222=((char*)(right_value212=buffer_to_string(((struct buffer*)come_null_check(buf_139, "06str.c", 727))))), come_pop_stackframe(), __exception_result_var_b222));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value212;
    __freed_obj__ = 0;
    # 733 "06str.c"
    # 729 "06str.c"
    if(_if_conditional158=((struct sType*)come_null_check(result_type_133, "06str.c", 729))->mHeap,    _if_conditional158) {
        # 730 "06str.c"
        __dec_obj86=((struct CVALUE*)come_null_check(come_value2_143, "06str.c", 730))->c_value;
        ((struct CVALUE*)come_null_check(come_value2_143, "06str.c", 730))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 730),__exception_result_var_b224=((char*)(right_value214=append_object_to_right_values((come_push_stackframe("06str.c", 730),__exception_result_var_b223=((char*)(right_value213=buffer_to_string(((struct buffer*)come_null_check(buf_139, "06str.c", 730))))), come_pop_stackframe(), __exception_result_var_b223),(struct sType*)come_increment_ref_count(result_type_133),info))), come_pop_stackframe(), __exception_result_var_b224));
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value213;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value214;
        __freed_obj__ = 0;
    }
    # 733 "06str.c"
    __dec_obj87=((struct CVALUE*)come_null_check(come_value2_143, "06str.c", 733))->type;
    ((struct CVALUE*)come_null_check(come_value2_143, "06str.c", 733))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(result_type_133))));
    if(__dec_obj87) { come_call_finalizer(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value215;
    __freed_obj__ = 0;
    # 734 "06str.c"
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_143, "06str.c", 734))->type, "06str.c", 734))->mStatic=(_Bool)0;
    # 735 "06str.c"
    ((struct CVALUE*)come_null_check(come_value2_143, "06str.c", 735))->var=((void*)0);
    # 737 "06str.c"
    (come_push_stackframe("06str.c", 737),add_come_last_code(info,"%s;\n",(come_push_stackframe("06str.c", 737),__exception_result_var_b225=((char*)(right_value216=buffer_to_string(((struct buffer*)come_null_check(buf_139, "06str.c", 737))))), come_pop_stackframe(), __exception_result_var_b225)),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value216;
    __freed_obj__ = 0;
    # 739 "06str.c"
    (come_push_stackframe("06str.c", 739),__exception_result_var_b226=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 739))->stack, "06str.c", 739)),(struct CVALUE*)come_increment_ref_count(come_value2_143)), come_pop_stackframe(), __exception_result_var_b226);
    # 741 "06str.c"
    __result122__ = (_Bool)1;
    if(tuple_types_111 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_112 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_125 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_126 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_127 && !__freed_obj__) { type_name_127 = come_decrement_ref_count(type_name_127, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_128 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_131 && !__freed_obj__) { generics_fun_name_131 = come_decrement_ref_count(generics_fun_name_131, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_134 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_139 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result122__;
    if(tuple_types_111 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_112 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_125 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_126 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_127 && !__freed_obj__) { type_name_127 = come_decrement_ref_count(type_name_127, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_128 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_131 && !__freed_obj__) { generics_fun_name_131 = come_decrement_ref_count(generics_fun_name_131, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_133 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_134 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_139 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
struct CVALUE* __result112__;
void* right_value180;
struct CVALUE* result_116;
_Bool _if_conditional146;
void* right_value181;
char* __dec_obj79;
_Bool _if_conditional147;
void* right_value182;
struct sType* __dec_obj80;
_Bool _if_conditional148;
struct CVALUE* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value180, 0, sizeof(void*));
memset(&result_116, 0, sizeof(struct CVALUE*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
            # 3 "CVALUE_clone"
            # 2 "CVALUE_clone"
            if(_if_conditional145=self==(void*)0,            _if_conditional145) {
                # 2 "CVALUE_clone"
                __result112__ = __result_obj__ = (void*)0;
                return __result112__;
            }
            # 3 "CVALUE_clone"
            result_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value180;
            __freed_obj__ = 0;
            # 5 "CVALUE_clone"
            # 4 "CVALUE_clone"
            if(_if_conditional146=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value!=((void*)0),            _if_conditional146) {
                # 4 "CVALUE_clone"
                __dec_obj79=((struct CVALUE*)come_null_check(result_116, "CVALUE_clone", 4))->c_value;
                ((struct CVALUE*)come_null_check(result_116, "CVALUE_clone", 4))->c_value=(char*)come_increment_ref_count(((char*)(right_value181=string_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value))));
                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value181;
                __freed_obj__ = 0;
            }
            # 6 "CVALUE_clone"
            # 5 "CVALUE_clone"
            if(_if_conditional147=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type!=((void*)0),            _if_conditional147) {
                # 5 "CVALUE_clone"
                __dec_obj80=((struct CVALUE*)come_null_check(result_116, "CVALUE_clone", 5))->type;
                ((struct CVALUE*)come_null_check(result_116, "CVALUE_clone", 5))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type))));
                if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value182;
                __freed_obj__ = 0;
            }
            # 7 "CVALUE_clone"
            # 6 "CVALUE_clone"
            if(_if_conditional148=self!=((void*)0),            _if_conditional148) {
                # 6 "CVALUE_clone"
                ((struct CVALUE*)come_null_check(result_116, "CVALUE_clone", 6))->var=((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->var;
            }
            # 7 "CVALUE_clone"
            __result113__ = __result_obj__ = result_116;
            if(result_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_116, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result113__;
            if(result_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_116, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional149;
struct sType* result_119;
void* __exception_result_var_b179;
struct sType* __result114__;
_Bool _if_conditional150;
struct sType* __result115__;
struct sType* result_120;
void* __exception_result_var_b180;
struct sType* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_119, 0, sizeof(struct sType*));
memset(&result_120, 0, sizeof(struct sType*));
        # 343 "./comelang2.h"
        # 338 "./comelang2.h"
        if(_if_conditional149=self==((void*)0),        _if_conditional149) {
            # 339 "./comelang2.h"
            # 340 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 340),__exception_result_var_b179=memset(&result_119,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b179);
            # 341 "./comelang2.h"
            __result114__ = __result_obj__ = result_119;
            return __result114__;
        }
        # 343 "./comelang2.h"
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 343))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 343))->head;
        # 349 "./comelang2.h"
        # 345 "./comelang2.h"
        if(_if_conditional150=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 345))->it,        _if_conditional150) {
            # 346 "./comelang2.h"
            __result115__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 346))->it, "./comelang2.h", 346))->item;
            return __result115__;
        }
        # 349 "./comelang2.h"
        # 350 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 350),__exception_result_var_b180=memset(&result_120,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b180);
        # 351 "./comelang2.h"
        __result116__ = __result_obj__ = result_120;
        return __result116__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 373 "./comelang2.h"
        __result117__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 373))->it==((void*)0);
        return __result117__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional151;
struct sType* result_122;
void* __exception_result_var_b183;
struct sType* __result118__;
_Bool _if_conditional152;
struct sType* __result119__;
struct sType* result_123;
void* __exception_result_var_b184;
struct sType* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_122, 0, sizeof(struct sType*));
memset(&result_123, 0, sizeof(struct sType*));
        # 361 "./comelang2.h"
        # 355 "./comelang2.h"
        if(_if_conditional151=self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 355))->it==((void*)0),        _if_conditional151) {
            # 356 "./comelang2.h"
            # 357 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 357),__exception_result_var_b183=memset(&result_122,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b183);
            # 358 "./comelang2.h"
            __result118__ = __result_obj__ = result_122;
            return __result118__;
        }
        # 361 "./comelang2.h"
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 361))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->next;
        # 367 "./comelang2.h"
        # 363 "./comelang2.h"
        if(_if_conditional152=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 363))->it,        _if_conditional152) {
            # 364 "./comelang2.h"
            __result119__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 364))->it, "./comelang2.h", 364))->item;
            return __result119__;
        }
        # 367 "./comelang2.h"
        # 368 "./comelang2.h"
        (come_push_stackframe("./comelang2.h", 368),__exception_result_var_b184=memset(&result_123,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b184);
        # 369 "./comelang2.h"
        __result120__ = __result_obj__ = result_123;
        return __result120__;
}

int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 746 "06str.c"
    __result123__ = ((struct sTupleNode*)come_null_check(self, "06str.c", 746))->sline;
    return __result123__;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value217;
char* __exception_result_var_b227;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value217, 0, sizeof(void*));
    # 751 "06str.c"
    __result124__ = __result_obj__ = (come_push_stackframe("06str.c", 751),__exception_result_var_b227=((char*)(right_value217=__builtin_string(((struct sTupleNode*)come_null_check(self, "06str.c", 751))->sname))), come_pop_stackframe(), __exception_result_var_b227);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value217;
    __freed_obj__ = 0;
    return __result124__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value218;
struct sNode* __dec_obj88;
void* right_value219;
char* __exception_result_var_b228;
char* __dec_obj89;
struct sNoneNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
    # 763 "06str.c"
    __dec_obj88=((struct sNoneNode*)come_null_check(self, "06str.c", 763))->value;
    ((struct sNoneNode*)come_null_check(self, "06str.c", 763))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(value))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value218;
    __freed_obj__ = 0;
    # 765 "06str.c"
    ((struct sNoneNode*)come_null_check(self, "06str.c", 765))->sline=((struct sInfo*)come_null_check(info, "06str.c", 765))->sline;
    # 766 "06str.c"
    __dec_obj89=((struct sNoneNode*)come_null_check(self, "06str.c", 766))->sname;
    ((struct sNoneNode*)come_null_check(self, "06str.c", 766))->sname=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 766),__exception_result_var_b228=((char*)(right_value219=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 766))->sname))), come_pop_stackframe(), __exception_result_var_b228));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value219;
    __freed_obj__ = 0;
    # 768 "06str.c"
    __result125__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    return __result125__;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value220;
void* right_value221;
struct sNoneNode* __exception_result_var_b229;
struct sNode* _inf_value1;
struct sNoneNode* _inf_obj_value1;
void* right_value225;
struct sNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
    # 773 "06str.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 773);
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("06str.c", 773),__exception_result_var_b229=((struct sNoneNode*)(right_value221=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value220=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 773)))),(struct sNode*)come_increment_ref_count(exp),info))), come_pop_stackframe(), __exception_result_var_b229));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNoneNode_finalize;
    _inf_value1->clone=(void*)sNoneNode_clone;
    _inf_value1->compile=(void*)sNoneNode_compile;
    _inf_value1->sline=(void*)sNoneNode_sline;
    _inf_value1->sname=(void*)sNoneNode_sname;
    _inf_value1->terminated=(void*)sNoneNode_terminated;
    _inf_value1->kind=(void*)sNoneNode_kind;
    __result128__ = __result_obj__ = ((struct sNode*)(right_value225=_inf_value1));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value220;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value221;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value225;
    __freed_obj__ = 0;
    return __result128__;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sNoneNode_finalize(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "sNoneNode_finalize"
        # 0 "sNoneNode_finalize"
        if(_if_conditional161=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value!=((void*)0),        _if_conditional161) {
            # 0 "sNoneNode_finalize"
            if(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value && !__freed_obj__) { ((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value = come_decrement_ref_count(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value, ((struct sNode*)((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
        }
        # 2 "sNoneNode_finalize"
        # 1 "sNoneNode_finalize"
        if(_if_conditional162=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname!=((void*)0),        _if_conditional162) {
            # 1 "sNoneNode_finalize"
            if(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname && !__freed_obj__) { ((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname = come_decrement_ref_count(((struct sNoneNode*)come_null_check(self, "sNoneNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
struct sNoneNode* __result126__;
void* right_value222;
struct sNoneNode* result_144;
_Bool _if_conditional164;
void* right_value223;
struct sNode* __dec_obj90;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value224;
char* __dec_obj91;
struct sNoneNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value222, 0, sizeof(void*));
memset(&result_144, 0, sizeof(struct sNoneNode*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
        # 3 "sNoneNode_clone"
        # 2 "sNoneNode_clone"
        if(_if_conditional163=self==(void*)0,        _if_conditional163) {
            # 2 "sNoneNode_clone"
            __result126__ = __result_obj__ = (void*)0;
            return __result126__;
        }
        # 3 "sNoneNode_clone"
        result_144=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value222=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value222;
        __freed_obj__ = 0;
        # 5 "sNoneNode_clone"
        # 4 "sNoneNode_clone"
        if(_if_conditional164=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 4))->value!=((void*)0),        _if_conditional164) {
            # 4 "sNoneNode_clone"
            __dec_obj90=((struct sNoneNode*)come_null_check(result_144, "sNoneNode_clone", 4))->value;
            ((struct sNoneNode*)come_null_check(result_144, "sNoneNode_clone", 4))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=sNode_clone(((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 4))->value))));
            if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
            if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value223;
            __freed_obj__ = 0;
        }
        # 6 "sNoneNode_clone"
        # 5 "sNoneNode_clone"
        if(_if_conditional165=self!=((void*)0),        _if_conditional165) {
            # 5 "sNoneNode_clone"
            ((struct sNoneNode*)come_null_check(result_144, "sNoneNode_clone", 5))->sline=((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 5))->sline;
        }
        # 7 "sNoneNode_clone"
        # 6 "sNoneNode_clone"
        if(_if_conditional166=self!=((void*)0)&&((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 6))->sname!=((void*)0),        _if_conditional166) {
            # 6 "sNoneNode_clone"
            __dec_obj91=((struct sNoneNode*)come_null_check(result_144, "sNoneNode_clone", 6))->sname;
            ((struct sNoneNode*)come_null_check(result_144, "sNoneNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value224=string_clone(((struct sNoneNode*)come_null_check(self, "sNoneNode_clone", 6))->sname))));
            if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
            if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value224;
            __freed_obj__ = 0;
        }
        # 7 "sNoneNode_clone"
        __result127__ = __result_obj__ = result_144;
        if(result_144 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result127__;
        if(result_144 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sNoneNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 778 "06str.c"
    __result129__ = (_Bool)0;
    return __result129__;
}

char* sNoneNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value226;
char* __exception_result_var_b230;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value226, 0, sizeof(void*));
    # 783 "06str.c"
    __result130__ = __result_obj__ = (come_push_stackframe("06str.c", 783),__exception_result_var_b230=((char*)(right_value226=__builtin_string("sNoneNode"))), come_pop_stackframe(), __exception_result_var_b230);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value226;
    __freed_obj__ = 0;
    return __result130__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value227;
void* right_value228;
struct list$1sTypeph* __exception_result_var_b231;
struct list$1sTypeph* tuple_types_145;
void* right_value229;
void* right_value230;
struct list$1CVALUEph* __exception_result_var_b232;
struct list$1CVALUEph* tuple_values_146;
_Bool __exception_result_var_b233;
_Bool _if_conditional167;
_Bool __result131__;
void* right_value231;
struct CVALUE* __exception_result_var_b234;
struct CVALUE* come_value_147;
_Bool __exception_result_var_b235;
_Bool _if_conditional168;
struct list$1CVALUEph* __exception_result_var_b236;
void* right_value235;
struct list$1CVALUEph* __exception_result_var_b237;
void* right_value236;
struct list$1sTypeph* __exception_result_var_b238;
void* right_value237;
struct sNode* __exception_result_var_b239;
struct sNode* false_node_151;
_Bool __exception_result_var_b240;
_Bool _if_conditional171;
_Bool __result133__;
void* right_value238;
struct CVALUE* __exception_result_var_b241;
struct CVALUE* come_value2_152;
void* right_value239;
struct list$1CVALUEph* __exception_result_var_b242;
void* right_value240;
struct list$1sTypeph* __exception_result_var_b243;
void* right_value241;
void* right_value242;
struct sType* __exception_result_var_b244;
struct sType* type_153;
struct list$1sTypeph* o2_saved_154;
struct sType* __exception_result_var_b245;
struct sType* it_155;
_Bool __exception_result_var_b246;
_Bool _for_condtionalA9;
struct sType* __exception_result_var_b247;
void* right_value243;
struct list$1sTypeph* __exception_result_var_b248;
void* right_value244;
struct CVALUE* obj_value_156;
void* right_value245;
void* right_value246;
struct buffer* __exception_result_var_b249;
struct buffer* num_string_157;
struct buffer* __exception_result_var_b250;
void* right_value247;
struct sType* __exception_result_var_b251;
struct sType* type2_158;
void* right_value248;
char* __exception_result_var_b252;
char* type_name_159;
void* right_value249;
char* __exception_result_var_b253;
void* right_value250;
char* __exception_result_var_b254;
char* __dec_obj95;
void* right_value251;
struct sType* type3_160;
void* right_value252;
struct sType* __dec_obj96;
void* right_value253;
char* __exception_result_var_b255;
char* __dec_obj97;
void* right_value254;
struct sType* obj_type_161;
char* fun_name_162;
void* right_value255;
char* __exception_result_var_b256;
void* right_value256;
char* __exception_result_var_b257;
void* right_value257;
char* __exception_result_var_b258;
char* generics_fun_name_163;
struct sFun* __exception_result_var_b259;
struct sFun* fun_164;
_Bool _if_conditional172;
void* right_value258;
char* __exception_result_var_b260;
void* right_value259;
char* __exception_result_var_b261;
char* __dec_obj98;
struct sFun* __exception_result_var_b262;
_Bool _if_conditional173;
_Bool __result134__;
void* right_value260;
struct sType* result_type_165;
void* right_value261;
void* right_value262;
struct list$1CVALUEph* __exception_result_var_b263;
struct list$1CVALUEph* come_params_166;
struct sType* __exception_result_var_b264;
_Bool _if_conditional174;
struct sType* __exception_result_var_b265;
struct list$1CVALUEph* __exception_result_var_b266;
int i_167;
struct list$1CVALUEph* o2_saved_168;
struct CVALUE* __exception_result_var_b267;
struct CVALUE* it_169;
_Bool __exception_result_var_b268;
_Bool _for_condtionalA10;
struct CVALUE* __exception_result_var_b269;
void* right_value263;
struct CVALUE* come_value_170;
struct sType* __exception_result_var_b270;
struct sType* __exception_result_var_b271;
_Bool _if_conditional175;
struct sType* __exception_result_var_b272;
struct list$1CVALUEph* __exception_result_var_b273;
void* right_value264;
void* right_value265;
struct buffer* __exception_result_var_b274;
struct buffer* buf_171;
struct buffer* __exception_result_var_b275;
struct buffer* __exception_result_var_b276;
int j_172;
struct list$1CVALUEph* o2_saved_173;
struct CVALUE* __exception_result_var_b277;
struct CVALUE* it_174;
_Bool __exception_result_var_b278;
_Bool _for_condtionalA11;
struct CVALUE* __exception_result_var_b279;
struct buffer* __exception_result_var_b280;
int __exception_result_var_b281;
_Bool _if_conditional176;
struct buffer* __exception_result_var_b282;
struct buffer* __exception_result_var_b283;
void* right_value266;
struct CVALUE* come_value3_175;
void* right_value267;
char* __exception_result_var_b284;
char* __dec_obj99;
_Bool _if_conditional177;
void* right_value268;
char* __exception_result_var_b285;
void* right_value269;
char* __exception_result_var_b286;
char* __dec_obj100;
_Bool _if_conditional178;
void* right_value270;
void* right_value271;
void* right_value272;
void* right_value273;
char* __dec_obj101;
void* right_value274;
struct sType* __dec_obj102;
struct list$1CVALUEph* __exception_result_var_b287;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&tuple_types_145, 0, sizeof(struct list$1sTypeph*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&tuple_values_146, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value231, 0, sizeof(void*));
memset(&come_value_147, 0, sizeof(struct CVALUE*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&false_node_151, 0, sizeof(struct sNode*));
memset(&right_value238, 0, sizeof(void*));
memset(&come_value2_152, 0, sizeof(struct CVALUE*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&type_153, 0, sizeof(struct sType*));
memset(&o2_saved_154, 0, sizeof(struct list$1sTypeph*));
memset(&it_155, 0, sizeof(struct sType*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&obj_value_156, 0, sizeof(struct CVALUE*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&num_string_157, 0, sizeof(struct buffer*));
memset(&right_value247, 0, sizeof(void*));
memset(&type2_158, 0, sizeof(struct sType*));
memset(&right_value248, 0, sizeof(void*));
memset(&type_name_159, 0, sizeof(char*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&type3_160, 0, sizeof(struct sType*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&obj_type_161, 0, sizeof(struct sType*));
memset(&fun_name_162, 0, sizeof(char*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&generics_fun_name_163, 0, sizeof(char*));
memset(&fun_164, 0, sizeof(struct sFun*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&result_type_165, 0, sizeof(struct sType*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&come_params_166, 0, sizeof(struct list$1CVALUEph*));
memset(&i_167, 0, sizeof(int));
memset(&o2_saved_168, 0, sizeof(struct list$1CVALUEph*));
memset(&it_169, 0, sizeof(struct CVALUE*));
memset(&right_value263, 0, sizeof(void*));
memset(&come_value_170, 0, sizeof(struct CVALUE*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&buf_171, 0, sizeof(struct buffer*));
memset(&j_172, 0, sizeof(int));
memset(&o2_saved_173, 0, sizeof(struct list$1CVALUEph*));
memset(&it_174, 0, sizeof(struct CVALUE*));
memset(&right_value266, 0, sizeof(void*));
memset(&come_value3_175, 0, sizeof(struct CVALUE*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
    # 788 "06str.c"
    tuple_types_145=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("06str.c", 788),__exception_result_var_b231=((struct list$1sTypeph*)(right_value228=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value227=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 788))))))), come_pop_stackframe(), __exception_result_var_b231));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value227;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value228;
    __freed_obj__ = 0;
    # 789 "06str.c"
    tuple_values_146=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 789),__exception_result_var_b232=((struct list$1CVALUEph*)(right_value230=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value229=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 789))))))), come_pop_stackframe(), __exception_result_var_b232));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value229;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value230;
    __freed_obj__ = 0;
    # 795 "06str.c"
    # 791 "06str.c"
    if(_if_conditional167=!(come_push_stackframe("06str.c", 791),__exception_result_var_b233=node_compile(((struct sNoneNode*)come_null_check(self, "06str.c", 791))->value,info), come_pop_stackframe(), __exception_result_var_b233),    _if_conditional167) {
        # 792 "06str.c"
        __result131__ = (_Bool)0;
        if(tuple_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_146 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_146, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result131__;
    }
    # 795 "06str.c"
    come_value_147=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 795),__exception_result_var_b234=((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b234));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value231);
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value231;
    __freed_obj__ = 0;
    # 796 "06str.c"
    (come_push_stackframe("06str.c", 796),dec_stack_ptr(1,info),come_pop_stackframe());
    # 923 "06str.c"
    # 798 "06str.c"
    if(_if_conditional168=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_147, "06str.c", 798))->type, "06str.c", 798))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_147, "06str.c", 798))->type, "06str.c", 798))->mNoSolvedGenericsType, "06str.c", 798))->v1&&(come_push_stackframe("06str.c", 798),__exception_result_var_b235=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_147, "06str.c", 798))->type, "06str.c", 798))->mNoSolvedGenericsType, "06str.c", 798))->v1, "06str.c", 798))->mClass, "06str.c", 798))->mName,"optional"), come_pop_stackframe(), __exception_result_var_b235),    _if_conditional168) {
        # 799 "06str.c"
        (come_push_stackframe("06str.c", 799),__exception_result_var_b236=list$1CVALUEph_add(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 799))->stack, "06str.c", 799)),(struct CVALUE*)come_increment_ref_count(come_value_147)), come_pop_stackframe(), __exception_result_var_b236);
    }
    else {
        # 802 "06str.c"
        (come_push_stackframe("06str.c", 802),__exception_result_var_b237=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_146, "06str.c", 802)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=CVALUE_clone(come_value_147))))), come_pop_stackframe(), __exception_result_var_b237);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value235;
        __freed_obj__ = 0;
        # 803 "06str.c"
        (come_push_stackframe("06str.c", 803),__exception_result_var_b238=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_145, "06str.c", 803)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(((struct CVALUE*)come_null_check(come_value_147, "06str.c", 803))->type))))), come_pop_stackframe(), __exception_result_var_b238);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value236;
        __freed_obj__ = 0;
        # 805 "06str.c"
        false_node_151=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 805),__exception_result_var_b239=((struct sNode*)(right_value237=create_false_object(info))), come_pop_stackframe(), __exception_result_var_b239));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value237;
        __freed_obj__ = 0;
        # 811 "06str.c"
        # 807 "06str.c"
        if(_if_conditional171=!(come_push_stackframe("06str.c", 807),__exception_result_var_b240=node_compile(false_node_151,info), come_pop_stackframe(), __exception_result_var_b240),        _if_conditional171) {
            # 808 "06str.c"
            __result133__ = (_Bool)0;
            if(false_node_151 && !__freed_obj__) { false_node_151 = come_decrement_ref_count(false_node_151, ((struct sNode*)false_node_151)->finalize, ((struct sNode*)false_node_151)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_146 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_146, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_147 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_147, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result133__;
        }
        # 811 "06str.c"
        come_value2_152=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 811),__exception_result_var_b241=((struct CVALUE*)(right_value238=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b241));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value238;
        __freed_obj__ = 0;
        # 812 "06str.c"
        (come_push_stackframe("06str.c", 812),dec_stack_ptr(1,info),come_pop_stackframe());
        # 814 "06str.c"
        (come_push_stackframe("06str.c", 814),__exception_result_var_b242=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_146, "06str.c", 814)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=CVALUE_clone(come_value2_152))))), come_pop_stackframe(), __exception_result_var_b242);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value239;
        __freed_obj__ = 0;
        # 815 "06str.c"
        (come_push_stackframe("06str.c", 815),__exception_result_var_b243=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_145, "06str.c", 815)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(((struct CVALUE*)come_null_check(come_value2_152, "06str.c", 815))->type))))), come_pop_stackframe(), __exception_result_var_b243);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value240);
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value240;
        __freed_obj__ = 0;
        # 817 "06str.c"
        type_153=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 817),__exception_result_var_b244=((struct sType*)(right_value242=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value241=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 817)))),"optional",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b244));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value241);
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value241;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value242);
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value242;
        __freed_obj__ = 0;
        # 823 "06str.c"
        for(
        o2_saved_154=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_145)),it_155=(come_push_stackframe("06str.c", 819),__exception_result_var_b245=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_154), "06str.c", 819))), come_pop_stackframe(), __exception_result_var_b245) ,        0;        _for_condtionalA9=        !(come_push_stackframe("06str.c", 819),__exception_result_var_b246=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_154), "06str.c", 819))), come_pop_stackframe(), __exception_result_var_b246) ,        _for_condtionalA9;        it_155=(come_push_stackframe("06str.c", 819),__exception_result_var_b247=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_154), "06str.c", 819))), come_pop_stackframe(), __exception_result_var_b247) ,        0        ){
            # 820 "06str.c"
            (come_push_stackframe("06str.c", 820),__exception_result_var_b248=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_153, "06str.c", 820))->mGenericsTypes, "06str.c", 820)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(it_155))))), come_pop_stackframe(), __exception_result_var_b248);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
            if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value243;
            __freed_obj__ = 0;
        }
        if(o2_saved_154 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 823 "06str.c"
        obj_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 823))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value244;
        __freed_obj__ = 0;
        # 825 "06str.c"
        num_string_157=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 825),__exception_result_var_b249=((struct buffer*)(right_value246=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value245=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 825))))))), come_pop_stackframe(), __exception_result_var_b249));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value245;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value246;
        __freed_obj__ = 0;
        # 827 "06str.c"
        (come_push_stackframe("06str.c", 827),__exception_result_var_b250=buffer_append_str(((struct buffer*)come_null_check(num_string_157, "06str.c", 827)),"1"), come_pop_stackframe(), __exception_result_var_b250);
        # 829 "06str.c"
        type2_158=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 829),__exception_result_var_b251=((struct sType*)(right_value247=solve_generics(type_153,type_153,info))), come_pop_stackframe(), __exception_result_var_b251));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value247;
        __freed_obj__ = 0;
        # 831 "06str.c"
        type_name_159=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 831),__exception_result_var_b252=((char*)(right_value248=make_type_name_string(type2_158,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b252));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value248);
        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value248;
        __freed_obj__ = 0;
        # 833 "06str.c"
        __dec_obj95=((struct CVALUE*)come_null_check(obj_value_156, "06str.c", 833))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_156, "06str.c", 833))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 833),__exception_result_var_b254=((char*)(right_value250=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_159,type_name_159,(come_push_stackframe("06str.c", 833),__exception_result_var_b253=((char*)(right_value249=buffer_to_string(((struct buffer*)come_null_check(num_string_157, "06str.c", 833))))), come_pop_stackframe(), __exception_result_var_b253),((struct sInfo*)come_null_check(info, "06str.c", 833))->sname,((struct sInfo*)come_null_check(info, "06str.c", 833))->sline))), come_pop_stackframe(), __exception_result_var_b254));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value249;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value250;
        __freed_obj__ = 0;
        # 835 "06str.c"
        type3_160=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(type2_158))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value251);
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value251;
        __freed_obj__ = 0;
        # 836 "06str.c"
        ((struct sType*)come_null_check(type3_160, "06str.c", 836))->mPointerNum++;
        # 837 "06str.c"
        ((struct sType*)come_null_check(type3_160, "06str.c", 837))->mHeap=(_Bool)1;
        # 838 "06str.c"
        ((struct sType*)come_null_check(type2_158, "06str.c", 838))->mHeap=(_Bool)1;
        # 839 "06str.c"
        __dec_obj96=((struct CVALUE*)come_null_check(obj_value_156, "06str.c", 839))->type;
        ((struct CVALUE*)come_null_check(obj_value_156, "06str.c", 839))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(type_153))));
        if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value252;
        __freed_obj__ = 0;
        # 840 "06str.c"
        __dec_obj97=((struct CVALUE*)come_null_check(obj_value_156, "06str.c", 840))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_156, "06str.c", 840))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 840),__exception_result_var_b255=((char*)(right_value253=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_156, "06str.c", 840))->c_value,(struct sType*)come_increment_ref_count(type3_160),info))), come_pop_stackframe(), __exception_result_var_b255));
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value253;
        __freed_obj__ = 0;
        # 841 "06str.c"
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_156, "06str.c", 841))->type, "06str.c", 841))->mPointerNum++;
        # 842 "06str.c"
        ((struct CVALUE*)come_null_check(obj_value_156, "06str.c", 842))->var=((void*)0);
        # 844 "06str.c"
        obj_type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_clone(type2_158))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value254;
        __freed_obj__ = 0;
        # 845 "06str.c"
        fun_name_162="initialize";
        # 847 "06str.c"
        generics_fun_name_163=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 847),__exception_result_var_b258=((char*)(right_value257=string_to_string(((char*)come_null_check((come_push_stackframe("06str.c", 847),__exception_result_var_b257=((char*)(right_value256=make_generics_function(obj_type_161,(char*)come_increment_ref_count((come_push_stackframe("06str.c", 847),__exception_result_var_b256=((char*)(right_value255=__builtin_string(fun_name_162))), come_pop_stackframe(), __exception_result_var_b256)),info))), come_pop_stackframe(), __exception_result_var_b257), "06str.c", 847))))), come_pop_stackframe(), __exception_result_var_b258));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value255;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value256;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value257;
        __freed_obj__ = 0;
        # 849 "06str.c"
        fun_164=(come_push_stackframe("06str.c", 849),__exception_result_var_b259=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 849))->funcs, "06str.c", 849)),generics_fun_name_163,((void*)0)), come_pop_stackframe(), __exception_result_var_b259);
        # 862 "06str.c"
        # 851 "06str.c"
        if(_if_conditional172=fun_164==((void*)0),        _if_conditional172) {
            # 852 "06str.c"
            __dec_obj98=generics_fun_name_163;
            generics_fun_name_163=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 852),__exception_result_var_b261=((char*)(right_value259=create_method_name(obj_type_161,(_Bool)0,(come_push_stackframe("06str.c", 852),__exception_result_var_b260=((char*)(right_value258=__builtin_string(fun_name_162))), come_pop_stackframe(), __exception_result_var_b260),info))), come_pop_stackframe(), __exception_result_var_b261));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
            if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value258;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value259);
            if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value259;
            __freed_obj__ = 0;
            # 854 "06str.c"
            fun_164=(come_push_stackframe("06str.c", 854),__exception_result_var_b262=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 854))->funcs, "06str.c", 854)),generics_fun_name_163,((void*)0)), come_pop_stackframe(), __exception_result_var_b262);
            # 860 "06str.c"
            # 856 "06str.c"
            if(_if_conditional173=fun_164==((void*)0),            _if_conditional173) {
                # 857 "06str.c"
                (come_push_stackframe("06str.c", 857),err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_163,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 857))->come_fun, "06str.c", 857))->mName),come_pop_stackframe());
                # 858 "06str.c"
                __result134__ = (_Bool)1;
                if(false_node_151 && !__freed_obj__) { false_node_151 = come_decrement_ref_count(false_node_151, ((struct sNode*)false_node_151)->finalize, ((struct sNode*)false_node_151)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_152 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_152, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_153 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_153, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_156 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_157 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_157, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_159 && !__freed_obj__) { type_name_159 = come_decrement_ref_count(type_name_159, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_160 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_160, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_163 && !__freed_obj__) { generics_fun_name_163 = come_decrement_ref_count(generics_fun_name_163, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_146 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_146, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_147 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_147, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result134__;
            }
        }
        # 862 "06str.c"
        result_type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(((struct sFun*)come_null_check(fun_164, "06str.c", 862))->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value260;
        __freed_obj__ = 0;
        # 863 "06str.c"
        ((struct sType*)come_null_check(result_type_165, "06str.c", 863))->mStatic=(_Bool)0;
        # 865 "06str.c"
        come_params_166=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 865),__exception_result_var_b263=((struct list$1CVALUEph*)(right_value262=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value261=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 865))))))), come_pop_stackframe(), __exception_result_var_b263));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value261;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value262;
        __freed_obj__ = 0;
        # 870 "06str.c"
        # 867 "06str.c"
        if(_if_conditional174=((struct sType*)come_null_check((come_push_stackframe("06str.c", 867),__exception_result_var_b264=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_164, "06str.c", 867))->mParamTypes,0), come_pop_stackframe(), __exception_result_var_b264), "06str.c", 867))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_156, "06str.c", 867))->type, "06str.c", 867))->mHeap,        _if_conditional174) {
            # 868 "06str.c"
            (come_push_stackframe("06str.c", 868),std_move((come_push_stackframe("06str.c", 868),__exception_result_var_b265=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_164, "06str.c", 868))->mParamTypes,0), come_pop_stackframe(), __exception_result_var_b265),((struct CVALUE*)come_null_check(obj_value_156, "06str.c", 868))->type,obj_value_156,info),come_pop_stackframe());
        }
        # 870 "06str.c"
        (come_push_stackframe("06str.c", 870),__exception_result_var_b266=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_166, "06str.c", 870)),(struct CVALUE*)come_increment_ref_count(obj_value_156)), come_pop_stackframe(), __exception_result_var_b266);
        # 872 "06str.c"
        i_167=1;
        # 884 "06str.c"
        for(
        o2_saved_168=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_146)),it_169=(come_push_stackframe("06str.c", 873),__exception_result_var_b267=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_168), "06str.c", 873))), come_pop_stackframe(), __exception_result_var_b267) ,        0;        _for_condtionalA10=        !(come_push_stackframe("06str.c", 873),__exception_result_var_b268=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_168), "06str.c", 873))), come_pop_stackframe(), __exception_result_var_b268) ,        _for_condtionalA10;        it_169=(come_push_stackframe("06str.c", 873),__exception_result_var_b269=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_168), "06str.c", 873))), come_pop_stackframe(), __exception_result_var_b269) ,        0        ){
            # 874 "06str.c"
            come_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value263=CVALUE_clone(it_169))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
            if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value263;
            __freed_obj__ = 0;
            # 879 "06str.c"
            # 876 "06str.c"
            if(_if_conditional175=(come_push_stackframe("06str.c", 876),__exception_result_var_b270=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_164, "06str.c", 876))->mParamTypes,i_167), come_pop_stackframe(), __exception_result_var_b270)&&((struct sType*)come_null_check((come_push_stackframe("06str.c", 876),__exception_result_var_b271=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_164, "06str.c", 876))->mParamTypes,i_167), come_pop_stackframe(), __exception_result_var_b271), "06str.c", 876))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_170, "06str.c", 876))->type, "06str.c", 876))->mHeap,            _if_conditional175) {
                # 877 "06str.c"
                (come_push_stackframe("06str.c", 877),std_move((come_push_stackframe("06str.c", 877),__exception_result_var_b272=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_164, "06str.c", 877))->mParamTypes,i_167), come_pop_stackframe(), __exception_result_var_b272),((struct CVALUE*)come_null_check(come_value_170, "06str.c", 877))->type,come_value_170,info),come_pop_stackframe());
            }
            # 879 "06str.c"
            (come_push_stackframe("06str.c", 879),__exception_result_var_b273=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_166, "06str.c", 879)),(struct CVALUE*)come_increment_ref_count(come_value_170)), come_pop_stackframe(), __exception_result_var_b273);
            # 881 "06str.c"
            i_167++;
            if(come_value_170 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_170, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_168 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_168, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 884 "06str.c"
        buf_171=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 884),__exception_result_var_b274=((struct buffer*)(right_value265=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value264=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 884))))))), come_pop_stackframe(), __exception_result_var_b274));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value264;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value265;
        __freed_obj__ = 0;
        # 886 "06str.c"
        (come_push_stackframe("06str.c", 886),__exception_result_var_b275=buffer_append_str(((struct buffer*)come_null_check(buf_171, "06str.c", 886)),generics_fun_name_163), come_pop_stackframe(), __exception_result_var_b275);
        # 887 "06str.c"
        (come_push_stackframe("06str.c", 887),__exception_result_var_b276=buffer_append_str(((struct buffer*)come_null_check(buf_171, "06str.c", 887)),"("), come_pop_stackframe(), __exception_result_var_b276);
        # 889 "06str.c"
        j_172=0;
        # 899 "06str.c"
        for(
        o2_saved_173=(struct list$1CVALUEph*)come_increment_ref_count((come_params_166)),it_174=(come_push_stackframe("06str.c", 890),__exception_result_var_b277=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_173), "06str.c", 890))), come_pop_stackframe(), __exception_result_var_b277) ,        0;        _for_condtionalA11=        !(come_push_stackframe("06str.c", 890),__exception_result_var_b278=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_173), "06str.c", 890))), come_pop_stackframe(), __exception_result_var_b278) ,        _for_condtionalA11;        it_174=(come_push_stackframe("06str.c", 890),__exception_result_var_b279=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_173), "06str.c", 890))), come_pop_stackframe(), __exception_result_var_b279) ,        0        ){
            # 891 "06str.c"
            (come_push_stackframe("06str.c", 891),__exception_result_var_b280=buffer_append_str(((struct buffer*)come_null_check(buf_171, "06str.c", 891)),((struct CVALUE*)come_null_check(it_174, "06str.c", 891))->c_value), come_pop_stackframe(), __exception_result_var_b280);
            # 897 "06str.c"
            # 893 "06str.c"
            if(_if_conditional176=j_172!=(come_push_stackframe("06str.c", 893),__exception_result_var_b281=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_166, "06str.c", 893))), come_pop_stackframe(), __exception_result_var_b281)-1,            _if_conditional176) {
                # 894 "06str.c"
                (come_push_stackframe("06str.c", 894),__exception_result_var_b282=buffer_append_str(((struct buffer*)come_null_check(buf_171, "06str.c", 894)),","), come_pop_stackframe(), __exception_result_var_b282);
            }
            # 897 "06str.c"
            j_172++;
        }
        if(o2_saved_173 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_173, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 899 "06str.c"
        (come_push_stackframe("06str.c", 899),__exception_result_var_b283=buffer_append_str(((struct buffer*)come_null_check(buf_171, "06str.c", 899)),")"), come_pop_stackframe(), __exception_result_var_b283);
        # 901 "06str.c"
        come_value3_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 901))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value266;
        __freed_obj__ = 0;
        # 903 "06str.c"
        __dec_obj99=((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 903))->c_value;
        ((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 903))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 903),__exception_result_var_b284=((char*)(right_value267=buffer_to_string(((struct buffer*)come_null_check(buf_171, "06str.c", 903))))), come_pop_stackframe(), __exception_result_var_b284));
        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[28] = right_value267;
        __freed_obj__ = 0;
        # 909 "06str.c"
        # 905 "06str.c"
        if(_if_conditional177=((struct sType*)come_null_check(result_type_165, "06str.c", 905))->mHeap,        _if_conditional177) {
            # 906 "06str.c"
            __dec_obj100=((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 906))->c_value;
            ((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 906))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 906),__exception_result_var_b286=((char*)(right_value269=append_object_to_right_values((come_push_stackframe("06str.c", 906),__exception_result_var_b285=((char*)(right_value268=buffer_to_string(((struct buffer*)come_null_check(buf_171, "06str.c", 906))))), come_pop_stackframe(), __exception_result_var_b285),(struct sType*)come_increment_ref_count(result_type_165),info))), come_pop_stackframe(), __exception_result_var_b286));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
            if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value268;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value269);
            if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value269;
            __freed_obj__ = 0;
        }
        # 913 "06str.c"
        # 909 "06str.c"
        if(_if_conditional178=gComeDebug,        _if_conditional178) {
            # 911 "06str.c"
            __dec_obj101=((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 910))->c_value;
            ((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 910))->c_value=(char*)come_increment_ref_count(((char*)(right_value273=xsprintf("(come_save_stackframe(\"\%s\", \%s), \%s)",((char*)(right_value270=string_to_string(((struct sInfo*)come_null_check(info, "06str.c", 910))->sname))),((char*)(right_value271=int_to_string(((struct sInfo*)come_null_check(info, "06str.c", 910))->sline))),((char*)(right_value272=string_to_string(((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 910))->c_value)))))));
            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
            if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value270;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value271);
            if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value271;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value272);
            if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value272;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value273);
            if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value273;
            __freed_obj__ = 0;
        }
        # 913 "06str.c"
        __dec_obj102=((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 913))->type;
        ((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 913))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value274=sType_clone(result_type_165))));
        if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[29] = right_value274;
        __freed_obj__ = 0;
        # 914 "06str.c"
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 914))->type, "06str.c", 914))->mStatic=(_Bool)0;
        # 915 "06str.c"
        ((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 915))->var=((void*)0);
        # 917 "06str.c"
        (come_push_stackframe("06str.c", 917),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value3_175, "06str.c", 917))->c_value),come_pop_stackframe());
        # 920 "06str.c"
        (come_push_stackframe("06str.c", 920),__exception_result_var_b287=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 920))->stack, "06str.c", 920)),(struct CVALUE*)come_increment_ref_count(come_value3_175)), come_pop_stackframe(), __exception_result_var_b287);
        if(false_node_151 && !__freed_obj__) { false_node_151 = come_decrement_ref_count(false_node_151, ((struct sNode*)false_node_151)->finalize, ((struct sNode*)false_node_151)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_152 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_152, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_153 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_153, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_156 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_157 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_157, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_158, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_159 && !__freed_obj__) { type_name_159 = come_decrement_ref_count(type_name_159, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_160 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_160, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_161 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_161, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_163 && !__freed_obj__) { generics_fun_name_163 = come_decrement_ref_count(generics_fun_name_163, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_166 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_166, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_171 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_171, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_175 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_175, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    # 923 "06str.c"
    __result135__ = (_Bool)1;
    if(tuple_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_146 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_147 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_147, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result135__;
    if(tuple_types_145 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_146 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_147 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_147, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
void* right_value232;
struct list_item$1CVALUEph* litem_148;
struct CVALUE* __dec_obj92;
_Bool _if_conditional170;
void* right_value233;
struct list_item$1CVALUEph* litem_149;
struct CVALUE* __dec_obj93;
void* right_value234;
struct list_item$1CVALUEph* litem_150;
struct CVALUE* __dec_obj94;
struct list$1CVALUEph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value232, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value233, 0, sizeof(void*));
memset(&litem_149, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value234, 0, sizeof(void*));
memset(&litem_150, 0, sizeof(struct list_item$1CVALUEph*));
            # 239 "./comelang2.h"
            # 208 "./comelang2.h"
            if(_if_conditional169=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 208))->len==0,            _if_conditional169) {
                # 209 "./comelang2.h"
                litem_148=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value232=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 209))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
                if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value232;
                __freed_obj__ = 0;
                # 211 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(litem_148, "./comelang2.h", 211))->prev=((void*)0);
                # 212 "./comelang2.h"
                ((struct list_item$1CVALUEph*)come_null_check(litem_148, "./comelang2.h", 212))->next=((void*)0);
                # 213 "./comelang2.h"
                __dec_obj92=((struct list_item$1CVALUEph*)come_null_check(litem_148, "./comelang2.h", 213))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_148, "./comelang2.h", 213))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj92) { come_call_finalizer(CVALUE_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
                # 215 "./comelang2.h"
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 215))->tail=litem_148;
                # 216 "./comelang2.h"
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 216))->head=litem_148;
            }
            else {
                # 239 "./comelang2.h"
                # 218 "./comelang2.h"
                if(_if_conditional170=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 218))->len==1,                _if_conditional170) {
                    # 219 "./comelang2.h"
                    litem_149=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value233=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 219))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value233;
                    __freed_obj__ = 0;
                    # 221 "./comelang2.h"
                    ((struct list_item$1CVALUEph*)come_null_check(litem_149, "./comelang2.h", 221))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 221))->head;
                    # 222 "./comelang2.h"
                    ((struct list_item$1CVALUEph*)come_null_check(litem_149, "./comelang2.h", 222))->next=((void*)0);
                    # 223 "./comelang2.h"
                    __dec_obj93=((struct list_item$1CVALUEph*)come_null_check(litem_149, "./comelang2.h", 223))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_149, "./comelang2.h", 223))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj93) { come_call_finalizer(CVALUE_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 225 "./comelang2.h"
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 225))->tail=litem_149;
                    # 226 "./comelang2.h"
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 226))->head, "./comelang2.h", 226))->next=litem_149;
                }
                else {
                    # 229 "./comelang2.h"
                    litem_150=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value234=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 229))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value234;
                    __freed_obj__ = 0;
                    # 231 "./comelang2.h"
                    ((struct list_item$1CVALUEph*)come_null_check(litem_150, "./comelang2.h", 231))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 231))->tail;
                    # 232 "./comelang2.h"
                    ((struct list_item$1CVALUEph*)come_null_check(litem_150, "./comelang2.h", 232))->next=((void*)0);
                    # 233 "./comelang2.h"
                    __dec_obj94=((struct list_item$1CVALUEph*)come_null_check(litem_150, "./comelang2.h", 233))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_150, "./comelang2.h", 233))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj94) { come_call_finalizer(CVALUE_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
                    # 235 "./comelang2.h"
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 235))->tail, "./comelang2.h", 235))->next=litem_150;
                    # 236 "./comelang2.h"
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 236))->tail=litem_150;
                }
            }
            # 239 "./comelang2.h"
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 239))->len++;
            # 241 "./comelang2.h"
            __result132__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result132__;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sNoneNode_sline(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 928 "06str.c"
    __result136__ = ((struct sNoneNode*)come_null_check(self, "06str.c", 928))->sline;
    return __result136__;
}

char* sNoneNode_sname(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value275;
char* __exception_result_var_b288;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value275, 0, sizeof(void*));
    # 933 "06str.c"
    __result137__ = __result_obj__ = (come_push_stackframe("06str.c", 933),__exception_result_var_b288=((char*)(right_value275=__builtin_string(((struct sNoneNode*)come_null_check(self, "06str.c", 933))->sname))), come_pop_stackframe(), __exception_result_var_b288);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
    if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value275;
    __freed_obj__ = 0;
    return __result137__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj103;
void* right_value276;
char* __exception_result_var_b289;
char* __dec_obj104;
struct sSomeNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value276, 0, sizeof(void*));
    # 945 "06str.c"
    __dec_obj103=((struct sSomeNode*)come_null_check(self, "06str.c", 945))->value;
    ((struct sSomeNode*)come_null_check(self, "06str.c", 945))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
    # 947 "06str.c"
    ((struct sSomeNode*)come_null_check(self, "06str.c", 947))->sline=((struct sInfo*)come_null_check(info, "06str.c", 947))->sline;
    # 948 "06str.c"
    __dec_obj104=((struct sSomeNode*)come_null_check(self, "06str.c", 948))->sname;
    ((struct sSomeNode*)come_null_check(self, "06str.c", 948))->sname=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 948),__exception_result_var_b289=((char*)(right_value276=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 948))->sname))), come_pop_stackframe(), __exception_result_var_b289));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value276;
    __freed_obj__ = 0;
    # 950 "06str.c"
    __result138__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    return __result138__;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value277;
void* right_value278;
struct sSomeNode* __exception_result_var_b290;
struct sNode* _inf_value2;
struct sSomeNode* _inf_obj_value2;
void* right_value282;
struct sNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
    # 955 "06str.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 955);
    _inf_obj_value2=come_increment_ref_count((come_push_stackframe("06str.c", 955),__exception_result_var_b290=((struct sSomeNode*)(right_value278=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value277=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 955)))),(struct sNode*)come_increment_ref_count(exp),info))), come_pop_stackframe(), __exception_result_var_b290));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSomeNode_finalize;
    _inf_value2->clone=(void*)sSomeNode_clone;
    _inf_value2->compile=(void*)sSomeNode_compile;
    _inf_value2->sline=(void*)sSomeNode_sline;
    _inf_value2->sname=(void*)sSomeNode_sname;
    _inf_value2->terminated=(void*)sSomeNode_terminated;
    _inf_value2->kind=(void*)sSomeNode_kind;
    __result141__ = __result_obj__ = ((struct sNode*)(right_value282=_inf_value2));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value277;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value278);
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value278;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value282);
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value282;
    __freed_obj__ = 0;
    return __result141__;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sSomeNode_finalize(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
_Bool _if_conditional182;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "sSomeNode_finalize"
        # 0 "sSomeNode_finalize"
        if(_if_conditional181=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value!=((void*)0),        _if_conditional181) {
            # 0 "sSomeNode_finalize"
            if(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value && !__freed_obj__) { ((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value = come_decrement_ref_count(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value, ((struct sNode*)((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value)->finalize, ((struct sNode*)((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 0))->value)->_protocol_obj, 0, 0, 0); } 
        }
        # 2 "sSomeNode_finalize"
        # 1 "sSomeNode_finalize"
        if(_if_conditional182=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname!=((void*)0),        _if_conditional182) {
            # 1 "sSomeNode_finalize"
            if(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname && !__freed_obj__) { ((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname = come_decrement_ref_count(((struct sSomeNode*)come_null_check(self, "sSomeNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
struct sSomeNode* __result139__;
void* right_value279;
struct sSomeNode* result_176;
_Bool _if_conditional184;
void* right_value280;
struct sNode* __dec_obj105;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value281;
char* __dec_obj106;
struct sSomeNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value279, 0, sizeof(void*));
memset(&result_176, 0, sizeof(struct sSomeNode*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
        # 3 "sSomeNode_clone"
        # 2 "sSomeNode_clone"
        if(_if_conditional183=self==(void*)0,        _if_conditional183) {
            # 2 "sSomeNode_clone"
            __result139__ = __result_obj__ = (void*)0;
            return __result139__;
        }
        # 3 "sSomeNode_clone"
        result_176=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value279=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value279;
        __freed_obj__ = 0;
        # 5 "sSomeNode_clone"
        # 4 "sSomeNode_clone"
        if(_if_conditional184=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 4))->value!=((void*)0),        _if_conditional184) {
            # 4 "sSomeNode_clone"
            __dec_obj105=((struct sSomeNode*)come_null_check(result_176, "sSomeNode_clone", 4))->value;
            ((struct sSomeNode*)come_null_check(result_176, "sSomeNode_clone", 4))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=sNode_clone(((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 4))->value))));
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
            if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value280;
            __freed_obj__ = 0;
        }
        # 6 "sSomeNode_clone"
        # 5 "sSomeNode_clone"
        if(_if_conditional185=self!=((void*)0),        _if_conditional185) {
            # 5 "sSomeNode_clone"
            ((struct sSomeNode*)come_null_check(result_176, "sSomeNode_clone", 5))->sline=((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 5))->sline;
        }
        # 7 "sSomeNode_clone"
        # 6 "sSomeNode_clone"
        if(_if_conditional186=self!=((void*)0)&&((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 6))->sname!=((void*)0),        _if_conditional186) {
            # 6 "sSomeNode_clone"
            __dec_obj106=((struct sSomeNode*)come_null_check(result_176, "sSomeNode_clone", 6))->sname;
            ((struct sSomeNode*)come_null_check(result_176, "sSomeNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value281=string_clone(((struct sSomeNode*)come_null_check(self, "sSomeNode_clone", 6))->sname))));
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
            if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value281;
            __freed_obj__ = 0;
        }
        # 7 "sSomeNode_clone"
        __result140__ = __result_obj__ = result_176;
        if(result_176 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_176, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result140__;
        if(result_176 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_176, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sSomeNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 960 "06str.c"
    __result142__ = (_Bool)0;
    return __result142__;
}

char* sSomeNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value283;
char* __exception_result_var_b291;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value283, 0, sizeof(void*));
    # 965 "06str.c"
    __result143__ = __result_obj__ = (come_push_stackframe("06str.c", 965),__exception_result_var_b291=((char*)(right_value283=__builtin_string("sSomeNode"))), come_pop_stackframe(), __exception_result_var_b291);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value283;
    __freed_obj__ = 0;
    return __result143__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value284;
void* right_value285;
struct list$1sTypeph* __exception_result_var_b292;
struct list$1sTypeph* tuple_types_177;
void* right_value286;
void* right_value287;
struct list$1CVALUEph* __exception_result_var_b293;
struct list$1CVALUEph* tuple_values_178;
_Bool __exception_result_var_b294;
_Bool _if_conditional187;
_Bool __result144__;
void* right_value288;
struct CVALUE* __exception_result_var_b295;
struct CVALUE* come_value_179;
_Bool __exception_result_var_b296;
_Bool _if_conditional188;
struct list$1CVALUEph* __exception_result_var_b297;
struct tuple1$1sTypeph* mNoSolvedGenericsType_180;
void* right_value289;
struct list$1CVALUEph* __exception_result_var_b298;
void* right_value290;
struct list$1sTypeph* __exception_result_var_b299;
void* right_value291;
struct sNode* __exception_result_var_b300;
struct sNode* true_node_181;
_Bool __exception_result_var_b301;
_Bool _if_conditional189;
_Bool __result145__;
void* right_value292;
struct CVALUE* __exception_result_var_b302;
struct CVALUE* come_value2_182;
void* right_value293;
struct list$1CVALUEph* __exception_result_var_b303;
void* right_value294;
struct list$1sTypeph* __exception_result_var_b304;
void* right_value295;
void* right_value296;
struct sType* __exception_result_var_b305;
struct sType* type_183;
struct list$1sTypeph* o2_saved_184;
struct sType* __exception_result_var_b306;
struct sType* it_185;
_Bool __exception_result_var_b307;
_Bool _for_condtionalA12;
struct sType* __exception_result_var_b308;
void* right_value297;
struct list$1sTypeph* __exception_result_var_b309;
void* right_value298;
struct CVALUE* obj_value_186;
void* right_value299;
void* right_value300;
struct buffer* __exception_result_var_b310;
struct buffer* num_string_187;
struct buffer* __exception_result_var_b311;
void* right_value301;
struct sType* __exception_result_var_b312;
struct sType* type2_188;
void* right_value302;
char* __exception_result_var_b313;
char* type_name_189;
void* right_value303;
char* __exception_result_var_b314;
void* right_value304;
char* __exception_result_var_b315;
char* __dec_obj107;
void* right_value305;
struct sType* type3_190;
void* right_value306;
struct sType* __dec_obj108;
void* right_value307;
char* __exception_result_var_b316;
char* __dec_obj109;
void* right_value308;
struct sType* obj_type_191;
char* fun_name_192;
void* right_value309;
char* __exception_result_var_b317;
void* right_value310;
char* __exception_result_var_b318;
void* right_value311;
char* __exception_result_var_b319;
char* generics_fun_name_193;
struct sFun* __exception_result_var_b320;
struct sFun* fun_194;
_Bool _if_conditional190;
void* right_value312;
char* __exception_result_var_b321;
void* right_value313;
char* __exception_result_var_b322;
char* __dec_obj110;
struct sFun* __exception_result_var_b323;
_Bool _if_conditional191;
_Bool __result146__;
void* right_value314;
struct sType* result_type_195;
void* right_value315;
void* right_value316;
struct list$1CVALUEph* __exception_result_var_b324;
struct list$1CVALUEph* come_params_196;
struct sType* __exception_result_var_b325;
_Bool _if_conditional192;
struct sType* __exception_result_var_b326;
struct list$1CVALUEph* __exception_result_var_b327;
int i_197;
struct list$1CVALUEph* o2_saved_198;
struct CVALUE* __exception_result_var_b328;
struct CVALUE* it_199;
_Bool __exception_result_var_b329;
_Bool _for_condtionalA13;
struct CVALUE* __exception_result_var_b330;
void* right_value317;
struct CVALUE* come_value_200;
struct sType* __exception_result_var_b331;
struct sType* __exception_result_var_b332;
_Bool _if_conditional193;
struct sType* __exception_result_var_b333;
struct list$1CVALUEph* __exception_result_var_b334;
void* right_value318;
void* right_value319;
struct buffer* __exception_result_var_b335;
struct buffer* buf_201;
struct buffer* __exception_result_var_b336;
struct buffer* __exception_result_var_b337;
int j_202;
struct list$1CVALUEph* o2_saved_203;
struct CVALUE* __exception_result_var_b338;
struct CVALUE* it_204;
_Bool __exception_result_var_b339;
_Bool _for_condtionalA14;
struct CVALUE* __exception_result_var_b340;
struct buffer* __exception_result_var_b341;
int __exception_result_var_b342;
_Bool _if_conditional194;
struct buffer* __exception_result_var_b343;
struct buffer* __exception_result_var_b344;
void* right_value320;
struct CVALUE* come_value3_205;
void* right_value321;
char* __exception_result_var_b345;
char* __dec_obj111;
_Bool _if_conditional195;
void* right_value322;
char* __exception_result_var_b346;
void* right_value323;
char* __exception_result_var_b347;
char* __dec_obj112;
void* right_value324;
struct sType* __dec_obj113;
void* right_value325;
char* __exception_result_var_b348;
struct list$1CVALUEph* __exception_result_var_b349;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&tuple_types_177, 0, sizeof(struct list$1sTypeph*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&tuple_values_178, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value288, 0, sizeof(void*));
memset(&come_value_179, 0, sizeof(struct CVALUE*));
memset(&mNoSolvedGenericsType_180, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&true_node_181, 0, sizeof(struct sNode*));
memset(&right_value292, 0, sizeof(void*));
memset(&come_value2_182, 0, sizeof(struct CVALUE*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&type_183, 0, sizeof(struct sType*));
memset(&o2_saved_184, 0, sizeof(struct list$1sTypeph*));
memset(&it_185, 0, sizeof(struct sType*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&obj_value_186, 0, sizeof(struct CVALUE*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&num_string_187, 0, sizeof(struct buffer*));
memset(&right_value301, 0, sizeof(void*));
memset(&type2_188, 0, sizeof(struct sType*));
memset(&right_value302, 0, sizeof(void*));
memset(&type_name_189, 0, sizeof(char*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&type3_190, 0, sizeof(struct sType*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&obj_type_191, 0, sizeof(struct sType*));
memset(&fun_name_192, 0, sizeof(char*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&generics_fun_name_193, 0, sizeof(char*));
memset(&fun_194, 0, sizeof(struct sFun*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&result_type_195, 0, sizeof(struct sType*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&come_params_196, 0, sizeof(struct list$1CVALUEph*));
memset(&i_197, 0, sizeof(int));
memset(&o2_saved_198, 0, sizeof(struct list$1CVALUEph*));
memset(&it_199, 0, sizeof(struct CVALUE*));
memset(&right_value317, 0, sizeof(void*));
memset(&come_value_200, 0, sizeof(struct CVALUE*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&buf_201, 0, sizeof(struct buffer*));
memset(&j_202, 0, sizeof(int));
memset(&o2_saved_203, 0, sizeof(struct list$1CVALUEph*));
memset(&it_204, 0, sizeof(struct CVALUE*));
memset(&right_value320, 0, sizeof(void*));
memset(&come_value3_205, 0, sizeof(struct CVALUE*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
    # 970 "06str.c"
    tuple_types_177=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("06str.c", 970),__exception_result_var_b292=((struct list$1sTypeph*)(right_value285=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value284=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 970))))))), come_pop_stackframe(), __exception_result_var_b292));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value284;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value285);
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value285;
    __freed_obj__ = 0;
    # 971 "06str.c"
    tuple_values_178=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 971),__exception_result_var_b293=((struct list$1CVALUEph*)(right_value287=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value286=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 971))))))), come_pop_stackframe(), __exception_result_var_b293));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value286);
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value286;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value287);
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value287;
    __freed_obj__ = 0;
    # 977 "06str.c"
    # 973 "06str.c"
    if(_if_conditional187=!(come_push_stackframe("06str.c", 973),__exception_result_var_b294=node_compile(((struct sSomeNode*)come_null_check(self, "06str.c", 973))->value,info), come_pop_stackframe(), __exception_result_var_b294),    _if_conditional187) {
        # 974 "06str.c"
        __result144__ = (_Bool)0;
        if(tuple_types_177 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_177, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_178 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_178, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result144__;
    }
    # 977 "06str.c"
    come_value_179=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 977),__exception_result_var_b295=((struct CVALUE*)(right_value288=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b295));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value288);
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value288;
    __freed_obj__ = 0;
    # 978 "06str.c"
    (come_push_stackframe("06str.c", 978),dec_stack_ptr(1,info),come_pop_stackframe());
    # 1102 "06str.c"
    # 980 "06str.c"
    if(_if_conditional188=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_179, "06str.c", 980))->type, "06str.c", 980))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_179, "06str.c", 980))->type, "06str.c", 980))->mNoSolvedGenericsType, "06str.c", 980))->v1&&(come_push_stackframe("06str.c", 980),__exception_result_var_b296=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_179, "06str.c", 980))->type, "06str.c", 980))->mNoSolvedGenericsType, "06str.c", 980))->v1, "06str.c", 980))->mClass, "06str.c", 980))->mName,"optional"), come_pop_stackframe(), __exception_result_var_b296),    _if_conditional188) {
        # 981 "06str.c"
        (come_push_stackframe("06str.c", 981),__exception_result_var_b297=list$1CVALUEph_add(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 981))->stack, "06str.c", 981)),(struct CVALUE*)come_increment_ref_count(come_value_179)), come_pop_stackframe(), __exception_result_var_b297);
    }
    else {
        # 984 "06str.c"
        # 986 "06str.c"
        (come_push_stackframe("06str.c", 986),__exception_result_var_b298=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_178, "06str.c", 986)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value289=CVALUE_clone(come_value_179))))), come_pop_stackframe(), __exception_result_var_b298);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value289;
        __freed_obj__ = 0;
        # 987 "06str.c"
        (come_push_stackframe("06str.c", 987),__exception_result_var_b299=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_177, "06str.c", 987)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(((struct CVALUE*)come_null_check(come_value_179, "06str.c", 987))->type))))), come_pop_stackframe(), __exception_result_var_b299);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value290);
        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value290;
        __freed_obj__ = 0;
        # 989 "06str.c"
        true_node_181=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 989),__exception_result_var_b300=((struct sNode*)(right_value291=create_true_object(info))), come_pop_stackframe(), __exception_result_var_b300));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value291);
        if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value291;
        __freed_obj__ = 0;
        # 995 "06str.c"
        # 991 "06str.c"
        if(_if_conditional189=!(come_push_stackframe("06str.c", 991),__exception_result_var_b301=node_compile(true_node_181,info), come_pop_stackframe(), __exception_result_var_b301),        _if_conditional189) {
            # 992 "06str.c"
            __result145__ = (_Bool)0;
            if(mNoSolvedGenericsType_180 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_180, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(true_node_181 && !__freed_obj__) { true_node_181 = come_decrement_ref_count(true_node_181, ((struct sNode*)true_node_181)->finalize, ((struct sNode*)true_node_181)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_177 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_177, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_178 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_178, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result145__;
        }
        # 995 "06str.c"
        come_value2_182=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 995),__exception_result_var_b302=((struct CVALUE*)(right_value292=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b302));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value292);
        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value292;
        __freed_obj__ = 0;
        # 996 "06str.c"
        (come_push_stackframe("06str.c", 996),dec_stack_ptr(1,info),come_pop_stackframe());
        # 998 "06str.c"
        (come_push_stackframe("06str.c", 998),__exception_result_var_b303=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(tuple_values_178, "06str.c", 998)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=CVALUE_clone(come_value2_182))))), come_pop_stackframe(), __exception_result_var_b303);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value293);
        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value293;
        __freed_obj__ = 0;
        # 999 "06str.c"
        (come_push_stackframe("06str.c", 999),__exception_result_var_b304=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(tuple_types_177, "06str.c", 999)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(((struct CVALUE*)come_null_check(come_value2_182, "06str.c", 999))->type))))), come_pop_stackframe(), __exception_result_var_b304);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value294);
        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value294;
        __freed_obj__ = 0;
        # 1001 "06str.c"
        type_183=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 1001),__exception_result_var_b305=((struct sType*)(right_value296=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value295=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1001)))),"optional",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b305));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value295);
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value295;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value296);
        if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value296;
        __freed_obj__ = 0;
        # 1007 "06str.c"
        for(
        o2_saved_184=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_177)),it_185=(come_push_stackframe("06str.c", 1003),__exception_result_var_b306=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_184), "06str.c", 1003))), come_pop_stackframe(), __exception_result_var_b306) ,        0;        _for_condtionalA12=        !(come_push_stackframe("06str.c", 1003),__exception_result_var_b307=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_184), "06str.c", 1003))), come_pop_stackframe(), __exception_result_var_b307) ,        _for_condtionalA12;        it_185=(come_push_stackframe("06str.c", 1003),__exception_result_var_b308=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_184), "06str.c", 1003))), come_pop_stackframe(), __exception_result_var_b308) ,        0        ){
            # 1004 "06str.c"
            (come_push_stackframe("06str.c", 1004),__exception_result_var_b309=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_183, "06str.c", 1004))->mGenericsTypes, "06str.c", 1004)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_clone(it_185))))), come_pop_stackframe(), __exception_result_var_b309);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
            if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value297;
            __freed_obj__ = 0;
        }
        if(o2_saved_184 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_184, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 1007 "06str.c"
        obj_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1007))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value298);
        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value298;
        __freed_obj__ = 0;
        # 1009 "06str.c"
        num_string_187=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1009),__exception_result_var_b310=((struct buffer*)(right_value300=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1009))))))), come_pop_stackframe(), __exception_result_var_b310));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value299);
        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value299;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value300);
        if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value300;
        __freed_obj__ = 0;
        # 1011 "06str.c"
        (come_push_stackframe("06str.c", 1011),__exception_result_var_b311=buffer_append_str(((struct buffer*)come_null_check(num_string_187, "06str.c", 1011)),"1"), come_pop_stackframe(), __exception_result_var_b311);
        # 1013 "06str.c"
        type2_188=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 1013),__exception_result_var_b312=((struct sType*)(right_value301=solve_generics(type_183,type_183,info))), come_pop_stackframe(), __exception_result_var_b312));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value301);
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value301;
        __freed_obj__ = 0;
        # 1015 "06str.c"
        type_name_189=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1015),__exception_result_var_b313=((char*)(right_value302=make_type_name_string(type2_188,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b313));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value302);
        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value302;
        __freed_obj__ = 0;
        # 1017 "06str.c"
        __dec_obj107=((struct CVALUE*)come_null_check(obj_value_186, "06str.c", 1017))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_186, "06str.c", 1017))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1017),__exception_result_var_b315=((char*)(right_value304=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_189,type_name_189,(come_push_stackframe("06str.c", 1017),__exception_result_var_b314=((char*)(right_value303=buffer_to_string(((struct buffer*)come_null_check(num_string_187, "06str.c", 1017))))), come_pop_stackframe(), __exception_result_var_b314),((struct sInfo*)come_null_check(info, "06str.c", 1017))->sname,((struct sInfo*)come_null_check(info, "06str.c", 1017))->sline))), come_pop_stackframe(), __exception_result_var_b315));
        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value303);
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value303;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value304);
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value304;
        __freed_obj__ = 0;
        # 1019 "06str.c"
        type3_190=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(type2_188))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value305);
        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value305;
        __freed_obj__ = 0;
        # 1020 "06str.c"
        ((struct sType*)come_null_check(type3_190, "06str.c", 1020))->mPointerNum++;
        # 1021 "06str.c"
        ((struct sType*)come_null_check(type3_190, "06str.c", 1021))->mHeap=(_Bool)1;
        # 1022 "06str.c"
        ((struct sType*)come_null_check(type2_188, "06str.c", 1022))->mHeap=(_Bool)1;
        # 1023 "06str.c"
        __dec_obj108=((struct CVALUE*)come_null_check(obj_value_186, "06str.c", 1023))->type;
        ((struct CVALUE*)come_null_check(obj_value_186, "06str.c", 1023))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(type2_188))));
        if(__dec_obj108) { come_call_finalizer(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value306);
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value306;
        __freed_obj__ = 0;
        # 1024 "06str.c"
        __dec_obj109=((struct CVALUE*)come_null_check(obj_value_186, "06str.c", 1024))->c_value;
        ((struct CVALUE*)come_null_check(obj_value_186, "06str.c", 1024))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1024),__exception_result_var_b316=((char*)(right_value307=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_186, "06str.c", 1024))->c_value,(struct sType*)come_increment_ref_count(type3_190),info))), come_pop_stackframe(), __exception_result_var_b316));
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value307);
        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value307;
        __freed_obj__ = 0;
        # 1025 "06str.c"
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_186, "06str.c", 1025))->type, "06str.c", 1025))->mPointerNum++;
        # 1026 "06str.c"
        ((struct CVALUE*)come_null_check(obj_value_186, "06str.c", 1026))->var=((void*)0);
        # 1028 "06str.c"
        obj_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(type2_188))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value308);
        if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value308;
        __freed_obj__ = 0;
        # 1029 "06str.c"
        fun_name_192="initialize";
        # 1031 "06str.c"
        generics_fun_name_193=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1031),__exception_result_var_b319=((char*)(right_value311=string_to_string(((char*)come_null_check((come_push_stackframe("06str.c", 1031),__exception_result_var_b318=((char*)(right_value310=make_generics_function(obj_type_191,(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1031),__exception_result_var_b317=((char*)(right_value309=__builtin_string(fun_name_192))), come_pop_stackframe(), __exception_result_var_b317)),info))), come_pop_stackframe(), __exception_result_var_b318), "06str.c", 1031))))), come_pop_stackframe(), __exception_result_var_b319));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value309);
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value309;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value310);
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value310;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value311);
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[21] = right_value311;
        __freed_obj__ = 0;
        # 1033 "06str.c"
        fun_194=(come_push_stackframe("06str.c", 1033),__exception_result_var_b320=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1033))->funcs, "06str.c", 1033)),generics_fun_name_193,((void*)0)), come_pop_stackframe(), __exception_result_var_b320);
        # 1046 "06str.c"
        # 1035 "06str.c"
        if(_if_conditional190=fun_194==((void*)0),        _if_conditional190) {
            # 1036 "06str.c"
            __dec_obj110=generics_fun_name_193;
            generics_fun_name_193=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1036),__exception_result_var_b322=((char*)(right_value313=create_method_name(obj_type_191,(_Bool)0,(come_push_stackframe("06str.c", 1036),__exception_result_var_b321=((char*)(right_value312=__builtin_string(fun_name_192))), come_pop_stackframe(), __exception_result_var_b321),info))), come_pop_stackframe(), __exception_result_var_b322));
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
            if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value312;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value313);
            if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value313;
            __freed_obj__ = 0;
            # 1038 "06str.c"
            fun_194=(come_push_stackframe("06str.c", 1038),__exception_result_var_b323=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1038))->funcs, "06str.c", 1038)),generics_fun_name_193,((void*)0)), come_pop_stackframe(), __exception_result_var_b323);
            # 1044 "06str.c"
            # 1040 "06str.c"
            if(_if_conditional191=fun_194==((void*)0),            _if_conditional191) {
                # 1041 "06str.c"
                (come_push_stackframe("06str.c", 1041),err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_193,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1041))->come_fun, "06str.c", 1041))->mName),come_pop_stackframe());
                # 1042 "06str.c"
                __result146__ = (_Bool)1;
                if(mNoSolvedGenericsType_180 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(true_node_181 && !__freed_obj__) { true_node_181 = come_decrement_ref_count(true_node_181, ((struct sNode*)true_node_181)->finalize, ((struct sNode*)true_node_181)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_182, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_183 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_183, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_186 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_187 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_189 && !__freed_obj__) { type_name_189 = come_decrement_ref_count(type_name_189, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_193 && !__freed_obj__) { generics_fun_name_193 = come_decrement_ref_count(generics_fun_name_193, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_177 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_178 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result146__;
            }
        }
        # 1046 "06str.c"
        result_type_195=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(((struct sFun*)come_null_check(fun_194, "06str.c", 1046))->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value314);
        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[22] = right_value314;
        __freed_obj__ = 0;
        # 1047 "06str.c"
        ((struct sType*)come_null_check(result_type_195, "06str.c", 1047))->mStatic=(_Bool)0;
        # 1049 "06str.c"
        come_params_196=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 1049),__exception_result_var_b324=((struct list$1CVALUEph*)(right_value316=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value315=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1049))))))), come_pop_stackframe(), __exception_result_var_b324));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value315);
        if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[23] = right_value315;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value316);
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[24] = right_value316;
        __freed_obj__ = 0;
        # 1054 "06str.c"
        # 1051 "06str.c"
        if(_if_conditional192=((struct sType*)come_null_check((come_push_stackframe("06str.c", 1051),__exception_result_var_b325=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_194, "06str.c", 1051))->mParamTypes,0), come_pop_stackframe(), __exception_result_var_b325), "06str.c", 1051))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_186, "06str.c", 1051))->type, "06str.c", 1051))->mHeap,        _if_conditional192) {
            # 1052 "06str.c"
            (come_push_stackframe("06str.c", 1052),std_move((come_push_stackframe("06str.c", 1052),__exception_result_var_b326=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_194, "06str.c", 1052))->mParamTypes,0), come_pop_stackframe(), __exception_result_var_b326),((struct CVALUE*)come_null_check(obj_value_186, "06str.c", 1052))->type,obj_value_186,info),come_pop_stackframe());
        }
        # 1054 "06str.c"
        (come_push_stackframe("06str.c", 1054),__exception_result_var_b327=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_196, "06str.c", 1054)),(struct CVALUE*)come_increment_ref_count(obj_value_186)), come_pop_stackframe(), __exception_result_var_b327);
        # 1056 "06str.c"
        i_197=1;
        # 1068 "06str.c"
        for(
        o2_saved_198=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_178)),it_199=(come_push_stackframe("06str.c", 1057),__exception_result_var_b328=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_198), "06str.c", 1057))), come_pop_stackframe(), __exception_result_var_b328) ,        0;        _for_condtionalA13=        !(come_push_stackframe("06str.c", 1057),__exception_result_var_b329=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_198), "06str.c", 1057))), come_pop_stackframe(), __exception_result_var_b329) ,        _for_condtionalA13;        it_199=(come_push_stackframe("06str.c", 1057),__exception_result_var_b330=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_198), "06str.c", 1057))), come_pop_stackframe(), __exception_result_var_b330) ,        0        ){
            # 1058 "06str.c"
            come_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value317=CVALUE_clone(it_199))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317);
            if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value317;
            __freed_obj__ = 0;
            # 1063 "06str.c"
            # 1060 "06str.c"
            if(_if_conditional193=(come_push_stackframe("06str.c", 1060),__exception_result_var_b331=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_194, "06str.c", 1060))->mParamTypes,i_197), come_pop_stackframe(), __exception_result_var_b331)&&((struct sType*)come_null_check((come_push_stackframe("06str.c", 1060),__exception_result_var_b332=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_194, "06str.c", 1060))->mParamTypes,i_197), come_pop_stackframe(), __exception_result_var_b332), "06str.c", 1060))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_200, "06str.c", 1060))->type, "06str.c", 1060))->mHeap,            _if_conditional193) {
                # 1061 "06str.c"
                (come_push_stackframe("06str.c", 1061),std_move((come_push_stackframe("06str.c", 1061),__exception_result_var_b333=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_194, "06str.c", 1061))->mParamTypes,i_197), come_pop_stackframe(), __exception_result_var_b333),((struct CVALUE*)come_null_check(come_value_200, "06str.c", 1061))->type,come_value_200,info),come_pop_stackframe());
            }
            # 1063 "06str.c"
            (come_push_stackframe("06str.c", 1063),__exception_result_var_b334=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_196, "06str.c", 1063)),(struct CVALUE*)come_increment_ref_count(come_value_200)), come_pop_stackframe(), __exception_result_var_b334);
            # 1065 "06str.c"
            i_197++;
            if(come_value_200 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_200, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_198 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_198, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 1068 "06str.c"
        buf_201=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1068),__exception_result_var_b335=((struct buffer*)(right_value319=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value318=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1068))))))), come_pop_stackframe(), __exception_result_var_b335));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value318);
        if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[25] = right_value318;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value319);
        if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[26] = right_value319;
        __freed_obj__ = 0;
        # 1070 "06str.c"
        (come_push_stackframe("06str.c", 1070),__exception_result_var_b336=buffer_append_str(((struct buffer*)come_null_check(buf_201, "06str.c", 1070)),generics_fun_name_193), come_pop_stackframe(), __exception_result_var_b336);
        # 1071 "06str.c"
        (come_push_stackframe("06str.c", 1071),__exception_result_var_b337=buffer_append_str(((struct buffer*)come_null_check(buf_201, "06str.c", 1071)),"("), come_pop_stackframe(), __exception_result_var_b337);
        # 1073 "06str.c"
        j_202=0;
        # 1083 "06str.c"
        for(
        o2_saved_203=(struct list$1CVALUEph*)come_increment_ref_count((come_params_196)),it_204=(come_push_stackframe("06str.c", 1074),__exception_result_var_b338=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_203), "06str.c", 1074))), come_pop_stackframe(), __exception_result_var_b338) ,        0;        _for_condtionalA14=        !(come_push_stackframe("06str.c", 1074),__exception_result_var_b339=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_203), "06str.c", 1074))), come_pop_stackframe(), __exception_result_var_b339) ,        _for_condtionalA14;        it_204=(come_push_stackframe("06str.c", 1074),__exception_result_var_b340=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_203), "06str.c", 1074))), come_pop_stackframe(), __exception_result_var_b340) ,        0        ){
            # 1075 "06str.c"
            (come_push_stackframe("06str.c", 1075),__exception_result_var_b341=buffer_append_str(((struct buffer*)come_null_check(buf_201, "06str.c", 1075)),((struct CVALUE*)come_null_check(it_204, "06str.c", 1075))->c_value), come_pop_stackframe(), __exception_result_var_b341);
            # 1081 "06str.c"
            # 1077 "06str.c"
            if(_if_conditional194=j_202!=(come_push_stackframe("06str.c", 1077),__exception_result_var_b342=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_196, "06str.c", 1077))), come_pop_stackframe(), __exception_result_var_b342)-1,            _if_conditional194) {
                # 1078 "06str.c"
                (come_push_stackframe("06str.c", 1078),__exception_result_var_b343=buffer_append_str(((struct buffer*)come_null_check(buf_201, "06str.c", 1078)),","), come_pop_stackframe(), __exception_result_var_b343);
            }
            # 1081 "06str.c"
            j_202++;
        }
        if(o2_saved_203 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_203, (void*)0, (void*)0, 0, 0, 0, 0); }
        # 1083 "06str.c"
        (come_push_stackframe("06str.c", 1083),__exception_result_var_b344=buffer_append_str(((struct buffer*)come_null_check(buf_201, "06str.c", 1083)),")"), come_pop_stackframe(), __exception_result_var_b344);
        # 1085 "06str.c"
        come_value3_205=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1085))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value320);
        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[27] = right_value320;
        __freed_obj__ = 0;
        # 1087 "06str.c"
        __dec_obj111=((struct CVALUE*)come_null_check(come_value3_205, "06str.c", 1087))->c_value;
        ((struct CVALUE*)come_null_check(come_value3_205, "06str.c", 1087))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1087),__exception_result_var_b345=((char*)(right_value321=buffer_to_string(((struct buffer*)come_null_check(buf_201, "06str.c", 1087))))), come_pop_stackframe(), __exception_result_var_b345));
        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value321);
        if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[28] = right_value321;
        __freed_obj__ = 0;
        # 1093 "06str.c"
        # 1089 "06str.c"
        if(_if_conditional195=((struct sType*)come_null_check(result_type_195, "06str.c", 1089))->mHeap,        _if_conditional195) {
            # 1090 "06str.c"
            __dec_obj112=((struct CVALUE*)come_null_check(come_value3_205, "06str.c", 1090))->c_value;
            ((struct CVALUE*)come_null_check(come_value3_205, "06str.c", 1090))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1090),__exception_result_var_b347=((char*)(right_value323=append_object_to_right_values((come_push_stackframe("06str.c", 1090),__exception_result_var_b346=((char*)(right_value322=buffer_to_string(((struct buffer*)come_null_check(buf_201, "06str.c", 1090))))), come_pop_stackframe(), __exception_result_var_b346),(struct sType*)come_increment_ref_count(result_type_195),info))), come_pop_stackframe(), __exception_result_var_b347));
            if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
            if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value322;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value323);
            if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { right_value323 = come_decrement_ref_count(right_value323, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value323;
            __freed_obj__ = 0;
        }
        # 1093 "06str.c"
        __dec_obj113=((struct CVALUE*)come_null_check(come_value3_205, "06str.c", 1093))->type;
        ((struct CVALUE*)come_null_check(come_value3_205, "06str.c", 1093))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(result_type_195))));
        if(__dec_obj113) { come_call_finalizer(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[29] = right_value324;
        __freed_obj__ = 0;
        # 1094 "06str.c"
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value3_205, "06str.c", 1094))->type, "06str.c", 1094))->mStatic=(_Bool)0;
        # 1095 "06str.c"
        ((struct CVALUE*)come_null_check(come_value3_205, "06str.c", 1095))->var=((void*)0);
        # 1097 "06str.c"
        (come_push_stackframe("06str.c", 1097),add_come_last_code(info,"%s;\n",(come_push_stackframe("06str.c", 1097),__exception_result_var_b348=((char*)(right_value325=buffer_to_string(((struct buffer*)come_null_check(buf_201, "06str.c", 1097))))), come_pop_stackframe(), __exception_result_var_b348)),come_pop_stackframe());
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value325);
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[30] = right_value325;
        __freed_obj__ = 0;
        # 1099 "06str.c"
        (come_push_stackframe("06str.c", 1099),__exception_result_var_b349=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1099))->stack, "06str.c", 1099)),(struct CVALUE*)come_increment_ref_count(come_value3_205)), come_pop_stackframe(), __exception_result_var_b349);
        if(mNoSolvedGenericsType_180 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_180, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(true_node_181 && !__freed_obj__) { true_node_181 = come_decrement_ref_count(true_node_181, ((struct sNode*)true_node_181)->finalize, ((struct sNode*)true_node_181)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_182, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_183 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_183, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_186 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_187 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_187, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_188, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_189 && !__freed_obj__) { type_name_189 = come_decrement_ref_count(type_name_189, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_190, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_193 && !__freed_obj__) { generics_fun_name_193 = come_decrement_ref_count(generics_fun_name_193, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_195, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_196 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_196, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_201 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_201, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_205 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_205, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    # 1102 "06str.c"
    __result147__ = (_Bool)1;
    if(tuple_types_177 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_178 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_178, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result147__;
    if(tuple_types_177 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_178 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_178, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSomeNode_sline(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1107 "06str.c"
    __result148__ = ((struct sSomeNode*)come_null_check(self, "06str.c", 1107))->sline;
    return __result148__;
}

char* sSomeNode_sname(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value326;
char* __exception_result_var_b350;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value326, 0, sizeof(void*));
    # 1112 "06str.c"
    __result149__ = __result_obj__ = (come_push_stackframe("06str.c", 1112),__exception_result_var_b350=((char*)(right_value326=__builtin_string(((struct sSomeNode*)come_null_check(self, "06str.c", 1112))->sname))), come_pop_stackframe(), __exception_result_var_b350);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value326);
    if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value326;
    __freed_obj__ = 0;
    return __result149__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj114;
struct list$1sNodeph* __dec_obj115;
void* right_value327;
char* __exception_result_var_b351;
char* __dec_obj116;
struct sMapNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value327, 0, sizeof(void*));
    # 1125 "06str.c"
    __dec_obj114=((struct sMapNode*)come_null_check(self, "06str.c", 1125))->map_key_elements;
    ((struct sMapNode*)come_null_check(self, "06str.c", 1125))->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    if(__dec_obj114) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1126 "06str.c"
    __dec_obj115=((struct sMapNode*)come_null_check(self, "06str.c", 1126))->map_elements;
    ((struct sMapNode*)come_null_check(self, "06str.c", 1126))->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    if(__dec_obj115) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1128 "06str.c"
    ((struct sMapNode*)come_null_check(self, "06str.c", 1128))->sline=((struct sInfo*)come_null_check(info, "06str.c", 1128))->sline;
    # 1129 "06str.c"
    __dec_obj116=((struct sMapNode*)come_null_check(self, "06str.c", 1129))->sname;
    ((struct sMapNode*)come_null_check(self, "06str.c", 1129))->sname=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1129),__exception_result_var_b351=((char*)(right_value327=__builtin_string(((struct sInfo*)come_null_check(info, "06str.c", 1129))->sname))), come_pop_stackframe(), __exception_result_var_b351));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value327;
    __freed_obj__ = 0;
    # 1131 "06str.c"
    __result150__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result150__;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sMapNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1136 "06str.c"
    __result151__ = (_Bool)0;
    return __result151__;
}

char* sMapNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value328;
char* __exception_result_var_b352;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value328, 0, sizeof(void*));
    # 1141 "06str.c"
    __result152__ = __result_obj__ = (come_push_stackframe("06str.c", 1141),__exception_result_var_b352=((char*)(right_value328=__builtin_string("sMapNode"))), come_pop_stackframe(), __exception_result_var_b352);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value328;
    __freed_obj__ = 0;
    return __result152__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* map_key_elements_206;
struct list$1sNodeph* map_elements_207;
void* right_value329;
void* right_value330;
struct list$1CVALUEph* __exception_result_var_b353;
struct list$1CVALUEph* key_params_208;
void* right_value331;
void* right_value332;
struct list$1CVALUEph* __exception_result_var_b354;
struct list$1CVALUEph* element_params_209;
struct sType* map_key_type_210;
struct sType* map_element_type_211;
int i_212;
int __exception_result_var_b355;
_Bool _for_condtionalA15;
struct sNode* __exception_result_var_b357;
struct sNode* key_elements_216;
struct sNode* __exception_result_var_b358;
struct sNode* elements_217;
_Bool __exception_result_var_b359;
_Bool _if_conditional201;
_Bool __result155__;
void* right_value333;
struct CVALUE* __exception_result_var_b360;
struct CVALUE* come_value_218;
struct list$1CVALUEph* __exception_result_var_b361;
_Bool __exception_result_var_b362;
_Bool _if_conditional202;
_Bool __result156__;
void* right_value334;
struct CVALUE* __exception_result_var_b363;
struct CVALUE* come_value2_219;
struct list$1CVALUEph* __exception_result_var_b364;
void* right_value335;
struct sType* __dec_obj117;
void* right_value336;
struct sType* __dec_obj118;
static int map_value_num_220=0;
void* right_value337;
struct sType* key_type_values_221;
int __exception_result_var_b365;
void* right_value338;
struct sNode* __exception_result_var_b366;
struct list$1sNodeph* __exception_result_var_b367;
void* right_value339;
char* __exception_result_var_b368;
char* var_name_222;
void* right_value340;
struct sVar* __exception_result_var_b369;
struct sVar* var__223;
void* right_value341;
char* __exception_result_var_b370;
void* right_value342;
struct sType* element_type_values_224;
int __exception_result_var_b371;
void* right_value343;
struct sNode* __exception_result_var_b372;
struct list$1sNodeph* __exception_result_var_b373;
void* right_value344;
char* __exception_result_var_b374;
char* var_name2_225;
void* right_value345;
struct sVar* __exception_result_var_b375;
struct sVar* var2__226;
void* right_value346;
char* __exception_result_var_b376;
void* right_value347;
void* right_value348;
struct buffer* __exception_result_var_b377;
struct buffer* source_227;
struct buffer* __exception_result_var_b378;
int i_228;
int __exception_result_var_b379;
_Bool _for_condtionalA16;
struct CVALUE* __exception_result_var_b380;
struct CVALUE* key_param_229;
struct CVALUE* __exception_result_var_b381;
struct CVALUE* element_param_230;
_Bool _if_conditional203;
void* right_value349;
char* __exception_result_var_b382;
struct buffer* __exception_result_var_b383;
void* right_value350;
char* __exception_result_var_b384;
struct buffer* __exception_result_var_b385;
_Bool _if_conditional204;
void* right_value351;
char* __exception_result_var_b386;
struct buffer* __exception_result_var_b387;
void* right_value352;
char* __exception_result_var_b388;
struct buffer* __exception_result_var_b389;
struct buffer* __exception_result_var_b390;
void* right_value353;
char* __exception_result_var_b391;
void* right_value354;
void* right_value355;
struct sType* __exception_result_var_b392;
struct sType* map_type_231;
void* right_value356;
struct list$1sTypeph* __exception_result_var_b393;
void* right_value357;
struct list$1sTypeph* __exception_result_var_b394;
void* right_value358;
struct sType* obj_type_232;
char* fun_name_233;
void* right_value359;
char* __exception_result_var_b395;
void* right_value360;
char* __exception_result_var_b396;
void* right_value361;
char* __exception_result_var_b397;
char* generics_fun_name_234;
struct sFun* __exception_result_var_b398;
struct sFun* fun_235;
_Bool _if_conditional205;
void* right_value362;
char* __exception_result_var_b399;
void* right_value363;
char* __exception_result_var_b400;
char* __dec_obj119;
struct sFun* __exception_result_var_b401;
_Bool _if_conditional206;
_Bool __result157__;
void* right_value364;
struct sType* result_type_236;
struct sType* type_237;
void* right_value365;
struct CVALUE* obj_value_238;
void* right_value366;
void* right_value367;
struct buffer* __exception_result_var_b402;
struct buffer* num_string_239;
struct buffer* __exception_result_var_b403;
void* right_value368;
struct sType* __exception_result_var_b404;
struct sType* type2_240;
void* right_value369;
char* __exception_result_var_b405;
char* type_name_241;
void* right_value370;
char* __exception_result_var_b406;
void* right_value371;
char* __exception_result_var_b407;
char* __dec_obj120;
void* right_value372;
struct sType* type3_242;
void* right_value373;
struct sType* __dec_obj121;
void* right_value374;
char* __exception_result_var_b408;
char* __dec_obj122;
void* right_value375;
void* right_value376;
struct list$1CVALUEph* __exception_result_var_b409;
struct list$1CVALUEph* come_params_243;
struct sType* __exception_result_var_b410;
_Bool _if_conditional207;
struct sType* __exception_result_var_b411;
struct list$1CVALUEph* __exception_result_var_b412;
void* right_value377;
struct CVALUE* come_value2_244;
int __exception_result_var_b413;
void* right_value378;
char* __exception_result_var_b414;
char* __dec_obj123;
struct sType* __dec_obj124;
struct list$1CVALUEph* __exception_result_var_b415;
void* right_value379;
struct CVALUE* come_value3_245;
void* right_value380;
char* __exception_result_var_b416;
char* __dec_obj125;
struct sType* __dec_obj126;
struct list$1CVALUEph* __exception_result_var_b417;
void* right_value381;
struct CVALUE* come_value4_246;
void* right_value382;
char* __exception_result_var_b418;
char* __dec_obj127;
struct sType* __dec_obj128;
struct list$1CVALUEph* __exception_result_var_b419;
void* right_value383;
void* right_value384;
struct buffer* __exception_result_var_b420;
struct buffer* buf_247;
struct buffer* __exception_result_var_b421;
struct buffer* __exception_result_var_b422;
int j_248;
struct list$1CVALUEph* o2_saved_249;
struct CVALUE* __exception_result_var_b423;
struct CVALUE* it_250;
_Bool __exception_result_var_b424;
_Bool _for_condtionalA17;
struct CVALUE* __exception_result_var_b425;
struct buffer* __exception_result_var_b426;
int __exception_result_var_b427;
_Bool _if_conditional208;
struct buffer* __exception_result_var_b428;
struct buffer* __exception_result_var_b429;
void* right_value385;
struct CVALUE* come_value5_251;
void* right_value386;
char* __exception_result_var_b430;
char* __dec_obj129;
_Bool _if_conditional209;
void* right_value387;
char* __exception_result_var_b431;
void* right_value388;
char* __exception_result_var_b432;
char* __dec_obj130;
void* right_value389;
struct sType* __dec_obj131;
void* right_value390;
char* __exception_result_var_b433;
struct list$1CVALUEph* __exception_result_var_b434;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&map_key_elements_206, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_207, 0, sizeof(struct list$1sNodeph*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&key_params_208, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&element_params_209, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_210, 0, sizeof(struct sType*));
memset(&map_element_type_211, 0, sizeof(struct sType*));
memset(&i_212, 0, sizeof(int));
memset(&key_elements_216, 0, sizeof(struct sNode*));
memset(&elements_217, 0, sizeof(struct sNode*));
memset(&right_value333, 0, sizeof(void*));
memset(&come_value_218, 0, sizeof(struct CVALUE*));
memset(&right_value334, 0, sizeof(void*));
memset(&come_value2_219, 0, sizeof(struct CVALUE*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&key_type_values_221, 0, sizeof(struct sType*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&var_name_222, 0, sizeof(char*));
memset(&right_value340, 0, sizeof(void*));
memset(&var__223, 0, sizeof(struct sVar*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&element_type_values_224, 0, sizeof(struct sType*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&var_name2_225, 0, sizeof(char*));
memset(&right_value345, 0, sizeof(void*));
memset(&var2__226, 0, sizeof(struct sVar*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&source_227, 0, sizeof(struct buffer*));
memset(&i_228, 0, sizeof(int));
memset(&key_param_229, 0, sizeof(struct CVALUE*));
memset(&element_param_230, 0, sizeof(struct CVALUE*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&map_type_231, 0, sizeof(struct sType*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&obj_type_232, 0, sizeof(struct sType*));
memset(&fun_name_233, 0, sizeof(char*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&generics_fun_name_234, 0, sizeof(char*));
memset(&fun_235, 0, sizeof(struct sFun*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&result_type_236, 0, sizeof(struct sType*));
memset(&type_237, 0, sizeof(struct sType*));
memset(&right_value365, 0, sizeof(void*));
memset(&obj_value_238, 0, sizeof(struct CVALUE*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&num_string_239, 0, sizeof(struct buffer*));
memset(&right_value368, 0, sizeof(void*));
memset(&type2_240, 0, sizeof(struct sType*));
memset(&right_value369, 0, sizeof(void*));
memset(&type_name_241, 0, sizeof(char*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&type3_242, 0, sizeof(struct sType*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&come_params_243, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value377, 0, sizeof(void*));
memset(&come_value2_244, 0, sizeof(struct CVALUE*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&come_value3_245, 0, sizeof(struct CVALUE*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&come_value4_246, 0, sizeof(struct CVALUE*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&buf_247, 0, sizeof(struct buffer*));
memset(&j_248, 0, sizeof(int));
memset(&o2_saved_249, 0, sizeof(struct list$1CVALUEph*));
memset(&it_250, 0, sizeof(struct CVALUE*));
memset(&right_value385, 0, sizeof(void*));
memset(&come_value5_251, 0, sizeof(struct CVALUE*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
    # 1146 "06str.c"
    map_key_elements_206=((struct sMapNode*)come_null_check(self, "06str.c", 1146))->map_key_elements;
    # 1147 "06str.c"
    map_elements_207=((struct sMapNode*)come_null_check(self, "06str.c", 1147))->map_elements;
    # 1149 "06str.c"
    key_params_208=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 1149),__exception_result_var_b353=((struct list$1CVALUEph*)(right_value330=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value329=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1149))))))), come_pop_stackframe(), __exception_result_var_b353));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value329;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value330);
    if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value330;
    __freed_obj__ = 0;
    # 1150 "06str.c"
    element_params_209=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 1150),__exception_result_var_b354=((struct list$1CVALUEph*)(right_value332=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value331=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1150))))))), come_pop_stackframe(), __exception_result_var_b354));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value331);
    if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value331;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value332);
    if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value332;
    __freed_obj__ = 0;
    # 1151 "06str.c"
    # 1152 "06str.c"
    # 1180 "06str.c"
    for(
    i_212=0 ,    0;    _for_condtionalA15=    i_212<(come_push_stackframe("06str.c", 1154),__exception_result_var_b355=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(map_key_elements_206, "06str.c", 1154))), come_pop_stackframe(), __exception_result_var_b355) ,    _for_condtionalA15;    i_212++ ,    0    ){
        # 1155 "06str.c"
        key_elements_216=(come_push_stackframe("06str.c", 1155),__exception_result_var_b357=list$1sNodephp_operator_load_element(map_key_elements_206,i_212), come_pop_stackframe(), __exception_result_var_b357);
        # 1156 "06str.c"
        elements_217=(come_push_stackframe("06str.c", 1156),__exception_result_var_b358=list$1sNodephp_operator_load_element(map_elements_207,i_212), come_pop_stackframe(), __exception_result_var_b358);
        # 1162 "06str.c"
        # 1158 "06str.c"
        if(_if_conditional201=!(come_push_stackframe("06str.c", 1158),__exception_result_var_b359=node_compile(key_elements_216,info), come_pop_stackframe(), __exception_result_var_b359),        _if_conditional201) {
            # 1159 "06str.c"
            __result155__ = (_Bool)0;
            if(key_params_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_208, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_209 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result155__;
        }
        # 1162 "06str.c"
        come_value_218=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 1162),__exception_result_var_b360=((struct CVALUE*)(right_value333=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b360));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value333;
        __freed_obj__ = 0;
        # 1163 "06str.c"
        (come_push_stackframe("06str.c", 1163),dec_stack_ptr(1,info),come_pop_stackframe());
        # 1165 "06str.c"
        (come_push_stackframe("06str.c", 1165),__exception_result_var_b361=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(key_params_208, "06str.c", 1165)),(struct CVALUE*)come_increment_ref_count(come_value_218)), come_pop_stackframe(), __exception_result_var_b361);
        # 1171 "06str.c"
        # 1167 "06str.c"
        if(_if_conditional202=!(come_push_stackframe("06str.c", 1167),__exception_result_var_b362=node_compile(elements_217,info), come_pop_stackframe(), __exception_result_var_b362),        _if_conditional202) {
            # 1168 "06str.c"
            __result156__ = (_Bool)0;
            if(come_value_218 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_218, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_params_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_208, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_209 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result156__;
        }
        # 1171 "06str.c"
        come_value2_219=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 1171),__exception_result_var_b363=((struct CVALUE*)(right_value334=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b363));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value334);
        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value334;
        __freed_obj__ = 0;
        # 1172 "06str.c"
        (come_push_stackframe("06str.c", 1172),dec_stack_ptr(1,info),come_pop_stackframe());
        # 1174 "06str.c"
        (come_push_stackframe("06str.c", 1174),__exception_result_var_b364=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(element_params_209, "06str.c", 1174)),(struct CVALUE*)come_increment_ref_count(come_value2_219)), come_pop_stackframe(), __exception_result_var_b364);
        # 1176 "06str.c"
        __dec_obj117=map_key_type_210;
        map_key_type_210=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=sType_clone(((struct CVALUE*)come_null_check(come_value_218, "06str.c", 1176))->type))));
        if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value335);
        if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value335;
        __freed_obj__ = 0;
        # 1177 "06str.c"
        __dec_obj118=map_element_type_211;
        map_element_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(((struct CVALUE*)come_null_check(come_value2_219, "06str.c", 1177))->type))));
        if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value336);
        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value336;
        __freed_obj__ = 0;
        if(come_value_218 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_218, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_219 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_219, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    # 1180 "06str.c"
    # 1182 "06str.c"
    key_type_values_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_clone(map_key_type_210))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value337);
    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value337;
    __freed_obj__ = 0;
    # 1183 "06str.c"
    (come_push_stackframe("06str.c", 1183),__exception_result_var_b367=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(key_type_values_221, "06str.c", 1183))->mArrayNum, "06str.c", 1183)),(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1183),__exception_result_var_b366=((struct sNode*)(right_value338=create_int_node((come_push_stackframe("06str.c", 1183),__exception_result_var_b365=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_208, "06str.c", 1183))), come_pop_stackframe(), __exception_result_var_b365),info))), come_pop_stackframe(), __exception_result_var_b366))), come_pop_stackframe(), __exception_result_var_b367);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value338);
    if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[5] = right_value338;
    __freed_obj__ = 0;
    # 1184 "06str.c"
    ((struct sType*)come_null_check(key_type_values_221, "06str.c", 1184))->mHeap=(_Bool)0;
    # 1186 "06str.c"
    var_name_222=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1186),__exception_result_var_b368=((char*)(right_value339=xsprintf("__map_keys%d__",++map_value_num_220))), come_pop_stackframe(), __exception_result_var_b368));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value339);
    if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value339;
    __freed_obj__ = 0;
    # 1188 "06str.c"
    (come_push_stackframe("06str.c", 1188),add_variable_to_table(var_name_222,(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_clone(key_type_values_221)))),info),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value340);
    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value340;
    __freed_obj__ = 0;
    # 1190 "06str.c"
    var__223=(come_push_stackframe("06str.c", 1190),__exception_result_var_b369=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 1190))->lv_table,var_name_222), come_pop_stackframe(), __exception_result_var_b369);
    # 1192 "06str.c"
    (come_push_stackframe("06str.c", 1192),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("06str.c", 1192),__exception_result_var_b370=((char*)(right_value341=make_define_var(key_type_values_221,((struct sVar*)come_null_check(var__223, "06str.c", 1192))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b370)),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value341);
    if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value341;
    __freed_obj__ = 0;
    # 1194 "06str.c"
    element_type_values_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_clone(map_element_type_211))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value342);
    if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value342;
    __freed_obj__ = 0;
    # 1195 "06str.c"
    (come_push_stackframe("06str.c", 1195),__exception_result_var_b373=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(element_type_values_224, "06str.c", 1195))->mArrayNum, "06str.c", 1195)),(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1195),__exception_result_var_b372=((struct sNode*)(right_value343=create_int_node((come_push_stackframe("06str.c", 1195),__exception_result_var_b371=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(element_params_209, "06str.c", 1195))), come_pop_stackframe(), __exception_result_var_b371),info))), come_pop_stackframe(), __exception_result_var_b372))), come_pop_stackframe(), __exception_result_var_b373);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value343);
    if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[10] = right_value343;
    __freed_obj__ = 0;
    # 1196 "06str.c"
    ((struct sType*)come_null_check(element_type_values_224, "06str.c", 1196))->mHeap=(_Bool)0;
    # 1198 "06str.c"
    var_name2_225=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1198),__exception_result_var_b374=((char*)(right_value344=xsprintf("__map_element%d__",map_value_num_220))), come_pop_stackframe(), __exception_result_var_b374));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value344);
    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value344;
    __freed_obj__ = 0;
    # 1200 "06str.c"
    (come_push_stackframe("06str.c", 1200),add_variable_to_table(var_name2_225,(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_clone(element_type_values_224)))),info),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value345);
    if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value345;
    __freed_obj__ = 0;
    # 1202 "06str.c"
    var2__226=(come_push_stackframe("06str.c", 1202),__exception_result_var_b375=get_variable_from_table(((struct sInfo*)come_null_check(info, "06str.c", 1202))->lv_table,var_name2_225), come_pop_stackframe(), __exception_result_var_b375);
    # 1204 "06str.c"
    (come_push_stackframe("06str.c", 1204),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("06str.c", 1204),__exception_result_var_b376=((char*)(right_value346=make_define_var(element_type_values_224,((struct sVar*)come_null_check(var2__226, "06str.c", 1204))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b376)),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value346);
    if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value346;
    __freed_obj__ = 0;
    # 1206 "06str.c"
    source_227=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1206),__exception_result_var_b377=((struct buffer*)(right_value348=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value347=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1206))))))), come_pop_stackframe(), __exception_result_var_b377));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value347);
    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value347;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value348);
    if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value348;
    __freed_obj__ = 0;
    # 1208 "06str.c"
    (come_push_stackframe("06str.c", 1208),__exception_result_var_b378=buffer_append_str(((struct buffer*)come_null_check(source_227, "06str.c", 1208)),"{"), come_pop_stackframe(), __exception_result_var_b378);
    # 1229 "06str.c"
    for(
    i_228=0 ,    0;    _for_condtionalA16=    i_228<(come_push_stackframe("06str.c", 1210),__exception_result_var_b379=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_208, "06str.c", 1210))), come_pop_stackframe(), __exception_result_var_b379) ,    _for_condtionalA16;    i_228++ ,    0    ){
        # 1211 "06str.c"
        key_param_229=(come_push_stackframe("06str.c", 1211),__exception_result_var_b380=list$1CVALUEphp_operator_load_element(key_params_208,i_228), come_pop_stackframe(), __exception_result_var_b380);
        # 1212 "06str.c"
        element_param_230=(come_push_stackframe("06str.c", 1212),__exception_result_var_b381=list$1CVALUEphp_operator_load_element(element_params_209,i_228), come_pop_stackframe(), __exception_result_var_b381);
        # 1221 "06str.c"
        # 1214 "06str.c"
        if(_if_conditional203=((struct sType*)come_null_check(map_key_type_210, "06str.c", 1214))->mHeap,        _if_conditional203) {
            # 1215 "06str.c"
            (come_push_stackframe("06str.c", 1215),__exception_result_var_b383=buffer_append_str(((struct buffer*)come_null_check(source_227, "06str.c", 1215)),(come_push_stackframe("06str.c", 1215),__exception_result_var_b382=((char*)(right_value349=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var__223, "06str.c", 1215))->mCValueName,i_228,((struct CVALUE*)come_null_check(key_param_229, "06str.c", 1215))->c_value))), come_pop_stackframe(), __exception_result_var_b382)), come_pop_stackframe(), __exception_result_var_b383);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value349;
            __freed_obj__ = 0;
        }
        else {
            # 1218 "06str.c"
            (come_push_stackframe("06str.c", 1218),__exception_result_var_b385=buffer_append_str(((struct buffer*)come_null_check(source_227, "06str.c", 1218)),(come_push_stackframe("06str.c", 1218),__exception_result_var_b384=((char*)(right_value350=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var__223, "06str.c", 1218))->mCValueName,i_228,((struct CVALUE*)come_null_check(key_param_229, "06str.c", 1218))->c_value))), come_pop_stackframe(), __exception_result_var_b384)), come_pop_stackframe(), __exception_result_var_b385);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value350);
            if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value350;
            __freed_obj__ = 0;
        }
        # 1227 "06str.c"
        # 1221 "06str.c"
        if(_if_conditional204=((struct sType*)come_null_check(map_element_type_211, "06str.c", 1221))->mHeap,        _if_conditional204) {
            # 1222 "06str.c"
            (come_push_stackframe("06str.c", 1222),__exception_result_var_b387=buffer_append_str(((struct buffer*)come_null_check(source_227, "06str.c", 1222)),(come_push_stackframe("06str.c", 1222),__exception_result_var_b386=((char*)(right_value351=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(var2__226, "06str.c", 1222))->mCValueName,i_228,((struct CVALUE*)come_null_check(element_param_230, "06str.c", 1222))->c_value))), come_pop_stackframe(), __exception_result_var_b386)), come_pop_stackframe(), __exception_result_var_b387);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value351);
            if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value351;
            __freed_obj__ = 0;
        }
        else {
            # 1225 "06str.c"
            (come_push_stackframe("06str.c", 1225),__exception_result_var_b389=buffer_append_str(((struct buffer*)come_null_check(source_227, "06str.c", 1225)),(come_push_stackframe("06str.c", 1225),__exception_result_var_b388=((char*)(right_value352=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(var2__226, "06str.c", 1225))->mCValueName,i_228,((struct CVALUE*)come_null_check(element_param_230, "06str.c", 1225))->c_value))), come_pop_stackframe(), __exception_result_var_b388)), come_pop_stackframe(), __exception_result_var_b389);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
            if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { right_value352 = come_decrement_ref_count(right_value352, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value352;
            __freed_obj__ = 0;
        }
    }
    # 1229 "06str.c"
    (come_push_stackframe("06str.c", 1229),__exception_result_var_b390=buffer_append_str(((struct buffer*)come_null_check(source_227, "06str.c", 1229)),"}"), come_pop_stackframe(), __exception_result_var_b390);
    # 1231 "06str.c"
    (come_push_stackframe("06str.c", 1231),add_come_code(info,"%s",(come_push_stackframe("06str.c", 1231),__exception_result_var_b391=((char*)(right_value353=buffer_to_string(((struct buffer*)come_null_check(source_227, "06str.c", 1231))))), come_pop_stackframe(), __exception_result_var_b391)),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value353);
    if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value353;
    __freed_obj__ = 0;
    # 1233 "06str.c"
    map_type_231=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 1233),__exception_result_var_b392=((struct sType*)(right_value355=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value354=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1233)))),"map",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b392));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value354);
    if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value354;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value355);
    if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value355;
    __freed_obj__ = 0;
    # 1234 "06str.c"
    (come_push_stackframe("06str.c", 1234),__exception_result_var_b393=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(map_type_231, "06str.c", 1234))->mGenericsTypes, "06str.c", 1234)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value356=sType_clone(map_key_type_210))))), come_pop_stackframe(), __exception_result_var_b393);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value356);
    if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value356;
    __freed_obj__ = 0;
    # 1235 "06str.c"
    (come_push_stackframe("06str.c", 1235),__exception_result_var_b394=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(map_type_231, "06str.c", 1235))->mGenericsTypes, "06str.c", 1235)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value357=sType_clone(map_element_type_211))))), come_pop_stackframe(), __exception_result_var_b394);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value357);
    if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[20] = right_value357;
    __freed_obj__ = 0;
    # 1237 "06str.c"
    obj_type_232=(struct sType*)come_increment_ref_count(((struct sType*)(right_value358=sType_clone(map_type_231))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value358);
    if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[21] = right_value358;
    __freed_obj__ = 0;
    # 1238 "06str.c"
    fun_name_233="initialize_with_values";
    # 1240 "06str.c"
    generics_fun_name_234=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1240),__exception_result_var_b397=((char*)(right_value361=string_to_string(((char*)come_null_check((come_push_stackframe("06str.c", 1240),__exception_result_var_b396=((char*)(right_value360=make_generics_function(obj_type_232,(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1240),__exception_result_var_b395=((char*)(right_value359=__builtin_string(fun_name_233))), come_pop_stackframe(), __exception_result_var_b395)),info))), come_pop_stackframe(), __exception_result_var_b396), "06str.c", 1240))))), come_pop_stackframe(), __exception_result_var_b397));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value359);
    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[22] = right_value359;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value360);
    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[23] = right_value360;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value361);
    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[24] = right_value361;
    __freed_obj__ = 0;
    # 1242 "06str.c"
    fun_235=(come_push_stackframe("06str.c", 1242),__exception_result_var_b398=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1242))->funcs, "06str.c", 1242)),generics_fun_name_234,((void*)0)), come_pop_stackframe(), __exception_result_var_b398);
    # 1255 "06str.c"
    # 1244 "06str.c"
    if(_if_conditional205=fun_235==((void*)0),    _if_conditional205) {
        # 1245 "06str.c"
        __dec_obj119=generics_fun_name_234;
        generics_fun_name_234=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1245),__exception_result_var_b400=((char*)(right_value363=create_method_name(obj_type_232,(_Bool)0,(come_push_stackframe("06str.c", 1245),__exception_result_var_b399=((char*)(right_value362=__builtin_string(fun_name_233))), come_pop_stackframe(), __exception_result_var_b399),info))), come_pop_stackframe(), __exception_result_var_b400));
        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
        if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value362;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value363);
        if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value363;
        __freed_obj__ = 0;
        # 1247 "06str.c"
        fun_235=(come_push_stackframe("06str.c", 1247),__exception_result_var_b401=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1247))->funcs, "06str.c", 1247)),generics_fun_name_234,((void*)0)), come_pop_stackframe(), __exception_result_var_b401);
        # 1253 "06str.c"
        # 1249 "06str.c"
        if(_if_conditional206=fun_235==((void*)0),        _if_conditional206) {
            # 1250 "06str.c"
            (come_push_stackframe("06str.c", 1250),err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_234,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1250))->come_fun, "06str.c", 1250))->mName),come_pop_stackframe());
            # 1251 "06str.c"
            __result157__ = (_Bool)1;
            if(key_params_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_208, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_209 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_type_values_221 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_221, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_222 && !__freed_obj__) { var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0, 0, 0); }
            if(element_type_values_224 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_224, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name2_225 && !__freed_obj__) { var_name2_225 = come_decrement_ref_count(var_name2_225, (void*)0, (void*)0, 0, 0, 0); }
            if(source_227 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_227, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_232 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_232, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_234 && !__freed_obj__) { generics_fun_name_234 = come_decrement_ref_count(generics_fun_name_234, (void*)0, (void*)0, 0, 0, 0); }
            return __result157__;
        }
    }
    # 1255 "06str.c"
    result_type_236=(struct sType*)come_increment_ref_count(((struct sType*)(right_value364=sType_clone(((struct sFun*)come_null_check(fun_235, "06str.c", 1255))->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value364);
    if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[25] = right_value364;
    __freed_obj__ = 0;
    # 1256 "06str.c"
    ((struct sType*)come_null_check(result_type_236, "06str.c", 1256))->mStatic=(_Bool)0;
    # 1258 "06str.c"
    type_237=map_type_231;
    # 1260 "06str.c"
    obj_value_238=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value365=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1260))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 26, right_value365);
    if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[26] = right_value365;
    __freed_obj__ = 0;
    # 1262 "06str.c"
    num_string_239=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1262),__exception_result_var_b402=((struct buffer*)(right_value367=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value366=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1262))))))), come_pop_stackframe(), __exception_result_var_b402));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 27, right_value366);
    if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[27] = right_value366;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 28, right_value367);
    if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[28] = right_value367;
    __freed_obj__ = 0;
    # 1264 "06str.c"
    (come_push_stackframe("06str.c", 1264),__exception_result_var_b403=buffer_append_str(((struct buffer*)come_null_check(num_string_239, "06str.c", 1264)),"1"), come_pop_stackframe(), __exception_result_var_b403);
    # 1266 "06str.c"
    type2_240=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 1266),__exception_result_var_b404=((struct sType*)(right_value368=solve_generics(type_237,type_237,info))), come_pop_stackframe(), __exception_result_var_b404));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 29, right_value368);
    if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[29] = right_value368;
    __freed_obj__ = 0;
    # 1268 "06str.c"
    type_name_241=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1268),__exception_result_var_b405=((char*)(right_value369=make_type_name_string(type2_240,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b405));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 30, right_value369);
    if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[30] = right_value369;
    __freed_obj__ = 0;
    # 1270 "06str.c"
    __dec_obj120=((struct CVALUE*)come_null_check(obj_value_238, "06str.c", 1270))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_238, "06str.c", 1270))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1270),__exception_result_var_b407=((char*)(right_value371=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_241,type_name_241,(come_push_stackframe("06str.c", 1270),__exception_result_var_b406=((char*)(right_value370=buffer_to_string(((struct buffer*)come_null_check(num_string_239, "06str.c", 1270))))), come_pop_stackframe(), __exception_result_var_b406),((struct sInfo*)come_null_check(info, "06str.c", 1270))->sname,((struct sInfo*)come_null_check(info, "06str.c", 1270))->sline))), come_pop_stackframe(), __exception_result_var_b407));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 31, right_value370);
    if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[31] = right_value370;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 32, right_value371);
    if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[32] = right_value371;
    __freed_obj__ = 0;
    # 1272 "06str.c"
    type3_242=(struct sType*)come_increment_ref_count(((struct sType*)(right_value372=sType_clone(type2_240))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 33, right_value372);
    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[33] = right_value372;
    __freed_obj__ = 0;
    # 1273 "06str.c"
    ((struct sType*)come_null_check(type3_242, "06str.c", 1273))->mPointerNum++;
    # 1274 "06str.c"
    ((struct sType*)come_null_check(type3_242, "06str.c", 1274))->mHeap=(_Bool)1;
    # 1275 "06str.c"
    ((struct sType*)come_null_check(type2_240, "06str.c", 1275))->mHeap=(_Bool)1;
    # 1276 "06str.c"
    __dec_obj121=((struct CVALUE*)come_null_check(obj_value_238, "06str.c", 1276))->type;
    ((struct CVALUE*)come_null_check(obj_value_238, "06str.c", 1276))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value373=sType_clone(type2_240))));
    if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 34, right_value373);
    if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[34] = right_value373;
    __freed_obj__ = 0;
    # 1277 "06str.c"
    __dec_obj122=((struct CVALUE*)come_null_check(obj_value_238, "06str.c", 1277))->c_value;
    ((struct CVALUE*)come_null_check(obj_value_238, "06str.c", 1277))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1277),__exception_result_var_b408=((char*)(right_value374=append_object_to_right_values(((struct CVALUE*)come_null_check(obj_value_238, "06str.c", 1277))->c_value,(struct sType*)come_increment_ref_count(type3_242),info))), come_pop_stackframe(), __exception_result_var_b408));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 35, right_value374);
    if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[35] = right_value374;
    __freed_obj__ = 0;
    # 1278 "06str.c"
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_238, "06str.c", 1278))->type, "06str.c", 1278))->mPointerNum++;
    # 1279 "06str.c"
    ((struct CVALUE*)come_null_check(obj_value_238, "06str.c", 1279))->var=((void*)0);
    # 1281 "06str.c"
    come_params_243=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 1281),__exception_result_var_b409=((struct list$1CVALUEph*)(right_value376=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value375=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1281))))))), come_pop_stackframe(), __exception_result_var_b409));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 36, right_value375);
    if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[36] = right_value375;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 37, right_value376);
    if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[37] = right_value376;
    __freed_obj__ = 0;
    # 1286 "06str.c"
    # 1283 "06str.c"
    if(_if_conditional207=((struct sType*)come_null_check((come_push_stackframe("06str.c", 1283),__exception_result_var_b410=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_235, "06str.c", 1283))->mParamTypes,0), come_pop_stackframe(), __exception_result_var_b410), "06str.c", 1283))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(obj_value_238, "06str.c", 1283))->type, "06str.c", 1283))->mHeap,    _if_conditional207) {
        # 1284 "06str.c"
        (come_push_stackframe("06str.c", 1284),std_move((come_push_stackframe("06str.c", 1284),__exception_result_var_b411=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(fun_235, "06str.c", 1284))->mParamTypes,0), come_pop_stackframe(), __exception_result_var_b411),((struct CVALUE*)come_null_check(obj_value_238, "06str.c", 1284))->type,obj_value_238,info),come_pop_stackframe());
    }
    # 1286 "06str.c"
    (come_push_stackframe("06str.c", 1286),__exception_result_var_b412=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_243, "06str.c", 1286)),(struct CVALUE*)come_increment_ref_count(obj_value_238)), come_pop_stackframe(), __exception_result_var_b412);
    # 1288 "06str.c"
    come_value2_244=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value377=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1288))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 38, right_value377);
    if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[38] = right_value377;
    __freed_obj__ = 0;
    # 1290 "06str.c"
    __dec_obj123=((struct CVALUE*)come_null_check(come_value2_244, "06str.c", 1290))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_244, "06str.c", 1290))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1290),__exception_result_var_b414=((char*)(right_value378=xsprintf("%d",(come_push_stackframe("06str.c", 1290),__exception_result_var_b413=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(key_params_208, "06str.c", 1290))), come_pop_stackframe(), __exception_result_var_b413)))), come_pop_stackframe(), __exception_result_var_b414));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 39, right_value378);
    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[39] = right_value378;
    __freed_obj__ = 0;
    # 1291 "06str.c"
    __dec_obj124=((struct CVALUE*)come_null_check(come_value2_244, "06str.c", 1291))->type;
    ((struct CVALUE*)come_null_check(come_value2_244, "06str.c", 1291))->type=((void*)0);
    if(__dec_obj124) { come_call_finalizer(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1292 "06str.c"
    ((struct CVALUE*)come_null_check(come_value2_244, "06str.c", 1292))->var=((void*)0);
    # 1294 "06str.c"
    (come_push_stackframe("06str.c", 1294),__exception_result_var_b415=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_243, "06str.c", 1294)),(struct CVALUE*)come_increment_ref_count(come_value2_244)), come_pop_stackframe(), __exception_result_var_b415);
    # 1296 "06str.c"
    come_value3_245=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value379=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1296))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 40, right_value379);
    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[40] = right_value379;
    __freed_obj__ = 0;
    # 1298 "06str.c"
    __dec_obj125=((struct CVALUE*)come_null_check(come_value3_245, "06str.c", 1298))->c_value;
    ((struct CVALUE*)come_null_check(come_value3_245, "06str.c", 1298))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1298),__exception_result_var_b416=((char*)(right_value380=xsprintf("%s",((struct sVar*)come_null_check(var__223, "06str.c", 1298))->mCValueName))), come_pop_stackframe(), __exception_result_var_b416));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 41, right_value380);
    if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[41] = right_value380;
    __freed_obj__ = 0;
    # 1299 "06str.c"
    __dec_obj126=((struct CVALUE*)come_null_check(come_value3_245, "06str.c", 1299))->type;
    ((struct CVALUE*)come_null_check(come_value3_245, "06str.c", 1299))->type=((void*)0);
    if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1300 "06str.c"
    ((struct CVALUE*)come_null_check(come_value3_245, "06str.c", 1300))->var=((void*)0);
    # 1302 "06str.c"
    (come_push_stackframe("06str.c", 1302),__exception_result_var_b417=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_243, "06str.c", 1302)),(struct CVALUE*)come_increment_ref_count(come_value3_245)), come_pop_stackframe(), __exception_result_var_b417);
    # 1304 "06str.c"
    come_value4_246=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value381=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1304))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 42, right_value381);
    if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[42] = right_value381;
    __freed_obj__ = 0;
    # 1306 "06str.c"
    __dec_obj127=((struct CVALUE*)come_null_check(come_value4_246, "06str.c", 1306))->c_value;
    ((struct CVALUE*)come_null_check(come_value4_246, "06str.c", 1306))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1306),__exception_result_var_b418=((char*)(right_value382=xsprintf("%s",((struct sVar*)come_null_check(var2__226, "06str.c", 1306))->mCValueName))), come_pop_stackframe(), __exception_result_var_b418));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 43, right_value382);
    if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[43] = right_value382;
    __freed_obj__ = 0;
    # 1307 "06str.c"
    __dec_obj128=((struct CVALUE*)come_null_check(come_value4_246, "06str.c", 1307))->type;
    ((struct CVALUE*)come_null_check(come_value4_246, "06str.c", 1307))->type=((void*)0);
    if(__dec_obj128) { come_call_finalizer(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1308 "06str.c"
    ((struct CVALUE*)come_null_check(come_value4_246, "06str.c", 1308))->var=((void*)0);
    # 1310 "06str.c"
    (come_push_stackframe("06str.c", 1310),__exception_result_var_b419=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(come_params_243, "06str.c", 1310)),(struct CVALUE*)come_increment_ref_count(come_value4_246)), come_pop_stackframe(), __exception_result_var_b419);
    # 1312 "06str.c"
    buf_247=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1312),__exception_result_var_b420=((struct buffer*)(right_value384=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value383=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1312))))))), come_pop_stackframe(), __exception_result_var_b420));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 44, right_value383);
    if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[44] = right_value383;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 45, right_value384);
    if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[45] = right_value384;
    __freed_obj__ = 0;
    # 1314 "06str.c"
    (come_push_stackframe("06str.c", 1314),__exception_result_var_b421=buffer_append_str(((struct buffer*)come_null_check(buf_247, "06str.c", 1314)),generics_fun_name_234), come_pop_stackframe(), __exception_result_var_b421);
    # 1315 "06str.c"
    (come_push_stackframe("06str.c", 1315),__exception_result_var_b422=buffer_append_str(((struct buffer*)come_null_check(buf_247, "06str.c", 1315)),"("), come_pop_stackframe(), __exception_result_var_b422);
    # 1317 "06str.c"
    j_248=0;
    # 1327 "06str.c"
    for(
    o2_saved_249=(struct list$1CVALUEph*)come_increment_ref_count((come_params_243)),it_250=(come_push_stackframe("06str.c", 1318),__exception_result_var_b423=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_249), "06str.c", 1318))), come_pop_stackframe(), __exception_result_var_b423) ,    0;    _for_condtionalA17=    !(come_push_stackframe("06str.c", 1318),__exception_result_var_b424=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_249), "06str.c", 1318))), come_pop_stackframe(), __exception_result_var_b424) ,    _for_condtionalA17;    it_250=(come_push_stackframe("06str.c", 1318),__exception_result_var_b425=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_249), "06str.c", 1318))), come_pop_stackframe(), __exception_result_var_b425) ,    0    ){
        # 1319 "06str.c"
        (come_push_stackframe("06str.c", 1319),__exception_result_var_b426=buffer_append_str(((struct buffer*)come_null_check(buf_247, "06str.c", 1319)),((struct CVALUE*)come_null_check(it_250, "06str.c", 1319))->c_value), come_pop_stackframe(), __exception_result_var_b426);
        # 1325 "06str.c"
        # 1321 "06str.c"
        if(_if_conditional208=j_248!=(come_push_stackframe("06str.c", 1321),__exception_result_var_b427=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(come_params_243, "06str.c", 1321))), come_pop_stackframe(), __exception_result_var_b427)-1,        _if_conditional208) {
            # 1322 "06str.c"
            (come_push_stackframe("06str.c", 1322),__exception_result_var_b428=buffer_append_str(((struct buffer*)come_null_check(buf_247, "06str.c", 1322)),","), come_pop_stackframe(), __exception_result_var_b428);
        }
        # 1325 "06str.c"
        j_248++;
    }
    if(o2_saved_249 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_249, (void*)0, (void*)0, 0, 0, 0, 0); }
    # 1327 "06str.c"
    (come_push_stackframe("06str.c", 1327),__exception_result_var_b429=buffer_append_str(((struct buffer*)come_null_check(buf_247, "06str.c", 1327)),")"), come_pop_stackframe(), __exception_result_var_b429);
    # 1329 "06str.c"
    come_value5_251=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value385=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1329))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 46, right_value385);
    if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[46] = right_value385;
    __freed_obj__ = 0;
    # 1331 "06str.c"
    __dec_obj129=((struct CVALUE*)come_null_check(come_value5_251, "06str.c", 1331))->c_value;
    ((struct CVALUE*)come_null_check(come_value5_251, "06str.c", 1331))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1331),__exception_result_var_b430=((char*)(right_value386=buffer_to_string(((struct buffer*)come_null_check(buf_247, "06str.c", 1331))))), come_pop_stackframe(), __exception_result_var_b430));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 47, right_value386);
    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[47] = right_value386;
    __freed_obj__ = 0;
    # 1337 "06str.c"
    # 1333 "06str.c"
    if(_if_conditional209=((struct sType*)come_null_check(result_type_236, "06str.c", 1333))->mHeap,    _if_conditional209) {
        # 1334 "06str.c"
        __dec_obj130=((struct CVALUE*)come_null_check(come_value5_251, "06str.c", 1334))->c_value;
        ((struct CVALUE*)come_null_check(come_value5_251, "06str.c", 1334))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1334),__exception_result_var_b432=((char*)(right_value388=append_object_to_right_values((come_push_stackframe("06str.c", 1334),__exception_result_var_b431=((char*)(right_value387=buffer_to_string(((struct buffer*)come_null_check(buf_247, "06str.c", 1334))))), come_pop_stackframe(), __exception_result_var_b431),(struct sType*)come_increment_ref_count(result_type_236),info))), come_pop_stackframe(), __exception_result_var_b432));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
        if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value387;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value388);
        if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value388;
        __freed_obj__ = 0;
    }
    # 1337 "06str.c"
    __dec_obj131=((struct CVALUE*)come_null_check(come_value5_251, "06str.c", 1337))->type;
    ((struct CVALUE*)come_null_check(come_value5_251, "06str.c", 1337))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value389=sType_clone(result_type_236))));
    if(__dec_obj131) { come_call_finalizer(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 48, right_value389);
    if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[48] = right_value389;
    __freed_obj__ = 0;
    # 1338 "06str.c"
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value5_251, "06str.c", 1338))->type, "06str.c", 1338))->mStatic=(_Bool)0;
    # 1339 "06str.c"
    ((struct CVALUE*)come_null_check(come_value5_251, "06str.c", 1339))->var=((void*)0);
    # 1341 "06str.c"
    (come_push_stackframe("06str.c", 1341),add_come_last_code(info,"%s;\n",(come_push_stackframe("06str.c", 1341),__exception_result_var_b433=((char*)(right_value390=buffer_to_string(((struct buffer*)come_null_check(buf_247, "06str.c", 1341))))), come_pop_stackframe(), __exception_result_var_b433)),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 49, right_value390);
    if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { right_value390 = come_decrement_ref_count(right_value390, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[49] = right_value390;
    __freed_obj__ = 0;
    # 1343 "06str.c"
    (come_push_stackframe("06str.c", 1343),__exception_result_var_b434=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1343))->stack, "06str.c", 1343)),(struct CVALUE*)come_increment_ref_count(come_value5_251)), come_pop_stackframe(), __exception_result_var_b434);
    # 1345 "06str.c"
    __result158__ = (_Bool)1;
    if(key_params_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_209 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_221 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_221, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_222 && !__freed_obj__) { var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_224 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_225 && !__freed_obj__) { var_name2_225 = come_decrement_ref_count(var_name2_225, (void*)0, (void*)0, 0, 0, 0); }
    if(source_227 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_232 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_232, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_234 && !__freed_obj__) { generics_fun_name_234 = come_decrement_ref_count(generics_fun_name_234, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_236 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_236, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_238 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_239 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_239, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_240 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_240, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_241 && !__freed_obj__) { type_name_241 = come_decrement_ref_count(type_name_241, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_242 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_242, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_243 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_244 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_245 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_246 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_247 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_247, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_251 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_251, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result158__;
    if(key_params_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_209 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_221 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_221, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_222 && !__freed_obj__) { var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_224 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_225 && !__freed_obj__) { var_name2_225 = come_decrement_ref_count(var_name2_225, (void*)0, (void*)0, 0, 0, 0); }
    if(source_227 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_232 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_232, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_234 && !__freed_obj__) { generics_fun_name_234 = come_decrement_ref_count(generics_fun_name_234, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_236 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_236, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_238 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_239 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_239, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_240 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_240, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_241 && !__freed_obj__) { type_name_241 = come_decrement_ref_count(type_name_241, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_242 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_242, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_243 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_244 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_245 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_246 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_247 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_247, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_251 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_251, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional199;
struct list_item$1sNodeph* it_213;
int i_214;
_Bool _while_condtional12;
_Bool _if_conditional200;
struct sNode* __result153__;
struct sNode* default_value_215;
void* __exception_result_var_b356;
struct sNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_213, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_214, 0, sizeof(int));
memset(&default_value_215, 0, sizeof(struct sNode*));
            # 745 "./comelang2.h"
            # 741 "./comelang2.h"
            if(_if_conditional199=position<0,            _if_conditional199) {
                # 742 "./comelang2.h"
                position+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 742))->len;
            }
            # 745 "./comelang2.h"
            it_213=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 745))->head;
            # 746 "./comelang2.h"
            i_214=0;
            # 753 "./comelang2.h"
            while(_while_condtional12=it_213!=((void*)0),            _while_condtional12) {
                # 751 "./comelang2.h"
                # 748 "./comelang2.h"
                if(_if_conditional200=position==i_214,                _if_conditional200) {
                    # 749 "./comelang2.h"
                    __result153__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(it_213, "./comelang2.h", 749))->item;
                    return __result153__;
                }
                # 751 "./comelang2.h"
                it_213=((struct list_item$1sNodeph*)come_null_check(it_213, "./comelang2.h", 751))->next;
                # 752 "./comelang2.h"
                i_214++;
            }
            # 755 "./comelang2.h"
            # 756 "./comelang2.h"
            (come_push_stackframe("./comelang2.h", 756),__exception_result_var_b356=memset(&default_value_215,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b356);
            # 757 "./comelang2.h"
            __result154__ = __result_obj__ = default_value_215;
            if(default_value_215 && !__freed_obj__) { default_value_215 = come_decrement_ref_count(default_value_215, ((struct sNode*)default_value_215)->finalize, ((struct sNode*)default_value_215)->_protocol_obj, 0, 1, 0); } 
            return __result154__;
            if(default_value_215 && !__freed_obj__) { default_value_215 = come_decrement_ref_count(default_value_215, ((struct sNode*)default_value_215)->finalize, ((struct sNode*)default_value_215)->_protocol_obj, 0, 0, 0); } 
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    # 1350 "06str.c"
    __result159__ = ((struct sMapNode*)come_null_check(self, "06str.c", 1350))->sline;
    return __result159__;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value391;
char* __exception_result_var_b435;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value391, 0, sizeof(void*));
    # 1355 "06str.c"
    __result160__ = __result_obj__ = (come_push_stackframe("06str.c", 1355),__exception_result_var_b435=((char*)(right_value391=__builtin_string(((struct sMapNode*)come_null_check(self, "06str.c", 1355))->sname))), come_pop_stackframe(), __exception_result_var_b435);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value391);
    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value391;
    __freed_obj__ = 0;
    return __result160__;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
int sline_252;
void* right_value392;
void* right_value393;
struct list$1sNodeph* __exception_result_var_b436;
struct list$1sNodeph* exps_253;
void* right_value394;
void* right_value395;
struct buffer* __exception_result_var_b437;
struct buffer* value_254;
char* head_of_last_line_255;
_Bool _while_condtional13;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct buffer* __exception_result_var_b438;
struct buffer* __exception_result_var_b439;
_Bool _if_conditional214;
struct buffer* __exception_result_var_b440;
struct buffer* __exception_result_var_b441;
_Bool _if_conditional215;
struct buffer* __exception_result_var_b442;
_Bool __exception_result_var_b443;
_Bool _if_conditional216;
int len_256;
_Bool __exception_result_var_b444;
_Bool _while_condtional14;
struct buffer* __exception_result_var_b445;
_Bool _if_conditional217;
struct buffer* __exception_result_var_b446;
_Bool _while_condtional15;
struct buffer* __exception_result_var_b447;
_Bool _if_conditional218;
void* right_value396;
struct sNode* __exception_result_var_b448;
struct sNode* exp_257;
struct list$1sNodeph* __exception_result_var_b449;
_Bool _if_conditional219;
struct buffer* __exception_result_var_b450;
struct buffer* __exception_result_var_b451;
struct buffer* __exception_result_var_b452;
struct buffer* __exception_result_var_b453;
struct buffer* __exception_result_var_b454;
struct buffer* __exception_result_var_b455;
struct buffer* __exception_result_var_b456;
struct buffer* __exception_result_var_b457;
struct buffer* __exception_result_var_b458;
struct buffer* __exception_result_var_b459;
struct buffer* __exception_result_var_b460;
_Bool _if_conditional220;
int sline2_258;
_Bool _if_conditional221;
struct buffer* __exception_result_var_b461;
struct buffer* __exception_result_var_b462;
struct buffer* __exception_result_var_b463;
void* right_value397;
void* right_value398;
char* __exception_result_var_b464;
void* right_value399;
struct sSStringNode* __exception_result_var_b465;
struct sNode* _inf_value3;
struct sSStringNode* _inf_obj_value3;
void* right_value404;
struct sNode* __result163__;
_Bool _if_conditional230;
int sline_260;
void* right_value405;
void* right_value406;
struct buffer* __exception_result_var_b466;
struct buffer* value_261;
_Bool _while_condtional16;
_Bool _if_conditional231;
char* p_262;
int sline_263;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct buffer* __exception_result_var_b467;
_Bool _if_conditional234;
struct buffer* __exception_result_var_b468;
struct buffer* __exception_result_var_b469;
_Bool _if_conditional235;
int sline2_264;
_Bool _if_conditional236;
struct buffer* __exception_result_var_b470;
void* right_value407;
void* right_value408;
char* __exception_result_var_b471;
void* right_value409;
struct sStrNode* __exception_result_var_b472;
struct sNode* _inf_value4;
struct sStrNode* _inf_obj_value4;
void* right_value413;
struct sNode* __result166__;
_Bool _if_conditional243;
int sline_266;
void* right_value414;
void* right_value415;
struct buffer* __exception_result_var_b473;
struct buffer* buf_267;
_Bool _while_condtional17;
_Bool _if_conditional244;
struct buffer* __exception_result_var_b474;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct buffer* __exception_result_var_b475;
_Bool global_268;
_Bool ignore_case_269;
_Bool _while_condtional18;
_Bool _if_conditional247;
_Bool _if_conditional248;
void* right_value416;
void* right_value417;
char* __exception_result_var_b476;
void* right_value418;
struct sRegexNode* __exception_result_var_b477;
struct sNode* _inf_value5;
struct sRegexNode* _inf_obj_value5;
void* right_value422;
struct sNode* __result169__;
_Bool _if_conditional257;
int c_271;
_Bool _if_conditional258;
_Bool __exception_result_var_b478;
_Bool _if_conditional259;
int n_272;
_Bool __exception_result_var_b479;
_Bool _while_condtional19;
_Bool __exception_result_var_b480;
_Bool _if_conditional260;
int n_273;
_Bool __exception_result_var_b481;
_Bool _while_condtional20;
char* __exception_result_var_b482;
_Bool _while_condtional21;
char* __exception_result_var_b483;
long long int __exception_result_var_b484;
unsigned long long int n_276;
_Bool _if_conditional261;
void* right_value423;
void* right_value424;
struct sCharNode* __exception_result_var_b485;
struct sNode* _inf_value6;
struct sCharNode* _inf_obj_value6;
void* right_value427;
struct sNode* __result172__;
_Bool _if_conditional267;
int c_278;
_Bool _if_conditional268;
_Bool __exception_result_var_b486;
_Bool _if_conditional269;
int n_279;
_Bool __exception_result_var_b487;
_Bool _while_condtional22;
_Bool __exception_result_var_b488;
_Bool _if_conditional270;
int n_280;
_Bool __exception_result_var_b489;
_Bool _while_condtional23;
char* __exception_result_var_b490;
_Bool _while_condtional24;
char* __exception_result_var_b491;
long long int __exception_result_var_b492;
unsigned long long int n_283;
unsigned char p2_284;
_Bool _if_conditional271;
int size_285;
_Bool _if_conditional272;
void* __exception_result_var_b493;
int __exception_result_var_b494;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value428;
void* right_value429;
struct sWCharNode* __exception_result_var_b495;
struct sNode* _inf_value7;
struct sWCharNode* _inf_obj_value7;
void* right_value432;
struct sNode* __result175__;
_Bool _if_conditional280;
int sline_288;
void* right_value433;
void* right_value434;
struct buffer* __exception_result_var_b496;
struct buffer* value_289;
_Bool _while_condtional25;
_Bool _if_conditional281;
char* p_290;
int sline_291;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool __exception_result_var_b497;
_Bool _if_conditional284;
int len_292;
int n_293;
_Bool __exception_result_var_b498;
_Bool _while_condtional26;
struct buffer* __exception_result_var_b499;
_Bool _if_conditional285;
char* __exception_result_var_b500;
_Bool _while_condtional27;
char* __exception_result_var_b501;
unsigned long int lont_296;
long long int __exception_result_var_b502;
int n_297;
struct buffer* __exception_result_var_b503;
struct buffer* __exception_result_var_b504;
struct buffer* __exception_result_var_b505;
struct buffer* __exception_result_var_b506;
struct buffer* __exception_result_var_b507;
struct buffer* __exception_result_var_b508;
struct buffer* __exception_result_var_b509;
struct buffer* __exception_result_var_b510;
struct buffer* __exception_result_var_b511;
struct buffer* __exception_result_var_b512;
struct buffer* __exception_result_var_b513;
_Bool _if_conditional286;
int sline2_298;
_Bool _if_conditional287;
struct buffer* __exception_result_var_b514;
int len_299;
void* right_value435;
int* wstr_300;
char* str_301;
long int __exception_result_var_b515;
_Bool _if_conditional288;
void* right_value436;
void* right_value437;
struct sWStringNode* __exception_result_var_b516;
struct sNode* _inf_value8;
struct sWStringNode* _inf_obj_value8;
void* right_value441;
struct sNode* __result178__;
_Bool _if_conditional295;
int sline_303;
void* right_value442;
void* right_value443;
struct list$1sNodeph* __exception_result_var_b517;
struct list$1sNodeph* exps_304;
void* right_value444;
void* right_value445;
struct buffer* __exception_result_var_b518;
struct buffer* value_305;
_Bool _while_condtional28;
_Bool _if_conditional296;
char* p_306;
int sline_307;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct buffer* __exception_result_var_b519;
struct buffer* __exception_result_var_b520;
_Bool _if_conditional299;
void* right_value446;
struct sNode* __exception_result_var_b521;
struct sNode* exp_308;
struct list$1sNodeph* __exception_result_var_b522;
struct buffer* __exception_result_var_b523;
char* p_309;
_Bool _while_condtional29;
_Bool _if_conditional300;
struct buffer* __exception_result_var_b524;
_Bool __exception_result_var_b525;
_Bool _if_conditional301;
int len_310;
_Bool __exception_result_var_b526;
_Bool _while_condtional30;
struct buffer* __exception_result_var_b527;
_Bool _if_conditional302;
struct buffer* __exception_result_var_b528;
_Bool _while_condtional31;
struct buffer* __exception_result_var_b529;
_Bool _if_conditional303;
void* right_value447;
struct sNode* __exception_result_var_b530;
struct sNode* exp_311;
struct list$1sNodeph* __exception_result_var_b531;
_Bool _if_conditional304;
struct buffer* __exception_result_var_b532;
struct buffer* __exception_result_var_b533;
struct buffer* __exception_result_var_b534;
struct buffer* __exception_result_var_b535;
struct buffer* __exception_result_var_b536;
struct buffer* __exception_result_var_b537;
struct buffer* __exception_result_var_b538;
struct buffer* __exception_result_var_b539;
struct buffer* __exception_result_var_b540;
struct buffer* __exception_result_var_b541;
struct buffer* __exception_result_var_b542;
_Bool _if_conditional305;
int sline2_312;
_Bool _if_conditional306;
struct buffer* __exception_result_var_b543;
void* right_value448;
void* right_value449;
char* __exception_result_var_b544;
void* right_value450;
struct sSStringNode* __exception_result_var_b545;
struct sNode* _inf_value9;
struct sSStringNode* _inf_obj_value9;
void* right_value455;
struct sNode* __result181__;
_Bool _if_conditional315;
char* p_314;
_Bool no_comma_315;
void* right_value456;
struct sNode* __exception_result_var_b546;
struct sNode* node_316;
char* p2_317;
void* right_value457;
void* right_value458;
struct buffer* __exception_result_var_b547;
struct buffer* first_element_source_318;
struct buffer* __exception_result_var_b548;
struct buffer* __exception_result_var_b549;
void* right_value459;
void* right_value460;
struct list$1sNodeph* __exception_result_var_b550;
struct list$1sNodeph* list_elements_319;
void* right_value461;
void* right_value462;
struct list$1sNodeph* __exception_result_var_b551;
struct list$1sNodeph* map_keys_320;
void* right_value463;
void* right_value464;
struct list$1sNodeph* __exception_result_var_b552;
struct list$1sNodeph* map_elements_321;
_Bool _if_conditional316;
struct list$1sNodeph* __exception_result_var_b553;
_Bool no_comma_322;
void* right_value465;
struct sNode* __exception_result_var_b554;
struct sNode* node2_323;
struct list$1sNodeph* __exception_result_var_b555;
_Bool _if_conditional317;
void* right_value466;
void* right_value467;
struct sMapNode* __exception_result_var_b556;
struct sNode* _inf_value10;
struct sMapNode* _inf_obj_value10;
void* right_value472;
struct sNode* __result184__;
int __exception_result_var_b557;
_Bool _while_condtional32;
_Bool no_comma_325;
void* right_value473;
struct sNode* __exception_result_var_b558;
struct sNode* node2_326;
struct list$1sNodeph* __exception_result_var_b559;
int __exception_result_var_b560;
void* right_value474;
struct sNode* __exception_result_var_b561;
struct sNode* node3_327;
struct list$1sNodeph* __exception_result_var_b562;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
void* right_value475;
void* right_value476;
struct sMapNode* __exception_result_var_b563;
struct sNode* _inf_value11;
struct sMapNode* _inf_obj_value11;
void* right_value481;
struct sNode* __result187__;
_Bool _if_conditional337;
struct list$1sNodeph* __exception_result_var_b564;
_Bool _if_conditional338;
struct list$1sNodeph* __exception_result_var_b565;
_Bool _while_condtional33;
_Bool no_comma_329;
void* right_value482;
struct sNode* __exception_result_var_b566;
struct sNode* node2_330;
struct list$1sNodeph* __exception_result_var_b567;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
int __exception_result_var_b568;
_Bool _if_conditional342;
void* right_value483;
void* right_value484;
struct sListNode* __exception_result_var_b569;
struct sNode* _inf_value12;
struct sListNode* _inf_obj_value12;
void* right_value488;
struct sNode* __result190__;
void* right_value489;
struct sNode* __exception_result_var_b570;
struct sNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&sline_252, 0, sizeof(int));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&exps_253, 0, sizeof(struct list$1sNodeph*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&value_254, 0, sizeof(struct buffer*));
memset(&head_of_last_line_255, 0, sizeof(char*));
memset(&len_256, 0, sizeof(int));
memset(&right_value396, 0, sizeof(void*));
memset(&exp_257, 0, sizeof(struct sNode*));
memset(&sline2_258, 0, sizeof(int));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&sline_260, 0, sizeof(int));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&value_261, 0, sizeof(struct buffer*));
memset(&p_262, 0, sizeof(char*));
memset(&sline_263, 0, sizeof(int));
memset(&sline2_264, 0, sizeof(int));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&sline_266, 0, sizeof(int));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&buf_267, 0, sizeof(struct buffer*));
memset(&global_268, 0, sizeof(_Bool));
memset(&ignore_case_269, 0, sizeof(_Bool));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&c_271, 0, sizeof(int));
memset(&n_272, 0, sizeof(int));
memset(&n_273, 0, sizeof(int));
memset(&n_276, 0, sizeof(unsigned long long int));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
memset(&c_278, 0, sizeof(int));
memset(&n_279, 0, sizeof(int));
memset(&n_280, 0, sizeof(int));
memset(&n_283, 0, sizeof(unsigned long long int));
memset(&p2_284, 0, sizeof(unsigned char));
memset(&size_285, 0, sizeof(int));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&sline_288, 0, sizeof(int));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&value_289, 0, sizeof(struct buffer*));
memset(&p_290, 0, sizeof(char*));
memset(&sline_291, 0, sizeof(int));
memset(&len_292, 0, sizeof(int));
memset(&n_293, 0, sizeof(int));
memset(&lont_296, 0, sizeof(unsigned long int));
memset(&n_297, 0, sizeof(int));
memset(&sline2_298, 0, sizeof(int));
memset(&len_299, 0, sizeof(int));
memset(&right_value435, 0, sizeof(void*));
memset(&wstr_300, 0, sizeof(int*));
memset(&str_301, 0, sizeof(char*));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&sline_303, 0, sizeof(int));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&exps_304, 0, sizeof(struct list$1sNodeph*));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&value_305, 0, sizeof(struct buffer*));
memset(&p_306, 0, sizeof(char*));
memset(&sline_307, 0, sizeof(int));
memset(&right_value446, 0, sizeof(void*));
memset(&exp_308, 0, sizeof(struct sNode*));
memset(&p_309, 0, sizeof(char*));
memset(&len_310, 0, sizeof(int));
memset(&right_value447, 0, sizeof(void*));
memset(&exp_311, 0, sizeof(struct sNode*));
memset(&sline2_312, 0, sizeof(int));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
memset(&right_value450, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&p_314, 0, sizeof(char*));
memset(&no_comma_315, 0, sizeof(_Bool));
memset(&right_value456, 0, sizeof(void*));
memset(&node_316, 0, sizeof(struct sNode*));
memset(&p2_317, 0, sizeof(char*));
memset(&right_value457, 0, sizeof(void*));
memset(&right_value458, 0, sizeof(void*));
memset(&first_element_source_318, 0, sizeof(struct buffer*));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&list_elements_319, 0, sizeof(struct list$1sNodeph*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value462, 0, sizeof(void*));
memset(&map_keys_320, 0, sizeof(struct list$1sNodeph*));
memset(&right_value463, 0, sizeof(void*));
memset(&right_value464, 0, sizeof(void*));
memset(&map_elements_321, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_322, 0, sizeof(_Bool));
memset(&right_value465, 0, sizeof(void*));
memset(&node2_323, 0, sizeof(struct sNode*));
memset(&right_value466, 0, sizeof(void*));
memset(&right_value467, 0, sizeof(void*));
memset(&right_value472, 0, sizeof(void*));
memset(&no_comma_325, 0, sizeof(_Bool));
memset(&right_value473, 0, sizeof(void*));
memset(&node2_326, 0, sizeof(struct sNode*));
memset(&right_value474, 0, sizeof(void*));
memset(&node3_327, 0, sizeof(struct sNode*));
memset(&right_value475, 0, sizeof(void*));
memset(&right_value476, 0, sizeof(void*));
memset(&right_value481, 0, sizeof(void*));
memset(&no_comma_329, 0, sizeof(_Bool));
memset(&right_value482, 0, sizeof(void*));
memset(&node2_330, 0, sizeof(struct sNode*));
memset(&right_value483, 0, sizeof(void*));
memset(&right_value484, 0, sizeof(void*));
memset(&right_value488, 0, sizeof(void*));
memset(&right_value489, 0, sizeof(void*));
    # 2324 "06str.c"
    # 1361 "06str.c"
    if(_if_conditional210=*((struct sInfo*)come_null_check(info, "06str.c", 1361))->p==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 1361))->p+1)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 1361))->p+2)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 1361))->p+3)==10,    _if_conditional210) {
        # 1362 "06str.c"
        ((struct sInfo*)come_null_check(info, "06str.c", 1362))->p+=4;
        # 1363 "06str.c"
        ((struct sInfo*)come_null_check(info, "06str.c", 1363))->sline++;
        # 1365 "06str.c"
        sline_252=((struct sInfo*)come_null_check(info, "06str.c", 1365))->sline;
        # 1367 "06str.c"
        exps_253=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 1367),__exception_result_var_b436=((struct list$1sNodeph*)(right_value393=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value392=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1367))))))), come_pop_stackframe(), __exception_result_var_b436));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value392);
        if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value392;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value393);
        if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value393;
        __freed_obj__ = 0;
        # 1368 "06str.c"
        value_254=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1368),__exception_result_var_b437=((struct buffer*)(right_value395=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value394=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1368))))))), come_pop_stackframe(), __exception_result_var_b437));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value394);
        if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value394;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value395);
        if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value395;
        __freed_obj__ = 0;
        # 1370 "06str.c"
        head_of_last_line_255=((void*)0);
        # 1514 "06str.c"
        while(_while_condtional13=1,        _while_condtional13) {
            # 1512 "06str.c"
            # 1373 "06str.c"
            if(_if_conditional211=*((struct sInfo*)come_null_check(info, "06str.c", 1373))->p==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 1373))->p+1)==34&&*(((struct sInfo*)come_null_check(info, "06str.c", 1373))->p+2)==34,            _if_conditional211) {
                # 1378 "06str.c"
                # 1374 "06str.c"
                if(_if_conditional212=head_of_last_line_255,                _if_conditional212) {
                    # 1375 "06str.c"
                    (come_push_stackframe("06str.c", 1375),buffer_trim(((struct buffer*)come_null_check(value_254, "06str.c", 1375)),((struct sInfo*)come_null_check(info, "06str.c", 1375))->p-head_of_last_line_255),come_pop_stackframe());
                }
                # 1378 "06str.c"
                ((struct sInfo*)come_null_check(info, "06str.c", 1378))->p+=3;
                # 1380 "06str.c"
                (come_push_stackframe("06str.c", 1380),skip_spaces_and_lf(info),come_pop_stackframe());
                # 1381 "06str.c"
                break;
            }
            else {
                # 1512 "06str.c"
                # 1383 "06str.c"
                if(_if_conditional213=*((struct sInfo*)come_null_check(info, "06str.c", 1383))->p==37,                _if_conditional213) {
                    # 1384 "06str.c"
                    (come_push_stackframe("06str.c", 1384),__exception_result_var_b438=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1384)),37), come_pop_stackframe(), __exception_result_var_b438);
                    # 1385 "06str.c"
                    (come_push_stackframe("06str.c", 1385),__exception_result_var_b439=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1385)),37), come_pop_stackframe(), __exception_result_var_b439);
                    # 1386 "06str.c"
                    ((struct sInfo*)come_null_check(info, "06str.c", 1386))->p++;
                }
                else {
                    # 1512 "06str.c"
                    # 1388 "06str.c"
                    if(_if_conditional214=*((struct sInfo*)come_null_check(info, "06str.c", 1388))->p==34,                    _if_conditional214) {
                        # 1389 "06str.c"
                        (come_push_stackframe("06str.c", 1389),__exception_result_var_b440=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1389)),92), come_pop_stackframe(), __exception_result_var_b440);
                        # 1390 "06str.c"
                        (come_push_stackframe("06str.c", 1390),__exception_result_var_b441=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1390)),34), come_pop_stackframe(), __exception_result_var_b441);
                        # 1391 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1391))->p++;
                    }
                    else {
                        # 1512 "06str.c"
                        # 1404 "06str.c"
                        if(_if_conditional215=*((struct sInfo*)come_null_check(info, "06str.c", 1404))->p==92,                        _if_conditional215) {
                            # 1405 "06str.c"
                            (come_push_stackframe("06str.c", 1405),__exception_result_var_b442=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1405)),92), come_pop_stackframe(), __exception_result_var_b442);
                            # 1406 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1406))->p++;
                            # 1491 "06str.c"
                            # 1408 "06str.c"
                            if(_if_conditional216=(come_push_stackframe("06str.c", 1408),__exception_result_var_b443=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1408))->p), come_pop_stackframe(), __exception_result_var_b443),                            _if_conditional216) {
                                # 1409 "06str.c"
                                len_256=0;
                                # 1415 "06str.c"
                                while(_while_condtional14=(come_push_stackframe("06str.c", 1410),__exception_result_var_b444=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1410))->p), come_pop_stackframe(), __exception_result_var_b444)&&len_256<3,                                _while_condtional14) {
                                    # 1411 "06str.c"
                                    (come_push_stackframe("06str.c", 1411),__exception_result_var_b445=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1411)),*((struct sInfo*)come_null_check(info, "06str.c", 1411))->p), come_pop_stackframe(), __exception_result_var_b445);
                                    # 1412 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1412))->p++;
                                    # 1413 "06str.c"
                                    len_256++;
                                }
                            }
                            else {
                                # 1491 "06str.c"
                                # 1416 "06str.c"
                                if(_if_conditional217=*((struct sInfo*)come_null_check(info, "06str.c", 1416))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 1416))->p==88,                                _if_conditional217) {
                                    # 1417 "06str.c"
                                    (come_push_stackframe("06str.c", 1417),__exception_result_var_b446=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1417)),*((struct sInfo*)come_null_check(info, "06str.c", 1417))->p), come_pop_stackframe(), __exception_result_var_b446);
                                    # 1418 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1418))->p++;
                                    # 1424 "06str.c"
                                    while(_while_condtional15=*((struct sInfo*)come_null_check(info, "06str.c", 1420))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 1420))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 1420))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 1420))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 1420))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 1420))->p<=70,                                    _while_condtional15) {
                                        # 1421 "06str.c"
                                        (come_push_stackframe("06str.c", 1421),__exception_result_var_b447=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1421)),*((struct sInfo*)come_null_check(info, "06str.c", 1421))->p), come_pop_stackframe(), __exception_result_var_b447);
                                        # 1422 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1422))->p++;
                                    }
                                }
                                else {
                                    # 1491 "06str.c"
                                    # 1425 "06str.c"
                                    if(_if_conditional218=*((struct sInfo*)come_null_check(info, "06str.c", 1425))->p==123,                                    _if_conditional218) {
                                        # 1426 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1426))->p++;
                                        # 1428 "06str.c"
                                        exp_257=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1428),__exception_result_var_b448=((struct sNode*)(right_value396=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b448));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value396);
                                        if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value396;
                                        __freed_obj__ = 0;
                                        # 1430 "06str.c"
                                        (come_push_stackframe("06str.c", 1430),__exception_result_var_b449=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_253, "06str.c", 1430)),(struct sNode*)come_increment_ref_count(exp_257)), come_pop_stackframe(), __exception_result_var_b449);
                                        # 1436 "06str.c"
                                        # 1432 "06str.c"
                                        if(_if_conditional219=*((struct sInfo*)come_null_check(info, "06str.c", 1432))->p==125,                                        _if_conditional219) {
                                            # 1433 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1433))->p++;
                                        }
                                        # 1436 "06str.c"
                                        (come_push_stackframe("06str.c", 1436),__exception_result_var_b450=buffer_append_str(((struct buffer*)come_null_check(value_254, "06str.c", 1436)),"%s"), come_pop_stackframe(), __exception_result_var_b450);
                                        if(exp_257 && !__freed_obj__) { exp_257 = come_decrement_ref_count(exp_257, ((struct sNode*)exp_257)->finalize, ((struct sNode*)exp_257)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        # 1490 "06str.c"
                                        switch (*((struct sInfo*)come_null_check(info, "06str.c", 1439))->p) {
                                            # 1441 "06str.c"
                                            case 48:
                                            # 1441 "06str.c"
                                            (come_push_stackframe("06str.c", 1441),__exception_result_var_b451=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1441)),*((struct sInfo*)come_null_check(info, "06str.c", 1441))->p), come_pop_stackframe(), __exception_result_var_b451);
                                            # 1442 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1442))->p++;
                                            # 1443 "06str.c"
                                            break;
                                            # 1446 "06str.c"
                                            case 110:
                                            # 1446 "06str.c"
                                            (come_push_stackframe("06str.c", 1446),__exception_result_var_b452=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1446)),*((struct sInfo*)come_null_check(info, "06str.c", 1446))->p), come_pop_stackframe(), __exception_result_var_b452);
                                            # 1447 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1447))->p++;
                                            # 1448 "06str.c"
                                            break;
                                            # 1451 "06str.c"
                                            case 116:
                                            # 1451 "06str.c"
                                            (come_push_stackframe("06str.c", 1451),__exception_result_var_b453=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1451)),*((struct sInfo*)come_null_check(info, "06str.c", 1451))->p), come_pop_stackframe(), __exception_result_var_b453);
                                            # 1452 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1452))->p++;
                                            # 1453 "06str.c"
                                            break;
                                            # 1456 "06str.c"
                                            case 114:
                                            # 1456 "06str.c"
                                            (come_push_stackframe("06str.c", 1456),__exception_result_var_b454=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1456)),*((struct sInfo*)come_null_check(info, "06str.c", 1456))->p), come_pop_stackframe(), __exception_result_var_b454);
                                            # 1457 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1457))->p++;
                                            # 1458 "06str.c"
                                            break;
                                            # 1461 "06str.c"
                                            case 118:
                                            # 1461 "06str.c"
                                            (come_push_stackframe("06str.c", 1461),__exception_result_var_b455=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1461)),*((struct sInfo*)come_null_check(info, "06str.c", 1461))->p), come_pop_stackframe(), __exception_result_var_b455);
                                            # 1462 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1462))->p++;
                                            # 1463 "06str.c"
                                            break;
                                            # 1466 "06str.c"
                                            case 102:
                                            # 1466 "06str.c"
                                            (come_push_stackframe("06str.c", 1466),__exception_result_var_b456=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1466)),*((struct sInfo*)come_null_check(info, "06str.c", 1466))->p), come_pop_stackframe(), __exception_result_var_b456);
                                            # 1467 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1467))->p++;
                                            # 1468 "06str.c"
                                            break;
                                            # 1471 "06str.c"
                                            case 97:
                                            # 1471 "06str.c"
                                            (come_push_stackframe("06str.c", 1471),__exception_result_var_b457=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1471)),*((struct sInfo*)come_null_check(info, "06str.c", 1471))->p), come_pop_stackframe(), __exception_result_var_b457);
                                            # 1472 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1472))->p++;
                                            # 1473 "06str.c"
                                            break;
                                            # 1476 "06str.c"
                                            case 98:
                                            # 1476 "06str.c"
                                            (come_push_stackframe("06str.c", 1476),__exception_result_var_b458=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1476)),*((struct sInfo*)come_null_check(info, "06str.c", 1476))->p), come_pop_stackframe(), __exception_result_var_b458);
                                            # 1477 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1477))->p++;
                                            # 1478 "06str.c"
                                            break;
                                            # 1481 "06str.c"
                                            case 92:
                                            # 1481 "06str.c"
                                            (come_push_stackframe("06str.c", 1481),__exception_result_var_b459=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1481)),*((struct sInfo*)come_null_check(info, "06str.c", 1481))->p), come_pop_stackframe(), __exception_result_var_b459);
                                            # 1482 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1482))->p++;
                                            # 1483 "06str.c"
                                            break;
                                            # 1486 "06str.c"
                                            default:
                                            # 1486 "06str.c"
                                            (come_push_stackframe("06str.c", 1486),__exception_result_var_b460=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1486)),*((struct sInfo*)come_null_check(info, "06str.c", 1486))->p), come_pop_stackframe(), __exception_result_var_b460);
                                            # 1487 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1487))->p++;
                                            # 1488 "06str.c"
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            # 1512 "06str.c"
                            # 1492 "06str.c"
                            if(_if_conditional220=*((struct sInfo*)come_null_check(info, "06str.c", 1492))->p==0,                            _if_conditional220) {
                                # 1493 "06str.c"
                                sline2_258=((struct sInfo*)come_null_check(info, "06str.c", 1493))->sline;
                                # 1494 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1494))->sline=sline_252;
                                # 1495 "06str.c"
                                (come_push_stackframe("06str.c", 1495),err_msg(info,"close \" to make embbeded string value"),come_pop_stackframe());
                                # 1496 "06str.c"
                                (come_push_stackframe("06str.c", 1496),exit(2),come_pop_stackframe());
                            }
                            else {
                                # 1511 "06str.c"
                                # 1499 "06str.c"
                                if(_if_conditional221=*((struct sInfo*)come_null_check(info, "06str.c", 1499))->p==10,                                _if_conditional221) {
                                    # 1500 "06str.c"
                                    (come_push_stackframe("06str.c", 1500),__exception_result_var_b461=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1500)),92), come_pop_stackframe(), __exception_result_var_b461);
                                    # 1501 "06str.c"
                                    (come_push_stackframe("06str.c", 1501),__exception_result_var_b462=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1501)),110), come_pop_stackframe(), __exception_result_var_b462);
                                    # 1502 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1502))->p++;
                                    # 1503 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1503))->sline++;
                                    # 1505 "06str.c"
                                    head_of_last_line_255=((struct sInfo*)come_null_check(info, "06str.c", 1505))->p;
                                }
                                else {
                                    # 1508 "06str.c"
                                    (come_push_stackframe("06str.c", 1508),__exception_result_var_b463=buffer_append_char(((struct buffer*)come_null_check(value_254, "06str.c", 1508)),*((struct sInfo*)come_null_check(info, "06str.c", 1508))->p), come_pop_stackframe(), __exception_result_var_b463);
                                    # 1509 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1509))->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        # 1514 "06str.c"
        (come_push_stackframe("06str.c", 1514),skip_spaces_and_lf(info),come_pop_stackframe());
        # 1516 "06str.c"
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1516);
        _inf_obj_value3=come_increment_ref_count((come_push_stackframe("06str.c", 1516),__exception_result_var_b465=((struct sSStringNode*)(right_value399=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value397=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1516)))),(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1516),__exception_result_var_b464=((char*)(right_value398=buffer_to_string(((struct buffer*)come_null_check(value_254, "06str.c", 1516))))), come_pop_stackframe(), __exception_result_var_b464)),(struct list$1sNodeph*)come_increment_ref_count(exps_253),sline_252,info))), come_pop_stackframe(), __exception_result_var_b465));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sSStringNode_finalize;
        _inf_value3->clone=(void*)sSStringNode_clone;
        _inf_value3->compile=(void*)sSStringNode_compile;
        _inf_value3->sline=(void*)sSStringNode_sline;
        _inf_value3->sname=(void*)sSStringNode_sname;
        _inf_value3->terminated=(void*)sSStringNode_terminated;
        _inf_value3->kind=(void*)sSStringNode_kind;
        __result163__ = __result_obj__ = ((struct sNode*)(right_value404=_inf_value3));
        if(exps_253 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_253, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_254 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_254, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value397);
        if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value397;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value398);
        if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { right_value398 = come_decrement_ref_count(right_value398, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value398;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value399);
        if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value399;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value404);
        if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[7] = right_value404;
        __freed_obj__ = 0;
        return __result163__;
        if(exps_253 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_253, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_254 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_254, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        # 2324 "06str.c"
        # 1518 "06str.c"
        if(_if_conditional230=*((struct sInfo*)come_null_check(info, "06str.c", 1518))->p==34,        _if_conditional230) {
            # 1520 "06str.c"
            ((struct sInfo*)come_null_check(info, "06str.c", 1520))->p++;
            # 1522 "06str.c"
            sline_260=((struct sInfo*)come_null_check(info, "06str.c", 1522))->sline;
            # 1524 "06str.c"
            value_261=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1524),__exception_result_var_b466=((struct buffer*)(right_value406=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value405=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1524))))))), come_pop_stackframe(), __exception_result_var_b466));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
            if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value405;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value406);
            if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value406;
            __freed_obj__ = 0;
            # 1574 "06str.c"
            while(_while_condtional16=1,            _while_condtional16) {
                # 1572 "06str.c"
                # 1527 "06str.c"
                if(_if_conditional231=*((struct sInfo*)come_null_check(info, "06str.c", 1527))->p==34,                _if_conditional231) {
                    # 1528 "06str.c"
                    ((struct sInfo*)come_null_check(info, "06str.c", 1528))->p++;
                    # 1530 "06str.c"
                    p_262=((struct sInfo*)come_null_check(info, "06str.c", 1530))->p;
                    # 1531 "06str.c"
                    sline_263=((struct sInfo*)come_null_check(info, "06str.c", 1531))->sline;
                    # 1533 "06str.c"
                    (come_push_stackframe("06str.c", 1533),skip_spaces_and_lf(info),come_pop_stackframe());
                    # 1537 "06str.c"
                    (come_push_stackframe("06str.c", 1537),parse_sharp_v5(info),come_pop_stackframe());
                    # 1545 "06str.c"
                    # 1537 "06str.c"
                    if(_if_conditional232=*((struct sInfo*)come_null_check(info, "06str.c", 1537))->p==34,                    _if_conditional232) {
                        # 1538 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1538))->p++;
                    }
                    else {
                        # 1541 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1541))->p=p_262;
                        # 1542 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1542))->sline=sline_263;
                        # 1543 "06str.c"
                        break;
                    }
                }
                else {
                    # 1572 "06str.c"
                    # 1546 "06str.c"
                    if(_if_conditional233=*((struct sInfo*)come_null_check(info, "06str.c", 1546))->p==92,                    _if_conditional233) {
                        # 1547 "06str.c"
                        (come_push_stackframe("06str.c", 1547),__exception_result_var_b467=buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1547)),92), come_pop_stackframe(), __exception_result_var_b467);
                        # 1548 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1548))->p++;
                        # 1558 "06str.c"
                        # 1550 "06str.c"
                        if(_if_conditional234=*((struct sInfo*)come_null_check(info, "06str.c", 1550))->p==34,                        _if_conditional234) {
                            # 1551 "06str.c"
                            (come_push_stackframe("06str.c", 1551),__exception_result_var_b468=buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1551)),34), come_pop_stackframe(), __exception_result_var_b468);
                            # 1552 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1552))->p++;
                        }
                        else {
                            # 1555 "06str.c"
                            (come_push_stackframe("06str.c", 1555),__exception_result_var_b469=buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1555)),*((struct sInfo*)come_null_check(info, "06str.c", 1555))->p), come_pop_stackframe(), __exception_result_var_b469);
                            # 1556 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1556))->p++;
                        }
                    }
                    else {
                        # 1572 "06str.c"
                        # 1559 "06str.c"
                        if(_if_conditional235=*((struct sInfo*)come_null_check(info, "06str.c", 1559))->p==0,                        _if_conditional235) {
                            # 1560 "06str.c"
                            sline2_264=((struct sInfo*)come_null_check(info, "06str.c", 1560))->sline;
                            # 1561 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1561))->sline=sline_260;
                            # 1562 "06str.c"
                            (come_push_stackframe("06str.c", 1562),err_msg(info,"close \" to make c string value"),come_pop_stackframe());
                            # 1563 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1563))->sline=sline2_264;
                            # 1564 "06str.c"
                            (come_push_stackframe("06str.c", 1564),exit(2),come_pop_stackframe());
                        }
                        else {
                            # 1567 "06str.c"
                            # 1567 "06str.c"
                            if(_if_conditional236=*((struct sInfo*)come_null_check(info, "06str.c", 1567))->p==10,                            _if_conditional236) {
                                # 1567 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1567))->sline++;
                            }
                            # 1569 "06str.c"
                            (come_push_stackframe("06str.c", 1569),__exception_result_var_b470=buffer_append_char(((struct buffer*)come_null_check(value_261, "06str.c", 1569)),*((struct sInfo*)come_null_check(info, "06str.c", 1569))->p), come_pop_stackframe(), __exception_result_var_b470);
                            # 1570 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1570))->p++;
                        }
                    }
                }
            }
            # 1574 "06str.c"
            (come_push_stackframe("06str.c", 1574),skip_spaces_and_lf(info),come_pop_stackframe());
            # 1576 "06str.c"
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1576);
            _inf_obj_value4=come_increment_ref_count((come_push_stackframe("06str.c", 1576),__exception_result_var_b472=((struct sStrNode*)(right_value409=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value407=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1576)))),(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1576),__exception_result_var_b471=((char*)(right_value408=buffer_to_string(((struct buffer*)come_null_check(value_261, "06str.c", 1576))))), come_pop_stackframe(), __exception_result_var_b471)),sline_260,info))), come_pop_stackframe(), __exception_result_var_b472));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStrNode_finalize;
            _inf_value4->clone=(void*)sStrNode_clone;
            _inf_value4->compile=(void*)sStrNode_compile;
            _inf_value4->sline=(void*)sStrNode_sline;
            _inf_value4->sname=(void*)sStrNode_sname;
            _inf_value4->terminated=(void*)sStrNode_terminated;
            _inf_value4->kind=(void*)sStrNode_kind;
            __result166__ = __result_obj__ = ((struct sNode*)(right_value413=_inf_value4));
            if(value_261 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value407);
            if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value407;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value408);
            if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { right_value408 = come_decrement_ref_count(right_value408, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value408;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value409);
            if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value409;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value413);
            if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[5] = right_value413;
            __freed_obj__ = 0;
            return __result166__;
            if(value_261 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_261, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            # 2324 "06str.c"
            # 1578 "06str.c"
            if(_if_conditional243=*((struct sInfo*)come_null_check(info, "06str.c", 1578))->p==47,            _if_conditional243) {
                # 1579 "06str.c"
                ((struct sInfo*)come_null_check(info, "06str.c", 1579))->p++;
                # 1581 "06str.c"
                sline_266=((struct sInfo*)come_null_check(info, "06str.c", 1581))->sline;
                # 1583 "06str.c"
                buf_267=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1583),__exception_result_var_b473=((struct buffer*)(right_value415=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value414=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1583))))))), come_pop_stackframe(), __exception_result_var_b473));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value414);
                if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value414;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value415);
                if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value415;
                __freed_obj__ = 0;
                # 1604 "06str.c"
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    # 1602 "06str.c"
                    # 1585 "06str.c"
                    if(_if_conditional244=*((struct sInfo*)come_null_check(info, "06str.c", 1585))->p==92&&*(((struct sInfo*)come_null_check(info, "06str.c", 1585))->p+1)==47,                    _if_conditional244) {
                        # 1586 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1586))->p++;
                        # 1587 "06str.c"
                        (come_push_stackframe("06str.c", 1587),__exception_result_var_b474=buffer_append_char(((struct buffer*)come_null_check(buf_267, "06str.c", 1587)),*((struct sInfo*)come_null_check(info, "06str.c", 1587))->p), come_pop_stackframe(), __exception_result_var_b474);
                        # 1588 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1588))->p++;
                    }
                    else {
                        # 1602 "06str.c"
                        # 1590 "06str.c"
                        if(_if_conditional245=*((struct sInfo*)come_null_check(info, "06str.c", 1590))->p==47,                        _if_conditional245) {
                            # 1591 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1591))->p++;
                            # 1592 "06str.c"
                            break;
                        }
                        else {
                            # 1602 "06str.c"
                            # 1594 "06str.c"
                            if(_if_conditional246=*((struct sInfo*)come_null_check(info, "06str.c", 1594))->p==0,                            _if_conditional246) {
                                # 1595 "06str.c"
                                (come_push_stackframe("06str.c", 1595),err_msg(info,"require closing / for regex"),come_pop_stackframe());
                                # 1596 "06str.c"
                                (come_push_stackframe("06str.c", 1596),exit(5),come_pop_stackframe());
                            }
                            else {
                                # 1599 "06str.c"
                                (come_push_stackframe("06str.c", 1599),__exception_result_var_b475=buffer_append_char(((struct buffer*)come_null_check(buf_267, "06str.c", 1599)),*((struct sInfo*)come_null_check(info, "06str.c", 1599))->p), come_pop_stackframe(), __exception_result_var_b475);
                                # 1600 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1600))->p++;
                            }
                        }
                    }
                }
                # 1604 "06str.c"
                global_268=(_Bool)0;
                # 1605 "06str.c"
                ignore_case_269=(_Bool)0;
                # 1620 "06str.c"
                while(_while_condtional18=*((struct sInfo*)come_null_check(info, "06str.c", 1606))->p==103||*((struct sInfo*)come_null_check(info, "06str.c", 1606))->p==105,                _while_condtional18) {
                    # 1618 "06str.c"
                    # 1607 "06str.c"
                    if(_if_conditional247=*((struct sInfo*)come_null_check(info, "06str.c", 1607))->p==103,                    _if_conditional247) {
                        # 1608 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1608))->p++;
                        # 1609 "06str.c"
                        global_268=(_Bool)1;
                    }
                    else {
                        # 1618 "06str.c"
                        # 1611 "06str.c"
                        if(_if_conditional248=*((struct sInfo*)come_null_check(info, "06str.c", 1611))->p==105,                        _if_conditional248) {
                            # 1612 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1612))->p++;
                            # 1613 "06str.c"
                            ignore_case_269=(_Bool)1;
                        }
                        else {
                            # 1616 "06str.c"
                            break;
                        }
                    }
                }
                # 1620 "06str.c"
                (come_push_stackframe("06str.c", 1620),skip_spaces_and_lf(info),come_pop_stackframe());
                # 1622 "06str.c"
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1622);
                _inf_obj_value5=come_increment_ref_count((come_push_stackframe("06str.c", 1622),__exception_result_var_b477=((struct sRegexNode*)(right_value418=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value416=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1622)))),(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1622),__exception_result_var_b476=((char*)(right_value417=buffer_to_string(((struct buffer*)come_null_check(buf_267, "06str.c", 1622))))), come_pop_stackframe(), __exception_result_var_b476)),global_268,ignore_case_269,sline_266,info))), come_pop_stackframe(), __exception_result_var_b477));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sRegexNode_finalize;
                _inf_value5->clone=(void*)sRegexNode_clone;
                _inf_value5->compile=(void*)sRegexNode_compile;
                _inf_value5->sline=(void*)sRegexNode_sline;
                _inf_value5->sname=(void*)sRegexNode_sname;
                _inf_value5->terminated=(void*)sRegexNode_terminated;
                _inf_value5->kind=(void*)sRegexNode_kind;
                __result169__ = __result_obj__ = ((struct sNode*)(right_value422=_inf_value5));
                if(buf_267 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value416);
                if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value416;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value417);
                if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { right_value417 = come_decrement_ref_count(right_value417, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value417;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value418);
                if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value418;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value422);
                if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { right_value422 = come_decrement_ref_count(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[5] = right_value422;
                __freed_obj__ = 0;
                return __result169__;
                if(buf_267 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_267, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                # 2324 "06str.c"
                # 1624 "06str.c"
                if(_if_conditional257=*((struct sInfo*)come_null_check(info, "06str.c", 1624))->p==39,                _if_conditional257) {
                    # 1625 "06str.c"
                    ((struct sInfo*)come_null_check(info, "06str.c", 1625))->p++;
                    # 1627 "06str.c"
                    # 1731 "06str.c"
                    # 1629 "06str.c"
                    if(_if_conditional258=*((struct sInfo*)come_null_check(info, "06str.c", 1629))->p==92,                    _if_conditional258) {
                        # 1630 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1630))->p++;
                        # 1725 "06str.c"
                        # 1632 "06str.c"
                        if(_if_conditional259=(come_push_stackframe("06str.c", 1632),__exception_result_var_b478=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1632))->p), come_pop_stackframe(), __exception_result_var_b478),                        _if_conditional259) {
                            # 1633 "06str.c"
                            n_272=0;
                            # 1639 "06str.c"
                            while(_while_condtional19=(come_push_stackframe("06str.c", 1634),__exception_result_var_b479=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1634))->p), come_pop_stackframe(), __exception_result_var_b479),                            _while_condtional19) {
                                # 1635 "06str.c"
                                n_272=n_272*8+*((struct sInfo*)come_null_check(info, "06str.c", 1635))->p-48;
                                # 1636 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1636))->p++;
                            }
                            # 1639 "06str.c"
                            c_271=n_272;
                        }
                        else {
                            # 1724 "06str.c"
                            switch (*((struct sInfo*)come_null_check(info, "06str.c", 1642))->p) {
                                # 1644 "06str.c"
                                case 110:
                                # 1644 "06str.c"
                                c_271=10;
                                # 1645 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1645))->p++;
                                # 1646 "06str.c"
                                break;
                                # 1649 "06str.c"
                                case 116:
                                # 1649 "06str.c"
                                c_271=9;
                                # 1650 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1650))->p++;
                                # 1651 "06str.c"
                                break;
                                # 1654 "06str.c"
                                case 114:
                                # 1654 "06str.c"
                                c_271=13;
                                # 1655 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1655))->p++;
                                # 1656 "06str.c"
                                break;
                                # 1659 "06str.c"
                                case 97:
                                # 1659 "06str.c"
                                c_271=7;
                                # 1660 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1660))->p++;
                                # 1661 "06str.c"
                                break;
                                # 1664 "06str.c"
                                case 102:
                                # 1664 "06str.c"
                                c_271=12;
                                # 1665 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1665))->p++;
                                # 1666 "06str.c"
                                break;
                                # 1669 "06str.c"
                                case 118:
                                # 1669 "06str.c"
                                c_271=11;
                                # 1670 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1670))->p++;
                                # 1671 "06str.c"
                                break;
                                # 1674 "06str.c"
                                case 98:
                                # 1674 "06str.c"
                                c_271=8;
                                # 1675 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1675))->p++;
                                # 1676 "06str.c"
                                break;
                                # 1679 "06str.c"
                                case 92:
                                # 1679 "06str.c"
                                c_271=92;
                                # 1680 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1680))->p++;
                                # 1681 "06str.c"
                                break;
                                # 1684 "06str.c"
                                case 48:
                                # 1684 "06str.c"
                                c_271=0;
                                # 1685 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1685))->p++;
                                # 1697 "06str.c"
                                # 1687 "06str.c"
                                if(_if_conditional260=(come_push_stackframe("06str.c", 1687),__exception_result_var_b480=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1687))->p), come_pop_stackframe(), __exception_result_var_b480),                                _if_conditional260) {
                                    # 1688 "06str.c"
                                    n_273=0;
                                    # 1695 "06str.c"
                                    while(_while_condtional20=(come_push_stackframe("06str.c", 1689),__exception_result_var_b481=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1689))->p), come_pop_stackframe(), __exception_result_var_b481),                                    _while_condtional20) {
                                        # 1690 "06str.c"
                                        n_273=n_273*8+*((struct sInfo*)come_null_check(info, "06str.c", 1690))->p-48;
                                        # 1691 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1691))->p++;
                                        # 1692 "06str.c"
                                        (come_push_stackframe("06str.c", 1692),skip_spaces_and_lf(info),come_pop_stackframe());
                                    }
                                    # 1695 "06str.c"
                                    c_271=n_273;
                                }
                                # 1697 "06str.c"
                                break;
                                # 1700 "06str.c"
                                case 120:
                                # 1700 "06str.c"
                                case 88:
                                # 1717 "06str.c"
                                {
                                    # 1701 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1701))->p++;
                                    # 1703 "06str.c"
                                    char buf_274[128];
                                    memset(&buf_274, 0, sizeof(char)                                    *(128)                                    );
                                    # 1704 "06str.c"
                                    (come_push_stackframe("06str.c", 1704),__exception_result_var_b482=strncpy(buf_274,"0x",128), come_pop_stackframe(), __exception_result_var_b482);
                                    # 1713 "06str.c"
                                    while(_while_condtional21=*((struct sInfo*)come_null_check(info, "06str.c", 1705))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 1705))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 1705))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 1705))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 1705))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 1705))->p<=70,                                    _while_condtional21) {
                                        # 1706 "06str.c"
                                        char buf2_275[2];
                                        memset(&buf2_275, 0, sizeof(char)                                        *(2)                                        );
                                        # 1707 "06str.c"
                                        buf2_275[0]=*((struct sInfo*)come_null_check(info, "06str.c", 1707))->p;
                                        # 1708 "06str.c"
                                        buf2_275[1]=0;
                                        # 1709 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1709))->p++;
                                        # 1710 "06str.c"
                                        (come_push_stackframe("06str.c", 1710),__exception_result_var_b483=strncat(buf_274,buf2_275,128), come_pop_stackframe(), __exception_result_var_b483);
                                    }
                                    # 1713 "06str.c"
                                    n_276=(come_push_stackframe("06str.c", 1713),__exception_result_var_b484=strtoll(buf_274,((void*)0),0), come_pop_stackframe(), __exception_result_var_b484);
                                    # 1715 "06str.c"
                                    c_271=n_276;
                                }
                                # 1717 "06str.c"
                                break;
                                # 1720 "06str.c"
                                default:
                                # 1720 "06str.c"
                                c_271=*((struct sInfo*)come_null_check(info, "06str.c", 1720))->p;
                                # 1721 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1721))->p++;
                                # 1722 "06str.c"
                                break;
                            }
                        }
                    }
                    else {
                        # 1727 "06str.c"
                        c_271=*((struct sInfo*)come_null_check(info, "06str.c", 1727))->p;
                        # 1728 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1728))->p++;
                    }
                    # 1741 "06str.c"
                    # 1731 "06str.c"
                    if(_if_conditional261=*((struct sInfo*)come_null_check(info, "06str.c", 1731))->p!=39,                    _if_conditional261) {
                        # 1732 "06str.c"
                        (come_push_stackframe("06str.c", 1732),err_msg(info,"close \' to make character value"),come_pop_stackframe());
                    }
                    else {
                        # 1735 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1735))->p++;
                        # 1737 "06str.c"
                        (come_push_stackframe("06str.c", 1737),skip_spaces_and_lf(info),come_pop_stackframe());
                        # 1739 "06str.c"
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1739);
                        _inf_obj_value6=come_increment_ref_count((come_push_stackframe("06str.c", 1739),__exception_result_var_b485=((struct sCharNode*)(right_value424=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value423=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1739)))),c_271,info))), come_pop_stackframe(), __exception_result_var_b485));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sCharNode_finalize;
                        _inf_value6->clone=(void*)sCharNode_clone;
                        _inf_value6->compile=(void*)sCharNode_compile;
                        _inf_value6->sline=(void*)sCharNode_sline;
                        _inf_value6->sname=(void*)sCharNode_sname;
                        _inf_value6->terminated=(void*)sCharNode_terminated;
                        _inf_value6->kind=(void*)sCharNode_kind;
                        __result172__ = __result_obj__ = ((struct sNode*)(right_value427=_inf_value6));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value423);
                        if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value423;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value424);
                        if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value424;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value427);
                        if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value427;
                        __freed_obj__ = 0;
                        return __result172__;
                    }
                }
                else {
                    # 2324 "06str.c"
                    # 1743 "06str.c"
                    if(_if_conditional267=*((struct sInfo*)come_null_check(info, "06str.c", 1743))->p==76&&*(((struct sInfo*)come_null_check(info, "06str.c", 1743))->p+1)==39,                    _if_conditional267) {
                        # 1744 "06str.c"
                        ((struct sInfo*)come_null_check(info, "06str.c", 1744))->p+=2;
                        # 1746 "06str.c"
                        # 1866 "06str.c"
                        # 1748 "06str.c"
                        if(_if_conditional268=*((struct sInfo*)come_null_check(info, "06str.c", 1748))->p==92,                        _if_conditional268) {
                            # 1749 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1749))->p++;
                            # 1830 "06str.c"
                            # 1751 "06str.c"
                            if(_if_conditional269=(come_push_stackframe("06str.c", 1751),__exception_result_var_b486=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1751))->p), come_pop_stackframe(), __exception_result_var_b486),                            _if_conditional269) {
                                # 1752 "06str.c"
                                n_279=0;
                                # 1758 "06str.c"
                                while(_while_condtional22=(come_push_stackframe("06str.c", 1753),__exception_result_var_b487=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1753))->p), come_pop_stackframe(), __exception_result_var_b487),                                _while_condtional22) {
                                    # 1754 "06str.c"
                                    n_279=n_279*8+*((struct sInfo*)come_null_check(info, "06str.c", 1754))->p-48;
                                    # 1755 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1755))->p++;
                                }
                                # 1758 "06str.c"
                                c_278=n_279;
                            }
                            else {
                                # 1829 "06str.c"
                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 1761))->p) {
                                    # 1763 "06str.c"
                                    case 110:
                                    # 1763 "06str.c"
                                    c_278=10;
                                    # 1764 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1764))->p++;
                                    # 1765 "06str.c"
                                    break;
                                    # 1768 "06str.c"
                                    case 116:
                                    # 1768 "06str.c"
                                    c_278=9;
                                    # 1769 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1769))->p++;
                                    # 1770 "06str.c"
                                    break;
                                    # 1773 "06str.c"
                                    case 114:
                                    # 1773 "06str.c"
                                    c_278=13;
                                    # 1774 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1774))->p++;
                                    # 1775 "06str.c"
                                    break;
                                    # 1778 "06str.c"
                                    case 97:
                                    # 1778 "06str.c"
                                    c_278=7;
                                    # 1779 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1779))->p++;
                                    # 1780 "06str.c"
                                    break;
                                    # 1783 "06str.c"
                                    case 92:
                                    # 1783 "06str.c"
                                    c_278=92;
                                    # 1784 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1784))->p++;
                                    # 1785 "06str.c"
                                    break;
                                    # 1788 "06str.c"
                                    case 48:
                                    # 1788 "06str.c"
                                    c_278=0;
                                    # 1790 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1790))->p++;
                                    # 1802 "06str.c"
                                    # 1792 "06str.c"
                                    if(_if_conditional270=(come_push_stackframe("06str.c", 1792),__exception_result_var_b488=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1792))->p), come_pop_stackframe(), __exception_result_var_b488),                                    _if_conditional270) {
                                        # 1793 "06str.c"
                                        n_280=0;
                                        # 1800 "06str.c"
                                        while(_while_condtional23=(come_push_stackframe("06str.c", 1794),__exception_result_var_b489=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1794))->p), come_pop_stackframe(), __exception_result_var_b489),                                        _while_condtional23) {
                                            # 1795 "06str.c"
                                            n_280=n_280*8+*((struct sInfo*)come_null_check(info, "06str.c", 1795))->p-48;
                                            # 1796 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1796))->p++;
                                            # 1797 "06str.c"
                                            (come_push_stackframe("06str.c", 1797),skip_spaces_and_lf(info),come_pop_stackframe());
                                        }
                                        # 1800 "06str.c"
                                        c_278=n_280;
                                    }
                                    # 1802 "06str.c"
                                    break;
                                    # 1805 "06str.c"
                                    case 120:
                                    # 1805 "06str.c"
                                    case 88:
                                    # 1822 "06str.c"
                                    {
                                        # 1806 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1806))->p++;
                                        # 1808 "06str.c"
                                        char buf_281[128];
                                        memset(&buf_281, 0, sizeof(char)                                        *(128)                                        );
                                        # 1809 "06str.c"
                                        (come_push_stackframe("06str.c", 1809),__exception_result_var_b490=strncpy(buf_281,"0x",128), come_pop_stackframe(), __exception_result_var_b490);
                                        # 1818 "06str.c"
                                        while(_while_condtional24=*((struct sInfo*)come_null_check(info, "06str.c", 1810))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 1810))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 1810))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 1810))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 1810))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 1810))->p<=70,                                        _while_condtional24) {
                                            # 1811 "06str.c"
                                            char buf2_282[2];
                                            memset(&buf2_282, 0, sizeof(char)                                            *(2)                                            );
                                            # 1812 "06str.c"
                                            buf2_282[0]=*((struct sInfo*)come_null_check(info, "06str.c", 1812))->p;
                                            # 1813 "06str.c"
                                            buf2_282[1]=0;
                                            # 1814 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1814))->p++;
                                            # 1815 "06str.c"
                                            (come_push_stackframe("06str.c", 1815),__exception_result_var_b491=strncat(buf_281,buf2_282,128), come_pop_stackframe(), __exception_result_var_b491);
                                        }
                                        # 1818 "06str.c"
                                        n_283=(come_push_stackframe("06str.c", 1818),__exception_result_var_b492=strtoll(buf_281,((void*)0),0), come_pop_stackframe(), __exception_result_var_b492);
                                        # 1820 "06str.c"
                                        c_278=n_283;
                                    }
                                    # 1822 "06str.c"
                                    break;
                                    # 1825 "06str.c"
                                    default:
                                    # 1825 "06str.c"
                                    c_278=*((struct sInfo*)come_null_check(info, "06str.c", 1825))->p;
                                    # 1826 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1826))->p++;
                                    # 1827 "06str.c"
                                    break;
                                }
                            }
                        }
                        else {
                            # 1832 "06str.c"
                            p2_284=*(unsigned char*)((struct sInfo*)come_null_check(info, "06str.c", 1832))->p;
                            # 1864 "06str.c"
                            # 1835 "06str.c"
                            if(_if_conditional271=p2_284>127,                            _if_conditional271) {
                                # 1836 "06str.c"
                                # 1837 "06str.c"
                                char str_286[16+1];
                                memset(&str_286, 0, sizeof(char)                                *(16+1)                                );
                                # 1839 "06str.c"
                                size_285=((p2_284&128)>>7)+((p2_284&64)>>6)+((p2_284&32)>>5)+((p2_284&16)>>4);
                                # 1858 "06str.c"
                                # 1841 "06str.c"
                                if(_if_conditional272=size_285>16,                                _if_conditional272) {
                                    # 1842 "06str.c"
                                    (come_push_stackframe("06str.c", 1842),err_msg(info,"invalid utf-8 character. MB_LEN_MAX"),come_pop_stackframe());
                                    # 1843 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1843))->err_num++;
                                }
                                else {
                                    # 1846 "06str.c"
                                    (come_push_stackframe("06str.c", 1846),__exception_result_var_b493=memcpy(str_286,((struct sInfo*)come_null_check(info, "06str.c", 1846))->p,size_285), come_pop_stackframe(), __exception_result_var_b493);
                                    # 1847 "06str.c"
                                    str_286[size_285]=0;
                                    # 1856 "06str.c"
                                    # 1849 "06str.c"
                                    if(_if_conditional273=(come_push_stackframe("06str.c", 1849),__exception_result_var_b494=mbtowc(&c_278,str_286,size_285), come_pop_stackframe(), __exception_result_var_b494)<0,                                    _if_conditional273) {
                                        # 1850 "06str.c"
                                        (come_push_stackframe("06str.c", 1850),perror("mbtowc"),come_pop_stackframe());
                                        # 1851 "06str.c"
                                        (come_push_stackframe("06str.c", 1851),err_msg(info,"invalid utf-8 character. mbtowc"),come_pop_stackframe());
                                        # 1852 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1852))->err_num++;
                                        # 1853 "06str.c"
                                        c_278=0;
                                    }
                                    # 1856 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1856))->p+=size_285;
                                }
                            }
                            else {
                                # 1861 "06str.c"
                                c_278=*((struct sInfo*)come_null_check(info, "06str.c", 1861))->p;
                                # 1862 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 1862))->p++;
                            }
                        }
                        # 1877 "06str.c"
                        # 1866 "06str.c"
                        if(_if_conditional274=*((struct sInfo*)come_null_check(info, "06str.c", 1866))->p!=39,                        _if_conditional274) {
                            # 1867 "06str.c"
                            (come_push_stackframe("06str.c", 1867),err_msg(info,"close \' to make character value"),come_pop_stackframe());
                            # 1868 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1868))->err_num++;
                        }
                        else {
                            # 1871 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1871))->p++;
                            # 1873 "06str.c"
                            (come_push_stackframe("06str.c", 1873),skip_spaces_and_lf(info),come_pop_stackframe());
                            # 1875 "06str.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1875);
                            _inf_obj_value7=come_increment_ref_count((come_push_stackframe("06str.c", 1875),__exception_result_var_b495=((struct sWCharNode*)(right_value429=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value428=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1875)))),c_278,info))), come_pop_stackframe(), __exception_result_var_b495));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sWCharNode_finalize;
                            _inf_value7->clone=(void*)sWCharNode_clone;
                            _inf_value7->compile=(void*)sWCharNode_compile;
                            _inf_value7->sline=(void*)sWCharNode_sline;
                            _inf_value7->sname=(void*)sWCharNode_sname;
                            _inf_value7->terminated=(void*)sWCharNode_terminated;
                            _inf_value7->kind=(void*)sWCharNode_kind;
                            __result175__ = __result_obj__ = ((struct sNode*)(right_value432=_inf_value7));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value428);
                            if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value428;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value429);
                            if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value429;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value432);
                            if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { right_value432 = come_decrement_ref_count(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value432;
                            __freed_obj__ = 0;
                            return __result175__;
                        }
                    }
                    else {
                        # 2324 "06str.c"
                        # 1879 "06str.c"
                        if(_if_conditional280=*((struct sInfo*)come_null_check(info, "06str.c", 1879))->p==76&&*(((struct sInfo*)come_null_check(info, "06str.c", 1879))->p+1)==34,                        _if_conditional280) {
                            # 1880 "06str.c"
                            ((struct sInfo*)come_null_check(info, "06str.c", 1880))->p+=2;
                            # 1882 "06str.c"
                            sline_288=((struct sInfo*)come_null_check(info, "06str.c", 1882))->sline;
                            # 1884 "06str.c"
                            value_289=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1884),__exception_result_var_b496=((struct buffer*)(right_value434=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value433=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1884))))))), come_pop_stackframe(), __exception_result_var_b496));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value433);
                            if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value433;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value434);
                            if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value434;
                            __freed_obj__ = 0;
                            # 2003 "06str.c"
                            while(_while_condtional25=1,                            _while_condtional25) {
                                # 2001 "06str.c"
                                # 1887 "06str.c"
                                if(_if_conditional281=*((struct sInfo*)come_null_check(info, "06str.c", 1887))->p==34,                                _if_conditional281) {
                                    # 1888 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 1888))->p++;
                                    # 1890 "06str.c"
                                    p_290=((struct sInfo*)come_null_check(info, "06str.c", 1890))->p;
                                    # 1891 "06str.c"
                                    sline_291=((struct sInfo*)come_null_check(info, "06str.c", 1891))->sline;
                                    # 1893 "06str.c"
                                    (come_push_stackframe("06str.c", 1893),skip_spaces_and_lf(info),come_pop_stackframe());
                                    # 1903 "06str.c"
                                    # 1895 "06str.c"
                                    if(_if_conditional282=*((struct sInfo*)come_null_check(info, "06str.c", 1895))->p==34,                                    _if_conditional282) {
                                        # 1896 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1896))->p++;
                                    }
                                    else {
                                        # 1899 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1899))->p=p_290;
                                        # 1900 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1900))->sline=sline_291;
                                        # 1901 "06str.c"
                                        break;
                                    }
                                }
                                else {
                                    # 2001 "06str.c"
                                    # 1904 "06str.c"
                                    if(_if_conditional283=*((struct sInfo*)come_null_check(info, "06str.c", 1904))->p==92,                                    _if_conditional283) {
                                        # 1905 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 1905))->p++;
                                        # 1988 "06str.c"
                                        # 1907 "06str.c"
                                        if(_if_conditional284=(come_push_stackframe("06str.c", 1907),__exception_result_var_b497=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1907))->p), come_pop_stackframe(), __exception_result_var_b497),                                        _if_conditional284) {
                                            # 1908 "06str.c"
                                            len_292=0;
                                            # 1909 "06str.c"
                                            n_293=0;
                                            # 1916 "06str.c"
                                            while(_while_condtional26=(come_push_stackframe("06str.c", 1910),__exception_result_var_b498=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 1910))->p), come_pop_stackframe(), __exception_result_var_b498)&&len_292<3,                                            _while_condtional26) {
                                                # 1911 "06str.c"
                                                n_293=n_293*8+*((struct sInfo*)come_null_check(info, "06str.c", 1911))->p-48;
                                                # 1912 "06str.c"
                                                ((struct sInfo*)come_null_check(info, "06str.c", 1912))->p++;
                                                # 1913 "06str.c"
                                                len_292++;
                                            }
                                            # 1916 "06str.c"
                                            (come_push_stackframe("06str.c", 1916),__exception_result_var_b499=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1916)),n_293), come_pop_stackframe(), __exception_result_var_b499);
                                        }
                                        else {
                                            # 1988 "06str.c"
                                            # 1918 "06str.c"
                                            if(_if_conditional285=*((struct sInfo*)come_null_check(info, "06str.c", 1918))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 1918))->p==88,                                            _if_conditional285) {
                                                # 1919 "06str.c"
                                                ((struct sInfo*)come_null_check(info, "06str.c", 1919))->p++;
                                                # 1921 "06str.c"
                                                char buf_294[128];
                                                memset(&buf_294, 0, sizeof(char)                                                *(128)                                                );
                                                # 1922 "06str.c"
                                                (come_push_stackframe("06str.c", 1922),__exception_result_var_b500=strncpy(buf_294,"0x",128), come_pop_stackframe(), __exception_result_var_b500);
                                                # 1931 "06str.c"
                                                while(_while_condtional27=*((struct sInfo*)come_null_check(info, "06str.c", 1923))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 1923))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 1923))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 1923))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 1923))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 1923))->p<=70,                                                _while_condtional27) {
                                                    # 1924 "06str.c"
                                                    char buf2_295[2];
                                                    memset(&buf2_295, 0, sizeof(char)                                                    *(2)                                                    );
                                                    # 1925 "06str.c"
                                                    buf2_295[0]=*((struct sInfo*)come_null_check(info, "06str.c", 1925))->p;
                                                    # 1926 "06str.c"
                                                    buf2_295[1]=0;
                                                    # 1927 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 1927))->p++;
                                                    # 1928 "06str.c"
                                                    (come_push_stackframe("06str.c", 1928),__exception_result_var_b501=strncat(buf_294,buf2_295,128), come_pop_stackframe(), __exception_result_var_b501);
                                                }
                                                # 1931 "06str.c"
                                                # 1931 "06str.c"
                                                n_297=(come_push_stackframe("06str.c", 1931),__exception_result_var_b502=strtoll(buf_294,((void*)0),0), come_pop_stackframe(), __exception_result_var_b502);
                                                # 1933 "06str.c"
                                                (come_push_stackframe("06str.c", 1933),__exception_result_var_b503=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1933)),(char)n_297), come_pop_stackframe(), __exception_result_var_b503);
                                            }
                                            else {
                                                # 1987 "06str.c"
                                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 1936))->p) {
                                                    # 1938 "06str.c"
                                                    case 48:
                                                    # 1938 "06str.c"
                                                    (come_push_stackframe("06str.c", 1938),__exception_result_var_b504=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1938)),0), come_pop_stackframe(), __exception_result_var_b504);
                                                    # 1939 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 1939))->p++;
                                                    # 1940 "06str.c"
                                                    break;
                                                    # 1943 "06str.c"
                                                    case 110:
                                                    # 1943 "06str.c"
                                                    (come_push_stackframe("06str.c", 1943),__exception_result_var_b505=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1943)),10), come_pop_stackframe(), __exception_result_var_b505);
                                                    # 1944 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 1944))->p++;
                                                    # 1945 "06str.c"
                                                    break;
                                                    # 1948 "06str.c"
                                                    case 116:
                                                    # 1948 "06str.c"
                                                    (come_push_stackframe("06str.c", 1948),__exception_result_var_b506=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1948)),9), come_pop_stackframe(), __exception_result_var_b506);
                                                    # 1949 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 1949))->p++;
                                                    # 1950 "06str.c"
                                                    break;
                                                    # 1953 "06str.c"
                                                    case 114:
                                                    # 1953 "06str.c"
                                                    (come_push_stackframe("06str.c", 1953),__exception_result_var_b507=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1953)),13), come_pop_stackframe(), __exception_result_var_b507);
                                                    # 1954 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 1954))->p++;
                                                    # 1955 "06str.c"
                                                    break;
                                                    # 1958 "06str.c"
                                                    case 118:
                                                    # 1958 "06str.c"
                                                    (come_push_stackframe("06str.c", 1958),__exception_result_var_b508=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1958)),11), come_pop_stackframe(), __exception_result_var_b508);
                                                    # 1959 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 1959))->p++;
                                                    # 1960 "06str.c"
                                                    break;
                                                    # 1963 "06str.c"
                                                    case 102:
                                                    # 1963 "06str.c"
                                                    (come_push_stackframe("06str.c", 1963),__exception_result_var_b509=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1963)),12), come_pop_stackframe(), __exception_result_var_b509);
                                                    # 1964 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 1964))->p++;
                                                    # 1965 "06str.c"
                                                    break;
                                                    # 1968 "06str.c"
                                                    case 97:
                                                    # 1968 "06str.c"
                                                    (come_push_stackframe("06str.c", 1968),__exception_result_var_b510=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1968)),7), come_pop_stackframe(), __exception_result_var_b510);
                                                    # 1969 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 1969))->p++;
                                                    # 1970 "06str.c"
                                                    break;
                                                    # 1973 "06str.c"
                                                    case 98:
                                                    # 1973 "06str.c"
                                                    (come_push_stackframe("06str.c", 1973),__exception_result_var_b511=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1973)),8), come_pop_stackframe(), __exception_result_var_b511);
                                                    # 1974 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 1974))->p++;
                                                    # 1975 "06str.c"
                                                    break;
                                                    # 1978 "06str.c"
                                                    case 92:
                                                    # 1978 "06str.c"
                                                    (come_push_stackframe("06str.c", 1978),__exception_result_var_b512=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1978)),92), come_pop_stackframe(), __exception_result_var_b512);
                                                    # 1979 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 1979))->p++;
                                                    # 1980 "06str.c"
                                                    break;
                                                    # 1983 "06str.c"
                                                    default:
                                                    # 1983 "06str.c"
                                                    (come_push_stackframe("06str.c", 1983),__exception_result_var_b513=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1983)),*((struct sInfo*)come_null_check(info, "06str.c", 1983))->p), come_pop_stackframe(), __exception_result_var_b513);
                                                    # 1984 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 1984))->p++;
                                                    # 1985 "06str.c"
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        # 2001 "06str.c"
                                        # 1989 "06str.c"
                                        if(_if_conditional286=*((struct sInfo*)come_null_check(info, "06str.c", 1989))->p==0,                                        _if_conditional286) {
                                            # 1990 "06str.c"
                                            sline2_298=((struct sInfo*)come_null_check(info, "06str.c", 1990))->sline;
                                            # 1991 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1991))->sline=sline_288;
                                            # 1992 "06str.c"
                                            (come_push_stackframe("06str.c", 1992),err_msg(info,"close \" to make c string value"),come_pop_stackframe());
                                            # 1993 "06str.c"
                                            (come_push_stackframe("06str.c", 1993),exit(2),come_pop_stackframe());
                                        }
                                        else {
                                            # 1996 "06str.c"
                                            # 1996 "06str.c"
                                            if(_if_conditional287=*((struct sInfo*)come_null_check(info, "06str.c", 1996))->p==10,                                            _if_conditional287) {
                                                # 1996 "06str.c"
                                                ((struct sInfo*)come_null_check(info, "06str.c", 1996))->sline++;
                                            }
                                            # 1998 "06str.c"
                                            (come_push_stackframe("06str.c", 1998),__exception_result_var_b514=buffer_append_char(((struct buffer*)come_null_check(value_289, "06str.c", 1998)),*((struct sInfo*)come_null_check(info, "06str.c", 1998))->p), come_pop_stackframe(), __exception_result_var_b514);
                                            # 1999 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 1999))->p++;
                                        }
                                    }
                                }
                            }
                            # 2003 "06str.c"
                            (come_push_stackframe("06str.c", 2003),skip_spaces_and_lf(info),come_pop_stackframe());
                            # 2005 "06str.c"
                            len_299=((struct buffer*)come_null_check(value_289, "06str.c", 2005))->len;
                            # 2007 "06str.c"
                            wstr_300=(int*)come_increment_ref_count(((int*)(right_value435=(int*)come_calloc(1, sizeof(int)*(1*(len_299+1)), "06str.c", 2007))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value435);
                            if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value435;
                            __freed_obj__ = 0;
                            # 2009 "06str.c"
                            str_301=((struct buffer*)come_null_check(value_289, "06str.c", 2009))->buf;
                            # 2016 "06str.c"
                            # 2011 "06str.c"
                            if(_if_conditional288=(come_push_stackframe("06str.c", 2011),__exception_result_var_b515=mbstowcs(wstr_300,str_301,len_299+1), come_pop_stackframe(), __exception_result_var_b515)<0,                            _if_conditional288) {
                                # 2012 "06str.c"
                                (come_push_stackframe("06str.c", 2012),perror("mbstowcs"),come_pop_stackframe());
                                # 2013 "06str.c"
                                (come_push_stackframe("06str.c", 2013),exit(1),come_pop_stackframe());
                            }
                            # 2016 "06str.c"
                            wstr_300[len_299]=0;
                            # 2018 "06str.c"
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2018);
                            _inf_obj_value8=come_increment_ref_count((come_push_stackframe("06str.c", 2018),__exception_result_var_b516=((struct sWStringNode*)(right_value437=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value436=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2018)))),(int*)come_increment_ref_count(wstr_300),sline_288,info))), come_pop_stackframe(), __exception_result_var_b516));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sWStringNode_finalize;
                            _inf_value8->clone=(void*)sWStringNode_clone;
                            _inf_value8->compile=(void*)sWStringNode_compile;
                            _inf_value8->sline=(void*)sWStringNode_sline;
                            _inf_value8->sname=(void*)sWStringNode_sname;
                            _inf_value8->terminated=(void*)sWStringNode_terminated;
                            _inf_value8->kind=(void*)sWStringNode_kind;
                            __result178__ = __result_obj__ = ((struct sNode*)(right_value441=_inf_value8));
                            if(value_289 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_289, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_300 && !__freed_obj__) { wstr_300 = come_decrement_ref_count(wstr_300, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value436);
                            if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value436;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value437);
                            if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value437;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value441);
                            if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { right_value441 = come_decrement_ref_count(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[5] = right_value441;
                            __freed_obj__ = 0;
                            return __result178__;
                            if(value_289 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_289, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_300 && !__freed_obj__) { wstr_300 = come_decrement_ref_count(wstr_300, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            # 2324 "06str.c"
                            # 2021 "06str.c"
                            if(_if_conditional295=(*((struct sInfo*)come_null_check(info, "06str.c", 2021))->p==115||*((struct sInfo*)come_null_check(info, "06str.c", 2021))->p==83)&&*(((struct sInfo*)come_null_check(info, "06str.c", 2021))->p+1)==34,                            _if_conditional295) {
                                # 2022 "06str.c"
                                ((struct sInfo*)come_null_check(info, "06str.c", 2022))->p+=2;
                                # 2024 "06str.c"
                                sline_303=((struct sInfo*)come_null_check(info, "06str.c", 2024))->sline;
                                # 2026 "06str.c"
                                exps_304=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 2026),__exception_result_var_b517=((struct list$1sNodeph*)(right_value443=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value442=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2026))))))), come_pop_stackframe(), __exception_result_var_b517));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value442);
                                if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value442;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value443);
                                if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value443;
                                __freed_obj__ = 0;
                                # 2027 "06str.c"
                                value_305=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 2027),__exception_result_var_b518=((struct buffer*)(right_value445=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value444=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2027))))))), come_pop_stackframe(), __exception_result_var_b518));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value444);
                                if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value444;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value445);
                                if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value445;
                                __freed_obj__ = 0;
                                # 2170 "06str.c"
                                while(_while_condtional28=1,                                _while_condtional28) {
                                    # 2168 "06str.c"
                                    # 2030 "06str.c"
                                    if(_if_conditional296=*((struct sInfo*)come_null_check(info, "06str.c", 2030))->p==34,                                    _if_conditional296) {
                                        # 2031 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2031))->p++;
                                        # 2033 "06str.c"
                                        p_306=((struct sInfo*)come_null_check(info, "06str.c", 2033))->p;
                                        # 2034 "06str.c"
                                        sline_307=((struct sInfo*)come_null_check(info, "06str.c", 2034))->sline;
                                        # 2036 "06str.c"
                                        (come_push_stackframe("06str.c", 2036),skip_spaces_and_lf(info),come_pop_stackframe());
                                        # 2046 "06str.c"
                                        # 2038 "06str.c"
                                        if(_if_conditional297=*((struct sInfo*)come_null_check(info, "06str.c", 2038))->p==34,                                        _if_conditional297) {
                                            # 2039 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2039))->p++;
                                        }
                                        else {
                                            # 2042 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2042))->p=p_306;
                                            # 2043 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2043))->sline=sline_307;
                                            # 2044 "06str.c"
                                            break;
                                        }
                                    }
                                    else {
                                        # 2168 "06str.c"
                                        # 2047 "06str.c"
                                        if(_if_conditional298=*((struct sInfo*)come_null_check(info, "06str.c", 2047))->p==37,                                        _if_conditional298) {
                                            # 2048 "06str.c"
                                            (come_push_stackframe("06str.c", 2048),__exception_result_var_b519=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2048)),37), come_pop_stackframe(), __exception_result_var_b519);
                                            # 2049 "06str.c"
                                            (come_push_stackframe("06str.c", 2049),__exception_result_var_b520=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2049)),37), come_pop_stackframe(), __exception_result_var_b520);
                                            # 2050 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2050))->p++;
                                        }
                                        else {
                                            # 2168 "06str.c"
                                            # 2052 "06str.c"
                                            if(_if_conditional299=*((struct sInfo*)come_null_check(info, "06str.c", 2052))->p==36,                                            _if_conditional299) {
                                                # 2053 "06str.c"
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2053))->p++;
                                                # 2055 "06str.c"
                                                exp_308=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 2055),__exception_result_var_b521=((struct sNode*)(right_value446=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b521));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value446);
                                                if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { right_value446 = come_decrement_ref_count(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value446;
                                                __freed_obj__ = 0;
                                                # 2057 "06str.c"
                                                (come_push_stackframe("06str.c", 2057),__exception_result_var_b522=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_304, "06str.c", 2057)),(struct sNode*)come_increment_ref_count(exp_308)), come_pop_stackframe(), __exception_result_var_b522);
                                                # 2059 "06str.c"
                                                (come_push_stackframe("06str.c", 2059),__exception_result_var_b523=buffer_append_str(((struct buffer*)come_null_check(value_305, "06str.c", 2059)),"%s"), come_pop_stackframe(), __exception_result_var_b523);
                                                # 2061 "06str.c"
                                                p_309=((struct sInfo*)come_null_check(info, "06str.c", 2061))->p-1;
                                                # 2066 "06str.c"
                                                while(_while_condtional29=*p_309==32||*p_309==9,                                                _while_condtional29) {
                                                    # 2063 "06str.c"
                                                    p_309--;
                                                }
                                                # 2066 "06str.c"
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2066))->p=p_309+1;
                                                if(exp_308 && !__freed_obj__) { exp_308 = come_decrement_ref_count(exp_308, ((struct sNode*)exp_308)->finalize, ((struct sNode*)exp_308)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                # 2168 "06str.c"
                                                # 2068 "06str.c"
                                                if(_if_conditional300=*((struct sInfo*)come_null_check(info, "06str.c", 2068))->p==92,                                                _if_conditional300) {
                                                    # 2069 "06str.c"
                                                    (come_push_stackframe("06str.c", 2069),__exception_result_var_b524=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2069)),92), come_pop_stackframe(), __exception_result_var_b524);
                                                    # 2070 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2070))->p++;
                                                    # 2155 "06str.c"
                                                    # 2072 "06str.c"
                                                    if(_if_conditional301=(come_push_stackframe("06str.c", 2072),__exception_result_var_b525=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2072))->p), come_pop_stackframe(), __exception_result_var_b525),                                                    _if_conditional301) {
                                                        # 2073 "06str.c"
                                                        len_310=0;
                                                        # 2079 "06str.c"
                                                        while(_while_condtional30=(come_push_stackframe("06str.c", 2074),__exception_result_var_b526=xisdigit(*((struct sInfo*)come_null_check(info, "06str.c", 2074))->p), come_pop_stackframe(), __exception_result_var_b526)&&len_310<3,                                                        _while_condtional30) {
                                                            # 2075 "06str.c"
                                                            (come_push_stackframe("06str.c", 2075),__exception_result_var_b527=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2075)),*((struct sInfo*)come_null_check(info, "06str.c", 2075))->p), come_pop_stackframe(), __exception_result_var_b527);
                                                            # 2076 "06str.c"
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2076))->p++;
                                                            # 2077 "06str.c"
                                                            len_310++;
                                                        }
                                                    }
                                                    else {
                                                        # 2155 "06str.c"
                                                        # 2080 "06str.c"
                                                        if(_if_conditional302=*((struct sInfo*)come_null_check(info, "06str.c", 2080))->p==120||*((struct sInfo*)come_null_check(info, "06str.c", 2080))->p==88,                                                        _if_conditional302) {
                                                            # 2081 "06str.c"
                                                            (come_push_stackframe("06str.c", 2081),__exception_result_var_b528=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2081)),*((struct sInfo*)come_null_check(info, "06str.c", 2081))->p), come_pop_stackframe(), __exception_result_var_b528);
                                                            # 2082 "06str.c"
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2082))->p++;
                                                            # 2088 "06str.c"
                                                            while(_while_condtional31=*((struct sInfo*)come_null_check(info, "06str.c", 2084))->p>=48&&*((struct sInfo*)come_null_check(info, "06str.c", 2084))->p<=57||*((struct sInfo*)come_null_check(info, "06str.c", 2084))->p>=97&&*((struct sInfo*)come_null_check(info, "06str.c", 2084))->p<=102||*((struct sInfo*)come_null_check(info, "06str.c", 2084))->p>=65&&*((struct sInfo*)come_null_check(info, "06str.c", 2084))->p<=70,                                                            _while_condtional31) {
                                                                # 2085 "06str.c"
                                                                (come_push_stackframe("06str.c", 2085),__exception_result_var_b529=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2085)),*((struct sInfo*)come_null_check(info, "06str.c", 2085))->p), come_pop_stackframe(), __exception_result_var_b529);
                                                                # 2086 "06str.c"
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2086))->p++;
                                                            }
                                                        }
                                                        else {
                                                            # 2155 "06str.c"
                                                            # 2089 "06str.c"
                                                            if(_if_conditional303=*((struct sInfo*)come_null_check(info, "06str.c", 2089))->p==123,                                                            _if_conditional303) {
                                                                # 2090 "06str.c"
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2090))->p++;
                                                                # 2092 "06str.c"
                                                                exp_311=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 2092),__exception_result_var_b530=((struct sNode*)(right_value447=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b530));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value447);
                                                                if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { right_value447 = come_decrement_ref_count(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0); } 
                                                                __right_value_freed_obj[0] = right_value447;
                                                                __freed_obj__ = 0;
                                                                # 2094 "06str.c"
                                                                (come_push_stackframe("06str.c", 2094),__exception_result_var_b531=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(exps_304, "06str.c", 2094)),(struct sNode*)come_increment_ref_count(exp_311)), come_pop_stackframe(), __exception_result_var_b531);
                                                                # 2100 "06str.c"
                                                                # 2096 "06str.c"
                                                                if(_if_conditional304=*((struct sInfo*)come_null_check(info, "06str.c", 2096))->p==125,                                                                _if_conditional304) {
                                                                    # 2097 "06str.c"
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2097))->p++;
                                                                }
                                                                # 2100 "06str.c"
                                                                (come_push_stackframe("06str.c", 2100),__exception_result_var_b532=buffer_append_str(((struct buffer*)come_null_check(value_305, "06str.c", 2100)),"%s"), come_pop_stackframe(), __exception_result_var_b532);
                                                                if(exp_311 && !__freed_obj__) { exp_311 = come_decrement_ref_count(exp_311, ((struct sNode*)exp_311)->finalize, ((struct sNode*)exp_311)->_protocol_obj, 0, 0, 0); } 
                                                            }
                                                            else {
                                                                # 2154 "06str.c"
                                                                switch (*((struct sInfo*)come_null_check(info, "06str.c", 2103))->p) {
                                                                    # 2105 "06str.c"
                                                                    case 48:
                                                                    # 2105 "06str.c"
                                                                    (come_push_stackframe("06str.c", 2105),__exception_result_var_b533=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2105)),*((struct sInfo*)come_null_check(info, "06str.c", 2105))->p), come_pop_stackframe(), __exception_result_var_b533);
                                                                    # 2106 "06str.c"
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2106))->p++;
                                                                    # 2107 "06str.c"
                                                                    break;
                                                                    # 2110 "06str.c"
                                                                    case 110:
                                                                    # 2110 "06str.c"
                                                                    (come_push_stackframe("06str.c", 2110),__exception_result_var_b534=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2110)),*((struct sInfo*)come_null_check(info, "06str.c", 2110))->p), come_pop_stackframe(), __exception_result_var_b534);
                                                                    # 2111 "06str.c"
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2111))->p++;
                                                                    # 2112 "06str.c"
                                                                    break;
                                                                    # 2115 "06str.c"
                                                                    case 116:
                                                                    # 2115 "06str.c"
                                                                    (come_push_stackframe("06str.c", 2115),__exception_result_var_b535=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2115)),*((struct sInfo*)come_null_check(info, "06str.c", 2115))->p), come_pop_stackframe(), __exception_result_var_b535);
                                                                    # 2116 "06str.c"
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2116))->p++;
                                                                    # 2117 "06str.c"
                                                                    break;
                                                                    # 2120 "06str.c"
                                                                    case 114:
                                                                    # 2120 "06str.c"
                                                                    (come_push_stackframe("06str.c", 2120),__exception_result_var_b536=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2120)),*((struct sInfo*)come_null_check(info, "06str.c", 2120))->p), come_pop_stackframe(), __exception_result_var_b536);
                                                                    # 2121 "06str.c"
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2121))->p++;
                                                                    # 2122 "06str.c"
                                                                    break;
                                                                    # 2125 "06str.c"
                                                                    case 118:
                                                                    # 2125 "06str.c"
                                                                    (come_push_stackframe("06str.c", 2125),__exception_result_var_b537=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2125)),*((struct sInfo*)come_null_check(info, "06str.c", 2125))->p), come_pop_stackframe(), __exception_result_var_b537);
                                                                    # 2126 "06str.c"
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2126))->p++;
                                                                    # 2127 "06str.c"
                                                                    break;
                                                                    # 2130 "06str.c"
                                                                    case 102:
                                                                    # 2130 "06str.c"
                                                                    (come_push_stackframe("06str.c", 2130),__exception_result_var_b538=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2130)),*((struct sInfo*)come_null_check(info, "06str.c", 2130))->p), come_pop_stackframe(), __exception_result_var_b538);
                                                                    # 2131 "06str.c"
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2131))->p++;
                                                                    # 2132 "06str.c"
                                                                    break;
                                                                    # 2135 "06str.c"
                                                                    case 97:
                                                                    # 2135 "06str.c"
                                                                    (come_push_stackframe("06str.c", 2135),__exception_result_var_b539=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2135)),*((struct sInfo*)come_null_check(info, "06str.c", 2135))->p), come_pop_stackframe(), __exception_result_var_b539);
                                                                    # 2136 "06str.c"
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2136))->p++;
                                                                    # 2137 "06str.c"
                                                                    break;
                                                                    # 2140 "06str.c"
                                                                    case 98:
                                                                    # 2140 "06str.c"
                                                                    (come_push_stackframe("06str.c", 2140),__exception_result_var_b540=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2140)),*((struct sInfo*)come_null_check(info, "06str.c", 2140))->p), come_pop_stackframe(), __exception_result_var_b540);
                                                                    # 2141 "06str.c"
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2141))->p++;
                                                                    # 2142 "06str.c"
                                                                    break;
                                                                    # 2145 "06str.c"
                                                                    case 92:
                                                                    # 2145 "06str.c"
                                                                    (come_push_stackframe("06str.c", 2145),__exception_result_var_b541=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2145)),*((struct sInfo*)come_null_check(info, "06str.c", 2145))->p), come_pop_stackframe(), __exception_result_var_b541);
                                                                    # 2146 "06str.c"
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2146))->p++;
                                                                    # 2147 "06str.c"
                                                                    break;
                                                                    # 2150 "06str.c"
                                                                    default:
                                                                    # 2150 "06str.c"
                                                                    (come_push_stackframe("06str.c", 2150),__exception_result_var_b542=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2150)),*((struct sInfo*)come_null_check(info, "06str.c", 2150))->p), come_pop_stackframe(), __exception_result_var_b542);
                                                                    # 2151 "06str.c"
                                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2151))->p++;
                                                                    # 2152 "06str.c"
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 2168 "06str.c"
                                                    # 2156 "06str.c"
                                                    if(_if_conditional305=*((struct sInfo*)come_null_check(info, "06str.c", 2156))->p==0,                                                    _if_conditional305) {
                                                        # 2157 "06str.c"
                                                        sline2_312=((struct sInfo*)come_null_check(info, "06str.c", 2157))->sline;
                                                        # 2158 "06str.c"
                                                        ((struct sInfo*)come_null_check(info, "06str.c", 2158))->sline=sline_303;
                                                        # 2159 "06str.c"
                                                        (come_push_stackframe("06str.c", 2159),err_msg(info,"close \" to make embbeded string value"),come_pop_stackframe());
                                                        # 2160 "06str.c"
                                                        (come_push_stackframe("06str.c", 2160),exit(2),come_pop_stackframe());
                                                    }
                                                    else {
                                                        # 2163 "06str.c"
                                                        # 2163 "06str.c"
                                                        if(_if_conditional306=*((struct sInfo*)come_null_check(info, "06str.c", 2163))->p==10,                                                        _if_conditional306) {
                                                            # 2163 "06str.c"
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2163))->sline++;
                                                        }
                                                        # 2165 "06str.c"
                                                        (come_push_stackframe("06str.c", 2165),__exception_result_var_b543=buffer_append_char(((struct buffer*)come_null_check(value_305, "06str.c", 2165)),*((struct sInfo*)come_null_check(info, "06str.c", 2165))->p), come_pop_stackframe(), __exception_result_var_b543);
                                                        # 2166 "06str.c"
                                                        ((struct sInfo*)come_null_check(info, "06str.c", 2166))->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                # 2170 "06str.c"
                                (come_push_stackframe("06str.c", 2170),skip_spaces_and_lf(info),come_pop_stackframe());
                                # 2172 "06str.c"
                                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2172);
                                _inf_obj_value9=come_increment_ref_count((come_push_stackframe("06str.c", 2172),__exception_result_var_b545=((struct sSStringNode*)(right_value450=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value448=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2172)))),(char*)come_increment_ref_count((come_push_stackframe("06str.c", 2172),__exception_result_var_b544=((char*)(right_value449=buffer_to_string(((struct buffer*)come_null_check(value_305, "06str.c", 2172))))), come_pop_stackframe(), __exception_result_var_b544)),(struct list$1sNodeph*)come_increment_ref_count(exps_304),sline_303,info))), come_pop_stackframe(), __exception_result_var_b545));
                                _inf_value9->_protocol_obj=_inf_obj_value9;
                                _inf_value9->finalize=(void*)sSStringNode_finalize;
                                _inf_value9->clone=(void*)sSStringNode_clone;
                                _inf_value9->compile=(void*)sSStringNode_compile;
                                _inf_value9->sline=(void*)sSStringNode_sline;
                                _inf_value9->sname=(void*)sSStringNode_sname;
                                _inf_value9->terminated=(void*)sSStringNode_terminated;
                                _inf_value9->kind=(void*)sSStringNode_kind;
                                __result181__ = __result_obj__ = ((struct sNode*)(right_value455=_inf_value9));
                                if(exps_304 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_304, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_305 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_305, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value448);
                                if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[4] = right_value448;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value449);
                                if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { right_value449 = come_decrement_ref_count(right_value449, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[5] = right_value449;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value450);
                                if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[6] = right_value450;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value455);
                                if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { right_value455 = come_decrement_ref_count(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[7] = right_value455;
                                __freed_obj__ = 0;
                                return __result181__;
                                if(exps_304 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_304, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_305 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_305, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            else {
                                # 2324 "06str.c"
                                # 2174 "06str.c"
                                if(_if_conditional315=*((struct sInfo*)come_null_check(info, "06str.c", 2174))->p==91,                                _if_conditional315) {
                                    # 2175 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2175))->p++;
                                    # 2176 "06str.c"
                                    (come_push_stackframe("06str.c", 2176),skip_spaces_and_lf(info),come_pop_stackframe());
                                    # 2178 "06str.c"
                                    p_314=((struct sInfo*)come_null_check(info, "06str.c", 2178))->p;
                                    # 2180 "06str.c"
                                    no_comma_315=((struct sInfo*)come_null_check(info, "06str.c", 2180))->no_comma;
                                    # 2181 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2181))->no_comma=(_Bool)1;
                                    # 2183 "06str.c"
                                    node_316=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 2183),__exception_result_var_b546=((struct sNode*)(right_value456=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b546));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value456);
                                    if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { right_value456 = come_decrement_ref_count(right_value456, ((struct sNode*)right_value456)->finalize, ((struct sNode*)right_value456)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value456;
                                    __freed_obj__ = 0;
                                    # 2185 "06str.c"
                                    ((struct sInfo*)come_null_check(info, "06str.c", 2185))->no_comma=no_comma_315;
                                    # 2187 "06str.c"
                                    p2_317=((struct sInfo*)come_null_check(info, "06str.c", 2187))->p;
                                    # 2189 "06str.c"
                                    first_element_source_318=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 2189),__exception_result_var_b547=((struct buffer*)(right_value458=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value457=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2189))))))), come_pop_stackframe(), __exception_result_var_b547));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value457);
                                    if(right_value457 && right_value457 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value457;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value458);
                                    if(right_value458 && right_value458 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value458;
                                    __freed_obj__ = 0;
                                    # 2191 "06str.c"
                                    (come_push_stackframe("06str.c", 2191),__exception_result_var_b548=buffer_append(((struct buffer*)come_null_check(first_element_source_318, "06str.c", 2191)),p_314,p2_317-p_314), come_pop_stackframe(), __exception_result_var_b548);
                                    # 2192 "06str.c"
                                    (come_push_stackframe("06str.c", 2192),__exception_result_var_b549=buffer_append_char(((struct buffer*)come_null_check(first_element_source_318, "06str.c", 2192)),0), come_pop_stackframe(), __exception_result_var_b549);
                                    # 2194 "06str.c"
                                    list_elements_319=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 2194),__exception_result_var_b550=((struct list$1sNodeph*)(right_value460=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value459=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2194))))))), come_pop_stackframe(), __exception_result_var_b550));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value459);
                                    if(right_value459 && right_value459 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value459;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value460);
                                    if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value460;
                                    __freed_obj__ = 0;
                                    # 2196 "06str.c"
                                    map_keys_320=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 2196),__exception_result_var_b551=((struct list$1sNodeph*)(right_value462=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value461=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2196))))))), come_pop_stackframe(), __exception_result_var_b551));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value461);
                                    if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[5] = right_value461;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value462);
                                    if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[6] = right_value462;
                                    __freed_obj__ = 0;
                                    # 2197 "06str.c"
                                    map_elements_321=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 2197),__exception_result_var_b552=((struct list$1sNodeph*)(right_value464=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value463=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2197))))))), come_pop_stackframe(), __exception_result_var_b552));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value463);
                                    if(right_value463 && right_value463 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[7] = right_value463;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value464);
                                    if(right_value464 && right_value464 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[8] = right_value464;
                                    __freed_obj__ = 0;
                                    # 2314 "06str.c"
                                    # 2200 "06str.c"
                                    if(_if_conditional316=*((struct sInfo*)come_null_check(info, "06str.c", 2200))->p==58,                                    _if_conditional316) {
                                        # 2201 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2201))->p++;
                                        # 2202 "06str.c"
                                        (come_push_stackframe("06str.c", 2202),skip_spaces_and_lf(info),come_pop_stackframe());
                                        # 2204 "06str.c"
                                        (come_push_stackframe("06str.c", 2204),__exception_result_var_b553=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_keys_320, "06str.c", 2204)),(struct sNode*)come_increment_ref_count(node_316)), come_pop_stackframe(), __exception_result_var_b553);
                                        # 2206 "06str.c"
                                        no_comma_322=((struct sInfo*)come_null_check(info, "06str.c", 2206))->no_comma;
                                        # 2207 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2207))->no_comma=(_Bool)1;
                                        # 2209 "06str.c"
                                        node2_323=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 2209),__exception_result_var_b554=((struct sNode*)(right_value465=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b554));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value465);
                                        if(right_value465 && right_value465 != __result_obj__ && !__freed_obj__) { right_value465 = come_decrement_ref_count(right_value465, ((struct sNode*)right_value465)->finalize, ((struct sNode*)right_value465)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value465;
                                        __freed_obj__ = 0;
                                        # 2211 "06str.c"
                                        ((struct sInfo*)come_null_check(info, "06str.c", 2211))->no_comma=no_comma_322;
                                        # 2213 "06str.c"
                                        (come_push_stackframe("06str.c", 2213),__exception_result_var_b555=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_elements_321, "06str.c", 2213)),(struct sNode*)come_increment_ref_count(node2_323)), come_pop_stackframe(), __exception_result_var_b555);
                                        # 2266 "06str.c"
                                        # 2215 "06str.c"
                                        if(_if_conditional317=*((struct sInfo*)come_null_check(info, "06str.c", 2215))->p==93,                                        _if_conditional317) {
                                            # 2216 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2216))->p++;
                                            # 2217 "06str.c"
                                            (come_push_stackframe("06str.c", 2217),skip_spaces_and_lf(info),come_pop_stackframe());
                                            # 2219 "06str.c"
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2219);
                                            _inf_obj_value10=come_increment_ref_count((come_push_stackframe("06str.c", 2219),__exception_result_var_b556=((struct sMapNode*)(right_value467=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value466=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2219)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_320),(struct list$1sNodeph*)come_increment_ref_count(map_elements_321),info))), come_pop_stackframe(), __exception_result_var_b556));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sMapNode_finalize;
                                            _inf_value10->clone=(void*)sMapNode_clone;
                                            _inf_value10->compile=(void*)sMapNode_compile;
                                            _inf_value10->sline=(void*)sMapNode_sline;
                                            _inf_value10->sname=(void*)sMapNode_sname;
                                            _inf_value10->terminated=(void*)sMapNode_terminated;
                                            _inf_value10->kind=(void*)sMapNode_kind;
                                            __result184__ = __result_obj__ = ((struct sNode*)(right_value472=_inf_value10));
                                            if(node2_323 && !__freed_obj__) { node2_323 = come_decrement_ref_count(node2_323, ((struct sNode*)node2_323)->finalize, ((struct sNode*)node2_323)->_protocol_obj, 0, 0, 0); } 
                                            if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_318 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_321 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_321, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value466);
                                            if(right_value466 && right_value466 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value466;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value467);
                                            if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value467;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value472);
                                            if(right_value472 && right_value472 != __result_obj__ && !__freed_obj__) { right_value472 = come_decrement_ref_count(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[2] = right_value472;
                                            __freed_obj__ = 0;
                                            return __result184__;
                                        }
                                        else {
                                            # 2222 "06str.c"
                                            (come_push_stackframe("06str.c", 2222),__exception_result_var_b557=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b557);
                                            # 2264 "06str.c"
                                            while(_while_condtional32=(_Bool)1,                                            _while_condtional32) {
                                                # 2225 "06str.c"
                                                no_comma_325=((struct sInfo*)come_null_check(info, "06str.c", 2225))->no_comma;
                                                # 2226 "06str.c"
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2226))->no_comma=(_Bool)1;
                                                # 2228 "06str.c"
                                                node2_326=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 2228),__exception_result_var_b558=((struct sNode*)(right_value473=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b558));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value473);
                                                if(right_value473 && right_value473 != __result_obj__ && !__freed_obj__) { right_value473 = come_decrement_ref_count(right_value473, ((struct sNode*)right_value473)->finalize, ((struct sNode*)right_value473)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value473;
                                                __freed_obj__ = 0;
                                                # 2230 "06str.c"
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2230))->no_comma=no_comma_325;
                                                # 2232 "06str.c"
                                                (come_push_stackframe("06str.c", 2232),__exception_result_var_b559=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_keys_320, "06str.c", 2232)),(struct sNode*)come_increment_ref_count(node2_326)), come_pop_stackframe(), __exception_result_var_b559);
                                                # 2234 "06str.c"
                                                (come_push_stackframe("06str.c", 2234),__exception_result_var_b560=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b560);
                                                # 2236 "06str.c"
                                                no_comma_325=((struct sInfo*)come_null_check(info, "06str.c", 2236))->no_comma;
                                                # 2237 "06str.c"
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2237))->no_comma=(_Bool)1;
                                                # 2239 "06str.c"
                                                node3_327=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 2239),__exception_result_var_b561=((struct sNode*)(right_value474=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b561));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value474);
                                                if(right_value474 && right_value474 != __result_obj__ && !__freed_obj__) { right_value474 = come_decrement_ref_count(right_value474, ((struct sNode*)right_value474)->finalize, ((struct sNode*)right_value474)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[1] = right_value474;
                                                __freed_obj__ = 0;
                                                # 2241 "06str.c"
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2241))->no_comma=no_comma_325;
                                                # 2243 "06str.c"
                                                (come_push_stackframe("06str.c", 2243),__exception_result_var_b562=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(map_elements_321, "06str.c", 2243)),(struct sNode*)come_increment_ref_count(node3_327)), come_pop_stackframe(), __exception_result_var_b562);
                                                # 2262 "06str.c"
                                                # 2245 "06str.c"
                                                if(_if_conditional326=*((struct sInfo*)come_null_check(info, "06str.c", 2245))->p==0,                                                _if_conditional326) {
                                                    # 2246 "06str.c"
                                                    (come_push_stackframe("06str.c", 2246),err_msg(info,"invalid source end"),come_pop_stackframe());
                                                    # 2247 "06str.c"
                                                    (come_push_stackframe("06str.c", 2247),exit(2),come_pop_stackframe());
                                                }
                                                else {
                                                    # 2262 "06str.c"
                                                    # 2249 "06str.c"
                                                    if(_if_conditional327=*((struct sInfo*)come_null_check(info, "06str.c", 2249))->p==44,                                                    _if_conditional327) {
                                                        # 2250 "06str.c"
                                                        ((struct sInfo*)come_null_check(info, "06str.c", 2250))->p++;
                                                        # 2251 "06str.c"
                                                        (come_push_stackframe("06str.c", 2251),skip_spaces_and_lf(info),come_pop_stackframe());
                                                    }
                                                    else {
                                                        # 2262 "06str.c"
                                                        # 2253 "06str.c"
                                                        if(_if_conditional328=*((struct sInfo*)come_null_check(info, "06str.c", 2253))->p==93,                                                        _if_conditional328) {
                                                            # 2254 "06str.c"
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2254))->p++;
                                                            # 2255 "06str.c"
                                                            (come_push_stackframe("06str.c", 2255),skip_spaces_and_lf(info),come_pop_stackframe());
                                                            # 2256 "06str.c"
                                                            if(node2_326 && !__freed_obj__) { node2_326 = come_decrement_ref_count(node2_326, ((struct sNode*)node2_326)->finalize, ((struct sNode*)node2_326)->_protocol_obj, 0, 0, 0); } 
                                                            if(node3_327 && !__freed_obj__) { node3_327 = come_decrement_ref_count(node3_327, ((struct sNode*)node3_327)->finalize, ((struct sNode*)node3_327)->_protocol_obj, 0, 0, 0); } 
                                                            break;
                                                        }
                                                        else {
                                                            # 2259 "06str.c"
                                                            (come_push_stackframe("06str.c", 2259),err_msg(info,"invalid character(%c)(3)",*((struct sInfo*)come_null_check(info, "06str.c", 2259))->p),come_pop_stackframe());
                                                            # 2260 "06str.c"
                                                            (come_push_stackframe("06str.c", 2260),exit(2),come_pop_stackframe());
                                                        }
                                                    }
                                                }
                                                if(node2_326 && !__freed_obj__) { node2_326 = come_decrement_ref_count(node2_326, ((struct sNode*)node2_326)->finalize, ((struct sNode*)node2_326)->_protocol_obj, 0, 0, 0); } 
                                                if(node3_327 && !__freed_obj__) { node3_327 = come_decrement_ref_count(node3_327, ((struct sNode*)node3_327)->finalize, ((struct sNode*)node3_327)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            # 2264 "06str.c"
                                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2264);
                                            _inf_obj_value11=come_increment_ref_count((come_push_stackframe("06str.c", 2264),__exception_result_var_b563=((struct sMapNode*)(right_value476=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value475=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2264)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_320),(struct list$1sNodeph*)come_increment_ref_count(map_elements_321),info))), come_pop_stackframe(), __exception_result_var_b563));
                                            _inf_value11->_protocol_obj=_inf_obj_value11;
                                            _inf_value11->finalize=(void*)sMapNode_finalize;
                                            _inf_value11->clone=(void*)sMapNode_clone;
                                            _inf_value11->compile=(void*)sMapNode_compile;
                                            _inf_value11->sline=(void*)sMapNode_sline;
                                            _inf_value11->sname=(void*)sMapNode_sname;
                                            _inf_value11->terminated=(void*)sMapNode_terminated;
                                            _inf_value11->kind=(void*)sMapNode_kind;
                                            __result187__ = __result_obj__ = ((struct sNode*)(right_value481=_inf_value11));
                                            if(node2_323 && !__freed_obj__) { node2_323 = come_decrement_ref_count(node2_323, ((struct sNode*)node2_323)->finalize, ((struct sNode*)node2_323)->_protocol_obj, 0, 0, 0); } 
                                            if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_318 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_321 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_321, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value475);
                                            if(right_value475 && right_value475 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value475;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value476);
                                            if(right_value476 && right_value476 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value476;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value481);
                                            if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { right_value481 = come_decrement_ref_count(right_value481, ((struct sNode*)right_value481)->finalize, ((struct sNode*)right_value481)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[2] = right_value481;
                                            __freed_obj__ = 0;
                                            return __result187__;
                                        }
                                        if(node2_323 && !__freed_obj__) { node2_323 = come_decrement_ref_count(node2_323, ((struct sNode*)node2_323)->finalize, ((struct sNode*)node2_323)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        # 2314 "06str.c"
                                        # 2268 "06str.c"
                                        if(_if_conditional337=*((struct sInfo*)come_null_check(info, "06str.c", 2268))->p==93,                                        _if_conditional337) {
                                            # 2269 "06str.c"
                                            ((struct sInfo*)come_null_check(info, "06str.c", 2269))->p++;
                                            # 2270 "06str.c"
                                            (come_push_stackframe("06str.c", 2270),skip_spaces_and_lf(info),come_pop_stackframe());
                                            # 2272 "06str.c"
                                            (come_push_stackframe("06str.c", 2272),__exception_result_var_b564=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_319, "06str.c", 2272)),(struct sNode*)come_increment_ref_count(node_316)), come_pop_stackframe(), __exception_result_var_b564);
                                        }
                                        else {
                                            # 2314 "06str.c"
                                            # 2274 "06str.c"
                                            if(_if_conditional338=*((struct sInfo*)come_null_check(info, "06str.c", 2274))->p==44,                                            _if_conditional338) {
                                                # 2275 "06str.c"
                                                ((struct sInfo*)come_null_check(info, "06str.c", 2275))->p++;
                                                # 2276 "06str.c"
                                                (come_push_stackframe("06str.c", 2276),skip_spaces_and_lf(info),come_pop_stackframe());
                                                # 2278 "06str.c"
                                                (come_push_stackframe("06str.c", 2278),__exception_result_var_b565=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_319, "06str.c", 2278)),(struct sNode*)come_increment_ref_count(node_316)), come_pop_stackframe(), __exception_result_var_b565);
                                                # 2308 "06str.c"
                                                while(_while_condtional33=(_Bool)1,                                                _while_condtional33) {
                                                    # 2281 "06str.c"
                                                    no_comma_329=((struct sInfo*)come_null_check(info, "06str.c", 2281))->no_comma;
                                                    # 2282 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2282))->no_comma=(_Bool)1;
                                                    # 2284 "06str.c"
                                                    node2_330=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 2284),__exception_result_var_b566=((struct sNode*)(right_value482=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b566));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value482);
                                                    if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { right_value482 = come_decrement_ref_count(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value482;
                                                    __freed_obj__ = 0;
                                                    # 2286 "06str.c"
                                                    ((struct sInfo*)come_null_check(info, "06str.c", 2286))->no_comma=no_comma_329;
                                                    # 2288 "06str.c"
                                                    (come_push_stackframe("06str.c", 2288),__exception_result_var_b567=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(list_elements_319, "06str.c", 2288)),(struct sNode*)come_increment_ref_count(node2_330)), come_pop_stackframe(), __exception_result_var_b567);
                                                    # 2307 "06str.c"
                                                    # 2290 "06str.c"
                                                    if(_if_conditional339=*((struct sInfo*)come_null_check(info, "06str.c", 2290))->p==0,                                                    _if_conditional339) {
                                                        # 2291 "06str.c"
                                                        (come_push_stackframe("06str.c", 2291),err_msg(info,"invalid source end"),come_pop_stackframe());
                                                        # 2292 "06str.c"
                                                        (come_push_stackframe("06str.c", 2292),exit(2),come_pop_stackframe());
                                                    }
                                                    else {
                                                        # 2307 "06str.c"
                                                        # 2294 "06str.c"
                                                        if(_if_conditional340=*((struct sInfo*)come_null_check(info, "06str.c", 2294))->p==44,                                                        _if_conditional340) {
                                                            # 2295 "06str.c"
                                                            ((struct sInfo*)come_null_check(info, "06str.c", 2295))->p++;
                                                            # 2296 "06str.c"
                                                            (come_push_stackframe("06str.c", 2296),skip_spaces_and_lf(info),come_pop_stackframe());
                                                        }
                                                        else {
                                                            # 2307 "06str.c"
                                                            # 2298 "06str.c"
                                                            if(_if_conditional341=*((struct sInfo*)come_null_check(info, "06str.c", 2298))->p==93,                                                            _if_conditional341) {
                                                                # 2299 "06str.c"
                                                                ((struct sInfo*)come_null_check(info, "06str.c", 2299))->p++;
                                                                # 2300 "06str.c"
                                                                (come_push_stackframe("06str.c", 2300),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                # 2301 "06str.c"
                                                                if(node2_330 && !__freed_obj__) { node2_330 = come_decrement_ref_count(node2_330, ((struct sNode*)node2_330)->finalize, ((struct sNode*)node2_330)->_protocol_obj, 0, 0, 0); } 
                                                                break;
                                                            }
                                                            else {
                                                                # 2304 "06str.c"
                                                                (come_push_stackframe("06str.c", 2304),err_msg(info,"invalid character(%c)(4)",*((struct sInfo*)come_null_check(info, "06str.c", 2304))->p),come_pop_stackframe());
                                                                # 2305 "06str.c"
                                                                (come_push_stackframe("06str.c", 2305),exit(2),come_pop_stackframe());
                                                            }
                                                        }
                                                    }
                                                    if(node2_330 && !__freed_obj__) { node2_330 = come_decrement_ref_count(node2_330, ((struct sNode*)node2_330)->finalize, ((struct sNode*)node2_330)->_protocol_obj, 0, 0, 0); } 
                                                }
                                            }
                                            else {
                                                # 2310 "06str.c"
                                                (come_push_stackframe("06str.c", 2310),err_msg(info,"invalid character(%c)(5)",*((struct sInfo*)come_null_check(info, "06str.c", 2310))->p),come_pop_stackframe());
                                                # 2311 "06str.c"
                                                (come_push_stackframe("06str.c", 2311),exit(2),come_pop_stackframe());
                                            }
                                        }
                                    }
                                    # 2319 "06str.c"
                                    # 2314 "06str.c"
                                    if(_if_conditional342=(come_push_stackframe("06str.c", 2314),__exception_result_var_b568=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(list_elements_319, "06str.c", 2314))), come_pop_stackframe(), __exception_result_var_b568)>0,                                    _if_conditional342) {
                                        # 2315 "06str.c"
                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2315);
                                        _inf_obj_value12=come_increment_ref_count((come_push_stackframe("06str.c", 2315),__exception_result_var_b569=((struct sListNode*)(right_value484=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value483=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2315)))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_319),info))), come_pop_stackframe(), __exception_result_var_b569));
                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                        _inf_value12->finalize=(void*)sListNode_finalize;
                                        _inf_value12->clone=(void*)sListNode_clone;
                                        _inf_value12->compile=(void*)sListNode_compile;
                                        _inf_value12->sline=(void*)sListNode_sline;
                                        _inf_value12->sname=(void*)sListNode_sname;
                                        _inf_value12->terminated=(void*)sListNode_terminated;
                                        _inf_value12->kind=(void*)sListNode_kind;
                                        __result190__ = __result_obj__ = ((struct sNode*)(right_value488=_inf_value12));
                                        if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0); } 
                                        if(first_element_source_318 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(list_elements_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_keys_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_elements_321 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_321, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value483);
                                        if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value483;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value484);
                                        if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value484;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value488);
                                        if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { right_value488 = come_decrement_ref_count(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[2] = right_value488;
                                        __freed_obj__ = 0;
                                        return __result190__;
                                    }
                                    else {
                                    }
                                    if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0); } 
                                    if(first_element_source_318 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(list_elements_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_keys_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_elements_321 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_321, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    # 2321 "06str.c"
                                    (come_push_stackframe("06str.c", 2321),__exception_result_var_b570=((struct sNode*)(right_value489=expression_node_v1(info))), come_pop_stackframe(), __exception_result_var_b570);
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value489);
                                    if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { right_value489 = come_decrement_ref_count(right_value489, ((struct sNode*)right_value489)->finalize, ((struct sNode*)right_value489)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value489;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    # 2324 "06str.c"
    __result191__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result191__;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional237;
_Bool _if_conditional238;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                # 1 "sStrNode_finalize"
                # 0 "sStrNode_finalize"
                if(_if_conditional237=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value!=((void*)0),                _if_conditional237) {
                    # 0 "sStrNode_finalize"
                    if(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value && !__freed_obj__) { ((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value = come_decrement_ref_count(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                }
                # 2 "sStrNode_finalize"
                # 1 "sStrNode_finalize"
                if(_if_conditional238=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname!=((void*)0),                _if_conditional238) {
                    # 1 "sStrNode_finalize"
                    if(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname && !__freed_obj__) { ((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname = come_decrement_ref_count(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional239;
struct sStrNode* __result164__;
void* right_value410;
struct sStrNode* result_265;
_Bool _if_conditional240;
void* right_value411;
char* __dec_obj135;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value412;
char* __dec_obj136;
struct sStrNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value410, 0, sizeof(void*));
memset(&result_265, 0, sizeof(struct sStrNode*));
memset(&right_value411, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
                # 3 "sStrNode_clone"
                # 2 "sStrNode_clone"
                if(_if_conditional239=self==(void*)0,                _if_conditional239) {
                    # 2 "sStrNode_clone"
                    __result164__ = __result_obj__ = (void*)0;
                    return __result164__;
                }
                # 3 "sStrNode_clone"
                result_265=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value410=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value410);
                if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value410;
                __freed_obj__ = 0;
                # 5 "sStrNode_clone"
                # 4 "sStrNode_clone"
                if(_if_conditional240=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_clone", 4))->value!=((void*)0),                _if_conditional240) {
                    # 4 "sStrNode_clone"
                    __dec_obj135=((struct sStrNode*)come_null_check(result_265, "sStrNode_clone", 4))->value;
                    ((struct sStrNode*)come_null_check(result_265, "sStrNode_clone", 4))->value=(char*)come_increment_ref_count(((char*)(right_value411=string_clone(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 4))->value))));
                    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value411);
                    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { right_value411 = come_decrement_ref_count(right_value411, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value411;
                    __freed_obj__ = 0;
                }
                # 6 "sStrNode_clone"
                # 5 "sStrNode_clone"
                if(_if_conditional241=self!=((void*)0),                _if_conditional241) {
                    # 5 "sStrNode_clone"
                    ((struct sStrNode*)come_null_check(result_265, "sStrNode_clone", 5))->sline=((struct sStrNode*)come_null_check(self, "sStrNode_clone", 5))->sline;
                }
                # 7 "sStrNode_clone"
                # 6 "sStrNode_clone"
                if(_if_conditional242=self!=((void*)0)&&((struct sStrNode*)come_null_check(self, "sStrNode_clone", 6))->sname!=((void*)0),                _if_conditional242) {
                    # 6 "sStrNode_clone"
                    __dec_obj136=((struct sStrNode*)come_null_check(result_265, "sStrNode_clone", 6))->sname;
                    ((struct sStrNode*)come_null_check(result_265, "sStrNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value412=string_clone(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 6))->sname))));
                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value412);
                    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value412;
                    __freed_obj__ = 0;
                }
                # 7 "sStrNode_clone"
                __result165__ = __result_obj__ = result_265;
                if(result_265 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result165__;
                if(result_265 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional249;
_Bool _if_conditional250;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    # 1 "sRegexNode_finalize"
                    # 0 "sRegexNode_finalize"
                    if(_if_conditional249=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str!=((void*)0),                    _if_conditional249) {
                        # 0 "sRegexNode_finalize"
                        if(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str && !__freed_obj__) { ((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str = come_decrement_ref_count(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0))->str, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    # 2 "sRegexNode_finalize"
                    # 1 "sRegexNode_finalize"
                    if(_if_conditional250=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname!=((void*)0),                    _if_conditional250) {
                        # 1 "sRegexNode_finalize"
                        if(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname && !__freed_obj__) { ((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname = come_decrement_ref_count(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional251;
struct sRegexNode* __result167__;
void* right_value419;
struct sRegexNode* result_270;
_Bool _if_conditional252;
void* right_value420;
char* __dec_obj137;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value421;
char* __dec_obj138;
struct sRegexNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value419, 0, sizeof(void*));
memset(&result_270, 0, sizeof(struct sRegexNode*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
                    # 3 "sRegexNode_clone"
                    # 2 "sRegexNode_clone"
                    if(_if_conditional251=self==(void*)0,                    _if_conditional251) {
                        # 2 "sRegexNode_clone"
                        __result167__ = __result_obj__ = (void*)0;
                        return __result167__;
                    }
                    # 3 "sRegexNode_clone"
                    result_270=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value419=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value419);
                    if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value419;
                    __freed_obj__ = 0;
                    # 5 "sRegexNode_clone"
                    # 4 "sRegexNode_clone"
                    if(_if_conditional252=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 4))->str!=((void*)0),                    _if_conditional252) {
                        # 4 "sRegexNode_clone"
                        __dec_obj137=((struct sRegexNode*)come_null_check(result_270, "sRegexNode_clone", 4))->str;
                        ((struct sRegexNode*)come_null_check(result_270, "sRegexNode_clone", 4))->str=(char*)come_increment_ref_count(((char*)(right_value420=string_clone(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 4))->str))));
                        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value420);
                        if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { right_value420 = come_decrement_ref_count(right_value420, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value420;
                        __freed_obj__ = 0;
                    }
                    # 6 "sRegexNode_clone"
                    # 5 "sRegexNode_clone"
                    if(_if_conditional253=self!=((void*)0),                    _if_conditional253) {
                        # 5 "sRegexNode_clone"
                        ((struct sRegexNode*)come_null_check(result_270, "sRegexNode_clone", 5))->global=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 5))->global;
                    }
                    # 7 "sRegexNode_clone"
                    # 6 "sRegexNode_clone"
                    if(_if_conditional254=self!=((void*)0),                    _if_conditional254) {
                        # 6 "sRegexNode_clone"
                        ((struct sRegexNode*)come_null_check(result_270, "sRegexNode_clone", 6))->ignore_case=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 6))->ignore_case;
                    }
                    # 8 "sRegexNode_clone"
                    # 7 "sRegexNode_clone"
                    if(_if_conditional255=self!=((void*)0),                    _if_conditional255) {
                        # 7 "sRegexNode_clone"
                        ((struct sRegexNode*)come_null_check(result_270, "sRegexNode_clone", 7))->sline=((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 7))->sline;
                    }
                    # 9 "sRegexNode_clone"
                    # 8 "sRegexNode_clone"
                    if(_if_conditional256=self!=((void*)0)&&((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 8))->sname!=((void*)0),                    _if_conditional256) {
                        # 8 "sRegexNode_clone"
                        __dec_obj138=((struct sRegexNode*)come_null_check(result_270, "sRegexNode_clone", 8))->sname;
                        ((struct sRegexNode*)come_null_check(result_270, "sRegexNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value421=string_clone(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 8))->sname))));
                        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value421);
                        if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { right_value421 = come_decrement_ref_count(right_value421, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value421;
                        __freed_obj__ = 0;
                    }
                    # 9 "sRegexNode_clone"
                    __result168__ = __result_obj__ = result_270;
                    if(result_270 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_270, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result168__;
                    if(result_270 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_270, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional262;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            # 1 "sCharNode_finalize"
                            # 0 "sCharNode_finalize"
                            if(_if_conditional262=self!=((void*)0)&&((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname!=((void*)0),                            _if_conditional262) {
                                # 0 "sCharNode_finalize"
                                if(((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname && !__freed_obj__) { ((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname = come_decrement_ref_count(((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional263;
struct sCharNode* __result170__;
void* right_value425;
struct sCharNode* result_277;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value426;
char* __dec_obj139;
struct sCharNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value425, 0, sizeof(void*));
memset(&result_277, 0, sizeof(struct sCharNode*));
memset(&right_value426, 0, sizeof(void*));
                            # 3 "sCharNode_clone"
                            # 2 "sCharNode_clone"
                            if(_if_conditional263=self==(void*)0,                            _if_conditional263) {
                                # 2 "sCharNode_clone"
                                __result170__ = __result_obj__ = (void*)0;
                                return __result170__;
                            }
                            # 3 "sCharNode_clone"
                            result_277=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value425=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value425);
                            if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value425;
                            __freed_obj__ = 0;
                            # 5 "sCharNode_clone"
                            # 4 "sCharNode_clone"
                            if(_if_conditional264=self!=((void*)0),                            _if_conditional264) {
                                # 4 "sCharNode_clone"
                                ((struct sCharNode*)come_null_check(result_277, "sCharNode_clone", 4))->value=((struct sCharNode*)come_null_check(self, "sCharNode_clone", 4))->value;
                            }
                            # 6 "sCharNode_clone"
                            # 5 "sCharNode_clone"
                            if(_if_conditional265=self!=((void*)0),                            _if_conditional265) {
                                # 5 "sCharNode_clone"
                                ((struct sCharNode*)come_null_check(result_277, "sCharNode_clone", 5))->sline=((struct sCharNode*)come_null_check(self, "sCharNode_clone", 5))->sline;
                            }
                            # 7 "sCharNode_clone"
                            # 6 "sCharNode_clone"
                            if(_if_conditional266=self!=((void*)0)&&((struct sCharNode*)come_null_check(self, "sCharNode_clone", 6))->sname!=((void*)0),                            _if_conditional266) {
                                # 6 "sCharNode_clone"
                                __dec_obj139=((struct sCharNode*)come_null_check(result_277, "sCharNode_clone", 6))->sname;
                                ((struct sCharNode*)come_null_check(result_277, "sCharNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value426=string_clone(((struct sCharNode*)come_null_check(self, "sCharNode_clone", 6))->sname))));
                                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value426);
                                if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { right_value426 = come_decrement_ref_count(right_value426, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value426;
                                __freed_obj__ = 0;
                            }
                            # 7 "sCharNode_clone"
                            __result171__ = __result_obj__ = result_277;
                            if(result_277 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_277, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result171__;
                            if(result_277 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_277, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional275;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                # 1 "sWCharNode_finalize"
                                # 0 "sWCharNode_finalize"
                                if(_if_conditional275=self!=((void*)0)&&((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname!=((void*)0),                                _if_conditional275) {
                                    # 0 "sWCharNode_finalize"
                                    if(((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname && !__freed_obj__) { ((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname = come_decrement_ref_count(((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional276;
struct sWCharNode* __result173__;
void* right_value430;
struct sWCharNode* result_287;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value431;
char* __dec_obj140;
struct sWCharNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value430, 0, sizeof(void*));
memset(&result_287, 0, sizeof(struct sWCharNode*));
memset(&right_value431, 0, sizeof(void*));
                                # 3 "sWCharNode_clone"
                                # 2 "sWCharNode_clone"
                                if(_if_conditional276=self==(void*)0,                                _if_conditional276) {
                                    # 2 "sWCharNode_clone"
                                    __result173__ = __result_obj__ = (void*)0;
                                    return __result173__;
                                }
                                # 3 "sWCharNode_clone"
                                result_287=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value430=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value430);
                                if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value430;
                                __freed_obj__ = 0;
                                # 5 "sWCharNode_clone"
                                # 4 "sWCharNode_clone"
                                if(_if_conditional277=self!=((void*)0),                                _if_conditional277) {
                                    # 4 "sWCharNode_clone"
                                    ((struct sWCharNode*)come_null_check(result_287, "sWCharNode_clone", 4))->value=((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 4))->value;
                                }
                                # 6 "sWCharNode_clone"
                                # 5 "sWCharNode_clone"
                                if(_if_conditional278=self!=((void*)0),                                _if_conditional278) {
                                    # 5 "sWCharNode_clone"
                                    ((struct sWCharNode*)come_null_check(result_287, "sWCharNode_clone", 5))->sline=((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 5))->sline;
                                }
                                # 7 "sWCharNode_clone"
                                # 6 "sWCharNode_clone"
                                if(_if_conditional279=self!=((void*)0)&&((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 6))->sname!=((void*)0),                                _if_conditional279) {
                                    # 6 "sWCharNode_clone"
                                    __dec_obj140=((struct sWCharNode*)come_null_check(result_287, "sWCharNode_clone", 6))->sname;
                                    ((struct sWCharNode*)come_null_check(result_287, "sWCharNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value431=string_clone(((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 6))->sname))));
                                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value431);
                                    if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { right_value431 = come_decrement_ref_count(right_value431, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value431;
                                    __freed_obj__ = 0;
                                }
                                # 7 "sWCharNode_clone"
                                __result174__ = __result_obj__ = result_287;
                                if(result_287 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_287, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result174__;
                                if(result_287 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_287, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional289;
_Bool _if_conditional290;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                # 1 "sWStringNode_finalize"
                                # 0 "sWStringNode_finalize"
                                if(_if_conditional289=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value!=((void*)0),                                _if_conditional289) {
                                    # 0 "sWStringNode_finalize"
                                    if(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value && !__freed_obj__) { ((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value = come_decrement_ref_count(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                # 2 "sWStringNode_finalize"
                                # 1 "sWStringNode_finalize"
                                if(_if_conditional290=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname!=((void*)0),                                _if_conditional290) {
                                    # 1 "sWStringNode_finalize"
                                    if(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname && !__freed_obj__) { ((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname = come_decrement_ref_count(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional291;
struct sWStringNode* __result176__;
void* right_value438;
struct sWStringNode* result_302;
_Bool _if_conditional292;
void* right_value439;
int* __dec_obj141;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value440;
char* __dec_obj142;
struct sWStringNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value438, 0, sizeof(void*));
memset(&result_302, 0, sizeof(struct sWStringNode*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
                                # 3 "sWStringNode_clone"
                                # 2 "sWStringNode_clone"
                                if(_if_conditional291=self==(void*)0,                                _if_conditional291) {
                                    # 2 "sWStringNode_clone"
                                    __result176__ = __result_obj__ = (void*)0;
                                    return __result176__;
                                }
                                # 3 "sWStringNode_clone"
                                result_302=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value438=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value438);
                                if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value438;
                                __freed_obj__ = 0;
                                # 5 "sWStringNode_clone"
                                # 4 "sWStringNode_clone"
                                if(_if_conditional292=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 4))->value!=((void*)0),                                _if_conditional292) {
                                    # 4 "sWStringNode_clone"
                                    __dec_obj141=((struct sWStringNode*)come_null_check(result_302, "sWStringNode_clone", 4))->value;
                                    ((struct sWStringNode*)come_null_check(result_302, "sWStringNode_clone", 4))->value=(int*)come_increment_ref_count(((int*)(right_value439=(int*)come_memdup(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 4))->value, "sWStringNode_clone", 4))));
                                    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value439);
                                    if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { right_value439 = come_decrement_ref_count(right_value439, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value439;
                                    __freed_obj__ = 0;
                                }
                                # 6 "sWStringNode_clone"
                                # 5 "sWStringNode_clone"
                                if(_if_conditional293=self!=((void*)0),                                _if_conditional293) {
                                    # 5 "sWStringNode_clone"
                                    ((struct sWStringNode*)come_null_check(result_302, "sWStringNode_clone", 5))->sline=((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 5))->sline;
                                }
                                # 7 "sWStringNode_clone"
                                # 6 "sWStringNode_clone"
                                if(_if_conditional294=self!=((void*)0)&&((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 6))->sname!=((void*)0),                                _if_conditional294) {
                                    # 6 "sWStringNode_clone"
                                    __dec_obj142=((struct sWStringNode*)come_null_check(result_302, "sWStringNode_clone", 6))->sname;
                                    ((struct sWStringNode*)come_null_check(result_302, "sWStringNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value440=string_clone(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 6))->sname))));
                                    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value440);
                                    if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { right_value440 = come_decrement_ref_count(right_value440, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value440;
                                    __freed_obj__ = 0;
                                }
                                # 7 "sWStringNode_clone"
                                __result177__ = __result_obj__ = result_302;
                                if(result_302 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_302, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result177__;
                                if(result_302 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_302, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    # 1 "sSStringNode_finalize"
                                    # 0 "sSStringNode_finalize"
                                    if(_if_conditional307=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value!=((void*)0),                                    _if_conditional307) {
                                        # 0 "sSStringNode_finalize"
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value && !__freed_obj__) { ((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value = come_decrement_ref_count(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0))->value, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    # 2 "sSStringNode_finalize"
                                    # 1 "sSStringNode_finalize"
                                    if(_if_conditional308=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->exps!=((void*)0),                                    _if_conditional308) {
                                        # 1 "sSStringNode_finalize"
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1))->exps, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    # 3 "sSStringNode_finalize"
                                    # 2 "sSStringNode_finalize"
                                    if(_if_conditional309=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname!=((void*)0),                                    _if_conditional309) {
                                        # 2 "sSStringNode_finalize"
                                        if(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname && !__freed_obj__) { ((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
struct sSStringNode* __result179__;
void* right_value451;
struct sSStringNode* result_313;
_Bool _if_conditional311;
void* right_value452;
char* __dec_obj143;
_Bool _if_conditional312;
void* right_value453;
struct list$1sNodeph* __dec_obj144;
_Bool _if_conditional313;
_Bool _if_conditional314;
void* right_value454;
char* __dec_obj145;
struct sSStringNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value451, 0, sizeof(void*));
memset(&result_313, 0, sizeof(struct sSStringNode*));
memset(&right_value452, 0, sizeof(void*));
memset(&right_value453, 0, sizeof(void*));
memset(&right_value454, 0, sizeof(void*));
                                    # 3 "sSStringNode_clone"
                                    # 2 "sSStringNode_clone"
                                    if(_if_conditional310=self==(void*)0,                                    _if_conditional310) {
                                        # 2 "sSStringNode_clone"
                                        __result179__ = __result_obj__ = (void*)0;
                                        return __result179__;
                                    }
                                    # 3 "sSStringNode_clone"
                                    result_313=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value451=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value451);
                                    if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value451;
                                    __freed_obj__ = 0;
                                    # 5 "sSStringNode_clone"
                                    # 4 "sSStringNode_clone"
                                    if(_if_conditional311=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 4))->value!=((void*)0),                                    _if_conditional311) {
                                        # 4 "sSStringNode_clone"
                                        __dec_obj143=((struct sSStringNode*)come_null_check(result_313, "sSStringNode_clone", 4))->value;
                                        ((struct sSStringNode*)come_null_check(result_313, "sSStringNode_clone", 4))->value=(char*)come_increment_ref_count(((char*)(right_value452=string_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 4))->value))));
                                        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value452);
                                        if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { right_value452 = come_decrement_ref_count(right_value452, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value452;
                                        __freed_obj__ = 0;
                                    }
                                    # 6 "sSStringNode_clone"
                                    # 5 "sSStringNode_clone"
                                    if(_if_conditional312=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 5))->exps!=((void*)0),                                    _if_conditional312) {
                                        # 5 "sSStringNode_clone"
                                        __dec_obj144=((struct sSStringNode*)come_null_check(result_313, "sSStringNode_clone", 5))->exps;
                                        ((struct sSStringNode*)come_null_check(result_313, "sSStringNode_clone", 5))->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value453=list$1sNodephp_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 5))->exps))));
                                        if(__dec_obj144) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value453);
                                        if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value453;
                                        __freed_obj__ = 0;
                                    }
                                    # 7 "sSStringNode_clone"
                                    # 6 "sSStringNode_clone"
                                    if(_if_conditional313=self!=((void*)0),                                    _if_conditional313) {
                                        # 6 "sSStringNode_clone"
                                        ((struct sSStringNode*)come_null_check(result_313, "sSStringNode_clone", 6))->sline=((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 6))->sline;
                                    }
                                    # 8 "sSStringNode_clone"
                                    # 7 "sSStringNode_clone"
                                    if(_if_conditional314=self!=((void*)0)&&((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 7))->sname!=((void*)0),                                    _if_conditional314) {
                                        # 7 "sSStringNode_clone"
                                        __dec_obj145=((struct sSStringNode*)come_null_check(result_313, "sSStringNode_clone", 7))->sname;
                                        ((struct sSStringNode*)come_null_check(result_313, "sSStringNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value454=string_clone(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 7))->sname))));
                                        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value454);
                                        if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { right_value454 = come_decrement_ref_count(right_value454, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value454;
                                        __freed_obj__ = 0;
                                    }
                                    # 8 "sSStringNode_clone"
                                    __result180__ = __result_obj__ = result_313;
                                    if(result_313 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_313, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result180__;
                                    if(result_313 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_313, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sMapNode_finalize(struct sMapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                # 1 "sMapNode_finalize"
                                                # 0 "sMapNode_finalize"
                                                if(_if_conditional329=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0))->map_key_elements!=((void*)0),                                                _if_conditional329) {
                                                    # 0 "sMapNode_finalize"
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0))->map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0))->map_key_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                # 2 "sMapNode_finalize"
                                                # 1 "sMapNode_finalize"
                                                if(_if_conditional330=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_elements!=((void*)0),                                                _if_conditional330) {
                                                    # 1 "sMapNode_finalize"
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1))->map_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                # 3 "sMapNode_finalize"
                                                # 2 "sMapNode_finalize"
                                                if(_if_conditional331=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname!=((void*)0),                                                _if_conditional331) {
                                                    # 2 "sMapNode_finalize"
                                                    if(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname && !__freed_obj__) { ((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname = come_decrement_ref_count(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional332;
struct sMapNode* __result185__;
void* right_value477;
struct sMapNode* result_328;
_Bool _if_conditional333;
void* right_value478;
struct list$1sNodeph* __dec_obj149;
_Bool _if_conditional334;
void* right_value479;
struct list$1sNodeph* __dec_obj150;
_Bool _if_conditional335;
_Bool _if_conditional336;
void* right_value480;
char* __dec_obj151;
struct sMapNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value477, 0, sizeof(void*));
memset(&result_328, 0, sizeof(struct sMapNode*));
memset(&right_value478, 0, sizeof(void*));
memset(&right_value479, 0, sizeof(void*));
memset(&right_value480, 0, sizeof(void*));
                                                # 3 "sMapNode_clone"
                                                # 2 "sMapNode_clone"
                                                if(_if_conditional332=self==(void*)0,                                                _if_conditional332) {
                                                    # 2 "sMapNode_clone"
                                                    __result185__ = __result_obj__ = (void*)0;
                                                    return __result185__;
                                                }
                                                # 3 "sMapNode_clone"
                                                result_328=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value477=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value477);
                                                if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value477;
                                                __freed_obj__ = 0;
                                                # 5 "sMapNode_clone"
                                                # 4 "sMapNode_clone"
                                                if(_if_conditional333=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 4))->map_key_elements!=((void*)0),                                                _if_conditional333) {
                                                    # 4 "sMapNode_clone"
                                                    __dec_obj149=((struct sMapNode*)come_null_check(result_328, "sMapNode_clone", 4))->map_key_elements;
                                                    ((struct sMapNode*)come_null_check(result_328, "sMapNode_clone", 4))->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value478=list$1sNodephp_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 4))->map_key_elements))));
                                                    if(__dec_obj149) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value478);
                                                    if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value478;
                                                    __freed_obj__ = 0;
                                                }
                                                # 6 "sMapNode_clone"
                                                # 5 "sMapNode_clone"
                                                if(_if_conditional334=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 5))->map_elements!=((void*)0),                                                _if_conditional334) {
                                                    # 5 "sMapNode_clone"
                                                    __dec_obj150=((struct sMapNode*)come_null_check(result_328, "sMapNode_clone", 5))->map_elements;
                                                    ((struct sMapNode*)come_null_check(result_328, "sMapNode_clone", 5))->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value479=list$1sNodephp_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 5))->map_elements))));
                                                    if(__dec_obj150) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value479);
                                                    if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value479;
                                                    __freed_obj__ = 0;
                                                }
                                                # 7 "sMapNode_clone"
                                                # 6 "sMapNode_clone"
                                                if(_if_conditional335=self!=((void*)0),                                                _if_conditional335) {
                                                    # 6 "sMapNode_clone"
                                                    ((struct sMapNode*)come_null_check(result_328, "sMapNode_clone", 6))->sline=((struct sMapNode*)come_null_check(self, "sMapNode_clone", 6))->sline;
                                                }
                                                # 8 "sMapNode_clone"
                                                # 7 "sMapNode_clone"
                                                if(_if_conditional336=self!=((void*)0)&&((struct sMapNode*)come_null_check(self, "sMapNode_clone", 7))->sname!=((void*)0),                                                _if_conditional336) {
                                                    # 7 "sMapNode_clone"
                                                    __dec_obj151=((struct sMapNode*)come_null_check(result_328, "sMapNode_clone", 7))->sname;
                                                    ((struct sMapNode*)come_null_check(result_328, "sMapNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value480=string_clone(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 7))->sname))));
                                                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value480);
                                                    if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { right_value480 = come_decrement_ref_count(right_value480, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value480;
                                                    __freed_obj__ = 0;
                                                }
                                                # 8 "sMapNode_clone"
                                                __result186__ = __result_obj__ = result_328;
                                                if(result_328 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_328, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result186__;
                                                if(result_328 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_328, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional343;
_Bool _if_conditional344;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            # 1 "sListNode_finalize"
                                            # 0 "sListNode_finalize"
                                            if(_if_conditional343=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_finalize", 0))->list_elements!=((void*)0),                                            _if_conditional343) {
                                                # 0 "sListNode_finalize"
                                                if(((struct sListNode*)come_null_check(self, "sListNode_finalize", 0))->list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sListNode*)come_null_check(self, "sListNode_finalize", 0))->list_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
                                            # 2 "sListNode_finalize"
                                            # 1 "sListNode_finalize"
                                            if(_if_conditional344=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname!=((void*)0),                                            _if_conditional344) {
                                                # 1 "sListNode_finalize"
                                                if(((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname && !__freed_obj__) { ((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname = come_decrement_ref_count(((struct sListNode*)come_null_check(self, "sListNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional345;
struct sListNode* __result188__;
void* right_value485;
struct sListNode* result_331;
_Bool _if_conditional346;
void* right_value486;
struct list$1sNodeph* __dec_obj152;
_Bool _if_conditional347;
_Bool _if_conditional348;
void* right_value487;
char* __dec_obj153;
struct sListNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value485, 0, sizeof(void*));
memset(&result_331, 0, sizeof(struct sListNode*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value487, 0, sizeof(void*));
                                            # 3 "sListNode_clone"
                                            # 2 "sListNode_clone"
                                            if(_if_conditional345=self==(void*)0,                                            _if_conditional345) {
                                                # 2 "sListNode_clone"
                                                __result188__ = __result_obj__ = (void*)0;
                                                return __result188__;
                                            }
                                            # 3 "sListNode_clone"
                                            result_331=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value485=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value485);
                                            if(right_value485 && right_value485 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value485;
                                            __freed_obj__ = 0;
                                            # 5 "sListNode_clone"
                                            # 4 "sListNode_clone"
                                            if(_if_conditional346=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_clone", 4))->list_elements!=((void*)0),                                            _if_conditional346) {
                                                # 4 "sListNode_clone"
                                                __dec_obj152=((struct sListNode*)come_null_check(result_331, "sListNode_clone", 4))->list_elements;
                                                ((struct sListNode*)come_null_check(result_331, "sListNode_clone", 4))->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value486=list$1sNodephp_clone(((struct sListNode*)come_null_check(self, "sListNode_clone", 4))->list_elements))));
                                                if(__dec_obj152) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value486);
                                                if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value486;
                                                __freed_obj__ = 0;
                                            }
                                            # 6 "sListNode_clone"
                                            # 5 "sListNode_clone"
                                            if(_if_conditional347=self!=((void*)0),                                            _if_conditional347) {
                                                # 5 "sListNode_clone"
                                                ((struct sListNode*)come_null_check(result_331, "sListNode_clone", 5))->sline=((struct sListNode*)come_null_check(self, "sListNode_clone", 5))->sline;
                                            }
                                            # 7 "sListNode_clone"
                                            # 6 "sListNode_clone"
                                            if(_if_conditional348=self!=((void*)0)&&((struct sListNode*)come_null_check(self, "sListNode_clone", 6))->sname!=((void*)0),                                            _if_conditional348) {
                                                # 6 "sListNode_clone"
                                                __dec_obj153=((struct sListNode*)come_null_check(result_331, "sListNode_clone", 6))->sname;
                                                ((struct sListNode*)come_null_check(result_331, "sListNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value487=string_clone(((struct sListNode*)come_null_check(self, "sListNode_clone", 6))->sname))));
                                                if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value487);
                                                if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { right_value487 = come_decrement_ref_count(right_value487, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value487;
                                                __freed_obj__ = 0;
                                            }
                                            # 7 "sListNode_clone"
                                            __result189__ = __result_obj__ = result_331;
                                            if(result_331 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_331, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result189__;
                                            if(result_331 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_331, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value490;
void* right_value491;
struct list$1sNodeph* __exception_result_var_b571;
struct list$1sNodeph* tuple_elements_332;
_Bool _while_condtional34;
char* p_333;
_Bool no_comma_334;
void* right_value492;
struct sNode* __exception_result_var_b572;
struct sNode* node_335;
struct list$1sNodeph* __exception_result_var_b573;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value493;
void* right_value494;
struct sTupleNode* __exception_result_var_b574;
struct sNode* _inf_value13;
struct sTupleNode* _inf_obj_value13;
void* right_value498;
struct sNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value490, 0, sizeof(void*));
memset(&right_value491, 0, sizeof(void*));
memset(&tuple_elements_332, 0, sizeof(struct list$1sNodeph*));
memset(&p_333, 0, sizeof(char*));
memset(&no_comma_334, 0, sizeof(_Bool));
memset(&right_value492, 0, sizeof(void*));
memset(&node_335, 0, sizeof(struct sNode*));
memset(&right_value493, 0, sizeof(void*));
memset(&right_value494, 0, sizeof(void*));
memset(&right_value498, 0, sizeof(void*));
    # 2329 "06str.c"
    tuple_elements_332=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 2329),__exception_result_var_b571=((struct list$1sNodeph*)(right_value491=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value490=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2329))))))), come_pop_stackframe(), __exception_result_var_b571));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value490);
    if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value490;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value491);
    if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value491;
    __freed_obj__ = 0;
    # 2357 "06str.c"
    while(_while_condtional34=(_Bool)1,    _while_condtional34) {
        # 2331 "06str.c"
        p_333=((struct sInfo*)come_null_check(info, "06str.c", 2331))->p;
        # 2333 "06str.c"
        no_comma_334=((struct sInfo*)come_null_check(info, "06str.c", 2333))->no_comma;
        # 2334 "06str.c"
        ((struct sInfo*)come_null_check(info, "06str.c", 2334))->no_comma=(_Bool)1;
        # 2336 "06str.c"
        node_335=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 2336),__exception_result_var_b572=((struct sNode*)(right_value492=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b572));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value492);
        if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { right_value492 = come_decrement_ref_count(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value492;
        __freed_obj__ = 0;
        # 2338 "06str.c"
        ((struct sInfo*)come_null_check(info, "06str.c", 2338))->no_comma=no_comma_334;
        # 2340 "06str.c"
        (come_push_stackframe("06str.c", 2340),__exception_result_var_b573=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(tuple_elements_332, "06str.c", 2340)),(struct sNode*)come_increment_ref_count(node_335)), come_pop_stackframe(), __exception_result_var_b573);
        # 2355 "06str.c"
        # 2342 "06str.c"
        if(_if_conditional349=*((struct sInfo*)come_null_check(info, "06str.c", 2342))->p==44,        _if_conditional349) {
            # 2343 "06str.c"
            ((struct sInfo*)come_null_check(info, "06str.c", 2343))->p++;
            # 2344 "06str.c"
            (come_push_stackframe("06str.c", 2344),skip_spaces_and_lf(info),come_pop_stackframe());
        }
        else {
            # 2355 "06str.c"
            # 2346 "06str.c"
            if(_if_conditional350=*((struct sInfo*)come_null_check(info, "06str.c", 2346))->p==41,            _if_conditional350) {
                # 2347 "06str.c"
                ((struct sInfo*)come_null_check(info, "06str.c", 2347))->p++;
                # 2348 "06str.c"
                (come_push_stackframe("06str.c", 2348),skip_spaces_and_lf(info),come_pop_stackframe());
                # 2349 "06str.c"
                if(node_335 && !__freed_obj__) { node_335 = come_decrement_ref_count(node_335, ((struct sNode*)node_335)->finalize, ((struct sNode*)node_335)->_protocol_obj, 0, 0, 0); } 
                break;
            }
            else {
                # 2352 "06str.c"
                (come_push_stackframe("06str.c", 2352),err_msg(info,"invalid character(%c) in tuple expression",*((struct sInfo*)come_null_check(info, "06str.c", 2352))->p),come_pop_stackframe());
                # 2353 "06str.c"
                (come_push_stackframe("06str.c", 2353),exit(2),come_pop_stackframe());
            }
        }
        if(node_335 && !__freed_obj__) { node_335 = come_decrement_ref_count(node_335, ((struct sNode*)node_335)->finalize, ((struct sNode*)node_335)->_protocol_obj, 0, 0, 0); } 
    }
    # 2357 "06str.c"
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2357);
    _inf_obj_value13=come_increment_ref_count((come_push_stackframe("06str.c", 2357),__exception_result_var_b574=((struct sTupleNode*)(right_value494=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value493=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2357)))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_332),info))), come_pop_stackframe(), __exception_result_var_b574));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sTupleNode_finalize;
    _inf_value13->clone=(void*)sTupleNode_clone;
    _inf_value13->compile=(void*)sTupleNode_compile;
    _inf_value13->sline=(void*)sTupleNode_sline;
    _inf_value13->sname=(void*)sTupleNode_sname;
    _inf_value13->terminated=(void*)sTupleNode_terminated;
    _inf_value13->kind=(void*)sTupleNode_kind;
    __result194__ = __result_obj__ = ((struct sNode*)(right_value498=_inf_value13));
    if(tuple_elements_332 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_332, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value493);
    if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value493;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value494);
    if(right_value494 && right_value494 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value494;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value498);
    if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { right_value498 = come_decrement_ref_count(right_value498, ((struct sNode*)right_value498)->finalize, ((struct sNode*)right_value498)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[4] = right_value498;
    __freed_obj__ = 0;
    return __result194__;
    if(tuple_elements_332 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_332, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional351;
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        # 1 "sTupleNode_finalize"
        # 0 "sTupleNode_finalize"
        if(_if_conditional351=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0))->tuple_elements!=((void*)0),        _if_conditional351) {
            # 0 "sTupleNode_finalize"
            if(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0))->tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0))->tuple_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        # 2 "sTupleNode_finalize"
        # 1 "sTupleNode_finalize"
        if(_if_conditional352=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname!=((void*)0),        _if_conditional352) {
            # 1 "sTupleNode_finalize"
            if(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname && !__freed_obj__) { ((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname = come_decrement_ref_count(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional353;
struct sTupleNode* __result192__;
void* right_value495;
struct sTupleNode* result_336;
_Bool _if_conditional354;
void* right_value496;
struct list$1sNodeph* __dec_obj154;
_Bool _if_conditional355;
_Bool _if_conditional356;
void* right_value497;
char* __dec_obj155;
struct sTupleNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value495, 0, sizeof(void*));
memset(&result_336, 0, sizeof(struct sTupleNode*));
memset(&right_value496, 0, sizeof(void*));
memset(&right_value497, 0, sizeof(void*));
        # 3 "sTupleNode_clone"
        # 2 "sTupleNode_clone"
        if(_if_conditional353=self==(void*)0,        _if_conditional353) {
            # 2 "sTupleNode_clone"
            __result192__ = __result_obj__ = (void*)0;
            return __result192__;
        }
        # 3 "sTupleNode_clone"
        result_336=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value495=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value495);
        if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value495;
        __freed_obj__ = 0;
        # 5 "sTupleNode_clone"
        # 4 "sTupleNode_clone"
        if(_if_conditional354=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 4))->tuple_elements!=((void*)0),        _if_conditional354) {
            # 4 "sTupleNode_clone"
            __dec_obj154=((struct sTupleNode*)come_null_check(result_336, "sTupleNode_clone", 4))->tuple_elements;
            ((struct sTupleNode*)come_null_check(result_336, "sTupleNode_clone", 4))->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value496=list$1sNodephp_clone(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 4))->tuple_elements))));
            if(__dec_obj154) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value496);
            if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value496;
            __freed_obj__ = 0;
        }
        # 6 "sTupleNode_clone"
        # 5 "sTupleNode_clone"
        if(_if_conditional355=self!=((void*)0),        _if_conditional355) {
            # 5 "sTupleNode_clone"
            ((struct sTupleNode*)come_null_check(result_336, "sTupleNode_clone", 5))->sline=((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 5))->sline;
        }
        # 7 "sTupleNode_clone"
        # 6 "sTupleNode_clone"
        if(_if_conditional356=self!=((void*)0)&&((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 6))->sname!=((void*)0),        _if_conditional356) {
            # 6 "sTupleNode_clone"
            __dec_obj155=((struct sTupleNode*)come_null_check(result_336, "sTupleNode_clone", 6))->sname;
            ((struct sTupleNode*)come_null_check(result_336, "sTupleNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value497=string_clone(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 6))->sname))));
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value497);
            if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { right_value497 = come_decrement_ref_count(right_value497, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value497;
            __freed_obj__ = 0;
        }
        # 7 "sTupleNode_clone"
        __result193__ = __result_obj__ = result_336;
        if(result_336 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result193__;
        if(result_336 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 0, 0); }
}

