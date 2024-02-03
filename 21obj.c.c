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
struct sNullNodeX
{
    int sline;
    char* sname;
};
struct sNewNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sImplementsNode
{
    struct sNode* obj_exp;
    struct sType* inf_type;
    int sline;
    char* sname;
};
struct sTrueNode
{
    int sline;
    char* sname;
};
struct sFalseNode
{
    int sline;
    char* sname;
};
struct sSizeOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sSizeOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignOfNode2
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignOfExpNode2
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignAsNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignAsExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sDeleteNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sForceDeleteNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDelegateNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sShareNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sBorrowNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sCloneNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDupeNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDummyHeapNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCIncNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCDecNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sIsHeap
{
    struct sType* type;
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

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void come_free_object(void* mem);

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

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info);

_Bool sNullNodeX_terminated();

char* sNullNodeX_kind();

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info);

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info);

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info);

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info);

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
int sNewNode_sline(struct sNewNode* self, struct sInfo* info);

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info);

_Bool sNewNode_terminated();

char* sNewNode_kind();

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info);

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info);

_Bool sImplementsNode_terminated();

char* sImplementsNode_kind();

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info);

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info);

_Bool sTrueNode_terminated();

char* sTrueNode_kind();

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info);

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info);

_Bool sFalseNode_terminated();

char* sFalseNode_kind();

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info);

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info);

_Bool sSizeOfNode_terminated();

char* sSizeOfNode_kind();

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info);

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info);

_Bool sSizeOfExpNode_terminated();

char* sSizeOfExpNode_kind();

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info);

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info);

_Bool sAlignOfNode_terminated();

char* sAlignOfNode_kind();

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info);

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info);

_Bool sAlignOfExpNode_terminated();

char* sAlignOfExpNode_kind();

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info);

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info);

_Bool sAlignOfNode2_terminated();

char* sAlignOfNode2_kind();

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info);

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info);

_Bool sAlignOfExpNode2_terminated();

char* sAlignOfExpNode2_kind();

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info);

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info);

_Bool sAlignAsNode_terminated();

char* sAlignAsNode_kind();

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info);

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info);

_Bool sAlignAsExpNode_terminated();

char* sAlignAsExpNode_kind();

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info);

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info);

_Bool sDeleteNode_terminated();

char* sDeleteNode_kind();

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info);

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info);

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info);

_Bool sForceDeleteNode_terminated();

char* sForceDeleteNode_kind();

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info);

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info);

_Bool sDelegateNode_terminated();

char* sDelegateNode_kind();

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);

int sShareNode_sline(struct sShareNode* self, struct sInfo* info);

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info);

_Bool sShareNode_terminated();

char* sShareNode_kind();

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info);

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info);

_Bool sBorrowNode_terminated();

char* sBorrowNode_kind();

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info);

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info);

_Bool sCloneNode_terminated();

char* sCloneNode_kind();

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info);

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info);

_Bool sDupeNode_terminated();

char* sDupeNode_kind();

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info);

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info);

_Bool sDummyHeapNode_terminated();

char* sDummyHeapNode_kind();

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info);

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info);

_Bool sGCIncNode_terminated();

char* sGCIncNode_kind();

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info);

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info);

_Bool sGCDecNode_terminated();

char* sGCDecNode_kind();

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info);

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info);

_Bool sIsHeap_terminated();

char* sIsHeap_kind();

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sNewNode_finalize(struct sNewNode* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static void sTrueNode_finalize(struct sTrueNode* self);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
static void sFalseNode_finalize(struct sFalseNode* self);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
static void sDeleteNode_finalize(struct sDeleteNode* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static void sForceDeleteNode_finalize(struct sForceDeleteNode* self);
static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self);
static void sBorrowNode_finalize(struct sBorrowNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static void sDelegateNode_finalize(struct sDelegateNode* self);
static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self);
static void sShareNode_finalize(struct sShareNode* self);
static struct sShareNode* sShareNode_clone(struct sShareNode* self);
static void sCloneNode_finalize(struct sCloneNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static void sDupeNode_finalize(struct sDupeNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static void sGCIncNode_finalize(struct sGCIncNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static void sGCDecNode_finalize(struct sGCDecNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static void sIsHeap_finalize(struct sIsHeap* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNodeX_finalize(struct sNullNodeX* self);
static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self);
struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

static void sImplementsNode_finalize(struct sImplementsNode* self);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
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
    (come_push_stackframe("./comelang2.h", 108),perror(msg),come_pop_stackframe());
    (come_push_stackframe("./comelang2.h", 109),stackframe(),come_pop_stackframe());
    (come_push_stackframe("./comelang2.h", 110),exit(4),come_pop_stackframe());
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1999, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2001))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2001))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2002))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2002))->memory, "./comelang2.h", 2002))->buf;
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2009, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2011))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2011))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2012))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2012))->memory, "./comelang2.h", 2012))->buf;
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2019, "struct smart_pointer$1short"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2021))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2021))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2022))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2022))->memory, "./comelang2.h", 2022))->buf;
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2029, "struct smart_pointer$1int"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2031))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2031))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2032))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2032))->memory, "./comelang2.h", 2032))->buf;
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2039, "struct smart_pointer$1long"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2041))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2041))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2042))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2042))->memory, "./comelang2.h", 2042))->buf;
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
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory!=((void*)0),        _if_conditional1) {
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
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory!=((void*)0),        _if_conditional2) {
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
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory!=((void*)0),        _if_conditional3) {
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
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory!=((void*)0),        _if_conditional4) {
            if(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __exception_result_var_b1;
char* __dec_obj6;
struct sNullNodeX* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
    ((struct sNullNodeX*)come_null_check(self, "21obj.c", 12))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 12))->sline;
    __dec_obj6=((struct sNullNodeX*)come_null_check(self, "21obj.c", 13))->sname;
    ((struct sNullNodeX*)come_null_check(self, "21obj.c", 13))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 13),__exception_result_var_b1=((char*)(right_value10=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 13))->sname))), come_pop_stackframe(), __exception_result_var_b1));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    __result13__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result13__;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullNodeX_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result14__ = (_Bool)0;
    return __result14__;
}

char* sNullNodeX_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value11;
char* __exception_result_var_b2;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
    __result15__ = __result_obj__ = (come_push_stackframe("21obj.c", 25),__exception_result_var_b2=((char*)(right_value11=__builtin_string("sNullNodeX"))), come_pop_stackframe(), __exception_result_var_b2);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value11;
    __freed_obj__ = 0;
    return __result15__;
}

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result16__ = (_Bool)1;
    return __result16__;
}

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result17__ = ((struct sNullNodeX*)come_null_check(self, "21obj.c", 36))->sline;
    return __result17__;
}

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
char* __exception_result_var_b3;
char* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
    __result18__ = __result_obj__ = (come_push_stackframe("21obj.c", 41),__exception_result_var_b3=((char*)(right_value12=__builtin_string(((struct sNullNodeX*)come_null_check(self, "21obj.c", 41))->sname))), come_pop_stackframe(), __exception_result_var_b3);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = 0;
    return __result18__;
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value47;
struct sType* __dec_obj29;
void* right_value48;
char* __exception_result_var_b10;
char* __dec_obj30;
struct sNewNode* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
    __dec_obj29=((struct sNewNode*)come_null_check(self, "21obj.c", 53))->type;
    ((struct sNewNode*)come_null_check(self, "21obj.c", 53))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value47=sType_clone(type))));
    if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value47;
    __freed_obj__ = 0;
    ((struct sNewNode*)come_null_check(self, "21obj.c", 55))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 55))->sline;
    __dec_obj30=((struct sNewNode*)come_null_check(self, "21obj.c", 56))->sname;
    ((struct sNewNode*)come_null_check(self, "21obj.c", 56))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 56),__exception_result_var_b10=((char*)(right_value48=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 56))->sname))), come_pop_stackframe(), __exception_result_var_b10));
    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value48);
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value48;
    __freed_obj__ = 0;
    __result37__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result37__;
    if(self && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
struct sType* __result19__;
void* right_value13;
struct sType* result_5;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value16;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value17;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional29;
void* right_value18;
char* __dec_obj10;
_Bool _if_conditional30;
void* right_value25;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional34;
void* right_value33;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value34;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional49;
void* right_value41;
struct list$1charph* __dec_obj23;
_Bool _if_conditional53;
void* right_value42;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value43;
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
void* right_value44;
struct sNode* __dec_obj26;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value45;
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
void* right_value46;
char* __dec_obj28;
struct sType* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
        if(_if_conditional6=self==(void*)0,        _if_conditional6) {
            __result19__ = __result_obj__ = (void*)0;
            return __result19__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value13;
        __freed_obj__ = 0;
        if(_if_conditional23=self!=((void*)0),        _if_conditional23) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
        }
        if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType!=((void*)0),        _if_conditional24) {
            __dec_obj8=((struct sType*)come_null_check(result_5, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value16=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value16;
            __freed_obj__ = 0;
        }
        if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType!=((void*)0),        _if_conditional28) {
            __dec_obj9=((struct sType*)come_null_check(result_5, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
            if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value17;
            __freed_obj__ = 0;
        }
        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName!=((void*)0),        _if_conditional29) {
            __dec_obj10=((struct sType*)come_null_check(result_5, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value18=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value18;
            __freed_obj__ = 0;
        }
        if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes!=((void*)0),        _if_conditional30) {
            __dec_obj14=((struct sType*)come_null_check(result_5, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_5, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value25=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value25;
            __freed_obj__ = 0;
        }
        if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum!=((void*)0),        _if_conditional34) {
            __dec_obj18=((struct sType*)come_null_check(result_5, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_5, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value33=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj18) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value33;
            __freed_obj__ = 0;
        }
        if(_if_conditional47=self!=((void*)0),        _if_conditional47) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
        }
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes!=((void*)0),        _if_conditional48) {
            __dec_obj19=((struct sType*)come_null_check(result_5, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_5, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value34=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj19) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value34;
            __freed_obj__ = 0;
        }
        if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames!=((void*)0),        _if_conditional49) {
            __dec_obj23=((struct sType*)come_null_check(result_5, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_5, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value41=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj23) { come_call_finalizer(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value41;
            __freed_obj__ = 0;
        }
        if(_if_conditional53=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType!=((void*)0),        _if_conditional53) {
            __dec_obj24=((struct sType*)come_null_check(result_5, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value42=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value42;
            __freed_obj__ = 0;
        }
        if(_if_conditional54=self!=((void*)0),        _if_conditional54) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
        }
        if(_if_conditional55=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas!=((void*)0),        _if_conditional55) {
            __dec_obj25=((struct sType*)come_null_check(result_5, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_5, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value43=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, ((struct sNode*)right_value43)->finalize, ((struct sNode*)right_value43)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value43;
            __freed_obj__ = 0;
        }
        if(_if_conditional56=self!=((void*)0),        _if_conditional56) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
        }
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
        }
        if(_if_conditional79=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum!=((void*)0),        _if_conditional79) {
            __dec_obj26=((struct sType*)come_null_check(result_5, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_5, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value44;
            __freed_obj__ = 0;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
        }
        if(_if_conditional82=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName!=((void*)0),        _if_conditional82) {
            __dec_obj27=((struct sType*)come_null_check(result_5, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value45=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value45;
            __freed_obj__ = 0;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
        }
        if(_if_conditional91=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName!=((void*)0),        _if_conditional91) {
            __dec_obj28=((struct sType*)come_null_check(result_5, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value46;
            __freed_obj__ = 0;
        }
        __result36__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result36__;
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
            if(_if_conditional7=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType!=((void*)0),            _if_conditional7) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType!=((void*)0),            _if_conditional9) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName!=((void*)0),            _if_conditional10) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes!=((void*)0),            _if_conditional11) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum!=((void*)0),            _if_conditional13) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes!=((void*)0),            _if_conditional15) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames!=((void*)0),            _if_conditional16) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType!=((void*)0),            _if_conditional18) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas!=((void*)0),            _if_conditional19) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum!=((void*)0),            _if_conditional20) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName!=((void*)0),            _if_conditional21) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName!=((void*)0),            _if_conditional22) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional8=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1!=((void*)0),                    _if_conditional8) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                    it_6=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 178))->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=((struct list_item$1sTypeph*)come_null_check(it_6, "./comelang2.h", 181))->next;
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
                            if(_if_conditional12=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item!=((void*)0),                            _if_conditional12) {
                                if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                    it_8=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 178))->head;
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=((struct list_item$1sNodeph*)come_null_check(it_8, "./comelang2.h", 181))->next;
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
                            if(_if_conditional14=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item!=((void*)0),                            _if_conditional14) {
                                if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
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
                    it_10=((struct list$1charph*)come_null_check(self, "./comelang2.h", 178))->head;
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=((struct list_item$1charph*)come_null_check(it_10, "./comelang2.h", 181))->next;
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
                            if(_if_conditional17=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item!=((void*)0),                            _if_conditional17) {
                                if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
struct tuple1$1sTypeph* __result20__;
void* right_value14;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional27;
void* right_value15;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value15, 0, sizeof(void*));
                if(_if_conditional25=self==(void*)0,                _if_conditional25) {
                    __result20__ = __result_obj__ = (void*)0;
                    return __result20__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value14;
                __freed_obj__ = 0;
                if(_if_conditional27=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1!=((void*)0),                _if_conditional27) {
                    __dec_obj7=((struct tuple1$1sTypeph*)come_null_check(result_12, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_12, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value15=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value15;
                    __freed_obj__ = 0;
                }
                __result21__ = __result_obj__ = result_12;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result21__;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional26=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1!=((void*)0),                    _if_conditional26) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
struct list$1sTypeph* __result22__;
void* right_value19;
void* right_value20;
struct list$1sTypeph* __exception_result_var_b4;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value24;
struct list$1sTypeph* __exception_result_var_b5;
struct list$1sTypeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value24, 0, sizeof(void*));
                if(_if_conditional31=self==((void*)0),                _if_conditional31) {
                    __result22__ = __result_obj__ = ((void*)0);
                    return __result22__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 197),__exception_result_var_b4=((struct list$1sTypeph*)(right_value20=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value19=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 197, "struct list$1sTypeph"))), "./comelang2.h", 197)))))), come_pop_stackframe(), __exception_result_var_b4));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value19;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value20;
                __freed_obj__ = 0;
                it_14=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 199))->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    (come_push_stackframe("./comelang2.h", 201),__exception_result_var_b5=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_13, "./comelang2.h", 201)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 201))->item))))), come_pop_stackframe(), __exception_result_var_b5);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value24;
                    __freed_obj__ = 0;
                    it_14=((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 203))->next;
                }
                __result25__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result25__;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 161))->len=0;
                    __result23__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result23__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
void* right_value21;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj11;
_Bool _if_conditional33;
void* right_value22;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj12;
void* right_value23;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj13;
struct list$1sTypeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value23, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional32=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 210))->len==0,                        _if_conditional32) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 211, "struct list_item$1sTypeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value21;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 213))->prev=((void*)0);
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 214))->next=((void*)0);
                            __dec_obj11=((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 215))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 215))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 217))->tail=litem_15;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->head=litem_15;
                        }
                        else {
                            if(_if_conditional33=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 220))->len==1,                            _if_conditional33) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 221, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value22;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 223))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 223))->head;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 224))->next=((void*)0);
                                __dec_obj12=((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 225))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 225))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 227))->tail=litem_16;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->head, "./comelang2.h", 228))->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 231, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value23;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 233))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 233))->tail;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 234))->next=((void*)0);
                                __dec_obj13=((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 235))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 235))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 237))->tail, "./comelang2.h", 237))->next=litem_17;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 238))->tail=litem_17;
                            }
                        }
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 241))->len++;
                        __result24__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result24__;
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
struct list$1sNodeph* __result26__;
void* right_value26;
void* right_value27;
struct list$1sNodeph* __exception_result_var_b6;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value32;
struct list$1sNodeph* __exception_result_var_b7;
struct list$1sNodeph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value32, 0, sizeof(void*));
                if(_if_conditional35=self==((void*)0),                _if_conditional35) {
                    __result26__ = __result_obj__ = ((void*)0);
                    return __result26__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 197),__exception_result_var_b6=((struct list$1sNodeph*)(right_value27=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value26=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 197, "struct list$1sNodeph"))), "./comelang2.h", 197)))))), come_pop_stackframe(), __exception_result_var_b6));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value26;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value27);
                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value27;
                __freed_obj__ = 0;
                it_19=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 199))->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    (come_push_stackframe("./comelang2.h", 201),__exception_result_var_b7=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_18, "./comelang2.h", 201)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 201))->item))))), come_pop_stackframe(), __exception_result_var_b7);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value32;
                    __freed_obj__ = 0;
                    it_19=((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 203))->next;
                }
                __result31__ = __result_obj__ = result_18;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result31__;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 161))->len=0;
                    __result27__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result27__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional36;
void* right_value28;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
_Bool _if_conditional37;
void* right_value29;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
void* right_value30;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value30, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional36=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 210))->len==0,                        _if_conditional36) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 211, "struct list_item$1sNodeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                            if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value28;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 213))->prev=((void*)0);
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 214))->next=((void*)0);
                            __dec_obj15=((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 215))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 215))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 217))->tail=litem_20;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->head=litem_20;
                        }
                        else {
                            if(_if_conditional37=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 220))->len==1,                            _if_conditional37) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 221, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value29;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 223))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 223))->head;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 224))->next=((void*)0);
                                __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 225))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 225))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 227))->tail=litem_21;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->head, "./comelang2.h", 228))->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 231, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value30;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 233))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 233))->tail;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 234))->next=((void*)0);
                                __dec_obj17=((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 235))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 235))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 237))->tail, "./comelang2.h", 237))->next=litem_22;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 238))->tail=litem_22;
                            }
                        }
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 241))->len++;
                        __result28__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        return __result28__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
struct sNode* __result29__;
void* right_value31;
struct sNode* result_23;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
struct sNode* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional38=self==(void*)0,                        _if_conditional38) {
                            __result29__ = __result_obj__ = (void*)0;
                            return __result29__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value31;
                        __freed_obj__ = 0;
                        if(_if_conditional39=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone!=((void*)0),                        _if_conditional39) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                        }
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                        }
                        __result30__ = __result_obj__ = result_23;
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0); } 
                        return __result30__;
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
struct list$1charph* __result32__;
void* right_value35;
void* right_value36;
struct list$1charph* __exception_result_var_b8;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value40;
struct list$1charph* __exception_result_var_b9;
struct list$1charph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value40, 0, sizeof(void*));
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    __result32__ = __result_obj__ = ((void*)0);
                    return __result32__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 197),__exception_result_var_b8=((struct list$1charph*)(right_value36=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value35=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 197, "struct list$1charph"))), "./comelang2.h", 197)))))), come_pop_stackframe(), __exception_result_var_b8));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value35;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value36);
                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value36;
                __freed_obj__ = 0;
                it_25=((struct list$1charph*)come_null_check(self, "./comelang2.h", 199))->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    (come_push_stackframe("./comelang2.h", 201),__exception_result_var_b9=list$1charph_add(((struct list$1charph*)come_null_check(result_24, "./comelang2.h", 201)),(char*)come_increment_ref_count(((char*)(right_value40=string_clone(((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 201))->item))))), come_pop_stackframe(), __exception_result_var_b9);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value40;
                    __freed_obj__ = 0;
                    it_25=((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 203))->next;
                }
                __result35__ = __result_obj__ = result_24;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result35__;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 159))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 160))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 161))->len=0;
                    __result33__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result33__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
void* right_value37;
struct list_item$1charph* litem_26;
char* __dec_obj20;
_Bool _if_conditional52;
void* right_value38;
struct list_item$1charph* litem_27;
char* __dec_obj21;
void* right_value39;
struct list_item$1charph* litem_28;
char* __dec_obj22;
struct list$1charph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional51=((struct list$1charph*)come_null_check(self, "./comelang2.h", 210))->len==0,                        _if_conditional51) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 211, "struct list_item$1charph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value37;
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 213))->prev=((void*)0);
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 214))->next=((void*)0);
                            __dec_obj20=((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 215))->item;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 215))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 217))->tail=litem_26;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->head=litem_26;
                        }
                        else {
                            if(_if_conditional52=((struct list$1charph*)come_null_check(self, "./comelang2.h", 220))->len==1,                            _if_conditional52) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 221, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                                if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value38;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 223))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 223))->head;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 224))->next=((void*)0);
                                __dec_obj21=((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 225))->item;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 225))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 227))->tail=litem_27;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->head, "./comelang2.h", 228))->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 231, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value39;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 233))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 233))->tail;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 234))->next=((void*)0);
                                __dec_obj22=((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 235))->item;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 235))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 237))->tail, "./comelang2.h", 237))->next=litem_28;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 238))->tail=litem_28;
                            }
                        }
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 241))->len++;
                        __result34__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result34__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int sNewNode_sline(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result38__ = ((struct sNewNode*)come_null_check(self, "21obj.c", 63))->sline;
    return __result38__;
}

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value49;
char* __exception_result_var_b11;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
    __result39__ = __result_obj__ = (come_push_stackframe("21obj.c", 68),__exception_result_var_b11=((char*)(right_value49=__builtin_string(((struct sNewNode*)come_null_check(self, "21obj.c", 68))->sname))), come_pop_stackframe(), __exception_result_var_b11);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value49;
    __freed_obj__ = 0;
    return __result39__;
}

_Bool sNewNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result40__ = (_Bool)0;
    return __result40__;
}

char* sNewNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value50;
char* __exception_result_var_b12;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
    __result41__ = __result_obj__ = (come_push_stackframe("21obj.c", 78),__exception_result_var_b12=((char*)(right_value50=__builtin_string("sNewNode"))), come_pop_stackframe(), __exception_result_var_b12);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value50;
    __freed_obj__ = 0;
    return __result41__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* type_29;
void* right_value51;
struct CVALUE* come_value_30;
void* right_value52;
void* right_value53;
struct buffer* __exception_result_var_b13;
struct buffer* num_string_31;
struct buffer* __exception_result_var_b14;
struct list$1sNodeph* o2_saved_32;
struct sNode* __exception_result_var_b17;
struct sNode* it_35;
_Bool __exception_result_var_b18;
_Bool _for_condtionalA1;
struct sNode* __exception_result_var_b21;
_Bool __exception_result_var_b22;
_Bool _if_conditional100;
_Bool __result49__;
void* right_value54;
struct CVALUE* __exception_result_var_b23;
struct CVALUE* cvalue_38;
void* right_value55;
char* __exception_result_var_b24;
struct buffer* __exception_result_var_b25;
void* right_value56;
struct sType* __exception_result_var_b26;
struct sType* type2_39;
struct list$1sNodeph* __exception_result_var_b27;
void* right_value57;
char* __exception_result_var_b28;
char* type_name_42;
void* right_value58;
char* __exception_result_var_b29;
void* right_value59;
char* __exception_result_var_b30;
char* __dec_obj31;
_Bool _if_conditional101;
void* right_value60;
char* __exception_result_var_b31;
char* __dec_obj32;
void* right_value61;
struct sType* __dec_obj33;
struct list$1CVALUEph* __exception_result_var_b32;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_29, 0, sizeof(struct sType*));
memset(&right_value51, 0, sizeof(void*));
memset(&come_value_30, 0, sizeof(struct CVALUE*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&num_string_31, 0, sizeof(struct buffer*));
memset(&o2_saved_32, 0, sizeof(struct list$1sNodeph*));
memset(&it_35, 0, sizeof(struct sNode*));
memset(&right_value54, 0, sizeof(void*));
memset(&cvalue_38, 0, sizeof(struct CVALUE*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&type2_39, 0, sizeof(struct sType*));
memset(&right_value57, 0, sizeof(void*));
memset(&type_name_42, 0, sizeof(char*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
    type_29=((struct sNewNode*)come_null_check(self, "21obj.c", 83))->type;
    come_value_30=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value51=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 85, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value51;
    __freed_obj__ = 0;
    num_string_31=(struct buffer*)come_increment_ref_count((come_push_stackframe("21obj.c", 87),__exception_result_var_b13=((struct buffer*)(right_value53=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value52=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 87, "struct buffer"))))))), come_pop_stackframe(), __exception_result_var_b13));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value52);
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value52;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value53);
    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value53;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 89),__exception_result_var_b14=buffer_append_str(((struct buffer*)come_null_check(num_string_31, "21obj.c", 89)),"1"), come_pop_stackframe(), __exception_result_var_b14);
    for(
    o2_saved_32=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(type_29, "21obj.c", 91))->mArrayNum)),it_35=(come_push_stackframe("21obj.c", 91),__exception_result_var_b17=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_32), "21obj.c", 91))), come_pop_stackframe(), __exception_result_var_b17) ,    0;    _for_condtionalA1=    !(come_push_stackframe("21obj.c", 91),__exception_result_var_b18=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_32), "21obj.c", 91))), come_pop_stackframe(), __exception_result_var_b18) ,    _for_condtionalA1;    it_35=(come_push_stackframe("21obj.c", 91),__exception_result_var_b21=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_32), "21obj.c", 91))), come_pop_stackframe(), __exception_result_var_b21) ,    0    ){
        if(_if_conditional100=!(come_push_stackframe("21obj.c", 92),__exception_result_var_b22=node_compile(it_35,info), come_pop_stackframe(), __exception_result_var_b22),        _if_conditional100) {
            __result49__ = (_Bool)0;
            if(o2_saved_32 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_32, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_30 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_30, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(num_string_31 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_31, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result49__;
        }
        cvalue_38=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 96),__exception_result_var_b23=((struct CVALUE*)(right_value54=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b23));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value54;
        __freed_obj__ = 0;
        (come_push_stackframe("21obj.c", 97),dec_stack_ptr(1,info),come_pop_stackframe());
        (come_push_stackframe("21obj.c", 99),__exception_result_var_b25=buffer_append_str(((struct buffer*)come_null_check(num_string_31, "21obj.c", 99)),(come_push_stackframe("21obj.c", 99),__exception_result_var_b24=((char*)(right_value55=xsprintf("*(%s)",((struct CVALUE*)come_null_check(cvalue_38, "21obj.c", 99))->c_value))), come_pop_stackframe(), __exception_result_var_b24)), come_pop_stackframe(), __exception_result_var_b25);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value55);
        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value55;
        __freed_obj__ = 0;
        if(cvalue_38 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_38, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_32 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    type2_39=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 102),__exception_result_var_b26=((struct sType*)(right_value56=solve_generics(type_29,((struct sInfo*)come_null_check(info, "21obj.c", 102))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b26));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value56;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 109),__exception_result_var_b27=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type2_39, "21obj.c", 109))->mArrayNum, "21obj.c", 109))), come_pop_stackframe(), __exception_result_var_b27);
    type_name_42=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 111),__exception_result_var_b28=((char*)(right_value57=make_type_name_string(type2_39,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b28));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value57);
    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value57;
    __freed_obj__ = 0;
    __dec_obj31=((struct CVALUE*)come_null_check(come_value_30, "21obj.c", 113))->c_value;
    ((struct CVALUE*)come_null_check(come_value_30, "21obj.c", 113))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 113),__exception_result_var_b30=((char*)(right_value59=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_42,type_name_42,(come_push_stackframe("21obj.c", 113),__exception_result_var_b29=((char*)(right_value58=buffer_to_string(((struct buffer*)come_null_check(num_string_31, "21obj.c", 113))))), come_pop_stackframe(), __exception_result_var_b29),((struct sInfo*)come_null_check(info, "21obj.c", 113))->sname,((struct sInfo*)come_null_check(info, "21obj.c", 113))->sline,type_name_42))), come_pop_stackframe(), __exception_result_var_b30));
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value58;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value59;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_39, "21obj.c", 115))->mHeap=(_Bool)1;
    ((struct sType*)come_null_check(type2_39, "21obj.c", 116))->mPointerNum++;
    if(_if_conditional101=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_39, "21obj.c", 118))->mNoSolvedGenericsType, "21obj.c", 118))->v1,    _if_conditional101) {
        ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_39, "21obj.c", 119))->mNoSolvedGenericsType, "21obj.c", 119))->v1, "21obj.c", 119))->mPointerNum++;
        ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_39, "21obj.c", 120))->mNoSolvedGenericsType, "21obj.c", 120))->v1, "21obj.c", 120))->mHeap=(_Bool)1;
    }
    __dec_obj32=((struct CVALUE*)come_null_check(come_value_30, "21obj.c", 123))->c_value;
    ((struct CVALUE*)come_null_check(come_value_30, "21obj.c", 123))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 123),__exception_result_var_b31=((char*)(right_value60=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_30, "21obj.c", 123))->c_value,(struct sType*)come_increment_ref_count(type2_39),info))), come_pop_stackframe(), __exception_result_var_b31));
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value60;
    __freed_obj__ = 0;
    __dec_obj33=((struct CVALUE*)come_null_check(come_value_30, "21obj.c", 124))->type;
    ((struct CVALUE*)come_null_check(come_value_30, "21obj.c", 124))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(type2_39))));
    if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value61);
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value61;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_30, "21obj.c", 125))->var=((void*)0);
    (come_push_stackframe("21obj.c", 127),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_30, "21obj.c", 127))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 129),__exception_result_var_b32=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 129))->stack, "21obj.c", 129)),(struct CVALUE*)come_increment_ref_count(come_value_30)), come_pop_stackframe(), __exception_result_var_b32);
    __result52__ = (_Bool)1;
    if(come_value_30 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_30, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_31 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_31, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_39 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_42 && !__freed_obj__) { type_name_42 = come_decrement_ref_count(type_name_42, (void*)0, (void*)0, 0, 0, 0); }
    return __result52__;
    if(come_value_30 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_30, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_31 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_31, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_39 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_42 && !__freed_obj__) { type_name_42 = come_decrement_ref_count(type_name_42, (void*)0, (void*)0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional94=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value!=((void*)0),        _if_conditional94) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional95=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type!=((void*)0),        _if_conditional95) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
struct sNode* result_33;
void* __exception_result_var_b15;
struct sNode* __result42__;
_Bool _if_conditional97;
struct sNode* __result43__;
struct sNode* result_34;
void* __exception_result_var_b16;
struct sNode* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_33, 0, sizeof(struct sNode*));
memset(&result_34, 0, sizeof(struct sNode*));
        if(_if_conditional96=self==((void*)0),        _if_conditional96) {
            (come_push_stackframe("./comelang2.h", 342),__exception_result_var_b15=memset(&result_33,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b15);
            __result42__ = __result_obj__ = result_33;
            return __result42__;
        }
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 345))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 345))->head;
        if(_if_conditional97=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 347))->it,        _if_conditional97) {
            __result43__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 348))->it, "./comelang2.h", 348))->item;
            return __result43__;
        }
        (come_push_stackframe("./comelang2.h", 352),__exception_result_var_b16=memset(&result_34,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b16);
        __result44__ = __result_obj__ = result_34;
        return __result44__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result45__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 375))->it==((void*)0);
        return __result45__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
struct sNode* result_36;
void* __exception_result_var_b19;
struct sNode* __result46__;
_Bool _if_conditional99;
struct sNode* __result47__;
struct sNode* result_37;
void* __exception_result_var_b20;
struct sNode* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_36, 0, sizeof(struct sNode*));
memset(&result_37, 0, sizeof(struct sNode*));
        if(_if_conditional98=self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it==((void*)0),        _if_conditional98) {
            (come_push_stackframe("./comelang2.h", 359),__exception_result_var_b19=memset(&result_36,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b19);
            __result46__ = __result_obj__ = result_36;
            return __result46__;
        }
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 363))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 363))->it, "./comelang2.h", 363))->next;
        if(_if_conditional99=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 365))->it,        _if_conditional99) {
            __result47__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it, "./comelang2.h", 366))->item;
            return __result47__;
        }
        (come_push_stackframe("./comelang2.h", 370),__exception_result_var_b20=memset(&result_37,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b20);
        __result48__ = __result_obj__ = result_37;
        return __result48__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_40;
_Bool _while_condtional7;
struct list_item$1sNodeph* prev_it_41;
struct list$1sNodeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_40, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_41, 0, sizeof(struct list_item$1sNodeph*));
        it_40=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 485))->head;
        while(_while_condtional7=it_40!=((void*)0),        _while_condtional7) {
            prev_it_41=it_40;
            it_40=((struct list_item$1sNodeph*)come_null_check(it_40, "./comelang2.h", 488))->next;
            if(prev_it_41 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_41, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 492))->head=((void*)0);
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 493))->tail=((void*)0);
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 495))->len=0;
        __result50__ = __result_obj__ = self;
        return __result50__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
void* right_value62;
struct list_item$1CVALUEph* litem_43;
struct CVALUE* __dec_obj34;
_Bool _if_conditional104;
void* right_value63;
struct list_item$1CVALUEph* litem_44;
struct CVALUE* __dec_obj35;
void* right_value64;
struct list_item$1CVALUEph* litem_45;
struct CVALUE* __dec_obj36;
struct list$1CVALUEph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_44, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value64, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional102=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 280))->len==0,        _if_conditional102) {
            litem_43=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value62=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 281, "struct list_item$1CVALUEph"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value62;
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_43, "./comelang2.h", 283))->prev=((void*)0);
            ((struct list_item$1CVALUEph*)come_null_check(litem_43, "./comelang2.h", 284))->next=((void*)0);
            __dec_obj34=((struct list_item$1CVALUEph*)come_null_check(litem_43, "./comelang2.h", 285))->item;
            ((struct list_item$1CVALUEph*)come_null_check(litem_43, "./comelang2.h", 285))->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj34) { come_call_finalizer(CVALUE_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 287))->tail=litem_43;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->head=litem_43;
        }
        else {
            if(_if_conditional104=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 290))->len==1,            _if_conditional104) {
                litem_44=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value63=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 291, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value63;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_44, "./comelang2.h", 293))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 293))->head;
                ((struct list_item$1CVALUEph*)come_null_check(litem_44, "./comelang2.h", 294))->next=((void*)0);
                __dec_obj35=((struct list_item$1CVALUEph*)come_null_check(litem_44, "./comelang2.h", 295))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_44, "./comelang2.h", 295))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj35) { come_call_finalizer(CVALUE_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 297))->tail=litem_44;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->head, "./comelang2.h", 298))->next=litem_44;
            }
            else {
                litem_45=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value64=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 301, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value64;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_45, "./comelang2.h", 303))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 303))->tail;
                ((struct list_item$1CVALUEph*)come_null_check(litem_45, "./comelang2.h", 304))->next=((void*)0);
                __dec_obj36=((struct list_item$1CVALUEph*)come_null_check(litem_45, "./comelang2.h", 305))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_45, "./comelang2.h", 305))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj36) { come_call_finalizer(CVALUE_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 307))->tail, "./comelang2.h", 307))->next=litem_45;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 308))->tail=litem_45;
            }
        }
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 311))->len++;
        __result51__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result51__;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional103=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item!=((void*)0),                _if_conditional103) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct sNode* create_object(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value65;
void* right_value66;
struct sNewNode* __exception_result_var_b33;
struct sNode* _inf_value1;
struct sNewNode* _inf_obj_value1;
void* right_value70;
struct sNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 136, "struct sNode");
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("21obj.c", 136),__exception_result_var_b33=((struct sNewNode*)(right_value66=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value65=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 136, "struct sNewNode")))),(struct sType*)come_increment_ref_count(type),info))), come_pop_stackframe(), __exception_result_var_b33));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNewNode_finalize;
    _inf_value1->clone=(void*)sNewNode_clone;
    _inf_value1->compile=(void*)sNewNode_compile;
    _inf_value1->sline=(void*)sNewNode_sline;
    _inf_value1->sname=(void*)sNewNode_sname;
    _inf_value1->terminated=(void*)sNewNode_terminated;
    _inf_value1->kind=(void*)sNewNode_kind;
    __result55__ = __result_obj__ = ((struct sNode*)(right_value70=_inf_value1));
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value65;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value66);
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value66;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, ((struct sNode*)right_value70)->finalize, ((struct sNode*)right_value70)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value70;
    __freed_obj__ = 0;
    return __result55__;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value71;
struct sNode* __dec_obj39;
void* right_value72;
struct sType* __dec_obj40;
void* right_value73;
char* __exception_result_var_b34;
char* __dec_obj41;
struct sImplementsNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
    __dec_obj39=((struct sImplementsNode*)come_null_check(self, "21obj.c", 149))->obj_exp;
    ((struct sImplementsNode*)come_null_check(self, "21obj.c", 149))->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value71=sNode_clone(obj_exp))));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, ((struct sNode*)right_value71)->finalize, ((struct sNode*)right_value71)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value71;
    __freed_obj__ = 0;
    __dec_obj40=((struct sImplementsNode*)come_null_check(self, "21obj.c", 150))->inf_type;
    ((struct sImplementsNode*)come_null_check(self, "21obj.c", 150))->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(inf_type))));
    if(__dec_obj40) { come_call_finalizer(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value72;
    __freed_obj__ = 0;
    ((struct sImplementsNode*)come_null_check(self, "21obj.c", 152))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 152))->sline;
    __dec_obj41=((struct sImplementsNode*)come_null_check(self, "21obj.c", 153))->sname;
    ((struct sImplementsNode*)come_null_check(self, "21obj.c", 153))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 153),__exception_result_var_b34=((char*)(right_value73=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 153))->sname))), come_pop_stackframe(), __exception_result_var_b34));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value73;
    __freed_obj__ = 0;
    __result56__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj_exp && !__freed_obj__) { obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0); } 
    if(inf_type && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result56__;
    if(self && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj_exp && !__freed_obj__) { obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0); } 
    if(inf_type && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result57__ = ((struct sImplementsNode*)come_null_check(self, "21obj.c", 160))->sline;
    return __result57__;
}

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value74;
char* __exception_result_var_b35;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value74, 0, sizeof(void*));
    __result58__ = __result_obj__ = (come_push_stackframe("21obj.c", 165),__exception_result_var_b35=((char*)(right_value74=__builtin_string(((struct sImplementsNode*)come_null_check(self, "21obj.c", 165))->sname))), come_pop_stackframe(), __exception_result_var_b35);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value74;
    __freed_obj__ = 0;
    return __result58__;
}

_Bool sImplementsNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result59__ = (_Bool)0;
    return __result59__;
}

char* sImplementsNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value75;
char* __exception_result_var_b36;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value75, 0, sizeof(void*));
    __result60__ = __result_obj__ = (come_push_stackframe("21obj.c", 175),__exception_result_var_b36=((char*)(right_value75=__builtin_string("sImplementsNode"))), come_pop_stackframe(), __exception_result_var_b36);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value75;
    __freed_obj__ = 0;
    return __result60__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value76;
struct sNode* obj_exp_47;
void* right_value77;
struct sType* inf_type_48;
_Bool __exception_result_var_b37;
_Bool _if_conditional114;
_Bool __result61__;
void* right_value78;
struct CVALUE* __exception_result_var_b38;
struct CVALUE* come_value_49;
void* right_value79;
struct sType* type_50;
struct sClass* klass_51;
void* right_value80;
struct CVALUE* come_value2_52;
void* right_value81;
struct sType* type2_53;
void* right_value82;
char* __exception_result_var_b39;
char* type_name_54;
void* right_value83;
char* __exception_result_var_b40;
char* type_name2_55;
static int inf_num_56=0;
void* right_value84;
char* __exception_result_var_b41;
char* buf_57;
void* right_value85;
char* __exception_result_var_b42;
char* buf2_58;
void* right_value86;
struct sType* typeX_59;
void* right_value87;
struct tuple2$2sFunpcharph* __exception_result_var_b43;
void* right_value88;
struct tuple2$2sFunpcharph* __exception_result_var_b44;
int i_60;
int __exception_result_var_b45;
_Bool _for_condtionalA2;
struct tuple2$2charphsTypeph* __exception_result_var_b47;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_64;
struct sType* field_type_65;
void* right_value89;
char* __exception_result_var_b48;
char* method_name_66;
void* right_value90;
char* __exception_result_var_b49;
char* __dec_obj42;
void* right_value91;
struct sType* type3_67;
void* right_value92;
struct sType* __dec_obj43;
void* right_value93;
char* __exception_result_var_b50;
char* __dec_obj44;
struct list$1CVALUEph* __exception_result_var_b51;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&obj_exp_47, 0, sizeof(struct sNode*));
memset(&right_value77, 0, sizeof(void*));
memset(&inf_type_48, 0, sizeof(struct sType*));
memset(&right_value78, 0, sizeof(void*));
memset(&come_value_49, 0, sizeof(struct CVALUE*));
memset(&right_value79, 0, sizeof(void*));
memset(&type_50, 0, sizeof(struct sType*));
memset(&klass_51, 0, sizeof(struct sClass*));
memset(&right_value80, 0, sizeof(void*));
memset(&come_value2_52, 0, sizeof(struct CVALUE*));
memset(&right_value81, 0, sizeof(void*));
memset(&type2_53, 0, sizeof(struct sType*));
memset(&right_value82, 0, sizeof(void*));
memset(&type_name_54, 0, sizeof(char*));
memset(&right_value83, 0, sizeof(void*));
memset(&type_name2_55, 0, sizeof(char*));
memset(&right_value84, 0, sizeof(void*));
memset(&buf_57, 0, sizeof(char*));
memset(&right_value85, 0, sizeof(void*));
memset(&buf2_58, 0, sizeof(char*));
memset(&right_value86, 0, sizeof(void*));
memset(&typeX_59, 0, sizeof(struct sType*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&i_60, 0, sizeof(int));
memset(&name_64, 0, sizeof(char*));
memset(&field_type_65, 0, sizeof(struct sType*));
memset(&name_64, 0, sizeof(char*));
memset(&field_type_65, 0, sizeof(struct sType*));
memset(&right_value89, 0, sizeof(void*));
memset(&method_name_66, 0, sizeof(char*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&type3_67, 0, sizeof(struct sType*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
    obj_exp_47=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNode_clone(((struct sImplementsNode*)come_null_check(self, "21obj.c", 180))->obj_exp))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value76;
    __freed_obj__ = 0;
    inf_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(((struct sImplementsNode*)come_null_check(self, "21obj.c", 181))->inf_type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value77;
    __freed_obj__ = 0;
    if(_if_conditional114=!(come_push_stackframe("21obj.c", 183),__exception_result_var_b37=node_compile(obj_exp_47,info), come_pop_stackframe(), __exception_result_var_b37),    _if_conditional114) {
        __result61__ = (_Bool)0;
        if(obj_exp_47 && !__freed_obj__) { obj_exp_47 = come_decrement_ref_count(obj_exp_47, ((struct sNode*)obj_exp_47)->finalize, ((struct sNode*)obj_exp_47)->_protocol_obj, 0, 0, 0); } 
        if(inf_type_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result61__;
    }
    come_value_49=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 187),__exception_result_var_b38=((struct CVALUE*)(right_value78=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b38));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value78;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 188),dec_stack_ptr(1,info),come_pop_stackframe());
    type_50=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(((struct CVALUE*)come_null_check(come_value_49, "21obj.c", 190))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value79);
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value79;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type_50, "21obj.c", 191))->mPointerNum--;
    ((struct sType*)come_null_check(type_50, "21obj.c", 192))->mHeap=(_Bool)0;
    klass_51=((struct sType*)come_null_check(inf_type_48, "21obj.c", 194))->mClass;
    come_value2_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value80=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 196, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value80;
    __freed_obj__ = 0;
    type2_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(inf_type_48))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value81;
    __freed_obj__ = 0;
    type_name_54=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 200),__exception_result_var_b39=((char*)(right_value82=make_type_name_string(inf_type_48,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b39));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value82;
    __freed_obj__ = 0;
    type_name2_55=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 201),__exception_result_var_b40=((char*)(right_value83=make_type_name_string(type_50,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b40));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value83;
    __freed_obj__ = 0;
    buf_57=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 205),__exception_result_var_b41=((char*)(right_value84=xsprintf("%s* _inf_value%d;\n",type_name_54,++inf_num_56))), come_pop_stackframe(), __exception_result_var_b41));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value84;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 206),add_come_code_at_function_head(info,buf_57),come_pop_stackframe());
    buf2_58=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 207),__exception_result_var_b42=((char*)(right_value85=xsprintf("%s* _inf_obj_value%d;\n",type_name2_55,inf_num_56))), come_pop_stackframe(), __exception_result_var_b42));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value85;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 208),add_come_code_at_function_head(info,buf2_58),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 210),add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_56,type_name_54,type_name_54,((struct sInfo*)come_null_check(info, "21obj.c", 210))->sname,((struct sInfo*)come_null_check(info, "21obj.c", 210))->sline,type_name_54),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 211),add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_56,((struct CVALUE*)come_null_check(come_value_49, "21obj.c", 211))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 212),add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_56,inf_num_56),come_pop_stackframe());
    typeX_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(type_50))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value86;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(typeX_59, "21obj.c", 215))->mPointerNum++;
    (come_push_stackframe("21obj.c", 217),__exception_result_var_b43=((struct tuple2$2sFunpcharph*)(right_value87=create_finalizer_automatically(typeX_59,"finalize",info))), come_pop_stackframe(), __exception_result_var_b43);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value87;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 218),__exception_result_var_b44=((struct tuple2$2sFunpcharph*)(right_value88=create_cloner_automatically(typeX_59,"clone",info))), come_pop_stackframe(), __exception_result_var_b44);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value88;
    __freed_obj__ = 0;
    for(
    i_60=1 ,    0;    _for_condtionalA2=    i_60<(come_push_stackframe("21obj.c", 220),__exception_result_var_b45=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_51, "21obj.c", 220))->mFields, "21obj.c", 220))), come_pop_stackframe(), __exception_result_var_b45) ,    _for_condtionalA2;    i_60++ ,    0    ){
        multiple_assign_var1=(come_push_stackframe("21obj.c", 221),__exception_result_var_b47=list$1tuple2$2charphsTypephphp_operator_load_element(((struct sClass*)come_null_check(klass_51, "21obj.c", 221))->mFields,i_60), come_pop_stackframe(), __exception_result_var_b47);
        name_64=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_65=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        method_name_66=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 223),__exception_result_var_b48=((char*)(right_value89=create_method_name(type_50,(_Bool)0,name_64,info))), come_pop_stackframe(), __exception_result_var_b48));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value89;
        __freed_obj__ = 0;
        (come_push_stackframe("21obj.c", 225),add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_56,name_64,method_name_66),come_pop_stackframe());
        if(name_64 && !__freed_obj__) { name_64 = come_decrement_ref_count(name_64, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_65, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(method_name_66 && !__freed_obj__) { method_name_66 = come_decrement_ref_count(method_name_66, (void*)0, (void*)0, 0, 0, 0); }
    }
    __dec_obj42=((struct CVALUE*)come_null_check(come_value2_52, "21obj.c", 228))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_52, "21obj.c", 228))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 228),__exception_result_var_b49=((char*)(right_value90=xsprintf("_inf_value%d",inf_num_56))), come_pop_stackframe(), __exception_result_var_b49));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value90;
    __freed_obj__ = 0;
    type3_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(inf_type_48))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value91;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_67, "21obj.c", 230))->mPointerNum++;
    ((struct sType*)come_null_check(type3_67, "21obj.c", 231))->mHeap=(_Bool)1;
    ((struct sType*)come_null_check(type2_53, "21obj.c", 232))->mHeap=(_Bool)1;
    __dec_obj43=((struct CVALUE*)come_null_check(come_value2_52, "21obj.c", 233))->type;
    ((struct CVALUE*)come_null_check(come_value2_52, "21obj.c", 233))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(type2_53))));
    if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value92;
    __freed_obj__ = 0;
    __dec_obj44=((struct CVALUE*)come_null_check(come_value2_52, "21obj.c", 234))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_52, "21obj.c", 234))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 234),__exception_result_var_b50=((char*)(right_value93=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value2_52, "21obj.c", 234))->c_value,(struct sType*)come_increment_ref_count(type3_67),info))), come_pop_stackframe(), __exception_result_var_b50));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value93;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_52, "21obj.c", 235))->type, "21obj.c", 235))->mPointerNum++;
    ((struct CVALUE*)come_null_check(come_value2_52, "21obj.c", 236))->var=((void*)0);
    (come_push_stackframe("21obj.c", 238),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_52, "21obj.c", 238))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 240),__exception_result_var_b51=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 240))->stack, "21obj.c", 240)),(struct CVALUE*)come_increment_ref_count(come_value2_52)), come_pop_stackframe(), __exception_result_var_b51);
    __result65__ = (_Bool)1;
    if(obj_exp_47 && !__freed_obj__) { obj_exp_47 = come_decrement_ref_count(obj_exp_47, ((struct sNode*)obj_exp_47)->finalize, ((struct sNode*)obj_exp_47)->_protocol_obj, 0, 0, 0); } 
    if(inf_type_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_49 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_50 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_52 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_52, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_54 && !__freed_obj__) { type_name_54 = come_decrement_ref_count(type_name_54, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name2_55 && !__freed_obj__) { type_name2_55 = come_decrement_ref_count(type_name2_55, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_57 && !__freed_obj__) { buf_57 = come_decrement_ref_count(buf_57, (void*)0, (void*)0, 0, 0, 0); }
    if(buf2_58 && !__freed_obj__) { buf2_58 = come_decrement_ref_count(buf2_58, (void*)0, (void*)0, 0, 0, 0); }
    if(typeX_59 && !__freed_obj__) { come_call_finalizer(sType_finalize,typeX_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type3_67 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_67, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result65__;
    if(obj_exp_47 && !__freed_obj__) { obj_exp_47 = come_decrement_ref_count(obj_exp_47, ((struct sNode*)obj_exp_47)->finalize, ((struct sNode*)obj_exp_47)->_protocol_obj, 0, 0, 0); } 
    if(inf_type_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_49 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_50 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_52 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_52, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_53 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_54 && !__freed_obj__) { type_name_54 = come_decrement_ref_count(type_name_54, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name2_55 && !__freed_obj__) { type_name2_55 = come_decrement_ref_count(type_name2_55, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_57 && !__freed_obj__) { buf_57 = come_decrement_ref_count(buf_57, (void*)0, (void*)0, 0, 0, 0); }
    if(buf2_58 && !__freed_obj__) { buf2_58 = come_decrement_ref_count(buf2_58, (void*)0, (void*)0, 0, 0, 0); }
    if(typeX_59 && !__freed_obj__) { come_call_finalizer(sType_finalize,typeX_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type3_67 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional115;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional115=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2!=((void*)0),        _if_conditional115) {
            if(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 && !__freed_obj__) { ((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 = come_decrement_ref_count(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result62__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 419))->len;
        return __result62__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
struct list_item$1tuple2$2charphsTypephph* it_61;
int i_62;
_Bool _while_condtional8;
_Bool _if_conditional117;
struct tuple2$2charphsTypeph* __result63__;
struct tuple2$2charphsTypeph* default_value_63;
void* __exception_result_var_b46;
struct tuple2$2charphsTypeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_61, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_62, 0, sizeof(int));
memset(&default_value_63, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional116=position<0,            _if_conditional116) {
                position+=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 744))->len;
            }
            it_61=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 747))->head;
            i_62=0;
            while(_while_condtional8=it_61!=((void*)0),            _while_condtional8) {
                if(_if_conditional117=position==i_62,                _if_conditional117) {
                    __result63__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_61, "./comelang2.h", 751))->item;
                    return __result63__;
                }
                it_61=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_61, "./comelang2.h", 753))->next;
                i_62++;
            }
            (come_push_stackframe("./comelang2.h", 758),__exception_result_var_b46=memset(&default_value_63,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b46);
            __result64__ = __result_obj__ = default_value_63;
            if(default_value_63 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result64__;
            if(default_value_63 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional118=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1!=((void*)0),                _if_conditional118) {
                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional119=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2!=((void*)0),                _if_conditional119) {
                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value94;
char* __exception_result_var_b52;
char* __dec_obj45;
struct sTrueNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
    ((struct sTrueNode*)come_null_check(self, "21obj.c", 253))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 253))->sline;
    __dec_obj45=((struct sTrueNode*)come_null_check(self, "21obj.c", 254))->sname;
    ((struct sTrueNode*)come_null_check(self, "21obj.c", 254))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 254),__exception_result_var_b52=((char*)(right_value94=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 254))->sname))), come_pop_stackframe(), __exception_result_var_b52));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94;
    __freed_obj__ = 0;
    __result66__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result66__;
    if(self && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result67__ = ((struct sTrueNode*)come_null_check(self, "21obj.c", 261))->sline;
    return __result67__;
}

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value95;
char* __exception_result_var_b53;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
    __result68__ = __result_obj__ = (come_push_stackframe("21obj.c", 266),__exception_result_var_b53=((char*)(right_value95=__builtin_string(((struct sTrueNode*)come_null_check(self, "21obj.c", 266))->sname))), come_pop_stackframe(), __exception_result_var_b53);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95;
    __freed_obj__ = 0;
    return __result68__;
}

_Bool sTrueNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result69__ = (_Bool)0;
    return __result69__;
}

char* sTrueNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value96;
char* __exception_result_var_b54;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
    __result70__ = __result_obj__ = (come_push_stackframe("21obj.c", 276),__exception_result_var_b54=((char*)(right_value96=__builtin_string("sTrueNode"))), come_pop_stackframe(), __exception_result_var_b54);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96;
    __freed_obj__ = 0;
    return __result70__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value97;
struct CVALUE* come_value_68;
void* right_value98;
char* __exception_result_var_b55;
char* __dec_obj46;
void* right_value99;
void* right_value100;
struct sType* __exception_result_var_b56;
struct sType* __dec_obj47;
struct list$1CVALUEph* __exception_result_var_b57;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
memset(&come_value_68, 0, sizeof(struct CVALUE*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
    come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 281, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97;
    __freed_obj__ = 0;
    __dec_obj46=((struct CVALUE*)come_null_check(come_value_68, "21obj.c", 283))->c_value;
    ((struct CVALUE*)come_null_check(come_value_68, "21obj.c", 283))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 283),__exception_result_var_b55=((char*)(right_value98=xsprintf("(_Bool)1"))), come_pop_stackframe(), __exception_result_var_b55));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value98;
    __freed_obj__ = 0;
    __dec_obj47=((struct CVALUE*)come_null_check(come_value_68, "21obj.c", 284))->type;
    ((struct CVALUE*)come_null_check(come_value_68, "21obj.c", 284))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 284),__exception_result_var_b56=((struct sType*)(right_value100=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value99=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 284, "struct sType")))),"bool",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b56));
    if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value99;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value100;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_68, "21obj.c", 285))->var=((void*)0);
    (come_push_stackframe("21obj.c", 287),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_68, "21obj.c", 287))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 289),__exception_result_var_b57=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 289))->stack, "21obj.c", 289)),(struct CVALUE*)come_increment_ref_count(come_value_68)), come_pop_stackframe(), __exception_result_var_b57);
    __result71__ = (_Bool)1;
    if(come_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result71__;
    if(come_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value101;
void* right_value102;
struct sTrueNode* __exception_result_var_b58;
struct sNode* _inf_value2;
struct sTrueNode* _inf_obj_value2;
void* right_value105;
struct sNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 296, "struct sNode");
    _inf_obj_value2=come_increment_ref_count((come_push_stackframe("21obj.c", 296),__exception_result_var_b58=((struct sTrueNode*)(right_value102=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value101=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 296, "struct sTrueNode")))),info))), come_pop_stackframe(), __exception_result_var_b58));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sTrueNode_finalize;
    _inf_value2->clone=(void*)sTrueNode_clone;
    _inf_value2->compile=(void*)sTrueNode_compile;
    _inf_value2->sline=(void*)sTrueNode_sline;
    _inf_value2->sname=(void*)sTrueNode_sname;
    _inf_value2->terminated=(void*)sTrueNode_terminated;
    _inf_value2->kind=(void*)sTrueNode_kind;
    __result74__ = __result_obj__ = ((struct sNode*)(right_value105=_inf_value2));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value101;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value102;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value105;
    __freed_obj__ = 0;
    return __result74__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value106;
char* __exception_result_var_b59;
char* __dec_obj49;
struct sFalseNode* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
    ((struct sFalseNode*)come_null_check(self, "21obj.c", 306))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 306))->sline;
    __dec_obj49=((struct sFalseNode*)come_null_check(self, "21obj.c", 307))->sname;
    ((struct sFalseNode*)come_null_check(self, "21obj.c", 307))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 307),__exception_result_var_b59=((char*)(right_value106=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 307))->sname))), come_pop_stackframe(), __exception_result_var_b59));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106;
    __freed_obj__ = 0;
    __result75__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result75__;
    if(self && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result76__ = ((struct sFalseNode*)come_null_check(self, "21obj.c", 314))->sline;
    return __result76__;
}

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value107;
char* __exception_result_var_b60;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
    __result77__ = __result_obj__ = (come_push_stackframe("21obj.c", 319),__exception_result_var_b60=((char*)(right_value107=__builtin_string(((struct sFalseNode*)come_null_check(self, "21obj.c", 319))->sname))), come_pop_stackframe(), __exception_result_var_b60);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    return __result77__;
}

_Bool sFalseNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result78__ = (_Bool)0;
    return __result78__;
}

char* sFalseNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value108;
char* __exception_result_var_b61;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value108, 0, sizeof(void*));
    __result79__ = __result_obj__ = (come_push_stackframe("21obj.c", 329),__exception_result_var_b61=((char*)(right_value108=__builtin_string("sFalseNode"))), come_pop_stackframe(), __exception_result_var_b61);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value108;
    __freed_obj__ = 0;
    return __result79__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value109;
struct CVALUE* come_value_70;
void* right_value110;
char* __exception_result_var_b62;
char* __dec_obj50;
void* right_value111;
void* right_value112;
struct sType* __exception_result_var_b63;
struct sType* __dec_obj51;
struct list$1CVALUEph* __exception_result_var_b64;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&come_value_70, 0, sizeof(struct CVALUE*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
    come_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value109=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 334, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value109;
    __freed_obj__ = 0;
    __dec_obj50=((struct CVALUE*)come_null_check(come_value_70, "21obj.c", 336))->c_value;
    ((struct CVALUE*)come_null_check(come_value_70, "21obj.c", 336))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 336),__exception_result_var_b62=((char*)(right_value110=xsprintf("(_Bool)0"))), come_pop_stackframe(), __exception_result_var_b62));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value110;
    __freed_obj__ = 0;
    __dec_obj51=((struct CVALUE*)come_null_check(come_value_70, "21obj.c", 337))->type;
    ((struct CVALUE*)come_null_check(come_value_70, "21obj.c", 337))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 337),__exception_result_var_b63=((struct sType*)(right_value112=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value111=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 337, "struct sType")))),"bool",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b63));
    if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value111;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value112;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_70, "21obj.c", 338))->var=((void*)0);
    (come_push_stackframe("21obj.c", 340),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_70, "21obj.c", 340))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 342),__exception_result_var_b64=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 342))->stack, "21obj.c", 342)),(struct CVALUE*)come_increment_ref_count(come_value_70)), come_pop_stackframe(), __exception_result_var_b64);
    __result80__ = (_Bool)1;
    if(come_value_70 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result80__;
    if(come_value_70 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value113;
void* right_value114;
struct sFalseNode* __exception_result_var_b65;
struct sNode* _inf_value3;
struct sFalseNode* _inf_obj_value3;
void* right_value117;
struct sNode* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 349, "struct sNode");
    _inf_obj_value3=come_increment_ref_count((come_push_stackframe("21obj.c", 349),__exception_result_var_b65=((struct sFalseNode*)(right_value114=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value113=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 349, "struct sFalseNode")))),info))), come_pop_stackframe(), __exception_result_var_b65));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFalseNode_finalize;
    _inf_value3->clone=(void*)sFalseNode_clone;
    _inf_value3->compile=(void*)sFalseNode_compile;
    _inf_value3->sline=(void*)sFalseNode_sline;
    _inf_value3->sname=(void*)sFalseNode_sname;
    _inf_value3->terminated=(void*)sFalseNode_terminated;
    _inf_value3->kind=(void*)sFalseNode_kind;
    __result83__ = __result_obj__ = ((struct sNode*)(right_value117=_inf_value3));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value114;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value117;
    __freed_obj__ = 0;
    return __result83__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value118;
struct sType* __dec_obj53;
void* right_value119;
char* __exception_result_var_b66;
char* __dec_obj54;
struct sSizeOfNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
    __dec_obj53=((struct sSizeOfNode*)come_null_check(self, "21obj.c", 360))->type;
    ((struct sSizeOfNode*)come_null_check(self, "21obj.c", 360))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(type))));
    if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = 0;
    ((struct sSizeOfNode*)come_null_check(self, "21obj.c", 362))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 362))->sline;
    __dec_obj54=((struct sSizeOfNode*)come_null_check(self, "21obj.c", 363))->sname;
    ((struct sSizeOfNode*)come_null_check(self, "21obj.c", 363))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 363),__exception_result_var_b66=((char*)(right_value119=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 363))->sname))), come_pop_stackframe(), __exception_result_var_b66));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value119;
    __freed_obj__ = 0;
    __result84__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result84__;
    if(self && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result85__ = ((struct sSizeOfNode*)come_null_check(self, "21obj.c", 370))->sline;
    return __result85__;
}

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value120;
char* __exception_result_var_b67;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
    __result86__ = __result_obj__ = (come_push_stackframe("21obj.c", 375),__exception_result_var_b67=((char*)(right_value120=__builtin_string(((struct sSizeOfNode*)come_null_check(self, "21obj.c", 375))->sname))), come_pop_stackframe(), __exception_result_var_b67);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120;
    __freed_obj__ = 0;
    return __result86__;
}

_Bool sSizeOfNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result87__ = (_Bool)0;
    return __result87__;
}

char* sSizeOfNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value121;
char* __exception_result_var_b68;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
    __result88__ = __result_obj__ = (come_push_stackframe("21obj.c", 385),__exception_result_var_b68=((char*)(right_value121=__builtin_string("sSizeOfNode"))), come_pop_stackframe(), __exception_result_var_b68);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value121;
    __freed_obj__ = 0;
    return __result88__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* type_72;
void* right_value122;
struct CVALUE* come_value_73;
void* right_value123;
struct sType* __exception_result_var_b69;
struct sType* type2_74;
void* right_value124;
char* __exception_result_var_b70;
char* type_name_75;
void* right_value125;
char* __exception_result_var_b71;
char* __dec_obj55;
void* right_value126;
void* right_value127;
struct sType* __exception_result_var_b72;
struct sType* __dec_obj56;
struct list$1CVALUEph* __exception_result_var_b73;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_72, 0, sizeof(struct sType*));
memset(&right_value122, 0, sizeof(void*));
memset(&come_value_73, 0, sizeof(struct CVALUE*));
memset(&right_value123, 0, sizeof(void*));
memset(&type2_74, 0, sizeof(struct sType*));
memset(&right_value124, 0, sizeof(void*));
memset(&type_name_75, 0, sizeof(char*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
    type_72=((struct sSizeOfNode*)come_null_check(self, "21obj.c", 390))->type;
    come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 392, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = 0;
    type2_74=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 394),__exception_result_var_b69=((struct sType*)(right_value123=solve_generics(type_72,((struct sInfo*)come_null_check(info, "21obj.c", 394))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b69));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value123;
    __freed_obj__ = 0;
    type_name_75=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 396),__exception_result_var_b70=((char*)(right_value124=make_type_name_string(type2_74,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b70));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value124;
    __freed_obj__ = 0;
    __dec_obj55=((struct CVALUE*)come_null_check(come_value_73, "21obj.c", 398))->c_value;
    ((struct CVALUE*)come_null_check(come_value_73, "21obj.c", 398))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 398),__exception_result_var_b71=((char*)(right_value125=xsprintf("sizeof(%s)",type_name_75))), come_pop_stackframe(), __exception_result_var_b71));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value125;
    __freed_obj__ = 0;
    __dec_obj56=((struct CVALUE*)come_null_check(come_value_73, "21obj.c", 399))->type;
    ((struct CVALUE*)come_null_check(come_value_73, "21obj.c", 399))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 399),__exception_result_var_b72=((struct sType*)(right_value127=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value126=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 399, "struct sType")))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b72));
    if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value126;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value127;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_73, "21obj.c", 400))->type, "21obj.c", 400))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(come_value_73, "21obj.c", 401))->var=((void*)0);
    (come_push_stackframe("21obj.c", 403),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_73, "21obj.c", 403))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 405),__exception_result_var_b73=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 405))->stack, "21obj.c", 405)),(struct CVALUE*)come_increment_ref_count(come_value_73)), come_pop_stackframe(), __exception_result_var_b73);
    __result89__ = (_Bool)1;
    if(come_value_73 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_75 && !__freed_obj__) { type_name_75 = come_decrement_ref_count(type_name_75, (void*)0, (void*)0, 0, 0, 0); }
    return __result89__;
    if(come_value_73 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_75 && !__freed_obj__) { type_name_75 = come_decrement_ref_count(type_name_75, (void*)0, (void*)0, 0, 0, 0); }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value128;
struct sNode* __dec_obj57;
void* right_value129;
char* __exception_result_var_b74;
char* __dec_obj58;
struct sSizeOfExpNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
    __dec_obj57=((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 418))->exp;
    ((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 418))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=sNode_clone(exp))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value128;
    __freed_obj__ = 0;
    ((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 420))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 420))->sline;
    __dec_obj58=((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 421))->sname;
    ((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 421))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 421),__exception_result_var_b74=((char*)(right_value129=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 421))->sname))), come_pop_stackframe(), __exception_result_var_b74));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value129;
    __freed_obj__ = 0;
    __result90__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    return __result90__;
    if(self && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result91__ = ((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 428))->sline;
    return __result91__;
}

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value130;
char* __exception_result_var_b75;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value130, 0, sizeof(void*));
    __result92__ = __result_obj__ = (come_push_stackframe("21obj.c", 433),__exception_result_var_b75=((char*)(right_value130=__builtin_string(((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 433))->sname))), come_pop_stackframe(), __exception_result_var_b75);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value130;
    __freed_obj__ = 0;
    return __result92__;
}

_Bool sSizeOfExpNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result93__ = (_Bool)0;
    return __result93__;
}

char* sSizeOfExpNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value131;
char* __exception_result_var_b76;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
    __result94__ = __result_obj__ = (come_push_stackframe("21obj.c", 443),__exception_result_var_b76=((char*)(right_value131=__builtin_string("sSizeOfExpNode"))), come_pop_stackframe(), __exception_result_var_b76);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value131;
    __freed_obj__ = 0;
    return __result94__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* exp_76;
_Bool __exception_result_var_b77;
_Bool _if_conditional134;
_Bool __result95__;
void* right_value132;
struct CVALUE* __exception_result_var_b78;
struct CVALUE* come_value_77;
void* right_value133;
struct CVALUE* come_value2_78;
void* right_value134;
char* __exception_result_var_b79;
char* __dec_obj59;
void* right_value135;
void* right_value136;
struct sType* __exception_result_var_b80;
struct sType* __dec_obj60;
struct list$1CVALUEph* __exception_result_var_b81;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&exp_76, 0, sizeof(struct sNode*));
memset(&right_value132, 0, sizeof(void*));
memset(&come_value_77, 0, sizeof(struct CVALUE*));
memset(&right_value133, 0, sizeof(void*));
memset(&come_value2_78, 0, sizeof(struct CVALUE*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
    exp_76=(struct sNode*)come_increment_ref_count(((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 448))->exp);
    if(_if_conditional134=!(come_push_stackframe("21obj.c", 450),__exception_result_var_b77=node_compile(exp_76,info), come_pop_stackframe(), __exception_result_var_b77),    _if_conditional134) {
        __result95__ = (_Bool)0;
        if(exp_76 && !__freed_obj__) { exp_76 = come_decrement_ref_count(exp_76, ((struct sNode*)exp_76)->finalize, ((struct sNode*)exp_76)->_protocol_obj, 0, 0, 0); } 
        return __result95__;
    }
    come_value_77=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 454),__exception_result_var_b78=((struct CVALUE*)(right_value132=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b78));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value132;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 455),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value133=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 457, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value133;
    __freed_obj__ = 0;
    __dec_obj59=((struct CVALUE*)come_null_check(come_value2_78, "21obj.c", 459))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_78, "21obj.c", 459))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 459),__exception_result_var_b79=((char*)(right_value134=xsprintf("sizeof(%s)",((struct CVALUE*)come_null_check(come_value_77, "21obj.c", 459))->c_value))), come_pop_stackframe(), __exception_result_var_b79));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value134;
    __freed_obj__ = 0;
    __dec_obj60=((struct CVALUE*)come_null_check(come_value2_78, "21obj.c", 460))->type;
    ((struct CVALUE*)come_null_check(come_value2_78, "21obj.c", 460))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 460),__exception_result_var_b80=((struct sType*)(right_value136=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value135=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 460, "struct sType")))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b80));
    if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value135;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value136;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_78, "21obj.c", 461))->type, "21obj.c", 461))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(come_value2_78, "21obj.c", 462))->var=((void*)0);
    (come_push_stackframe("21obj.c", 464),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_78, "21obj.c", 464))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 466),__exception_result_var_b81=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 466))->stack, "21obj.c", 466)),(struct CVALUE*)come_increment_ref_count(come_value2_78)), come_pop_stackframe(), __exception_result_var_b81);
    __result96__ = (_Bool)1;
    if(exp_76 && !__freed_obj__) { exp_76 = come_decrement_ref_count(exp_76, ((struct sNode*)exp_76)->finalize, ((struct sNode*)exp_76)->_protocol_obj, 0, 0, 0); } 
    if(come_value_77 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_78, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result96__;
    if(exp_76 && !__freed_obj__) { exp_76 = come_decrement_ref_count(exp_76, ((struct sNode*)exp_76)->finalize, ((struct sNode*)exp_76)->_protocol_obj, 0, 0, 0); } 
    if(come_value_77 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_78, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value137;
struct sType* __dec_obj61;
void* right_value138;
char* __exception_result_var_b82;
char* __dec_obj62;
struct sAlignOfNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
    __dec_obj61=((struct sAlignOfNode*)come_null_check(self, "21obj.c", 479))->type;
    ((struct sAlignOfNode*)come_null_check(self, "21obj.c", 479))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(type))));
    if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value137;
    __freed_obj__ = 0;
    ((struct sAlignOfNode*)come_null_check(self, "21obj.c", 481))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 481))->sline;
    __dec_obj62=((struct sAlignOfNode*)come_null_check(self, "21obj.c", 482))->sname;
    ((struct sAlignOfNode*)come_null_check(self, "21obj.c", 482))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 482),__exception_result_var_b82=((char*)(right_value138=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 482))->sname))), come_pop_stackframe(), __exception_result_var_b82));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value138;
    __freed_obj__ = 0;
    __result97__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result97__;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result98__ = ((struct sAlignOfNode*)come_null_check(self, "21obj.c", 489))->sline;
    return __result98__;
}

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value139;
char* __exception_result_var_b83;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
    __result99__ = __result_obj__ = (come_push_stackframe("21obj.c", 494),__exception_result_var_b83=((char*)(right_value139=__builtin_string(((struct sAlignOfNode*)come_null_check(self, "21obj.c", 494))->sname))), come_pop_stackframe(), __exception_result_var_b83);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139;
    __freed_obj__ = 0;
    return __result99__;
}

_Bool sAlignOfNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result100__ = (_Bool)0;
    return __result100__;
}

char* sAlignOfNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value140;
char* __exception_result_var_b84;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
    __result101__ = __result_obj__ = (come_push_stackframe("21obj.c", 504),__exception_result_var_b84=((char*)(right_value140=__builtin_string("sAlignOfNode"))), come_pop_stackframe(), __exception_result_var_b84);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140;
    __freed_obj__ = 0;
    return __result101__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* type_79;
void* right_value141;
struct CVALUE* come_value_80;
void* right_value142;
struct sType* __exception_result_var_b85;
struct sType* type2_81;
void* right_value143;
char* __exception_result_var_b86;
char* type_name_82;
void* right_value144;
char* __exception_result_var_b87;
char* __dec_obj63;
void* right_value145;
void* right_value146;
struct sType* __exception_result_var_b88;
struct sType* __dec_obj64;
struct list$1CVALUEph* __exception_result_var_b89;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_79, 0, sizeof(struct sType*));
memset(&right_value141, 0, sizeof(void*));
memset(&come_value_80, 0, sizeof(struct CVALUE*));
memset(&right_value142, 0, sizeof(void*));
memset(&type2_81, 0, sizeof(struct sType*));
memset(&right_value143, 0, sizeof(void*));
memset(&type_name_82, 0, sizeof(char*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
    type_79=((struct sAlignOfNode*)come_null_check(self, "21obj.c", 509))->type;
    come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value141=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 511, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value141;
    __freed_obj__ = 0;
    type2_81=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 513),__exception_result_var_b85=((struct sType*)(right_value142=solve_generics(type_79,((struct sInfo*)come_null_check(info, "21obj.c", 513))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b85));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value142;
    __freed_obj__ = 0;
    type_name_82=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 515),__exception_result_var_b86=((char*)(right_value143=make_type_name_string(type2_81,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b86));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value143;
    __freed_obj__ = 0;
    __dec_obj63=((struct CVALUE*)come_null_check(come_value_80, "21obj.c", 517))->c_value;
    ((struct CVALUE*)come_null_check(come_value_80, "21obj.c", 517))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 517),__exception_result_var_b87=((char*)(right_value144=xsprintf("_Alignof(%s)",type_name_82))), come_pop_stackframe(), __exception_result_var_b87));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value144;
    __freed_obj__ = 0;
    __dec_obj64=((struct CVALUE*)come_null_check(come_value_80, "21obj.c", 518))->type;
    ((struct CVALUE*)come_null_check(come_value_80, "21obj.c", 518))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 518),__exception_result_var_b88=((struct sType*)(right_value146=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value145=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 518, "struct sType")))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b88));
    if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value145;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value146;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_80, "21obj.c", 519))->type, "21obj.c", 519))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(come_value_80, "21obj.c", 520))->var=((void*)0);
    (come_push_stackframe("21obj.c", 522),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_80, "21obj.c", 522))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 524),__exception_result_var_b89=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 524))->stack, "21obj.c", 524)),(struct CVALUE*)come_increment_ref_count(come_value_80)), come_pop_stackframe(), __exception_result_var_b89);
    __result102__ = (_Bool)1;
    if(come_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_81 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_82 && !__freed_obj__) { type_name_82 = come_decrement_ref_count(type_name_82, (void*)0, (void*)0, 0, 0, 0); }
    return __result102__;
    if(come_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_81 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_82 && !__freed_obj__) { type_name_82 = come_decrement_ref_count(type_name_82, (void*)0, (void*)0, 0, 0, 0); }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value147;
struct sNode* __dec_obj65;
void* right_value148;
char* __exception_result_var_b90;
char* __dec_obj66;
struct sAlignOfExpNode* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
    __dec_obj65=((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 537))->exp;
    ((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 537))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=sNode_clone(exp))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value147;
    __freed_obj__ = 0;
    ((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 539))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 539))->sline;
    __dec_obj66=((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 540))->sname;
    ((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 540))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 540),__exception_result_var_b90=((char*)(right_value148=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 540))->sname))), come_pop_stackframe(), __exception_result_var_b90));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value148;
    __freed_obj__ = 0;
    __result103__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    return __result103__;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result104__ = ((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 547))->sline;
    return __result104__;
}

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value149;
char* __exception_result_var_b91;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
    __result105__ = __result_obj__ = (come_push_stackframe("21obj.c", 552),__exception_result_var_b91=((char*)(right_value149=__builtin_string(((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 552))->sname))), come_pop_stackframe(), __exception_result_var_b91);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value149;
    __freed_obj__ = 0;
    return __result105__;
}

_Bool sAlignOfExpNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result106__ = (_Bool)0;
    return __result106__;
}

char* sAlignOfExpNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value150;
char* __exception_result_var_b92;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value150, 0, sizeof(void*));
    __result107__ = __result_obj__ = (come_push_stackframe("21obj.c", 562),__exception_result_var_b92=((char*)(right_value150=__builtin_string("sAlignOfExpNode"))), come_pop_stackframe(), __exception_result_var_b92);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value150;
    __freed_obj__ = 0;
    return __result107__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* exp_83;
_Bool __exception_result_var_b93;
_Bool _if_conditional139;
_Bool __result108__;
void* right_value151;
struct CVALUE* __exception_result_var_b94;
struct CVALUE* come_value_84;
void* right_value152;
struct CVALUE* come_value2_85;
void* right_value153;
char* __exception_result_var_b95;
char* __dec_obj67;
void* right_value154;
void* right_value155;
struct sType* __exception_result_var_b96;
struct sType* __dec_obj68;
struct list$1CVALUEph* __exception_result_var_b97;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&exp_83, 0, sizeof(struct sNode*));
memset(&right_value151, 0, sizeof(void*));
memset(&come_value_84, 0, sizeof(struct CVALUE*));
memset(&right_value152, 0, sizeof(void*));
memset(&come_value2_85, 0, sizeof(struct CVALUE*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
    exp_83=(struct sNode*)come_increment_ref_count(((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 567))->exp);
    if(_if_conditional139=!(come_push_stackframe("21obj.c", 569),__exception_result_var_b93=node_compile(exp_83,info), come_pop_stackframe(), __exception_result_var_b93),    _if_conditional139) {
        __result108__ = (_Bool)0;
        if(exp_83 && !__freed_obj__) { exp_83 = come_decrement_ref_count(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0); } 
        return __result108__;
    }
    come_value_84=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 573),__exception_result_var_b94=((struct CVALUE*)(right_value151=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b94));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value151;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 574),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 576, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value152;
    __freed_obj__ = 0;
    __dec_obj67=((struct CVALUE*)come_null_check(come_value2_85, "21obj.c", 578))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_85, "21obj.c", 578))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 578),__exception_result_var_b95=((char*)(right_value153=xsprintf("_AlignOf(%s)",((struct CVALUE*)come_null_check(come_value_84, "21obj.c", 578))->c_value))), come_pop_stackframe(), __exception_result_var_b95));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value153;
    __freed_obj__ = 0;
    __dec_obj68=((struct CVALUE*)come_null_check(come_value2_85, "21obj.c", 579))->type;
    ((struct CVALUE*)come_null_check(come_value2_85, "21obj.c", 579))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 579),__exception_result_var_b96=((struct sType*)(right_value155=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value154=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 579, "struct sType")))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b96));
    if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value154;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value155;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_85, "21obj.c", 580))->type, "21obj.c", 580))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(come_value2_85, "21obj.c", 581))->var=((void*)0);
    (come_push_stackframe("21obj.c", 583),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_85, "21obj.c", 583))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 585),__exception_result_var_b97=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 585))->stack, "21obj.c", 585)),(struct CVALUE*)come_increment_ref_count(come_value2_85)), come_pop_stackframe(), __exception_result_var_b97);
    __result109__ = (_Bool)1;
    if(exp_83 && !__freed_obj__) { exp_83 = come_decrement_ref_count(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0); } 
    if(come_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_85 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result109__;
    if(exp_83 && !__freed_obj__) { exp_83 = come_decrement_ref_count(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0); } 
    if(come_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_85 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value156;
struct sType* __dec_obj69;
void* right_value157;
char* __exception_result_var_b98;
char* __dec_obj70;
struct sAlignOfNode2* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
    __dec_obj69=((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 598))->type;
    ((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 598))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(type))));
    if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value156;
    __freed_obj__ = 0;
    ((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 600))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 600))->sline;
    __dec_obj70=((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 601))->sname;
    ((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 601))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 601),__exception_result_var_b98=((char*)(right_value157=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 601))->sname))), come_pop_stackframe(), __exception_result_var_b98));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value157;
    __freed_obj__ = 0;
    __result110__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result110__;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result111__ = ((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 608))->sline;
    return __result111__;
}

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value158;
char* __exception_result_var_b99;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value158, 0, sizeof(void*));
    __result112__ = __result_obj__ = (come_push_stackframe("21obj.c", 613),__exception_result_var_b99=((char*)(right_value158=__builtin_string(((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 613))->sname))), come_pop_stackframe(), __exception_result_var_b99);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value158;
    __freed_obj__ = 0;
    return __result112__;
}

_Bool sAlignOfNode2_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result113__ = (_Bool)0;
    return __result113__;
}

char* sAlignOfNode2_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value159;
char* __exception_result_var_b100;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
    __result114__ = __result_obj__ = (come_push_stackframe("21obj.c", 623),__exception_result_var_b100=((char*)(right_value159=__builtin_string("sAlignOfNode2"))), come_pop_stackframe(), __exception_result_var_b100);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value159;
    __freed_obj__ = 0;
    return __result114__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* type_86;
void* right_value160;
struct CVALUE* come_value_87;
void* right_value161;
struct sType* __exception_result_var_b101;
struct sType* type2_88;
void* right_value162;
char* __exception_result_var_b102;
char* type_name_89;
void* right_value163;
char* __exception_result_var_b103;
char* __dec_obj71;
void* right_value164;
void* right_value165;
struct sType* __exception_result_var_b104;
struct sType* __dec_obj72;
struct list$1CVALUEph* __exception_result_var_b105;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_86, 0, sizeof(struct sType*));
memset(&right_value160, 0, sizeof(void*));
memset(&come_value_87, 0, sizeof(struct CVALUE*));
memset(&right_value161, 0, sizeof(void*));
memset(&type2_88, 0, sizeof(struct sType*));
memset(&right_value162, 0, sizeof(void*));
memset(&type_name_89, 0, sizeof(char*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
    type_86=((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 628))->type;
    come_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 630, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160;
    __freed_obj__ = 0;
    type2_88=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 632),__exception_result_var_b101=((struct sType*)(right_value161=solve_generics(type_86,((struct sInfo*)come_null_check(info, "21obj.c", 632))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b101));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value161;
    __freed_obj__ = 0;
    type_name_89=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 634),__exception_result_var_b102=((char*)(right_value162=make_type_name_string(type2_88,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b102));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value162;
    __freed_obj__ = 0;
    __dec_obj71=((struct CVALUE*)come_null_check(come_value_87, "21obj.c", 636))->c_value;
    ((struct CVALUE*)come_null_check(come_value_87, "21obj.c", 636))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 636),__exception_result_var_b103=((char*)(right_value163=xsprintf("__alignof__(%s)",type_name_89))), come_pop_stackframe(), __exception_result_var_b103));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value163;
    __freed_obj__ = 0;
    __dec_obj72=((struct CVALUE*)come_null_check(come_value_87, "21obj.c", 637))->type;
    ((struct CVALUE*)come_null_check(come_value_87, "21obj.c", 637))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 637),__exception_result_var_b104=((struct sType*)(right_value165=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value164=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 637, "struct sType")))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b104));
    if(__dec_obj72) { come_call_finalizer(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value164;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value165;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_87, "21obj.c", 638))->type, "21obj.c", 638))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(come_value_87, "21obj.c", 639))->var=((void*)0);
    (come_push_stackframe("21obj.c", 641),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_87, "21obj.c", 641))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 643),__exception_result_var_b105=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 643))->stack, "21obj.c", 643)),(struct CVALUE*)come_increment_ref_count(come_value_87)), come_pop_stackframe(), __exception_result_var_b105);
    __result115__ = (_Bool)1;
    if(come_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_88 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_89 && !__freed_obj__) { type_name_89 = come_decrement_ref_count(type_name_89, (void*)0, (void*)0, 0, 0, 0); }
    return __result115__;
    if(come_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_88 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_89 && !__freed_obj__) { type_name_89 = come_decrement_ref_count(type_name_89, (void*)0, (void*)0, 0, 0, 0); }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value166;
struct sNode* __dec_obj73;
void* right_value167;
char* __exception_result_var_b106;
char* __dec_obj74;
struct sAlignOfExpNode2* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
    __dec_obj73=((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 656))->exp;
    ((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 656))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=sNode_clone(exp))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value166;
    __freed_obj__ = 0;
    ((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 658))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 658))->sline;
    __dec_obj74=((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 659))->sname;
    ((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 659))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 659),__exception_result_var_b106=((char*)(right_value167=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 659))->sname))), come_pop_stackframe(), __exception_result_var_b106));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value167;
    __freed_obj__ = 0;
    __result116__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    return __result116__;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result117__ = ((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 666))->sline;
    return __result117__;
}

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value168;
char* __exception_result_var_b107;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value168, 0, sizeof(void*));
    __result118__ = __result_obj__ = (come_push_stackframe("21obj.c", 671),__exception_result_var_b107=((char*)(right_value168=__builtin_string(((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 671))->sname))), come_pop_stackframe(), __exception_result_var_b107);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value168;
    __freed_obj__ = 0;
    return __result118__;
}

_Bool sAlignOfExpNode2_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result119__ = (_Bool)0;
    return __result119__;
}

char* sAlignOfExpNode2_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value169;
char* __exception_result_var_b108;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value169, 0, sizeof(void*));
    __result120__ = __result_obj__ = (come_push_stackframe("21obj.c", 681),__exception_result_var_b108=((char*)(right_value169=__builtin_string("sAlignOfExpNode2"))), come_pop_stackframe(), __exception_result_var_b108);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value169;
    __freed_obj__ = 0;
    return __result120__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* exp_90;
_Bool __exception_result_var_b109;
_Bool _if_conditional144;
_Bool __result121__;
void* right_value170;
struct CVALUE* __exception_result_var_b110;
struct CVALUE* come_value_91;
void* right_value171;
struct CVALUE* come_value2_92;
void* right_value172;
char* __exception_result_var_b111;
char* __dec_obj75;
void* right_value173;
void* right_value174;
struct sType* __exception_result_var_b112;
struct sType* __dec_obj76;
struct list$1CVALUEph* __exception_result_var_b113;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&exp_90, 0, sizeof(struct sNode*));
memset(&right_value170, 0, sizeof(void*));
memset(&come_value_91, 0, sizeof(struct CVALUE*));
memset(&right_value171, 0, sizeof(void*));
memset(&come_value2_92, 0, sizeof(struct CVALUE*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
    exp_90=(struct sNode*)come_increment_ref_count(((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 686))->exp);
    if(_if_conditional144=!(come_push_stackframe("21obj.c", 688),__exception_result_var_b109=node_compile(exp_90,info), come_pop_stackframe(), __exception_result_var_b109),    _if_conditional144) {
        __result121__ = (_Bool)0;
        if(exp_90 && !__freed_obj__) { exp_90 = come_decrement_ref_count(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0, 0); } 
        return __result121__;
    }
    come_value_91=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 692),__exception_result_var_b110=((struct CVALUE*)(right_value170=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b110));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value170;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 693),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 695, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value171;
    __freed_obj__ = 0;
    __dec_obj75=((struct CVALUE*)come_null_check(come_value2_92, "21obj.c", 697))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_92, "21obj.c", 697))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 697),__exception_result_var_b111=((char*)(right_value172=xsprintf("__alignof__(%s)",((struct CVALUE*)come_null_check(come_value_91, "21obj.c", 697))->c_value))), come_pop_stackframe(), __exception_result_var_b111));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value172;
    __freed_obj__ = 0;
    __dec_obj76=((struct CVALUE*)come_null_check(come_value2_92, "21obj.c", 698))->type;
    ((struct CVALUE*)come_null_check(come_value2_92, "21obj.c", 698))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 698),__exception_result_var_b112=((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 698, "struct sType")))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b112));
    if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value173;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value174;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_92, "21obj.c", 699))->type, "21obj.c", 699))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(come_value2_92, "21obj.c", 700))->var=((void*)0);
    (come_push_stackframe("21obj.c", 702),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_92, "21obj.c", 702))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 704),__exception_result_var_b113=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 704))->stack, "21obj.c", 704)),(struct CVALUE*)come_increment_ref_count(come_value2_92)), come_pop_stackframe(), __exception_result_var_b113);
    __result122__ = (_Bool)1;
    if(exp_90 && !__freed_obj__) { exp_90 = come_decrement_ref_count(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0, 0); } 
    if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result122__;
    if(exp_90 && !__freed_obj__) { exp_90 = come_decrement_ref_count(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0, 0); } 
    if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_92, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value175;
struct sType* __dec_obj77;
void* right_value176;
char* __exception_result_var_b114;
char* __dec_obj78;
struct sAlignAsNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
    __dec_obj77=((struct sAlignAsNode*)come_null_check(self, "21obj.c", 717))->type;
    ((struct sAlignAsNode*)come_null_check(self, "21obj.c", 717))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(type))));
    if(__dec_obj77) { come_call_finalizer(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value175;
    __freed_obj__ = 0;
    ((struct sAlignAsNode*)come_null_check(self, "21obj.c", 719))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 719))->sline;
    __dec_obj78=((struct sAlignAsNode*)come_null_check(self, "21obj.c", 720))->sname;
    ((struct sAlignAsNode*)come_null_check(self, "21obj.c", 720))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 720),__exception_result_var_b114=((char*)(right_value176=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 720))->sname))), come_pop_stackframe(), __exception_result_var_b114));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value176;
    __freed_obj__ = 0;
    __result123__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result123__;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = ((struct sAlignAsNode*)come_null_check(self, "21obj.c", 727))->sline;
    return __result124__;
}

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value177;
char* __exception_result_var_b115;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value177, 0, sizeof(void*));
    __result125__ = __result_obj__ = (come_push_stackframe("21obj.c", 732),__exception_result_var_b115=((char*)(right_value177=__builtin_string(((struct sAlignAsNode*)come_null_check(self, "21obj.c", 732))->sname))), come_pop_stackframe(), __exception_result_var_b115);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value177;
    __freed_obj__ = 0;
    return __result125__;
}

_Bool sAlignAsNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = (_Bool)0;
    return __result126__;
}

char* sAlignAsNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value178;
char* __exception_result_var_b116;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value178, 0, sizeof(void*));
    __result127__ = __result_obj__ = (come_push_stackframe("21obj.c", 742),__exception_result_var_b116=((char*)(right_value178=__builtin_string("sAlignAsNode"))), come_pop_stackframe(), __exception_result_var_b116);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value178;
    __freed_obj__ = 0;
    return __result127__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* type_93;
void* right_value179;
struct CVALUE* come_value_94;
void* right_value180;
struct sType* __exception_result_var_b117;
struct sType* type2_95;
void* right_value181;
char* __exception_result_var_b118;
char* type_name_96;
void* right_value182;
char* __exception_result_var_b119;
char* __dec_obj79;
void* right_value183;
void* right_value184;
struct sType* __exception_result_var_b120;
struct sType* __dec_obj80;
struct list$1CVALUEph* __exception_result_var_b121;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_93, 0, sizeof(struct sType*));
memset(&right_value179, 0, sizeof(void*));
memset(&come_value_94, 0, sizeof(struct CVALUE*));
memset(&right_value180, 0, sizeof(void*));
memset(&type2_95, 0, sizeof(struct sType*));
memset(&right_value181, 0, sizeof(void*));
memset(&type_name_96, 0, sizeof(char*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
    type_93=((struct sAlignAsNode*)come_null_check(self, "21obj.c", 747))->type;
    come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value179=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 749, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value179;
    __freed_obj__ = 0;
    type2_95=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 751),__exception_result_var_b117=((struct sType*)(right_value180=solve_generics(type_93,((struct sInfo*)come_null_check(info, "21obj.c", 751))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b117));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value180;
    __freed_obj__ = 0;
    type_name_96=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 753),__exception_result_var_b118=((char*)(right_value181=make_type_name_string(type2_95,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b118));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value181;
    __freed_obj__ = 0;
    __dec_obj79=((struct CVALUE*)come_null_check(come_value_94, "21obj.c", 755))->c_value;
    ((struct CVALUE*)come_null_check(come_value_94, "21obj.c", 755))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 755),__exception_result_var_b119=((char*)(right_value182=xsprintf("_Alignas(%s)",type_name_96))), come_pop_stackframe(), __exception_result_var_b119));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value182;
    __freed_obj__ = 0;
    __dec_obj80=((struct CVALUE*)come_null_check(come_value_94, "21obj.c", 756))->type;
    ((struct CVALUE*)come_null_check(come_value_94, "21obj.c", 756))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 756),__exception_result_var_b120=((struct sType*)(right_value184=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value183=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 756, "struct sType")))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b120));
    if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value183);
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value183;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value184;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "21obj.c", 757))->type, "21obj.c", 757))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(come_value_94, "21obj.c", 758))->var=((void*)0);
    (come_push_stackframe("21obj.c", 760),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_94, "21obj.c", 760))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 762),__exception_result_var_b121=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 762))->stack, "21obj.c", 762)),(struct CVALUE*)come_increment_ref_count(come_value_94)), come_pop_stackframe(), __exception_result_var_b121);
    __result128__ = (_Bool)1;
    if(come_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_96 && !__freed_obj__) { type_name_96 = come_decrement_ref_count(type_name_96, (void*)0, (void*)0, 0, 0, 0); }
    return __result128__;
    if(come_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_96 && !__freed_obj__) { type_name_96 = come_decrement_ref_count(type_name_96, (void*)0, (void*)0, 0, 0, 0); }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value185;
struct sNode* __dec_obj81;
void* right_value186;
char* __exception_result_var_b122;
char* __dec_obj82;
struct sAlignAsExpNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
    __dec_obj81=((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 775))->exp;
    ((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 775))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=sNode_clone(exp))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value185;
    __freed_obj__ = 0;
    ((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 777))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 777))->sline;
    __dec_obj82=((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 778))->sname;
    ((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 778))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 778),__exception_result_var_b122=((char*)(right_value186=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 778))->sname))), come_pop_stackframe(), __exception_result_var_b122));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value186;
    __freed_obj__ = 0;
    __result129__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    return __result129__;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result130__ = ((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 785))->sline;
    return __result130__;
}

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value187;
char* __exception_result_var_b123;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value187, 0, sizeof(void*));
    __result131__ = __result_obj__ = (come_push_stackframe("21obj.c", 790),__exception_result_var_b123=((char*)(right_value187=__builtin_string(((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 790))->sname))), come_pop_stackframe(), __exception_result_var_b123);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value187;
    __freed_obj__ = 0;
    return __result131__;
}

_Bool sAlignAsExpNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result132__ = (_Bool)0;
    return __result132__;
}

char* sAlignAsExpNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value188;
char* __exception_result_var_b124;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
    __result133__ = __result_obj__ = (come_push_stackframe("21obj.c", 800),__exception_result_var_b124=((char*)(right_value188=__builtin_string("sAlignAsExpNode"))), come_pop_stackframe(), __exception_result_var_b124);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value188;
    __freed_obj__ = 0;
    return __result133__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* exp_97;
_Bool __exception_result_var_b125;
_Bool _if_conditional149;
_Bool __result134__;
void* right_value189;
struct CVALUE* __exception_result_var_b126;
struct CVALUE* come_value_98;
void* right_value190;
struct CVALUE* come_value2_99;
void* right_value191;
char* __exception_result_var_b127;
char* __dec_obj83;
void* right_value192;
void* right_value193;
struct sType* __exception_result_var_b128;
struct sType* __dec_obj84;
struct list$1CVALUEph* __exception_result_var_b129;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&exp_97, 0, sizeof(struct sNode*));
memset(&right_value189, 0, sizeof(void*));
memset(&come_value_98, 0, sizeof(struct CVALUE*));
memset(&right_value190, 0, sizeof(void*));
memset(&come_value2_99, 0, sizeof(struct CVALUE*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    exp_97=(struct sNode*)come_increment_ref_count(((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 806))->exp);
    if(_if_conditional149=!(come_push_stackframe("21obj.c", 808),__exception_result_var_b125=node_compile(exp_97,info), come_pop_stackframe(), __exception_result_var_b125),    _if_conditional149) {
        __result134__ = (_Bool)0;
        if(exp_97 && !__freed_obj__) { exp_97 = come_decrement_ref_count(exp_97, ((struct sNode*)exp_97)->finalize, ((struct sNode*)exp_97)->_protocol_obj, 0, 0, 0); } 
        return __result134__;
    }
    come_value_98=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 812),__exception_result_var_b126=((struct CVALUE*)(right_value189=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b126));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value189;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 813),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 815, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value190;
    __freed_obj__ = 0;
    __dec_obj83=((struct CVALUE*)come_null_check(come_value2_99, "21obj.c", 817))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_99, "21obj.c", 817))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 817),__exception_result_var_b127=((char*)(right_value191=xsprintf("_Alignas(%s)",((struct CVALUE*)come_null_check(come_value_98, "21obj.c", 817))->c_value))), come_pop_stackframe(), __exception_result_var_b127));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value191;
    __freed_obj__ = 0;
    __dec_obj84=((struct CVALUE*)come_null_check(come_value2_99, "21obj.c", 818))->type;
    ((struct CVALUE*)come_null_check(come_value2_99, "21obj.c", 818))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 818),__exception_result_var_b128=((struct sType*)(right_value193=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value192=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 818, "struct sType")))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b128));
    if(__dec_obj84) { come_call_finalizer(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value192;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value193;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_99, "21obj.c", 819))->type, "21obj.c", 819))->mUnsigned=(_Bool)1;
    ((struct CVALUE*)come_null_check(come_value2_99, "21obj.c", 820))->var=((void*)0);
    (come_push_stackframe("21obj.c", 822),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_99, "21obj.c", 822))->c_value),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 824),__exception_result_var_b129=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 824))->stack, "21obj.c", 824)),(struct CVALUE*)come_increment_ref_count(come_value2_99)), come_pop_stackframe(), __exception_result_var_b129);
    __result135__ = (_Bool)1;
    if(exp_97 && !__freed_obj__) { exp_97 = come_decrement_ref_count(exp_97, ((struct sNode*)exp_97)->finalize, ((struct sNode*)exp_97)->_protocol_obj, 0, 0, 0); } 
    if(come_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result135__;
    if(exp_97 && !__freed_obj__) { exp_97 = come_decrement_ref_count(exp_97, ((struct sNode*)exp_97)->finalize, ((struct sNode*)exp_97)->_protocol_obj, 0, 0, 0); } 
    if(come_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_99, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value194;
struct sNode* __dec_obj85;
void* right_value195;
char* __exception_result_var_b130;
char* __dec_obj86;
struct sDeleteNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
    __dec_obj85=((struct sDeleteNode*)come_null_check(self, "21obj.c", 837))->node;
    ((struct sDeleteNode*)come_null_check(self, "21obj.c", 837))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=sNode_clone(node))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value194;
    __freed_obj__ = 0;
    ((struct sDeleteNode*)come_null_check(self, "21obj.c", 839))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 839))->sline;
    __dec_obj86=((struct sDeleteNode*)come_null_check(self, "21obj.c", 840))->sname;
    ((struct sDeleteNode*)come_null_check(self, "21obj.c", 840))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 840),__exception_result_var_b130=((char*)(right_value195=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 840))->sname))), come_pop_stackframe(), __exception_result_var_b130));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value195;
    __freed_obj__ = 0;
    __result136__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result136__;
    if(self && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result137__ = ((struct sDeleteNode*)come_null_check(self, "21obj.c", 847))->sline;
    return __result137__;
}

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value196;
char* __exception_result_var_b131;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
    __result138__ = __result_obj__ = (come_push_stackframe("21obj.c", 852),__exception_result_var_b131=((char*)(right_value196=__builtin_string(((struct sDeleteNode*)come_null_check(self, "21obj.c", 852))->sname))), come_pop_stackframe(), __exception_result_var_b131);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value196;
    __freed_obj__ = 0;
    return __result138__;
}

_Bool sDeleteNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result139__ = (_Bool)0;
    return __result139__;
}

char* sDeleteNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value197;
char* __exception_result_var_b132;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
    __result140__ = __result_obj__ = (come_push_stackframe("21obj.c", 862),__exception_result_var_b132=((char*)(right_value197=__builtin_string("sDeleteNode"))), come_pop_stackframe(), __exception_result_var_b132);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value197;
    __freed_obj__ = 0;
    return __result140__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_100;
_Bool __exception_result_var_b133;
_Bool _if_conditional152;
_Bool __result141__;
void* right_value198;
struct CVALUE* __exception_result_var_b134;
struct CVALUE* come_value_101;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_100, 0, sizeof(struct sNode*));
memset(&right_value198, 0, sizeof(void*));
memset(&come_value_101, 0, sizeof(struct CVALUE*));
    node_100=((struct sDeleteNode*)come_null_check(self, "21obj.c", 867))->node;
    if(_if_conditional152=!(come_push_stackframe("21obj.c", 869),__exception_result_var_b133=node_compile(node_100,info), come_pop_stackframe(), __exception_result_var_b133),    _if_conditional152) {
        __result141__ = (_Bool)0;
        return __result141__;
    }
    come_value_101=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 873),__exception_result_var_b134=((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b134));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value198;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 874),dec_stack_ptr(1,info),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 876),free_object(((struct CVALUE*)come_null_check(come_value_101, "21obj.c", 876))->type,((struct CVALUE*)come_null_check(come_value_101, "21obj.c", 876))->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
    __result142__ = (_Bool)1;
    if(come_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result142__;
    if(come_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value199;
struct sNode* __dec_obj87;
void* right_value200;
char* __exception_result_var_b135;
char* __dec_obj88;
struct sForceDeleteNode* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
    __dec_obj87=((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 889))->node;
    ((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 889))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(node))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value199;
    __freed_obj__ = 0;
    ((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 891))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 891))->sline;
    __dec_obj88=((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 892))->sname;
    ((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 892))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 892),__exception_result_var_b135=((char*)(right_value200=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 892))->sname))), come_pop_stackframe(), __exception_result_var_b135));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value200;
    __freed_obj__ = 0;
    __result143__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result143__;
    if(self && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result144__ = ((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 899))->sline;
    return __result144__;
}

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value201;
char* __exception_result_var_b136;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value201, 0, sizeof(void*));
    __result145__ = __result_obj__ = (come_push_stackframe("21obj.c", 904),__exception_result_var_b136=((char*)(right_value201=__builtin_string(((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 904))->sname))), come_pop_stackframe(), __exception_result_var_b136);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value201;
    __freed_obj__ = 0;
    return __result145__;
}

_Bool sForceDeleteNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result146__ = (_Bool)0;
    return __result146__;
}

char* sForceDeleteNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value202;
char* __exception_result_var_b137;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value202, 0, sizeof(void*));
    __result147__ = __result_obj__ = (come_push_stackframe("21obj.c", 914),__exception_result_var_b137=((char*)(right_value202=__builtin_string("sForceDeleteNode"))), come_pop_stackframe(), __exception_result_var_b137);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value202;
    __freed_obj__ = 0;
    return __result147__;
}

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_102;
_Bool __exception_result_var_b138;
_Bool _if_conditional155;
_Bool __result148__;
void* right_value203;
struct CVALUE* __exception_result_var_b139;
struct CVALUE* come_value_103;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_102, 0, sizeof(struct sNode*));
memset(&right_value203, 0, sizeof(void*));
memset(&come_value_103, 0, sizeof(struct CVALUE*));
    node_102=((struct sDeleteNode*)come_null_check(self, "21obj.c", 919))->node;
    if(_if_conditional155=!(come_push_stackframe("21obj.c", 921),__exception_result_var_b138=node_compile(node_102,info), come_pop_stackframe(), __exception_result_var_b138),    _if_conditional155) {
        __result148__ = (_Bool)0;
        return __result148__;
    }
    come_value_103=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 925),__exception_result_var_b139=((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b139));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value203;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 926),dec_stack_ptr(1,info),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 928),free_object(((struct CVALUE*)come_null_check(come_value_103, "21obj.c", 928))->type,((struct CVALUE*)come_null_check(come_value_103, "21obj.c", 928))->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1),come_pop_stackframe());
    __result149__ = (_Bool)1;
    if(come_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result149__;
    if(come_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value204;
struct sNode* __dec_obj89;
void* right_value205;
char* __exception_result_var_b140;
char* __dec_obj90;
struct sDelegateNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
    __dec_obj89=((struct sDelegateNode*)come_null_check(self, "21obj.c", 941))->node;
    ((struct sDelegateNode*)come_null_check(self, "21obj.c", 941))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=sNode_clone(node))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value204;
    __freed_obj__ = 0;
    ((struct sDelegateNode*)come_null_check(self, "21obj.c", 943))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 943))->sline;
    __dec_obj90=((struct sDelegateNode*)come_null_check(self, "21obj.c", 944))->sname;
    ((struct sDelegateNode*)come_null_check(self, "21obj.c", 944))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 944),__exception_result_var_b140=((char*)(right_value205=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 944))->sname))), come_pop_stackframe(), __exception_result_var_b140));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value205;
    __freed_obj__ = 0;
    __result150__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result150__;
    if(self && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = ((struct sDelegateNode*)come_null_check(self, "21obj.c", 951))->sline;
    return __result151__;
}

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value206;
char* __exception_result_var_b141;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value206, 0, sizeof(void*));
    __result152__ = __result_obj__ = (come_push_stackframe("21obj.c", 956),__exception_result_var_b141=((char*)(right_value206=__builtin_string(((struct sDelegateNode*)come_null_check(self, "21obj.c", 956))->sname))), come_pop_stackframe(), __exception_result_var_b141);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value206;
    __freed_obj__ = 0;
    return __result152__;
}

_Bool sDelegateNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result153__ = (_Bool)0;
    return __result153__;
}

char* sDelegateNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value207;
char* __exception_result_var_b142;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value207, 0, sizeof(void*));
    __result154__ = __result_obj__ = (come_push_stackframe("21obj.c", 966),__exception_result_var_b142=((char*)(right_value207=__builtin_string("sDelegateNode"))), come_pop_stackframe(), __exception_result_var_b142);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value207;
    __freed_obj__ = 0;
    return __result154__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_104;
_Bool __exception_result_var_b143;
_Bool _if_conditional158;
_Bool __result155__;
void* right_value208;
struct CVALUE* __exception_result_var_b144;
struct CVALUE* come_value_105;
_Bool _if_conditional159;
struct list$1CVALUEph* __exception_result_var_b145;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_104, 0, sizeof(struct sNode*));
memset(&right_value208, 0, sizeof(void*));
memset(&come_value_105, 0, sizeof(struct CVALUE*));
    node_104=((struct sDelegateNode*)come_null_check(self, "21obj.c", 971))->node;
    if(_if_conditional158=!(come_push_stackframe("21obj.c", 973),__exception_result_var_b143=node_compile(node_104,info), come_pop_stackframe(), __exception_result_var_b143),    _if_conditional158) {
        __result155__ = (_Bool)0;
        return __result155__;
    }
    come_value_105=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 977),__exception_result_var_b144=((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b144));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value208;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 978),dec_stack_ptr(1,info),come_pop_stackframe());
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_105, "21obj.c", 980))->type, "21obj.c", 980))->mDelegate=(_Bool)1;
    if(_if_conditional159=((struct CVALUE*)come_null_check(come_value_105, "21obj.c", 982))->var,    _if_conditional159) {
        ((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_105, "21obj.c", 983))->var, "21obj.c", 983))->mType, "21obj.c", 983))->mDelegate=(_Bool)1;
    }
    (come_push_stackframe("21obj.c", 992),__exception_result_var_b145=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 992))->stack, "21obj.c", 992)),(struct CVALUE*)come_increment_ref_count(come_value_105)), come_pop_stackframe(), __exception_result_var_b145);
    __result156__ = (_Bool)1;
    if(come_value_105 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result156__;
    if(come_value_105 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_105, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value209;
struct sNode* __dec_obj91;
void* right_value210;
char* __exception_result_var_b146;
char* __dec_obj92;
struct sShareNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
    __dec_obj91=((struct sShareNode*)come_null_check(self, "21obj.c", 1004))->node;
    ((struct sShareNode*)come_null_check(self, "21obj.c", 1004))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=sNode_clone(node))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value209;
    __freed_obj__ = 0;
    ((struct sShareNode*)come_null_check(self, "21obj.c", 1006))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1006))->sline;
    __dec_obj92=((struct sShareNode*)come_null_check(self, "21obj.c", 1007))->sname;
    ((struct sShareNode*)come_null_check(self, "21obj.c", 1007))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1007),__exception_result_var_b146=((char*)(right_value210=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1007))->sname))), come_pop_stackframe(), __exception_result_var_b146));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value210;
    __freed_obj__ = 0;
    __result157__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result157__;
    if(self && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sShareNode_sline(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result158__ = ((struct sShareNode*)come_null_check(self, "21obj.c", 1014))->sline;
    return __result158__;
}

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value211;
char* __exception_result_var_b147;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value211, 0, sizeof(void*));
    __result159__ = __result_obj__ = (come_push_stackframe("21obj.c", 1019),__exception_result_var_b147=((char*)(right_value211=__builtin_string(((struct sShareNode*)come_null_check(self, "21obj.c", 1019))->sname))), come_pop_stackframe(), __exception_result_var_b147);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value211;
    __freed_obj__ = 0;
    return __result159__;
}

_Bool sShareNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result160__ = (_Bool)0;
    return __result160__;
}

char* sShareNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value212;
char* __exception_result_var_b148;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value212, 0, sizeof(void*));
    __result161__ = __result_obj__ = (come_push_stackframe("21obj.c", 1029),__exception_result_var_b148=((char*)(right_value212=__builtin_string("sShareNode"))), come_pop_stackframe(), __exception_result_var_b148);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value212;
    __freed_obj__ = 0;
    return __result161__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_106;
_Bool __exception_result_var_b149;
_Bool _if_conditional162;
_Bool __result162__;
void* right_value213;
struct CVALUE* __exception_result_var_b150;
struct CVALUE* come_value_107;
_Bool _if_conditional163;
struct list$1CVALUEph* __exception_result_var_b151;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_106, 0, sizeof(struct sNode*));
memset(&right_value213, 0, sizeof(void*));
memset(&come_value_107, 0, sizeof(struct CVALUE*));
    node_106=((struct sShareNode*)come_null_check(self, "21obj.c", 1034))->node;
    if(_if_conditional162=!(come_push_stackframe("21obj.c", 1036),__exception_result_var_b149=node_compile(node_106,info), come_pop_stackframe(), __exception_result_var_b149),    _if_conditional162) {
        __result162__ = (_Bool)0;
        return __result162__;
    }
    come_value_107=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 1040),__exception_result_var_b150=((struct CVALUE*)(right_value213=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b150));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value213;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 1041),dec_stack_ptr(1,info),come_pop_stackframe());
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_107, "21obj.c", 1043))->type, "21obj.c", 1043))->mShare=(_Bool)1;
    if(_if_conditional163=((struct CVALUE*)come_null_check(come_value_107, "21obj.c", 1045))->var,    _if_conditional163) {
        ((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_107, "21obj.c", 1046))->var, "21obj.c", 1046))->mType, "21obj.c", 1046))->mShare=(_Bool)1;
    }
    (come_push_stackframe("21obj.c", 1049),__exception_result_var_b151=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1049))->stack, "21obj.c", 1049)),(struct CVALUE*)come_increment_ref_count(come_value_107)), come_pop_stackframe(), __exception_result_var_b151);
    __result163__ = (_Bool)1;
    if(come_value_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result163__;
    if(come_value_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value214;
struct sNode* __dec_obj93;
void* right_value215;
char* __exception_result_var_b152;
char* __dec_obj94;
struct sBorrowNode* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
    __dec_obj93=((struct sBorrowNode*)come_null_check(self, "21obj.c", 1062))->node;
    ((struct sBorrowNode*)come_null_check(self, "21obj.c", 1062))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(node))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value214;
    __freed_obj__ = 0;
    ((struct sBorrowNode*)come_null_check(self, "21obj.c", 1064))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1064))->sline;
    __dec_obj94=((struct sBorrowNode*)come_null_check(self, "21obj.c", 1065))->sname;
    ((struct sBorrowNode*)come_null_check(self, "21obj.c", 1065))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1065),__exception_result_var_b152=((char*)(right_value215=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1065))->sname))), come_pop_stackframe(), __exception_result_var_b152));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value215;
    __freed_obj__ = 0;
    __result164__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result164__;
    if(self && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result165__ = ((struct sBorrowNode*)come_null_check(self, "21obj.c", 1072))->sline;
    return __result165__;
}

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value216;
char* __exception_result_var_b153;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value216, 0, sizeof(void*));
    __result166__ = __result_obj__ = (come_push_stackframe("21obj.c", 1077),__exception_result_var_b153=((char*)(right_value216=__builtin_string(((struct sBorrowNode*)come_null_check(self, "21obj.c", 1077))->sname))), come_pop_stackframe(), __exception_result_var_b153);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value216;
    __freed_obj__ = 0;
    return __result166__;
}

_Bool sBorrowNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result167__ = (_Bool)0;
    return __result167__;
}

char* sBorrowNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value217;
char* __exception_result_var_b154;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value217, 0, sizeof(void*));
    __result168__ = __result_obj__ = (come_push_stackframe("21obj.c", 1087),__exception_result_var_b154=((char*)(right_value217=__builtin_string("sBorrowNode"))), come_pop_stackframe(), __exception_result_var_b154);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value217;
    __freed_obj__ = 0;
    return __result168__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_108;
_Bool __exception_result_var_b155;
_Bool _if_conditional166;
_Bool __result169__;
void* right_value218;
struct CVALUE* __exception_result_var_b156;
struct CVALUE* come_value_109;
int __exception_result_var_b157;
int right_value_id_110;
_Bool _if_conditional167;
struct list$1CVALUEph* __exception_result_var_b158;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_108, 0, sizeof(struct sNode*));
memset(&right_value218, 0, sizeof(void*));
memset(&come_value_109, 0, sizeof(struct CVALUE*));
memset(&right_value_id_110, 0, sizeof(int));
    node_108=((struct sBorrowNode*)come_null_check(self, "21obj.c", 1092))->node;
    if(_if_conditional166=!(come_push_stackframe("21obj.c", 1094),__exception_result_var_b155=node_compile(node_108,info), come_pop_stackframe(), __exception_result_var_b155),    _if_conditional166) {
        __result169__ = (_Bool)0;
        return __result169__;
    }
    come_value_109=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 1098),__exception_result_var_b156=((struct CVALUE*)(right_value218=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b156));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value218;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 1099),dec_stack_ptr(1,info),come_pop_stackframe());
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_109, "21obj.c", 1101))->type, "21obj.c", 1101))->mHeap=(_Bool)0;
    right_value_id_110=(come_push_stackframe("21obj.c", 1103),__exception_result_var_b157=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(come_value_109, "21obj.c", 1103))->c_value)), come_pop_stackframe(), __exception_result_var_b157);
    if(_if_conditional167=right_value_id_110!=-1,    _if_conditional167) {
        (come_push_stackframe("21obj.c", 1106),remove_object_from_right_values(right_value_id_110,info),come_pop_stackframe());
    }
    (come_push_stackframe("21obj.c", 1109),__exception_result_var_b158=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1109))->stack, "21obj.c", 1109)),(struct CVALUE*)come_increment_ref_count(come_value_109)), come_pop_stackframe(), __exception_result_var_b158);
    __result170__ = (_Bool)1;
    if(come_value_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result170__;
    if(come_value_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value219;
struct sNode* __dec_obj95;
void* right_value220;
char* __exception_result_var_b159;
char* __dec_obj96;
struct sCloneNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
    __dec_obj95=((struct sCloneNode*)come_null_check(self, "21obj.c", 1122))->node;
    ((struct sCloneNode*)come_null_check(self, "21obj.c", 1122))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value219=sNode_clone(node))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value219;
    __freed_obj__ = 0;
    ((struct sCloneNode*)come_null_check(self, "21obj.c", 1124))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1124))->sline;
    __dec_obj96=((struct sCloneNode*)come_null_check(self, "21obj.c", 1125))->sname;
    ((struct sCloneNode*)come_null_check(self, "21obj.c", 1125))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1125),__exception_result_var_b159=((char*)(right_value220=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1125))->sname))), come_pop_stackframe(), __exception_result_var_b159));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value220;
    __freed_obj__ = 0;
    __result171__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result171__;
    if(self && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result172__ = ((struct sCloneNode*)come_null_check(self, "21obj.c", 1132))->sline;
    return __result172__;
}

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value221;
char* __exception_result_var_b160;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value221, 0, sizeof(void*));
    __result173__ = __result_obj__ = (come_push_stackframe("21obj.c", 1137),__exception_result_var_b160=((char*)(right_value221=__builtin_string(((struct sCloneNode*)come_null_check(self, "21obj.c", 1137))->sname))), come_pop_stackframe(), __exception_result_var_b160);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value221;
    __freed_obj__ = 0;
    return __result173__;
}

_Bool sCloneNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result174__ = (_Bool)0;
    return __result174__;
}

char* sCloneNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value222;
char* __exception_result_var_b161;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value222, 0, sizeof(void*));
    __result175__ = __result_obj__ = (come_push_stackframe("21obj.c", 1147),__exception_result_var_b161=((char*)(right_value222=__builtin_string("sCloneNode"))), come_pop_stackframe(), __exception_result_var_b161);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value222;
    __freed_obj__ = 0;
    return __result175__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_111;
_Bool __exception_result_var_b162;
_Bool _if_conditional170;
_Bool __result176__;
void* right_value223;
struct CVALUE* __exception_result_var_b163;
struct CVALUE* left_value_112;
void* right_value224;
struct sType* left_type_113;
_Bool __exception_result_var_b164;
_Bool _if_conditional171;
struct list$1CVALUEph* __exception_result_var_b165;
_Bool _if_conditional172;
struct list$1CVALUEph* __exception_result_var_b166;
_Bool _if_conditional173;
void* right_value225;
struct CVALUE* come_value_114;
void* right_value226;
struct tuple2$2sTypephcharph* __exception_result_var_b167;
struct tuple2$2sTypephcharph* multiple_assign_var2;
struct sType* result_type_115;
char* c_value_116;
char* __dec_obj97;
void* right_value227;
struct sType* __dec_obj98;
void* right_value228;
char* __exception_result_var_b168;
char* __dec_obj99;
struct list$1CVALUEph* __exception_result_var_b169;
_Bool __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_111, 0, sizeof(struct sNode*));
memset(&right_value223, 0, sizeof(void*));
memset(&left_value_112, 0, sizeof(struct CVALUE*));
memset(&right_value224, 0, sizeof(void*));
memset(&left_type_113, 0, sizeof(struct sType*));
memset(&right_value225, 0, sizeof(void*));
memset(&come_value_114, 0, sizeof(struct CVALUE*));
memset(&right_value226, 0, sizeof(void*));
memset(&result_type_115, 0, sizeof(struct sType*));
memset(&c_value_116, 0, sizeof(char*));
memset(&result_type_115, 0, sizeof(struct sType*));
memset(&c_value_116, 0, sizeof(char*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
    node_111=((struct sCloneNode*)come_null_check(self, "21obj.c", 1152))->node;
    if(_if_conditional170=!(come_push_stackframe("21obj.c", 1154),__exception_result_var_b162=node_compile(node_111,info), come_pop_stackframe(), __exception_result_var_b162),    _if_conditional170) {
        __result176__ = (_Bool)0;
        return __result176__;
    }
    left_value_112=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 1158),__exception_result_var_b163=((struct CVALUE*)(right_value223=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b163));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value223;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 1159),dec_stack_ptr(1,info),come_pop_stackframe());
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_112, "21obj.c", 1161))->type, "21obj.c", 1161))->mClone=(_Bool)1;
    left_type_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(((struct CVALUE*)come_null_check(left_value_112, "21obj.c", 1163))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value224;
    __freed_obj__ = 0;
    if(_if_conditional171=((struct sType*)come_null_check(left_type_113, "21obj.c", 1165))->mPointerNum==1&&(come_push_stackframe("21obj.c", 1165),__exception_result_var_b164=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type_113, "21obj.c", 1165))->mClass, "21obj.c", 1165))->mName,"void"), come_pop_stackframe(), __exception_result_var_b164)&&((struct sType*)come_null_check(left_type_113, "21obj.c", 1165))->mHeap==(_Bool)0,    _if_conditional171) {
        (come_push_stackframe("21obj.c", 1166),__exception_result_var_b165=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1166))->stack, "21obj.c", 1166)),(struct CVALUE*)come_increment_ref_count(left_value_112)), come_pop_stackframe(), __exception_result_var_b165);
    }
    else {
        if(_if_conditional172=((struct sType*)come_null_check(left_type_113, "21obj.c", 1168))->mPointerNum==0,        _if_conditional172) {
            (come_push_stackframe("21obj.c", 1169),__exception_result_var_b166=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1169))->stack, "21obj.c", 1169)),(struct CVALUE*)come_increment_ref_count(left_value_112)), come_pop_stackframe(), __exception_result_var_b166);
        }
        else {
            if(_if_conditional173=((struct sType*)come_null_check(left_type_113, "21obj.c", 1171))->mPointerNum>0,            _if_conditional173) {
                come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value225=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1172, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value225;
                __freed_obj__ = 0;
                multiple_assign_var2=(come_push_stackframe("21obj.c", 1174),__exception_result_var_b167=((struct tuple2$2sTypephcharph*)(right_value226=clone_object(left_type_113,((struct CVALUE*)come_null_check(left_value_112, "21obj.c", 1174))->c_value,info))), come_pop_stackframe(), __exception_result_var_b167);
                result_type_115=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
                c_value_116=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value226);
                if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value226;
                __freed_obj__ = 0;
                __dec_obj97=((struct CVALUE*)come_null_check(come_value_114, "21obj.c", 1175))->c_value;
                ((struct CVALUE*)come_null_check(come_value_114, "21obj.c", 1175))->c_value=(char*)come_increment_ref_count(c_value_116);
                if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                __dec_obj98=((struct CVALUE*)come_null_check(come_value_114, "21obj.c", 1176))->type;
                ((struct CVALUE*)come_null_check(come_value_114, "21obj.c", 1176))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_clone(left_type_113))));
                if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value227);
                if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value227;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_114, "21obj.c", 1177))->type, "21obj.c", 1177))->mHeap=(_Bool)1;
                ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_114, "21obj.c", 1178))->type, "21obj.c", 1178))->mClone=(_Bool)1;
                ((struct CVALUE*)come_null_check(come_value_114, "21obj.c", 1179))->var=((void*)0);
                __dec_obj99=((struct CVALUE*)come_null_check(come_value_114, "21obj.c", 1181))->c_value;
                ((struct CVALUE*)come_null_check(come_value_114, "21obj.c", 1181))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1181),__exception_result_var_b168=((char*)(right_value228=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_114, "21obj.c", 1181))->c_value,(struct sType*)come_increment_ref_count(left_type_113),info))), come_pop_stackframe(), __exception_result_var_b168));
                if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value228);
                if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value228;
                __freed_obj__ = 0;
                (come_push_stackframe("21obj.c", 1183),__exception_result_var_b169=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1183))->stack, "21obj.c", 1183)),(struct CVALUE*)come_increment_ref_count(come_value_114)), come_pop_stackframe(), __exception_result_var_b169);
                if(come_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_115 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_115, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_116 && !__freed_obj__) { c_value_116 = come_decrement_ref_count(c_value_116, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
    }
    __result177__ = (_Bool)1;
    if(left_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result177__;
    if(left_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_113, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional174=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1!=((void*)0),                    _if_conditional174) {
                        if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(_if_conditional175=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2!=((void*)0),                    _if_conditional175) {
                        if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value229;
struct sNode* __dec_obj100;
void* right_value230;
char* __exception_result_var_b170;
char* __dec_obj101;
struct sDupeNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
    __dec_obj100=((struct sDupeNode*)come_null_check(self, "21obj.c", 1197))->node;
    ((struct sDupeNode*)come_null_check(self, "21obj.c", 1197))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value229=sNode_clone(node))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, ((struct sNode*)right_value229)->finalize, ((struct sNode*)right_value229)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value229;
    __freed_obj__ = 0;
    ((struct sDupeNode*)come_null_check(self, "21obj.c", 1199))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1199))->sline;
    __dec_obj101=((struct sDupeNode*)come_null_check(self, "21obj.c", 1200))->sname;
    ((struct sDupeNode*)come_null_check(self, "21obj.c", 1200))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1200),__exception_result_var_b170=((char*)(right_value230=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1200))->sname))), come_pop_stackframe(), __exception_result_var_b170));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value230;
    __freed_obj__ = 0;
    __result178__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result178__;
    if(self && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result179__ = ((struct sDupeNode*)come_null_check(self, "21obj.c", 1207))->sline;
    return __result179__;
}

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value231;
char* __exception_result_var_b171;
char* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value231, 0, sizeof(void*));
    __result180__ = __result_obj__ = (come_push_stackframe("21obj.c", 1212),__exception_result_var_b171=((char*)(right_value231=__builtin_string(((struct sDupeNode*)come_null_check(self, "21obj.c", 1212))->sname))), come_pop_stackframe(), __exception_result_var_b171);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value231;
    __freed_obj__ = 0;
    return __result180__;
}

_Bool sDupeNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result181__ = (_Bool)0;
    return __result181__;
}

char* sDupeNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value232;
char* __exception_result_var_b172;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value232, 0, sizeof(void*));
    __result182__ = __result_obj__ = (come_push_stackframe("21obj.c", 1222),__exception_result_var_b172=((char*)(right_value232=__builtin_string("sDupeNode"))), come_pop_stackframe(), __exception_result_var_b172);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value232;
    __freed_obj__ = 0;
    return __result182__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_117;
_Bool __exception_result_var_b173;
_Bool _if_conditional178;
_Bool __result183__;
void* right_value233;
struct CVALUE* __exception_result_var_b174;
struct CVALUE* left_value_118;
void* right_value234;
struct sType* left_type_119;
_Bool _if_conditional179;
struct list$1CVALUEph* __exception_result_var_b175;
_Bool _if_conditional180;
struct list$1CVALUEph* __exception_result_var_b176;
_Bool _if_conditional181;
void* right_value235;
struct CVALUE* come_value_120;
void* right_value236;
struct tuple2$2sTypephcharph* __exception_result_var_b177;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* result_type_121;
char* c_value_122;
char* __dec_obj102;
void* right_value237;
struct sType* __dec_obj103;
void* right_value238;
char* __exception_result_var_b178;
char* __dec_obj104;
struct list$1CVALUEph* __exception_result_var_b179;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_117, 0, sizeof(struct sNode*));
memset(&right_value233, 0, sizeof(void*));
memset(&left_value_118, 0, sizeof(struct CVALUE*));
memset(&right_value234, 0, sizeof(void*));
memset(&left_type_119, 0, sizeof(struct sType*));
memset(&right_value235, 0, sizeof(void*));
memset(&come_value_120, 0, sizeof(struct CVALUE*));
memset(&right_value236, 0, sizeof(void*));
memset(&result_type_121, 0, sizeof(struct sType*));
memset(&c_value_122, 0, sizeof(char*));
memset(&result_type_121, 0, sizeof(struct sType*));
memset(&c_value_122, 0, sizeof(char*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
    node_117=((struct sDupeNode*)come_null_check(self, "21obj.c", 1227))->node;
    if(_if_conditional178=!(come_push_stackframe("21obj.c", 1229),__exception_result_var_b173=node_compile(node_117,info), come_pop_stackframe(), __exception_result_var_b173),    _if_conditional178) {
        __result183__ = (_Bool)0;
        return __result183__;
    }
    left_value_118=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 1233),__exception_result_var_b174=((struct CVALUE*)(right_value233=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b174));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value233;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 1234),dec_stack_ptr(1,info),come_pop_stackframe());
    left_type_119=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(((struct CVALUE*)come_null_check(left_value_118, "21obj.c", 1236))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value234;
    __freed_obj__ = 0;
    if(_if_conditional179=((struct sType*)come_null_check(left_type_119, "21obj.c", 1238))->mPointerNum==0,    _if_conditional179) {
        (come_push_stackframe("21obj.c", 1239),__exception_result_var_b175=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1239))->stack, "21obj.c", 1239)),(struct CVALUE*)come_increment_ref_count(left_value_118)), come_pop_stackframe(), __exception_result_var_b175);
    }
    else {
        if(_if_conditional180=((struct sType*)come_null_check(left_type_119, "21obj.c", 1241))->mPointerNum>0&&((struct sType*)come_null_check(left_type_119, "21obj.c", 1241))->mHeap==(_Bool)0,        _if_conditional180) {
            (come_push_stackframe("21obj.c", 1242),__exception_result_var_b176=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1242))->stack, "21obj.c", 1242)),(struct CVALUE*)come_increment_ref_count(left_value_118)), come_pop_stackframe(), __exception_result_var_b176);
        }
        else {
            if(_if_conditional181=((struct sType*)come_null_check(left_type_119, "21obj.c", 1244))->mPointerNum>0,            _if_conditional181) {
                come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1245, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value235;
                __freed_obj__ = 0;
                multiple_assign_var3=(come_push_stackframe("21obj.c", 1247),__exception_result_var_b177=((struct tuple2$2sTypephcharph*)(right_value236=clone_object(left_type_119,((struct CVALUE*)come_null_check(left_value_118, "21obj.c", 1247))->c_value,info))), come_pop_stackframe(), __exception_result_var_b177);
                result_type_121=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                c_value_122=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
                if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value236;
                __freed_obj__ = 0;
                __dec_obj102=((struct CVALUE*)come_null_check(come_value_120, "21obj.c", 1248))->c_value;
                ((struct CVALUE*)come_null_check(come_value_120, "21obj.c", 1248))->c_value=(char*)come_increment_ref_count(c_value_122);
                if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
                __dec_obj103=((struct CVALUE*)come_null_check(come_value_120, "21obj.c", 1249))->type;
                ((struct CVALUE*)come_null_check(come_value_120, "21obj.c", 1249))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_clone(left_type_119))));
                if(__dec_obj103) { come_call_finalizer(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
                if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value237;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_120, "21obj.c", 1250))->type, "21obj.c", 1250))->mHeap=(_Bool)1;
                ((struct CVALUE*)come_null_check(come_value_120, "21obj.c", 1251))->var=((void*)0);
                __dec_obj104=((struct CVALUE*)come_null_check(come_value_120, "21obj.c", 1253))->c_value;
                ((struct CVALUE*)come_null_check(come_value_120, "21obj.c", 1253))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1253),__exception_result_var_b178=((char*)(right_value238=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_120, "21obj.c", 1253))->c_value,(struct sType*)come_increment_ref_count(left_type_119),info))), come_pop_stackframe(), __exception_result_var_b178));
                if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value238);
                if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value238;
                __freed_obj__ = 0;
                (come_push_stackframe("21obj.c", 1255),__exception_result_var_b179=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1255))->stack, "21obj.c", 1255)),(struct CVALUE*)come_increment_ref_count(come_value_120)), come_pop_stackframe(), __exception_result_var_b179);
                if(come_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_121 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_121, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_122 && !__freed_obj__) { c_value_122 = come_decrement_ref_count(c_value_122, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
    }
    __result184__ = (_Bool)1;
    if(left_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_119 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result184__;
    if(left_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_119 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_119, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value239;
struct sNode* __dec_obj105;
void* right_value240;
char* __exception_result_var_b180;
char* __dec_obj106;
struct sDummyHeapNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
    __dec_obj105=((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1269))->node;
    ((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1269))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value239=sNode_clone(node))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value239;
    __freed_obj__ = 0;
    ((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1271))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1271))->sline;
    __dec_obj106=((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1272))->sname;
    ((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1272))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1272),__exception_result_var_b180=((char*)(right_value240=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1272))->sname))), come_pop_stackframe(), __exception_result_var_b180));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value240;
    __freed_obj__ = 0;
    __result185__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result185__;
    if(self && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result186__ = ((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1279))->sline;
    return __result186__;
}

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value241;
char* __exception_result_var_b181;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value241, 0, sizeof(void*));
    __result187__ = __result_obj__ = (come_push_stackframe("21obj.c", 1284),__exception_result_var_b181=((char*)(right_value241=__builtin_string(((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1284))->sname))), come_pop_stackframe(), __exception_result_var_b181);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value241;
    __freed_obj__ = 0;
    return __result187__;
}

_Bool sDummyHeapNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result188__ = (_Bool)0;
    return __result188__;
}

char* sDummyHeapNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value242;
char* __exception_result_var_b182;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value242, 0, sizeof(void*));
    __result189__ = __result_obj__ = (come_push_stackframe("21obj.c", 1294),__exception_result_var_b182=((char*)(right_value242=__builtin_string("sDummyHeapNode"))), come_pop_stackframe(), __exception_result_var_b182);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value242;
    __freed_obj__ = 0;
    return __result189__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_123;
_Bool __exception_result_var_b183;
_Bool _if_conditional184;
_Bool __result190__;
void* right_value243;
struct CVALUE* __exception_result_var_b184;
struct CVALUE* come_value_124;
struct list$1CVALUEph* __exception_result_var_b185;
_Bool __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_123, 0, sizeof(struct sNode*));
memset(&right_value243, 0, sizeof(void*));
memset(&come_value_124, 0, sizeof(struct CVALUE*));
    node_123=((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1299))->node;
    if(_if_conditional184=!(come_push_stackframe("21obj.c", 1301),__exception_result_var_b183=node_compile(node_123,info), come_pop_stackframe(), __exception_result_var_b183),    _if_conditional184) {
        __result190__ = (_Bool)0;
        return __result190__;
    }
    come_value_124=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 1305),__exception_result_var_b184=((struct CVALUE*)(right_value243=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b184));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value243;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 1306),dec_stack_ptr(1,info),come_pop_stackframe());
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_124, "21obj.c", 1308))->type, "21obj.c", 1308))->mHeap=(_Bool)1;
    (come_push_stackframe("21obj.c", 1310),__exception_result_var_b185=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1310))->stack, "21obj.c", 1310)),(struct CVALUE*)come_increment_ref_count(come_value_124)), come_pop_stackframe(), __exception_result_var_b185);
    __result191__ = (_Bool)1;
    if(come_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result191__;
    if(come_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value244;
struct sNode* __dec_obj107;
void* right_value245;
char* __exception_result_var_b186;
char* __dec_obj108;
struct sGCIncNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
    __dec_obj107=((struct sGCIncNode*)come_null_check(self, "21obj.c", 1323))->node;
    ((struct sGCIncNode*)come_null_check(self, "21obj.c", 1323))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=sNode_clone(node))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value244;
    __freed_obj__ = 0;
    ((struct sGCIncNode*)come_null_check(self, "21obj.c", 1325))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1325))->sline;
    __dec_obj108=((struct sGCIncNode*)come_null_check(self, "21obj.c", 1326))->sname;
    ((struct sGCIncNode*)come_null_check(self, "21obj.c", 1326))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1326),__exception_result_var_b186=((char*)(right_value245=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1326))->sname))), come_pop_stackframe(), __exception_result_var_b186));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value245;
    __freed_obj__ = 0;
    __result192__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result192__;
    if(self && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result193__ = ((struct sGCIncNode*)come_null_check(self, "21obj.c", 1333))->sline;
    return __result193__;
}

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value246;
char* __exception_result_var_b187;
char* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value246, 0, sizeof(void*));
    __result194__ = __result_obj__ = (come_push_stackframe("21obj.c", 1338),__exception_result_var_b187=((char*)(right_value246=__builtin_string(((struct sGCIncNode*)come_null_check(self, "21obj.c", 1338))->sname))), come_pop_stackframe(), __exception_result_var_b187);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value246;
    __freed_obj__ = 0;
    return __result194__;
}

_Bool sGCIncNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result195__ = (_Bool)0;
    return __result195__;
}

char* sGCIncNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value247;
char* __exception_result_var_b188;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value247, 0, sizeof(void*));
    __result196__ = __result_obj__ = (come_push_stackframe("21obj.c", 1348),__exception_result_var_b188=((char*)(right_value247=__builtin_string("sGCIncNode"))), come_pop_stackframe(), __exception_result_var_b188);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value247;
    __freed_obj__ = 0;
    return __result196__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_125;
_Bool __exception_result_var_b189;
_Bool _if_conditional187;
_Bool __result197__;
void* right_value248;
struct CVALUE* __exception_result_var_b190;
struct CVALUE* come_value_126;
struct sType* type_127;
_Bool _if_conditional188;
void* right_value249;
char* __exception_result_var_b191;
char* type_name_128;
void* right_value250;
char* __exception_result_var_b192;
char* __dec_obj109;
struct list$1CVALUEph* __exception_result_var_b193;
_Bool __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_125, 0, sizeof(struct sNode*));
memset(&right_value248, 0, sizeof(void*));
memset(&come_value_126, 0, sizeof(struct CVALUE*));
memset(&type_127, 0, sizeof(struct sType*));
memset(&right_value249, 0, sizeof(void*));
memset(&type_name_128, 0, sizeof(char*));
memset(&right_value250, 0, sizeof(void*));
    node_125=((struct sGCIncNode*)come_null_check(self, "21obj.c", 1353))->node;
    if(_if_conditional187=!(come_push_stackframe("21obj.c", 1355),__exception_result_var_b189=node_compile(node_125,info), come_pop_stackframe(), __exception_result_var_b189),    _if_conditional187) {
        __result197__ = (_Bool)0;
        return __result197__;
    }
    come_value_126=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 1359),__exception_result_var_b190=((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b190));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value248;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 1360),dec_stack_ptr(1,info),come_pop_stackframe());
    type_127=((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 1362))->type;
    if(_if_conditional188=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 1364))->type, "21obj.c", 1364))->mHeap,    _if_conditional188) {
        type_name_128=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1365),__exception_result_var_b191=((char*)(right_value249=make_type_name_string(type_127,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b191));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value249;
        __freed_obj__ = 0;
        __dec_obj109=((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 1366))->c_value;
        ((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 1366))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1366),__exception_result_var_b192=((char*)(right_value250=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 1366))->type,((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 1366))->c_value,info))), come_pop_stackframe(), __exception_result_var_b192));
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value250;
        __freed_obj__ = 0;
        if(type_name_128 && !__freed_obj__) { type_name_128 = come_decrement_ref_count(type_name_128, (void*)0, (void*)0, 0, 0, 0); }
    }
    (come_push_stackframe("21obj.c", 1369),__exception_result_var_b193=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1369))->stack, "21obj.c", 1369)),(struct CVALUE*)come_increment_ref_count(come_value_126)), come_pop_stackframe(), __exception_result_var_b193);
    __result198__ = (_Bool)1;
    if(come_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result198__;
    if(come_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value251;
struct sNode* __dec_obj110;
void* right_value252;
char* __exception_result_var_b194;
char* __dec_obj111;
struct sGCDecNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
    __dec_obj110=((struct sGCDecNode*)come_null_check(self, "21obj.c", 1382))->node;
    ((struct sGCDecNode*)come_null_check(self, "21obj.c", 1382))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value251=sNode_clone(node))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, ((struct sNode*)right_value251)->finalize, ((struct sNode*)right_value251)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value251;
    __freed_obj__ = 0;
    ((struct sGCDecNode*)come_null_check(self, "21obj.c", 1384))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1384))->sline;
    __dec_obj111=((struct sGCDecNode*)come_null_check(self, "21obj.c", 1385))->sname;
    ((struct sGCDecNode*)come_null_check(self, "21obj.c", 1385))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1385),__exception_result_var_b194=((char*)(right_value252=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1385))->sname))), come_pop_stackframe(), __exception_result_var_b194));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value252;
    __freed_obj__ = 0;
    __result199__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result199__;
    if(self && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result200__ = ((struct sGCDecNode*)come_null_check(self, "21obj.c", 1392))->sline;
    return __result200__;
}

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value253;
char* __exception_result_var_b195;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value253, 0, sizeof(void*));
    __result201__ = __result_obj__ = (come_push_stackframe("21obj.c", 1397),__exception_result_var_b195=((char*)(right_value253=__builtin_string(((struct sGCDecNode*)come_null_check(self, "21obj.c", 1397))->sname))), come_pop_stackframe(), __exception_result_var_b195);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value253;
    __freed_obj__ = 0;
    return __result201__;
}

_Bool sGCDecNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result202__ = (_Bool)0;
    return __result202__;
}

char* sGCDecNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value254;
char* __exception_result_var_b196;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value254, 0, sizeof(void*));
    __result203__ = __result_obj__ = (come_push_stackframe("21obj.c", 1407),__exception_result_var_b196=((char*)(right_value254=__builtin_string("sGCDecNode"))), come_pop_stackframe(), __exception_result_var_b196);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value254;
    __freed_obj__ = 0;
    return __result203__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_129;
_Bool __exception_result_var_b197;
_Bool _if_conditional191;
_Bool __result204__;
void* right_value255;
struct CVALUE* __exception_result_var_b198;
struct CVALUE* come_value_130;
struct sType* type_131;
struct list$1CVALUEph* __exception_result_var_b199;
_Bool __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_129, 0, sizeof(struct sNode*));
memset(&right_value255, 0, sizeof(void*));
memset(&come_value_130, 0, sizeof(struct CVALUE*));
memset(&type_131, 0, sizeof(struct sType*));
    node_129=((struct sGCDecNode*)come_null_check(self, "21obj.c", 1412))->node;
    if(_if_conditional191=!(come_push_stackframe("21obj.c", 1414),__exception_result_var_b197=node_compile(node_129,info), come_pop_stackframe(), __exception_result_var_b197),    _if_conditional191) {
        __result204__ = (_Bool)0;
        return __result204__;
    }
    come_value_130=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("21obj.c", 1418),__exception_result_var_b198=((struct CVALUE*)(right_value255=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b198));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value255;
    __freed_obj__ = 0;
    (come_push_stackframe("21obj.c", 1419),dec_stack_ptr(1,info),come_pop_stackframe());
    type_131=((struct CVALUE*)come_null_check(come_value_130, "21obj.c", 1421))->type;
    (come_push_stackframe("21obj.c", 1423),decrement_ref_count_object(type_131,((struct CVALUE*)come_null_check(come_value_130, "21obj.c", 1423))->c_value,info,(_Bool)0),come_pop_stackframe());
    (come_push_stackframe("21obj.c", 1425),__exception_result_var_b199=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1425))->stack, "21obj.c", 1425)),(struct CVALUE*)come_increment_ref_count(come_value_130)), come_pop_stackframe(), __exception_result_var_b199);
    __result205__ = (_Bool)1;
    if(come_value_130 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result205__;
    if(come_value_130 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value256;
struct sType* __dec_obj112;
void* right_value257;
char* __exception_result_var_b200;
char* __dec_obj113;
struct sIsHeap* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
    __dec_obj112=((struct sIsHeap*)come_null_check(self, "21obj.c", 1438))->type;
    ((struct sIsHeap*)come_null_check(self, "21obj.c", 1438))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_clone(type))));
    if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value256;
    __freed_obj__ = 0;
    ((struct sIsHeap*)come_null_check(self, "21obj.c", 1440))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1440))->sline;
    __dec_obj113=((struct sIsHeap*)come_null_check(self, "21obj.c", 1441))->sname;
    ((struct sIsHeap*)come_null_check(self, "21obj.c", 1441))->sname=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1441),__exception_result_var_b200=((char*)(right_value257=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1441))->sname))), come_pop_stackframe(), __exception_result_var_b200));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value257);
    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value257;
    __freed_obj__ = 0;
    __result206__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result206__;
    if(self && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result207__ = ((struct sIsHeap*)come_null_check(self, "21obj.c", 1448))->sline;
    return __result207__;
}

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value258;
char* __exception_result_var_b201;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value258, 0, sizeof(void*));
    __result208__ = __result_obj__ = (come_push_stackframe("21obj.c", 1453),__exception_result_var_b201=((char*)(right_value258=__builtin_string(((struct sIsHeap*)come_null_check(self, "21obj.c", 1453))->sname))), come_pop_stackframe(), __exception_result_var_b201);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value258;
    __freed_obj__ = 0;
    return __result208__;
}

_Bool sIsHeap_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result209__ = (_Bool)0;
    return __result209__;
}

char* sIsHeap_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value259;
char* __exception_result_var_b202;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value259, 0, sizeof(void*));
    __result210__ = __result_obj__ = (come_push_stackframe("21obj.c", 1463),__exception_result_var_b202=((char*)(right_value259=__builtin_string("sIsHeap"))), come_pop_stackframe(), __exception_result_var_b202);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value259;
    __freed_obj__ = 0;
    return __result210__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* node_132;
_Bool _if_conditional194;
void* right_value260;
struct CVALUE* come_value_133;
void* right_value261;
char* __exception_result_var_b203;
char* __dec_obj114;
void* right_value262;
void* right_value263;
struct sType* __exception_result_var_b204;
struct sType* __dec_obj115;
struct list$1CVALUEph* __exception_result_var_b205;
void* right_value264;
struct CVALUE* come_value_134;
void* right_value265;
char* __exception_result_var_b206;
char* __dec_obj116;
void* right_value266;
void* right_value267;
struct sType* __exception_result_var_b207;
struct sType* __dec_obj117;
struct list$1CVALUEph* __exception_result_var_b208;
_Bool __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_132, 0, sizeof(struct sType*));
memset(&right_value260, 0, sizeof(void*));
memset(&come_value_133, 0, sizeof(struct CVALUE*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&come_value_134, 0, sizeof(struct CVALUE*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
    node_132=((struct sIsHeap*)come_null_check(self, "21obj.c", 1468))->type;
    if(_if_conditional194=((struct sType*)come_null_check(((struct sIsHeap*)come_null_check(self, "21obj.c", 1470))->type, "21obj.c", 1470))->mHeap,    _if_conditional194) {
        come_value_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1471, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value260;
        __freed_obj__ = 0;
        __dec_obj114=((struct CVALUE*)come_null_check(come_value_133, "21obj.c", 1473))->c_value;
        ((struct CVALUE*)come_null_check(come_value_133, "21obj.c", 1473))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1473),__exception_result_var_b203=((char*)(right_value261=xsprintf("1"))), come_pop_stackframe(), __exception_result_var_b203));
        if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value261;
        __freed_obj__ = 0;
        __dec_obj115=((struct CVALUE*)come_null_check(come_value_133, "21obj.c", 1474))->type;
        ((struct CVALUE*)come_null_check(come_value_133, "21obj.c", 1474))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1474),__exception_result_var_b204=((struct sType*)(right_value263=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value262=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1474, "struct sType")))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b204));
        if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value262;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value263;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_133, "21obj.c", 1475))->var=((void*)0);
        (come_push_stackframe("21obj.c", 1477),__exception_result_var_b205=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1477))->stack, "21obj.c", 1477)),(struct CVALUE*)come_increment_ref_count(come_value_133)), come_pop_stackframe(), __exception_result_var_b205);
        (come_push_stackframe("21obj.c", 1479),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_133, "21obj.c", 1479))->c_value),come_pop_stackframe());
        if(come_value_133 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        come_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1482, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value264;
        __freed_obj__ = 0;
        __dec_obj116=((struct CVALUE*)come_null_check(come_value_134, "21obj.c", 1484))->c_value;
        ((struct CVALUE*)come_null_check(come_value_134, "21obj.c", 1484))->c_value=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1484),__exception_result_var_b206=((char*)(right_value265=xsprintf("0"))), come_pop_stackframe(), __exception_result_var_b206));
        if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value265;
        __freed_obj__ = 0;
        __dec_obj117=((struct CVALUE*)come_null_check(come_value_134, "21obj.c", 1485))->type;
        ((struct CVALUE*)come_null_check(come_value_134, "21obj.c", 1485))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1485),__exception_result_var_b207=((struct sType*)(right_value267=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value266=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1485, "struct sType")))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b207));
        if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value266;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value267;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_134, "21obj.c", 1486))->var=((void*)0);
        (come_push_stackframe("21obj.c", 1488),__exception_result_var_b208=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1488))->stack, "21obj.c", 1488)),(struct CVALUE*)come_increment_ref_count(come_value_134)), come_pop_stackframe(), __exception_result_var_b208);
        (come_push_stackframe("21obj.c", 1490),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_134, "21obj.c", 1490))->c_value),come_pop_stackframe());
        if(come_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result211__ = (_Bool)1;
    return __result211__;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b209;
_Bool _if_conditional195;
void* right_value268;
struct tuple3$3sTypephcharphbool* __exception_result_var_b210;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_135;
char* name_136;
_Bool err_137;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value269;
struct sType* inf_type_138;
void* right_value270;
struct sNode* __exception_result_var_b211;
struct sNode* node_139;
int __exception_result_var_b212;
void* right_value271;
void* right_value272;
struct sImplementsNode* __exception_result_var_b213;
struct sNode* _inf_value4;
struct sImplementsNode* _inf_obj_value4;
void* right_value277;
struct sNode* __result214__;
void* right_value278;
void* right_value279;
struct sNewNode* __exception_result_var_b214;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* right_value283;
struct sNode* obj_142;
void* right_value284;
char* __exception_result_var_b215;
char* fun_name_143;
void* right_value285;
void* right_value286;
struct sNode* __exception_result_var_b216;
struct sNode* __result217__;
void* right_value287;
void* right_value288;
struct sNewNode* __exception_result_var_b217;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* right_value292;
struct sNode* __result220__;
_Bool __exception_result_var_b218;
_Bool _if_conditional221;
void* right_value293;
void* right_value294;
struct sTrueNode* __exception_result_var_b219;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* right_value297;
struct sNode* __result223__;
_Bool __exception_result_var_b220;
_Bool _if_conditional226;
void* right_value298;
void* right_value299;
struct sFalseNode* __exception_result_var_b221;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* right_value302;
struct sNode* __result226__;
_Bool __exception_result_var_b222;
_Bool _if_conditional231;
void* right_value303;
struct sNode* __exception_result_var_b223;
struct sNode* node_147;
void* right_value304;
void* right_value305;
struct sDeleteNode* __exception_result_var_b224;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* right_value309;
struct sNode* __result229__;
_Bool __exception_result_var_b225;
_Bool _if_conditional238;
void* right_value310;
struct sNode* __exception_result_var_b226;
struct sNode* node_149;
void* right_value311;
void* right_value312;
struct sForceDeleteNode* __exception_result_var_b227;
struct sNode* _inf_value10;
struct sForceDeleteNode* _inf_obj_value10;
void* right_value316;
struct sNode* __result232__;
_Bool __exception_result_var_b228;
_Bool _if_conditional245;
void* right_value317;
struct sNode* __exception_result_var_b229;
struct sNode* node_151;
void* right_value318;
void* right_value319;
struct sBorrowNode* __exception_result_var_b230;
struct sNode* _inf_value11;
struct sBorrowNode* _inf_obj_value11;
void* right_value323;
struct sNode* __result235__;
_Bool __exception_result_var_b231;
_Bool _if_conditional252;
void* right_value324;
struct sNode* __exception_result_var_b232;
struct sNode* node_153;
void* right_value325;
void* right_value326;
struct sDelegateNode* __exception_result_var_b233;
struct sNode* _inf_value12;
struct sDelegateNode* _inf_obj_value12;
void* right_value330;
struct sNode* __result238__;
_Bool __exception_result_var_b234;
_Bool _if_conditional259;
void* right_value331;
struct sNode* __exception_result_var_b235;
struct sNode* node_155;
void* right_value332;
void* right_value333;
struct sShareNode* __exception_result_var_b236;
struct sNode* _inf_value13;
struct sShareNode* _inf_obj_value13;
void* right_value337;
struct sNode* __result241__;
_Bool __exception_result_var_b237;
_Bool _if_conditional266;
void* right_value338;
struct sNode* __exception_result_var_b238;
struct sNode* node_157;
void* right_value339;
void* right_value340;
struct sCloneNode* __exception_result_var_b239;
struct sNode* _inf_value14;
struct sCloneNode* _inf_obj_value14;
void* right_value344;
struct sNode* __result244__;
_Bool __exception_result_var_b240;
_Bool _if_conditional273;
void* right_value345;
struct sNode* __exception_result_var_b241;
struct sNode* node_159;
void* right_value346;
void* right_value347;
struct sDupeNode* __exception_result_var_b242;
struct sNode* _inf_value15;
struct sDupeNode* _inf_obj_value15;
void* right_value351;
struct sNode* __result247__;
_Bool __exception_result_var_b243;
_Bool _if_conditional280;
void* right_value352;
struct sNode* __exception_result_var_b244;
struct sNode* node_161;
void* right_value353;
void* right_value354;
struct sDummyHeapNode* __exception_result_var_b245;
struct sNode* _inf_value16;
struct sDummyHeapNode* _inf_obj_value16;
void* right_value358;
struct sNode* __result250__;
_Bool __exception_result_var_b246;
_Bool _if_conditional287;
void* right_value359;
struct sNode* __exception_result_var_b247;
struct sNode* node_163;
int __exception_result_var_b248;
void* right_value360;
void* right_value361;
struct sGCIncNode* __exception_result_var_b249;
struct sNode* _inf_value17;
struct sGCIncNode* _inf_obj_value17;
void* right_value365;
struct sNode* __result253__;
_Bool __exception_result_var_b250;
_Bool _if_conditional294;
void* right_value366;
struct sNode* __exception_result_var_b251;
struct sNode* node_165;
int __exception_result_var_b252;
void* right_value367;
void* right_value368;
struct sGCDecNode* __exception_result_var_b253;
struct sNode* _inf_value18;
struct sGCDecNode* _inf_obj_value18;
void* right_value372;
struct sNode* __result256__;
_Bool __exception_result_var_b254;
_Bool _if_conditional301;
void* right_value373;
struct tuple3$3sTypephcharphbool* __exception_result_var_b255;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_167;
char* param_name_168;
_Bool err_169;
_Bool _if_conditional302;
void* right_value374;
struct sType* __exception_result_var_b256;
struct sType* type2_170;
int __exception_result_var_b257;
void* right_value375;
void* right_value376;
struct sIsHeap* __exception_result_var_b258;
struct sNode* _inf_value19;
struct sIsHeap* _inf_obj_value19;
void* right_value380;
struct sNode* __result259__;
_Bool __exception_result_var_b259;
_Bool _if_conditional309;
_Bool __exception_result_var_b260;
_Bool _if_conditional310;
long int __exception_result_var_b261;
void* right_value381;
void* right_value382;
struct sNullNodeX* __exception_result_var_b262;
struct sNode* _inf_value20;
struct sNullNodeX* _inf_obj_value20;
void* right_value385;
struct sNode* __result262__;
_Bool __exception_result_var_b263;
_Bool __exception_result_var_b264;
_Bool _if_conditional315;
long int __exception_result_var_b265;
_Bool _if_conditional316;
void* right_value386;
struct sNode* __exception_result_var_b266;
struct sNode* node_173;
struct sNode* __result263__;
void* right_value387;
void* right_value388;
struct sNullNodeX* __exception_result_var_b267;
struct sNode* _inf_value21;
struct sNullNodeX* _inf_obj_value21;
void* right_value391;
struct sNode* __result266__;
_Bool __exception_result_var_b268;
_Bool _if_conditional321;
long int __exception_result_var_b269;
void* right_value392;
void* right_value393;
struct sNullNodeX* __exception_result_var_b270;
struct sNode* _inf_value22;
struct sNullNodeX* _inf_obj_value22;
void* right_value396;
struct sNode* __result269__;
_Bool __exception_result_var_b271;
_Bool _if_conditional326;
long int __exception_result_var_b272;
void* right_value397;
void* right_value398;
struct sNullNodeX* __exception_result_var_b273;
struct sNode* _inf_value23;
struct sNullNodeX* _inf_obj_value23;
void* right_value401;
struct sNode* __result272__;
_Bool __exception_result_var_b274;
_Bool _if_conditional331;
long int __exception_result_var_b275;
void* right_value402;
void* right_value403;
struct sNullNodeX* __exception_result_var_b276;
struct sNode* _inf_value24;
struct sNullNodeX* _inf_obj_value24;
void* right_value406;
struct sNode* __result275__;
_Bool __exception_result_var_b277;
_Bool _if_conditional336;
long int __exception_result_var_b278;
void* right_value407;
void* right_value408;
struct sNullNodeX* __exception_result_var_b279;
struct sNode* _inf_value25;
struct sNullNodeX* _inf_obj_value25;
void* right_value411;
struct sNode* __result278__;
_Bool __exception_result_var_b280;
_Bool _if_conditional341;
int __exception_result_var_b281;
_Bool is_type_name_flag_179;
char* p_180;
int sline_181;
_Bool __exception_result_var_b282;
_Bool _if_conditional342;
void* right_value412;
char* __exception_result_var_b283;
char* word_182;
_Bool __exception_result_var_b284;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value413;
struct tuple3$3sTypephcharphbool* __exception_result_var_b285;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_183;
char* name_184;
_Bool err_185;
_Bool _if_conditional345;
int __exception_result_var_b286;
void* right_value414;
void* right_value415;
struct sSizeOfNode* __exception_result_var_b287;
struct sNode* _inf_value26;
struct sSizeOfNode* _inf_obj_value26;
void* right_value419;
struct sNode* __result281__;
void* right_value420;
struct sNode* __exception_result_var_b288;
struct sNode* exp_187;
int __exception_result_var_b289;
void* right_value421;
void* right_value422;
struct sSizeOfExpNode* __exception_result_var_b290;
struct sNode* _inf_value27;
struct sSizeOfExpNode* _inf_obj_value27;
void* right_value426;
struct sNode* __result284__;
_Bool __exception_result_var_b291;
_Bool _if_conditional358;
int __exception_result_var_b292;
_Bool is_type_name_flag_189;
char* p_190;
int sline_191;
_Bool __exception_result_var_b293;
_Bool _if_conditional359;
void* right_value427;
char* __exception_result_var_b294;
char* word_192;
_Bool __exception_result_var_b295;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value428;
struct tuple3$3sTypephcharphbool* __exception_result_var_b296;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_193;
char* name_194;
_Bool err_195;
_Bool _if_conditional362;
int __exception_result_var_b297;
void* right_value429;
void* right_value430;
struct sAlignOfNode* __exception_result_var_b298;
struct sNode* _inf_value28;
struct sAlignOfNode* _inf_obj_value28;
void* right_value434;
struct sNode* __result287__;
void* right_value435;
struct sNode* __exception_result_var_b299;
struct sNode* exp_197;
int __exception_result_var_b300;
void* right_value436;
void* right_value437;
struct sAlignOfExpNode* __exception_result_var_b301;
struct sNode* _inf_value29;
struct sAlignOfExpNode* _inf_obj_value29;
void* right_value441;
struct sNode* __result290__;
_Bool __exception_result_var_b302;
_Bool _if_conditional375;
int __exception_result_var_b303;
_Bool is_type_name_flag_199;
char* p_200;
int sline_201;
_Bool __exception_result_var_b304;
_Bool _if_conditional376;
void* right_value442;
char* __exception_result_var_b305;
char* word_202;
_Bool __exception_result_var_b306;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value443;
struct tuple3$3sTypephcharphbool* __exception_result_var_b307;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_203;
char* name_204;
_Bool err_205;
_Bool _if_conditional379;
int __exception_result_var_b308;
void* right_value444;
void* right_value445;
struct sAlignOfNode2* __exception_result_var_b309;
struct sNode* _inf_value30;
struct sAlignOfNode2* _inf_obj_value30;
void* right_value449;
struct sNode* __result293__;
void* right_value450;
struct sNode* __exception_result_var_b310;
struct sNode* exp_207;
int __exception_result_var_b311;
void* right_value451;
void* right_value452;
struct sAlignOfExpNode2* __exception_result_var_b312;
struct sNode* _inf_value31;
struct sAlignOfExpNode2* _inf_obj_value31;
void* right_value456;
struct sNode* __result296__;
_Bool __exception_result_var_b313;
_Bool _if_conditional392;
int __exception_result_var_b314;
_Bool is_type_name_flag_209;
char* p_210;
int sline_211;
_Bool __exception_result_var_b315;
_Bool _if_conditional393;
void* right_value457;
char* __exception_result_var_b316;
char* word_212;
_Bool __exception_result_var_b317;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value458;
struct tuple3$3sTypephcharphbool* __exception_result_var_b318;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_213;
char* name_214;
_Bool err_215;
_Bool _if_conditional396;
int __exception_result_var_b319;
void* right_value459;
void* right_value460;
struct sAlignAsNode* __exception_result_var_b320;
struct sNode* _inf_value32;
struct sAlignAsNode* _inf_obj_value32;
void* right_value464;
struct sNode* __result299__;
void* right_value465;
struct sNode* __exception_result_var_b321;
struct sNode* exp_217;
int __exception_result_var_b322;
void* right_value466;
void* right_value467;
struct sAlignAsExpNode* __exception_result_var_b323;
struct sNode* _inf_value33;
struct sAlignAsExpNode* _inf_obj_value33;
void* right_value471;
struct sNode* __result302__;
void* right_value472;
struct sNode* __exception_result_var_b324;
struct sNode* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value268, 0, sizeof(void*));
memset(&type_135, 0, sizeof(struct sType*));
memset(&name_136, 0, sizeof(char*));
memset(&err_137, 0, sizeof(_Bool));
memset(&type_135, 0, sizeof(struct sType*));
memset(&name_136, 0, sizeof(char*));
memset(&err_137, 0, sizeof(_Bool));
memset(&right_value269, 0, sizeof(void*));
memset(&inf_type_138, 0, sizeof(struct sType*));
memset(&right_value270, 0, sizeof(void*));
memset(&node_139, 0, sizeof(struct sNode*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&obj_142, 0, sizeof(struct sNode*));
memset(&right_value284, 0, sizeof(void*));
memset(&fun_name_143, 0, sizeof(char*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&node_147, 0, sizeof(struct sNode*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&node_149, 0, sizeof(struct sNode*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&node_151, 0, sizeof(struct sNode*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&node_153, 0, sizeof(struct sNode*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&node_155, 0, sizeof(struct sNode*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&node_157, 0, sizeof(struct sNode*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&node_159, 0, sizeof(struct sNode*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&node_161, 0, sizeof(struct sNode*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&node_163, 0, sizeof(struct sNode*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&node_165, 0, sizeof(struct sNode*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&param_type_167, 0, sizeof(struct sType*));
memset(&param_name_168, 0, sizeof(char*));
memset(&err_169, 0, sizeof(_Bool));
memset(&param_type_167, 0, sizeof(struct sType*));
memset(&param_name_168, 0, sizeof(char*));
memset(&err_169, 0, sizeof(_Bool));
memset(&right_value374, 0, sizeof(void*));
memset(&type2_170, 0, sizeof(struct sType*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&node_173, 0, sizeof(struct sNode*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
memset(&is_type_name_flag_179, 0, sizeof(_Bool));
memset(&p_180, 0, sizeof(char*));
memset(&sline_181, 0, sizeof(int));
memset(&right_value412, 0, sizeof(void*));
memset(&word_182, 0, sizeof(char*));
memset(&right_value413, 0, sizeof(void*));
memset(&type_183, 0, sizeof(struct sType*));
memset(&name_184, 0, sizeof(char*));
memset(&err_185, 0, sizeof(_Bool));
memset(&type_183, 0, sizeof(struct sType*));
memset(&name_184, 0, sizeof(char*));
memset(&err_185, 0, sizeof(_Bool));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&exp_187, 0, sizeof(struct sNode*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&is_type_name_flag_189, 0, sizeof(_Bool));
memset(&p_190, 0, sizeof(char*));
memset(&sline_191, 0, sizeof(int));
memset(&right_value427, 0, sizeof(void*));
memset(&word_192, 0, sizeof(char*));
memset(&right_value428, 0, sizeof(void*));
memset(&type_193, 0, sizeof(struct sType*));
memset(&name_194, 0, sizeof(char*));
memset(&err_195, 0, sizeof(_Bool));
memset(&type_193, 0, sizeof(struct sType*));
memset(&name_194, 0, sizeof(char*));
memset(&err_195, 0, sizeof(_Bool));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&exp_197, 0, sizeof(struct sNode*));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&is_type_name_flag_199, 0, sizeof(_Bool));
memset(&p_200, 0, sizeof(char*));
memset(&sline_201, 0, sizeof(int));
memset(&right_value442, 0, sizeof(void*));
memset(&word_202, 0, sizeof(char*));
memset(&right_value443, 0, sizeof(void*));
memset(&type_203, 0, sizeof(struct sType*));
memset(&name_204, 0, sizeof(char*));
memset(&err_205, 0, sizeof(_Bool));
memset(&type_203, 0, sizeof(struct sType*));
memset(&name_204, 0, sizeof(char*));
memset(&err_205, 0, sizeof(_Bool));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
memset(&right_value450, 0, sizeof(void*));
memset(&exp_207, 0, sizeof(struct sNode*));
memset(&right_value451, 0, sizeof(void*));
memset(&right_value452, 0, sizeof(void*));
memset(&right_value456, 0, sizeof(void*));
memset(&is_type_name_flag_209, 0, sizeof(_Bool));
memset(&p_210, 0, sizeof(char*));
memset(&sline_211, 0, sizeof(int));
memset(&right_value457, 0, sizeof(void*));
memset(&word_212, 0, sizeof(char*));
memset(&right_value458, 0, sizeof(void*));
memset(&type_213, 0, sizeof(struct sType*));
memset(&name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
memset(&type_213, 0, sizeof(struct sType*));
memset(&name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&right_value464, 0, sizeof(void*));
memset(&right_value465, 0, sizeof(void*));
memset(&exp_217, 0, sizeof(struct sNode*));
memset(&right_value466, 0, sizeof(void*));
memset(&right_value467, 0, sizeof(void*));
memset(&right_value471, 0, sizeof(void*));
memset(&right_value472, 0, sizeof(void*));
    if(_if_conditional195=(come_push_stackframe("21obj.c", 1498),__exception_result_var_b209=charp_operator_equals(buf,"new"), come_pop_stackframe(), __exception_result_var_b209),    _if_conditional195) {
        multiple_assign_var4=(come_push_stackframe("21obj.c", 1499),__exception_result_var_b210=((struct tuple3$3sTypephcharphbool*)(right_value268=parse_type(info,(_Bool)0,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b210);
        type_135=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_136=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_137=multiple_assign_var4->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value268;
        __freed_obj__ = 0;
        if(_if_conditional198=!err_137,        _if_conditional198) {
            (come_push_stackframe("21obj.c", 1501),err_msg(info,"parse_type failed"),come_pop_stackframe());
            (come_push_stackframe("21obj.c", 1502),exit(2),come_pop_stackframe());
        }
        if(_if_conditional199=*((struct sInfo*)come_null_check(info, "21obj.c", 1505))->p==40,        _if_conditional199) {
            if(_if_conditional200=((struct sClass*)come_null_check(((struct sType*)come_null_check(type_135, "21obj.c", 1506))->mClass, "21obj.c", 1506))->mProtocol,            _if_conditional200) {
                ((struct sInfo*)come_null_check(info, "21obj.c", 1507))->p++;
                (come_push_stackframe("21obj.c", 1508),skip_spaces_and_lf(info),come_pop_stackframe());
                inf_type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_clone(type_135))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
                if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value269;
                __freed_obj__ = 0;
                node_139=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1512),__exception_result_var_b211=((struct sNode*)(right_value270=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b211));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value270);
                if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[1] = right_value270;
                __freed_obj__ = 0;
                (come_push_stackframe("21obj.c", 1514),__exception_result_var_b212=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b212);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1516, "struct sNode");
                _inf_obj_value4=come_increment_ref_count((come_push_stackframe("21obj.c", 1516),__exception_result_var_b213=((struct sImplementsNode*)(right_value272=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value271=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1516, "struct sImplementsNode")))),(struct sNode*)come_increment_ref_count(node_139),(struct sType*)come_increment_ref_count(inf_type_138),info))), come_pop_stackframe(), __exception_result_var_b213));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sImplementsNode_finalize;
                _inf_value4->clone=(void*)sImplementsNode_clone;
                _inf_value4->compile=(void*)sImplementsNode_compile;
                _inf_value4->sline=(void*)sImplementsNode_sline;
                _inf_value4->sname=(void*)sImplementsNode_sname;
                _inf_value4->terminated=(void*)sImplementsNode_terminated;
                _inf_value4->kind=(void*)sImplementsNode_kind;
                __result214__ = __result_obj__ = ((struct sNode*)(right_value277=_inf_value4));
                if(inf_type_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_139 && !__freed_obj__) { node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0, 0); } 
                if(type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_136 && !__freed_obj__) { name_136 = come_decrement_ref_count(name_136, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value271);
                if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value271;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value272);
                if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value272;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value277);
                if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[4] = right_value277;
                __freed_obj__ = 0;
                return __result214__;
                if(inf_type_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_138, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_139 && !__freed_obj__) { node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1519, "struct sNode");
                _inf_obj_value5=come_increment_ref_count((come_push_stackframe("21obj.c", 1519),__exception_result_var_b214=((struct sNewNode*)(right_value279=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value278=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1519, "struct sNewNode")))),(struct sType*)come_increment_ref_count(type_135),info))), come_pop_stackframe(), __exception_result_var_b214));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sNewNode_finalize;
                _inf_value5->clone=(void*)sNewNode_clone;
                _inf_value5->compile=(void*)sNewNode_compile;
                _inf_value5->sline=(void*)sNewNode_sline;
                _inf_value5->sname=(void*)sNewNode_sname;
                _inf_value5->terminated=(void*)sNewNode_terminated;
                _inf_value5->kind=(void*)sNewNode_kind;
                obj_142=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=_inf_value5)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value278;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value279);
                if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value279;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value283);
                if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value283;
                __freed_obj__ = 0;
                fun_name_143=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1520),__exception_result_var_b215=((char*)(right_value284=__builtin_string("initialize"))), come_pop_stackframe(), __exception_result_var_b215));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value284);
                if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value284;
                __freed_obj__ = 0;
                __result217__ = __result_obj__ = (come_push_stackframe("21obj.c", 1522),__exception_result_var_b216=((struct sNode*)(right_value286=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=sNode_clone(obj_142)))),(char*)come_increment_ref_count(fun_name_143),info))), come_pop_stackframe(), __exception_result_var_b216);
                if(obj_142 && !__freed_obj__) { obj_142 = come_decrement_ref_count(obj_142, ((struct sNode*)obj_142)->finalize, ((struct sNode*)obj_142)->_protocol_obj, 0, 0, 0); } 
                if(fun_name_143 && !__freed_obj__) { fun_name_143 = come_decrement_ref_count(fun_name_143, (void*)0, (void*)0, 0, 0, 0); }
                if(type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_136 && !__freed_obj__) { name_136 = come_decrement_ref_count(name_136, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value285);
                if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[4] = right_value285;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value286);
                if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[5] = right_value286;
                __freed_obj__ = 0;
                return __result217__;
                if(obj_142 && !__freed_obj__) { obj_142 = come_decrement_ref_count(obj_142, ((struct sNode*)obj_142)->finalize, ((struct sNode*)obj_142)->_protocol_obj, 0, 0, 0); } 
                if(fun_name_143 && !__freed_obj__) { fun_name_143 = come_decrement_ref_count(fun_name_143, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1526, "struct sNode");
            _inf_obj_value6=come_increment_ref_count((come_push_stackframe("21obj.c", 1526),__exception_result_var_b217=((struct sNewNode*)(right_value288=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value287=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1526, "struct sNewNode")))),(struct sType*)come_increment_ref_count(type_135),info))), come_pop_stackframe(), __exception_result_var_b217));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNewNode_sline;
            _inf_value6->sname=(void*)sNewNode_sname;
            _inf_value6->terminated=(void*)sNewNode_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result220__ = __result_obj__ = ((struct sNode*)(right_value292=_inf_value6));
            if(type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_136 && !__freed_obj__) { name_136 = come_decrement_ref_count(name_136, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
            if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value287;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value288);
            if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value288;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value292);
            if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, ((struct sNode*)right_value292)->finalize, ((struct sNode*)right_value292)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value292;
            __freed_obj__ = 0;
            return __result220__;
        }
        if(type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_136 && !__freed_obj__) { name_136 = come_decrement_ref_count(name_136, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional221=(come_push_stackframe("21obj.c", 1529),__exception_result_var_b218=charp_operator_equals(buf,"true"), come_pop_stackframe(), __exception_result_var_b218),        _if_conditional221) {
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1530, "struct sNode");
            _inf_obj_value7=come_increment_ref_count((come_push_stackframe("21obj.c", 1530),__exception_result_var_b219=((struct sTrueNode*)(right_value294=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value293=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1530, "struct sTrueNode")))),info))), come_pop_stackframe(), __exception_result_var_b219));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sTrueNode_finalize;
            _inf_value7->clone=(void*)sTrueNode_clone;
            _inf_value7->compile=(void*)sTrueNode_compile;
            _inf_value7->sline=(void*)sTrueNode_sline;
            _inf_value7->sname=(void*)sTrueNode_sname;
            _inf_value7->terminated=(void*)sTrueNode_terminated;
            _inf_value7->kind=(void*)sTrueNode_kind;
            __result223__ = __result_obj__ = ((struct sNode*)(right_value297=_inf_value7));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value293);
            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value293;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value294);
            if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value294;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value297);
            if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value297;
            __freed_obj__ = 0;
            return __result223__;
        }
        else {
            if(_if_conditional226=(come_push_stackframe("21obj.c", 1532),__exception_result_var_b220=charp_operator_equals(buf,"false"), come_pop_stackframe(), __exception_result_var_b220),            _if_conditional226) {
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1533, "struct sNode");
                _inf_obj_value8=come_increment_ref_count((come_push_stackframe("21obj.c", 1533),__exception_result_var_b221=((struct sFalseNode*)(right_value299=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value298=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1533, "struct sFalseNode")))),info))), come_pop_stackframe(), __exception_result_var_b221));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sFalseNode_finalize;
                _inf_value8->clone=(void*)sFalseNode_clone;
                _inf_value8->compile=(void*)sFalseNode_compile;
                _inf_value8->sline=(void*)sFalseNode_sline;
                _inf_value8->sname=(void*)sFalseNode_sname;
                _inf_value8->terminated=(void*)sFalseNode_terminated;
                _inf_value8->kind=(void*)sFalseNode_kind;
                __result226__ = __result_obj__ = ((struct sNode*)(right_value302=_inf_value8));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
                if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value298;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value299);
                if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value299;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value302);
                if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value302;
                __freed_obj__ = 0;
                return __result226__;
            }
            else {
                if(_if_conditional231=(come_push_stackframe("21obj.c", 1535),__exception_result_var_b222=charp_operator_equals(buf,"delete"), come_pop_stackframe(), __exception_result_var_b222),                _if_conditional231) {
                    node_147=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1536),__exception_result_var_b223=((struct sNode*)(right_value303=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b223));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
                    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value303;
                    __freed_obj__ = 0;
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1538, "struct sNode");
                    _inf_obj_value9=come_increment_ref_count((come_push_stackframe("21obj.c", 1538),__exception_result_var_b224=((struct sDeleteNode*)(right_value305=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value304=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1538, "struct sDeleteNode")))),(struct sNode*)come_increment_ref_count(node_147),info))), come_pop_stackframe(), __exception_result_var_b224));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sDeleteNode_finalize;
                    _inf_value9->clone=(void*)sDeleteNode_clone;
                    _inf_value9->compile=(void*)sDeleteNode_compile;
                    _inf_value9->sline=(void*)sDeleteNode_sline;
                    _inf_value9->sname=(void*)sDeleteNode_sname;
                    _inf_value9->terminated=(void*)sDeleteNode_terminated;
                    _inf_value9->kind=(void*)sDeleteNode_kind;
                    __result229__ = __result_obj__ = ((struct sNode*)(right_value309=_inf_value9));
                    if(node_147 && !__freed_obj__) { node_147 = come_decrement_ref_count(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value304);
                    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value304;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value305);
                    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value305;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value309);
                    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value309;
                    __freed_obj__ = 0;
                    return __result229__;
                    if(node_147 && !__freed_obj__) { node_147 = come_decrement_ref_count(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional238=(come_push_stackframe("21obj.c", 1540),__exception_result_var_b225=charp_operator_equals(buf,"force_delete"), come_pop_stackframe(), __exception_result_var_b225),                    _if_conditional238) {
                        node_149=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1541),__exception_result_var_b226=((struct sNode*)(right_value310=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b226));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
                        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value310;
                        __freed_obj__ = 0;
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1543, "struct sNode");
                        _inf_obj_value10=come_increment_ref_count((come_push_stackframe("21obj.c", 1543),__exception_result_var_b227=((struct sForceDeleteNode*)(right_value312=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value311=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1543, "struct sForceDeleteNode")))),(struct sNode*)come_increment_ref_count(node_149),info))), come_pop_stackframe(), __exception_result_var_b227));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value10->clone=(void*)sForceDeleteNode_clone;
                        _inf_value10->compile=(void*)sForceDeleteNode_compile;
                        _inf_value10->sline=(void*)sForceDeleteNode_sline;
                        _inf_value10->sname=(void*)sForceDeleteNode_sname;
                        _inf_value10->terminated=(void*)sForceDeleteNode_terminated;
                        _inf_value10->kind=(void*)sForceDeleteNode_kind;
                        __result232__ = __result_obj__ = ((struct sNode*)(right_value316=_inf_value10));
                        if(node_149 && !__freed_obj__) { node_149 = come_decrement_ref_count(node_149, ((struct sNode*)node_149)->finalize, ((struct sNode*)node_149)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value311);
                        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value311;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value312);
                        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value312;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value316);
                        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value316;
                        __freed_obj__ = 0;
                        return __result232__;
                        if(node_149 && !__freed_obj__) { node_149 = come_decrement_ref_count(node_149, ((struct sNode*)node_149)->finalize, ((struct sNode*)node_149)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional245=(come_push_stackframe("21obj.c", 1546),__exception_result_var_b228=charp_operator_equals(buf,"borrow"), come_pop_stackframe(), __exception_result_var_b228),                        _if_conditional245) {
                            node_151=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1547),__exception_result_var_b229=((struct sNode*)(right_value317=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b229));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317);
                            if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value317;
                            __freed_obj__ = 0;
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1549, "struct sNode");
                            _inf_obj_value11=come_increment_ref_count((come_push_stackframe("21obj.c", 1549),__exception_result_var_b230=((struct sBorrowNode*)(right_value319=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value318=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1549, "struct sBorrowNode")))),(struct sNode*)come_increment_ref_count(node_151),info))), come_pop_stackframe(), __exception_result_var_b230));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sBorrowNode_finalize;
                            _inf_value11->clone=(void*)sBorrowNode_clone;
                            _inf_value11->compile=(void*)sBorrowNode_compile;
                            _inf_value11->sline=(void*)sBorrowNode_sline;
                            _inf_value11->sname=(void*)sBorrowNode_sname;
                            _inf_value11->terminated=(void*)sBorrowNode_terminated;
                            _inf_value11->kind=(void*)sBorrowNode_kind;
                            __result235__ = __result_obj__ = ((struct sNode*)(right_value323=_inf_value11));
                            if(node_151 && !__freed_obj__) { node_151 = come_decrement_ref_count(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value318);
                            if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value318;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value319);
                            if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value319;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value323);
                            if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { right_value323 = come_decrement_ref_count(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[3] = right_value323;
                            __freed_obj__ = 0;
                            return __result235__;
                            if(node_151 && !__freed_obj__) { node_151 = come_decrement_ref_count(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional252=(come_push_stackframe("21obj.c", 1551),__exception_result_var_b231=charp_operator_equals(buf,"delegate"), come_pop_stackframe(), __exception_result_var_b231),                            _if_conditional252) {
                                node_153=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1552),__exception_result_var_b232=((struct sNode*)(right_value324=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b232));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
                                if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value324;
                                __freed_obj__ = 0;
                                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1554, "struct sNode");
                                _inf_obj_value12=come_increment_ref_count((come_push_stackframe("21obj.c", 1554),__exception_result_var_b233=((struct sDelegateNode*)(right_value326=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value325=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1554, "struct sDelegateNode")))),(struct sNode*)come_increment_ref_count(node_153),info))), come_pop_stackframe(), __exception_result_var_b233));
                                _inf_value12->_protocol_obj=_inf_obj_value12;
                                _inf_value12->finalize=(void*)sDelegateNode_finalize;
                                _inf_value12->clone=(void*)sDelegateNode_clone;
                                _inf_value12->compile=(void*)sDelegateNode_compile;
                                _inf_value12->sline=(void*)sDelegateNode_sline;
                                _inf_value12->sname=(void*)sDelegateNode_sname;
                                _inf_value12->terminated=(void*)sDelegateNode_terminated;
                                _inf_value12->kind=(void*)sDelegateNode_kind;
                                __result238__ = __result_obj__ = ((struct sNode*)(right_value330=_inf_value12));
                                if(node_153 && !__freed_obj__) { node_153 = come_decrement_ref_count(node_153, ((struct sNode*)node_153)->finalize, ((struct sNode*)node_153)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value325);
                                if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value325;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value326);
                                if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value326;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value330);
                                if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, ((struct sNode*)right_value330)->finalize, ((struct sNode*)right_value330)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[3] = right_value330;
                                __freed_obj__ = 0;
                                return __result238__;
                                if(node_153 && !__freed_obj__) { node_153 = come_decrement_ref_count(node_153, ((struct sNode*)node_153)->finalize, ((struct sNode*)node_153)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional259=(come_push_stackframe("21obj.c", 1556),__exception_result_var_b234=charp_operator_equals(buf,"share"), come_pop_stackframe(), __exception_result_var_b234),                                _if_conditional259) {
                                    node_155=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1557),__exception_result_var_b235=((struct sNode*)(right_value331=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b235));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value331);
                                    if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value331;
                                    __freed_obj__ = 0;
                                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1559, "struct sNode");
                                    _inf_obj_value13=come_increment_ref_count((come_push_stackframe("21obj.c", 1559),__exception_result_var_b236=((struct sShareNode*)(right_value333=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value332=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1559, "struct sShareNode")))),(struct sNode*)come_increment_ref_count(node_155),info))), come_pop_stackframe(), __exception_result_var_b236));
                                    _inf_value13->_protocol_obj=_inf_obj_value13;
                                    _inf_value13->finalize=(void*)sShareNode_finalize;
                                    _inf_value13->clone=(void*)sShareNode_clone;
                                    _inf_value13->compile=(void*)sShareNode_compile;
                                    _inf_value13->sline=(void*)sShareNode_sline;
                                    _inf_value13->sname=(void*)sShareNode_sname;
                                    _inf_value13->terminated=(void*)sShareNode_terminated;
                                    _inf_value13->kind=(void*)sShareNode_kind;
                                    __result241__ = __result_obj__ = ((struct sNode*)(right_value337=_inf_value13));
                                    if(node_155 && !__freed_obj__) { node_155 = come_decrement_ref_count(node_155, ((struct sNode*)node_155)->finalize, ((struct sNode*)node_155)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value332);
                                    if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value332;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value333);
                                    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value333;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value337);
                                    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[3] = right_value337;
                                    __freed_obj__ = 0;
                                    return __result241__;
                                    if(node_155 && !__freed_obj__) { node_155 = come_decrement_ref_count(node_155, ((struct sNode*)node_155)->finalize, ((struct sNode*)node_155)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional266=(come_push_stackframe("21obj.c", 1561),__exception_result_var_b237=charp_operator_equals(buf,"clone"), come_pop_stackframe(), __exception_result_var_b237),                                    _if_conditional266) {
                                        node_157=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1562),__exception_result_var_b238=((struct sNode*)(right_value338=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b238));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value338);
                                        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value338;
                                        __freed_obj__ = 0;
                                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1564, "struct sNode");
                                        _inf_obj_value14=come_increment_ref_count((come_push_stackframe("21obj.c", 1564),__exception_result_var_b239=((struct sCloneNode*)(right_value340=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value339=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1564, "struct sCloneNode")))),(struct sNode*)come_increment_ref_count(node_157),info))), come_pop_stackframe(), __exception_result_var_b239));
                                        _inf_value14->_protocol_obj=_inf_obj_value14;
                                        _inf_value14->finalize=(void*)sCloneNode_finalize;
                                        _inf_value14->clone=(void*)sCloneNode_clone;
                                        _inf_value14->compile=(void*)sCloneNode_compile;
                                        _inf_value14->sline=(void*)sCloneNode_sline;
                                        _inf_value14->sname=(void*)sCloneNode_sname;
                                        _inf_value14->terminated=(void*)sCloneNode_terminated;
                                        _inf_value14->kind=(void*)sCloneNode_kind;
                                        __result244__ = __result_obj__ = ((struct sNode*)(right_value344=_inf_value14));
                                        if(node_157 && !__freed_obj__) { node_157 = come_decrement_ref_count(node_157, ((struct sNode*)node_157)->finalize, ((struct sNode*)node_157)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value339);
                                        if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value339;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value340);
                                        if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value340;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value344);
                                        if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[3] = right_value344;
                                        __freed_obj__ = 0;
                                        return __result244__;
                                        if(node_157 && !__freed_obj__) { node_157 = come_decrement_ref_count(node_157, ((struct sNode*)node_157)->finalize, ((struct sNode*)node_157)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional273=(come_push_stackframe("21obj.c", 1566),__exception_result_var_b240=charp_operator_equals(buf,"dupe"), come_pop_stackframe(), __exception_result_var_b240),                                        _if_conditional273) {
                                            node_159=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1567),__exception_result_var_b241=((struct sNode*)(right_value345=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b241));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value345);
                                            if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value345;
                                            __freed_obj__ = 0;
                                            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1569, "struct sNode");
                                            _inf_obj_value15=come_increment_ref_count((come_push_stackframe("21obj.c", 1569),__exception_result_var_b242=((struct sDupeNode*)(right_value347=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value346=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1569, "struct sDupeNode")))),(struct sNode*)come_increment_ref_count(node_159),info))), come_pop_stackframe(), __exception_result_var_b242));
                                            _inf_value15->_protocol_obj=_inf_obj_value15;
                                            _inf_value15->finalize=(void*)sDupeNode_finalize;
                                            _inf_value15->clone=(void*)sDupeNode_clone;
                                            _inf_value15->compile=(void*)sDupeNode_compile;
                                            _inf_value15->sline=(void*)sDupeNode_sline;
                                            _inf_value15->sname=(void*)sDupeNode_sname;
                                            _inf_value15->terminated=(void*)sDupeNode_terminated;
                                            _inf_value15->kind=(void*)sDupeNode_kind;
                                            __result247__ = __result_obj__ = ((struct sNode*)(right_value351=_inf_value15));
                                            if(node_159 && !__freed_obj__) { node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value346);
                                            if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value346;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value347);
                                            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value347;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value351);
                                            if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[3] = right_value351;
                                            __freed_obj__ = 0;
                                            return __result247__;
                                            if(node_159 && !__freed_obj__) { node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        else {
                                            if(_if_conditional280=(come_push_stackframe("21obj.c", 1571),__exception_result_var_b243=charp_operator_equals(buf,"dummy_heap"), come_pop_stackframe(), __exception_result_var_b243),                                            _if_conditional280) {
                                                node_161=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1572),__exception_result_var_b244=((struct sNode*)(right_value352=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b244));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
                                                if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { right_value352 = come_decrement_ref_count(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value352;
                                                __freed_obj__ = 0;
                                                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1574, "struct sNode");
                                                _inf_obj_value16=come_increment_ref_count((come_push_stackframe("21obj.c", 1574),__exception_result_var_b245=((struct sDummyHeapNode*)(right_value354=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value353=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1574, "struct sDummyHeapNode")))),(struct sNode*)come_increment_ref_count(node_161),info))), come_pop_stackframe(), __exception_result_var_b245));
                                                _inf_value16->_protocol_obj=_inf_obj_value16;
                                                _inf_value16->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value16->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value16->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value16->sline=(void*)sDummyHeapNode_sline;
                                                _inf_value16->sname=(void*)sDummyHeapNode_sname;
                                                _inf_value16->terminated=(void*)sDummyHeapNode_terminated;
                                                _inf_value16->kind=(void*)sDummyHeapNode_kind;
                                                __result250__ = __result_obj__ = ((struct sNode*)(right_value358=_inf_value16));
                                                if(node_161 && !__freed_obj__) { node_161 = come_decrement_ref_count(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value353);
                                                if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value353;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value354);
                                                if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[2] = right_value354;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value358);
                                                if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[3] = right_value358;
                                                __freed_obj__ = 0;
                                                return __result250__;
                                                if(node_161 && !__freed_obj__) { node_161 = come_decrement_ref_count(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                if(_if_conditional287=(come_push_stackframe("21obj.c", 1576),__exception_result_var_b246=charp_operator_equals(buf,"gc_inc"), come_pop_stackframe(), __exception_result_var_b246)&&*((struct sInfo*)come_null_check(info, "21obj.c", 1576))->p==40,                                                _if_conditional287) {
                                                    ((struct sInfo*)come_null_check(info, "21obj.c", 1577))->p++;
                                                    (come_push_stackframe("21obj.c", 1578),skip_spaces_and_lf(info),come_pop_stackframe());
                                                    node_163=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1580),__exception_result_var_b247=((struct sNode*)(right_value359=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b247));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value359);
                                                    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value359;
                                                    __freed_obj__ = 0;
                                                    (come_push_stackframe("21obj.c", 1582),__exception_result_var_b248=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b248);
                                                    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1584, "struct sNode");
                                                    _inf_obj_value17=come_increment_ref_count((come_push_stackframe("21obj.c", 1584),__exception_result_var_b249=((struct sGCIncNode*)(right_value361=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value360=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1584, "struct sGCIncNode")))),(struct sNode*)come_increment_ref_count(node_163),info))), come_pop_stackframe(), __exception_result_var_b249));
                                                    _inf_value17->_protocol_obj=_inf_obj_value17;
                                                    _inf_value17->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value17->clone=(void*)sGCIncNode_clone;
                                                    _inf_value17->compile=(void*)sGCIncNode_compile;
                                                    _inf_value17->sline=(void*)sGCIncNode_sline;
                                                    _inf_value17->sname=(void*)sGCIncNode_sname;
                                                    _inf_value17->terminated=(void*)sGCIncNode_terminated;
                                                    _inf_value17->kind=(void*)sGCIncNode_kind;
                                                    __result253__ = __result_obj__ = ((struct sNode*)(right_value365=_inf_value17));
                                                    if(node_163 && !__freed_obj__) { node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0, 0); } 
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value360);
                                                    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value360;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value361);
                                                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value361;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value365);
                                                    if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[3] = right_value365;
                                                    __freed_obj__ = 0;
                                                    return __result253__;
                                                    if(node_163 && !__freed_obj__) { node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0, 0); } 
                                                }
                                                else {
                                                    if(_if_conditional294=(come_push_stackframe("21obj.c", 1586),__exception_result_var_b250=charp_operator_equals(buf,"gc_dec"), come_pop_stackframe(), __exception_result_var_b250)&&*((struct sInfo*)come_null_check(info, "21obj.c", 1586))->p==40,                                                    _if_conditional294) {
                                                        ((struct sInfo*)come_null_check(info, "21obj.c", 1587))->p++;
                                                        (come_push_stackframe("21obj.c", 1588),skip_spaces_and_lf(info),come_pop_stackframe());
                                                        node_165=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1590),__exception_result_var_b251=((struct sNode*)(right_value366=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b251));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
                                                        if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[0] = right_value366;
                                                        __freed_obj__ = 0;
                                                        (come_push_stackframe("21obj.c", 1592),__exception_result_var_b252=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b252);
                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1594, "struct sNode");
                                                        _inf_obj_value18=come_increment_ref_count((come_push_stackframe("21obj.c", 1594),__exception_result_var_b253=((struct sGCDecNode*)(right_value368=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value367=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1594, "struct sGCDecNode")))),(struct sNode*)come_increment_ref_count(node_165),info))), come_pop_stackframe(), __exception_result_var_b253));
                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                        _inf_value18->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value18->clone=(void*)sGCDecNode_clone;
                                                        _inf_value18->compile=(void*)sGCDecNode_compile;
                                                        _inf_value18->sline=(void*)sGCDecNode_sline;
                                                        _inf_value18->sname=(void*)sGCDecNode_sname;
                                                        _inf_value18->terminated=(void*)sGCDecNode_terminated;
                                                        _inf_value18->kind=(void*)sGCDecNode_kind;
                                                        __result256__ = __result_obj__ = ((struct sNode*)(right_value372=_inf_value18));
                                                        if(node_165 && !__freed_obj__) { node_165 = come_decrement_ref_count(node_165, ((struct sNode*)node_165)->finalize, ((struct sNode*)node_165)->_protocol_obj, 0, 0, 0); } 
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value367);
                                                        if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[1] = right_value367;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value368);
                                                        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[2] = right_value368;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value372);
                                                        if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[3] = right_value372;
                                                        __freed_obj__ = 0;
                                                        return __result256__;
                                                        if(node_165 && !__freed_obj__) { node_165 = come_decrement_ref_count(node_165, ((struct sNode*)node_165)->finalize, ((struct sNode*)node_165)->_protocol_obj, 0, 0, 0); } 
                                                    }
                                                    else {
                                                        if(_if_conditional301=(come_push_stackframe("21obj.c", 1596),__exception_result_var_b254=charp_operator_equals(buf,"isheap"), come_pop_stackframe(), __exception_result_var_b254)&&*((struct sInfo*)come_null_check(info, "21obj.c", 1596))->p==40,                                                        _if_conditional301) {
                                                            ((struct sInfo*)come_null_check(info, "21obj.c", 1597))->p++;
                                                            (come_push_stackframe("21obj.c", 1598),skip_spaces_and_lf(info),come_pop_stackframe());
                                                            multiple_assign_var5=(come_push_stackframe("21obj.c", 1600),__exception_result_var_b255=((struct tuple3$3sTypephcharphbool*)(right_value373=parse_type(info,(_Bool)0,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b255);
                                                            param_type_167=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                            param_name_168=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                            err_169=multiple_assign_var5->v3;
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value373);
                                                            if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value373;
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional302=!err_169,                                                            _if_conditional302) {
                                                                (come_push_stackframe("21obj.c", 1602),err_msg(info,"parse_type failed"),come_pop_stackframe());
                                                                (come_push_stackframe("21obj.c", 1603),exit(2),come_pop_stackframe());
                                                            }
                                                            type2_170=(struct sType*)come_increment_ref_count((come_push_stackframe("21obj.c", 1606),__exception_result_var_b256=((struct sType*)(right_value374=solve_generics(param_type_167,((struct sInfo*)come_null_check(info, "21obj.c", 1606))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b256));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value374);
                                                            if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[1] = right_value374;
                                                            __freed_obj__ = 0;
                                                            (come_push_stackframe("21obj.c", 1608),__exception_result_var_b257=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b257);
                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1610, "struct sNode");
                                                            _inf_obj_value19=come_increment_ref_count((come_push_stackframe("21obj.c", 1610),__exception_result_var_b258=((struct sIsHeap*)(right_value376=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value375=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1610, "struct sIsHeap")))),(struct sType*)come_increment_ref_count(type2_170),info))), come_pop_stackframe(), __exception_result_var_b258));
                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                            _inf_value19->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value19->clone=(void*)sIsHeap_clone;
                                                            _inf_value19->compile=(void*)sIsHeap_compile;
                                                            _inf_value19->sline=(void*)sIsHeap_sline;
                                                            _inf_value19->sname=(void*)sIsHeap_sname;
                                                            _inf_value19->terminated=(void*)sIsHeap_terminated;
                                                            _inf_value19->kind=(void*)sIsHeap_kind;
                                                            __result259__ = __result_obj__ = ((struct sNode*)(right_value380=_inf_value19));
                                                            if(param_type_167 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_167, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            if(param_name_168 && !__freed_obj__) { param_name_168 = come_decrement_ref_count(param_name_168, (void*)0, (void*)0, 0, 0, 0); }
                                                            if(type2_170 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_170, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value375);
                                                            if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[2] = right_value375;
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value376);
                                                            if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[3] = right_value376;
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value380);
                                                            if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0); } 
                                                            __right_value_freed_obj[4] = right_value380;
                                                            __freed_obj__ = 0;
                                                            return __result259__;
                                                            if(param_type_167 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_167, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            if(param_name_168 && !__freed_obj__) { param_name_168 = come_decrement_ref_count(param_name_168, (void*)0, (void*)0, 0, 0, 0); }
                                                            if(type2_170 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_170, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
                                                        else {
                                                            if(_if_conditional309=(come_push_stackframe("21obj.c", 1612),__exception_result_var_b259=charp_operator_equals(buf,"using"), come_pop_stackframe(), __exception_result_var_b259),                                                            _if_conditional309) {
                                                                if(_if_conditional310=(come_push_stackframe("21obj.c", 1613),__exception_result_var_b260=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1613))->p,"comelang"), come_pop_stackframe(), __exception_result_var_b260),                                                                _if_conditional310) {
                                                                    ((struct sInfo*)come_null_check(info, "21obj.c", 1614))->p+=(come_push_stackframe("21obj.c", 1614),__exception_result_var_b261=strlen("comelang"), come_pop_stackframe(), __exception_result_var_b261);
                                                                    (come_push_stackframe("21obj.c", 1615),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                    gComeC=(_Bool)0;
                                                                    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1619, "struct sNode");
                                                                    _inf_obj_value20=come_increment_ref_count((come_push_stackframe("21obj.c", 1619),__exception_result_var_b262=((struct sNullNodeX*)(right_value382=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value381=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1619, "struct sNullNodeX")))),info))), come_pop_stackframe(), __exception_result_var_b262));
                                                                    _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                    _inf_value20->finalize=(void*)sNullNodeX_finalize;
                                                                    _inf_value20->clone=(void*)sNullNodeX_clone;
                                                                    _inf_value20->compile=(void*)sNullNodeX_compile;
                                                                    _inf_value20->sline=(void*)sNullNodeX_sline;
                                                                    _inf_value20->sname=(void*)sNullNodeX_sname;
                                                                    _inf_value20->terminated=(void*)sNullNodeX_terminated;
                                                                    _inf_value20->kind=(void*)sNullNodeX_kind;
                                                                    __result262__ = __result_obj__ = ((struct sNode*)(right_value385=_inf_value20));
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value381);
                                                                    if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value381;
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value382);
                                                                    if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[1] = right_value382;
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value385);
                                                                    if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0); } 
                                                                    __right_value_freed_obj[2] = right_value385;
                                                                    __freed_obj__ = 0;
                                                                    return __result262__;
                                                                }
                                                                else {
                                                                    if(_if_conditional315=(come_push_stackframe("21obj.c", 1621),__exception_result_var_b263=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1621))->p,"c"), come_pop_stackframe(), __exception_result_var_b263)||(come_push_stackframe("21obj.c", 1621),__exception_result_var_b264=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1621))->p,"C"), come_pop_stackframe(), __exception_result_var_b264),                                                                    _if_conditional315) {
                                                                        ((struct sInfo*)come_null_check(info, "21obj.c", 1622))->p+=(come_push_stackframe("21obj.c", 1622),__exception_result_var_b265=strlen("c"), come_pop_stackframe(), __exception_result_var_b265);
                                                                        (come_push_stackframe("21obj.c", 1623),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                        gComeC=(_Bool)1;
                                                                        if(_if_conditional316=*((struct sInfo*)come_null_check(info, "21obj.c", 1627))->p==123,                                                                        _if_conditional316) {
                                                                            node_173=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1628),__exception_result_var_b266=((struct sNode*)(right_value386=parse_normal_block(info))), come_pop_stackframe(), __exception_result_var_b266));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
                                                                            if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[0] = right_value386;
                                                                            __freed_obj__ = 0;
                                                                            gComeC=(_Bool)0;
                                                                            __result263__ = __result_obj__ = node_173;
                                                                            if(node_173 && !__freed_obj__) { node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0, 1, 0); } 
                                                                            return __result263__;
                                                                            if(node_173 && !__freed_obj__) { node_173 = come_decrement_ref_count(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0, 0, 0); } 
                                                                        }
                                                                        else {
                                                                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1635, "struct sNode");
                                                                            _inf_obj_value21=come_increment_ref_count((come_push_stackframe("21obj.c", 1635),__exception_result_var_b267=((struct sNullNodeX*)(right_value388=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value387=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1635, "struct sNullNodeX")))),info))), come_pop_stackframe(), __exception_result_var_b267));
                                                                            _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                            _inf_value21->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value21->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value21->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value21->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value21->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value21->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value21->kind=(void*)sNullNodeX_kind;
                                                                            __result266__ = __result_obj__ = ((struct sNode*)(right_value391=_inf_value21));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
                                                                            if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value387;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value388);
                                                                            if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[1] = right_value388;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value391);
                                                                            if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[2] = right_value391;
                                                                            __freed_obj__ = 0;
                                                                            return __result266__;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional321=(come_push_stackframe("21obj.c", 1638),__exception_result_var_b268=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1638))->p,"gc"), come_pop_stackframe(), __exception_result_var_b268),                                                                        _if_conditional321) {
                                                                            ((struct sInfo*)come_null_check(info, "21obj.c", 1639))->p+=(come_push_stackframe("21obj.c", 1639),__exception_result_var_b269=strlen("gc"), come_pop_stackframe(), __exception_result_var_b269);
                                                                            (come_push_stackframe("21obj.c", 1640),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1642, "struct sNode");
                                                                            _inf_obj_value22=come_increment_ref_count((come_push_stackframe("21obj.c", 1642),__exception_result_var_b270=((struct sNullNodeX*)(right_value393=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value392=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1642, "struct sNullNodeX")))),info))), come_pop_stackframe(), __exception_result_var_b270));
                                                                            _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                            _inf_value22->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value22->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value22->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value22->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value22->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value22->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value22->kind=(void*)sNullNodeX_kind;
                                                                            __result269__ = __result_obj__ = ((struct sNode*)(right_value396=_inf_value22));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value392);
                                                                            if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value392;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value393);
                                                                            if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[1] = right_value393;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value396);
                                                                            if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[2] = right_value396;
                                                                            __freed_obj__ = 0;
                                                                            return __result269__;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional326=(come_push_stackframe("21obj.c", 1644),__exception_result_var_b271=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1644))->p,"no-gc"), come_pop_stackframe(), __exception_result_var_b271),                                                                            _if_conditional326) {
                                                                                ((struct sInfo*)come_null_check(info, "21obj.c", 1645))->p+=(come_push_stackframe("21obj.c", 1645),__exception_result_var_b272=strlen("no-gc"), come_pop_stackframe(), __exception_result_var_b272);
                                                                                (come_push_stackframe("21obj.c", 1646),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1649, "struct sNode");
                                                                                _inf_obj_value23=come_increment_ref_count((come_push_stackframe("21obj.c", 1649),__exception_result_var_b273=((struct sNullNodeX*)(right_value398=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value397=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1649, "struct sNullNodeX")))),info))), come_pop_stackframe(), __exception_result_var_b273));
                                                                                _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                _inf_value23->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value23->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value23->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value23->sline=(void*)sNullNodeX_sline;
                                                                                _inf_value23->sname=(void*)sNullNodeX_sname;
                                                                                _inf_value23->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value23->kind=(void*)sNullNodeX_kind;
                                                                                __result272__ = __result_obj__ = ((struct sNode*)(right_value401=_inf_value23));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value397);
                                                                                if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value397;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value398);
                                                                                if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[1] = right_value398;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value401);
                                                                                if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { right_value401 = come_decrement_ref_count(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0); } 
                                                                                __right_value_freed_obj[2] = right_value401;
                                                                                __freed_obj__ = 0;
                                                                                return __result272__;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional331=(come_push_stackframe("21obj.c", 1651),__exception_result_var_b274=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1651))->p,"unsafe"), come_pop_stackframe(), __exception_result_var_b274),                                                                                _if_conditional331) {
                                                                                    ((struct sInfo*)come_null_check(info, "21obj.c", 1652))->p+=(come_push_stackframe("21obj.c", 1652),__exception_result_var_b275=strlen("unsafe"), come_pop_stackframe(), __exception_result_var_b275);
                                                                                    (come_push_stackframe("21obj.c", 1653),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                                    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1655, "struct sNode");
                                                                                    _inf_obj_value24=come_increment_ref_count((come_push_stackframe("21obj.c", 1655),__exception_result_var_b276=((struct sNullNodeX*)(right_value403=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value402=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1655, "struct sNullNodeX")))),info))), come_pop_stackframe(), __exception_result_var_b276));
                                                                                    _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                    _inf_value24->finalize=(void*)sNullNodeX_finalize;
                                                                                    _inf_value24->clone=(void*)sNullNodeX_clone;
                                                                                    _inf_value24->compile=(void*)sNullNodeX_compile;
                                                                                    _inf_value24->sline=(void*)sNullNodeX_sline;
                                                                                    _inf_value24->sname=(void*)sNullNodeX_sname;
                                                                                    _inf_value24->terminated=(void*)sNullNodeX_terminated;
                                                                                    _inf_value24->kind=(void*)sNullNodeX_kind;
                                                                                    __result275__ = __result_obj__ = ((struct sNode*)(right_value406=_inf_value24));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value402);
                                                                                    if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value402;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value403);
                                                                                    if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[1] = right_value403;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value406);
                                                                                    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0); } 
                                                                                    __right_value_freed_obj[2] = right_value406;
                                                                                    __freed_obj__ = 0;
                                                                                    return __result275__;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional336=(come_push_stackframe("21obj.c", 1657),__exception_result_var_b277=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1657))->p,"no-null-check"), come_pop_stackframe(), __exception_result_var_b277),                                                                                    _if_conditional336) {
                                                                                        ((struct sInfo*)come_null_check(info, "21obj.c", 1658))->p+=(come_push_stackframe("21obj.c", 1658),__exception_result_var_b278=strlen("no-null-check"), come_pop_stackframe(), __exception_result_var_b278);
                                                                                        (come_push_stackframe("21obj.c", 1659),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1661, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count((come_push_stackframe("21obj.c", 1661),__exception_result_var_b279=((struct sNullNodeX*)(right_value408=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value407=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1661, "struct sNullNodeX")))),info))), come_pop_stackframe(), __exception_result_var_b279));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sNullNodeX_finalize;
                                                                                        _inf_value25->clone=(void*)sNullNodeX_clone;
                                                                                        _inf_value25->compile=(void*)sNullNodeX_compile;
                                                                                        _inf_value25->sline=(void*)sNullNodeX_sline;
                                                                                        _inf_value25->sname=(void*)sNullNodeX_sname;
                                                                                        _inf_value25->terminated=(void*)sNullNodeX_terminated;
                                                                                        _inf_value25->kind=(void*)sNullNodeX_kind;
                                                                                        __result278__ = __result_obj__ = ((struct sNode*)(right_value411=_inf_value25));
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value407);
                                                                                        if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value407;
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value408);
                                                                                        if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[1] = right_value408;
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value411);
                                                                                        if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { right_value411 = come_decrement_ref_count(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0); } 
                                                                                        __right_value_freed_obj[2] = right_value411;
                                                                                        __freed_obj__ = 0;
                                                                                        return __result278__;
                                                                                    }
                                                                                    else {
                                                                                        (come_push_stackframe("21obj.c", 1664),err_msg(info,"invalid using"),come_pop_stackframe());
                                                                                        (come_push_stackframe("21obj.c", 1665),exit(2),come_pop_stackframe());
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                if(_if_conditional341=(come_push_stackframe("21obj.c", 1668),__exception_result_var_b280=charp_operator_equals(buf,"sizeof"), come_pop_stackframe(), __exception_result_var_b280),                                                                _if_conditional341) {
                                                                    (come_push_stackframe("21obj.c", 1669),__exception_result_var_b281=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b281);
                                                                    is_type_name_flag_179=(_Bool)0;
                                                                    {
                                                                        p_180=((struct sInfo*)come_null_check(info, "21obj.c", 1674))->p;
                                                                        sline_181=((struct sInfo*)come_null_check(info, "21obj.c", 1675))->sline;
                                                                        if(_if_conditional342=(come_push_stackframe("21obj.c", 1677),__exception_result_var_b282=xisalpha(*((struct sInfo*)come_null_check(info, "21obj.c", 1677))->p), come_pop_stackframe(), __exception_result_var_b282)||*((struct sInfo*)come_null_check(info, "21obj.c", 1677))->p==95,                                                                        _if_conditional342) {
                                                                            word_182=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1678),__exception_result_var_b283=((char*)(right_value412=parse_word(info))), come_pop_stackframe(), __exception_result_var_b283));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value412);
                                                                            if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value412;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional343=(come_push_stackframe("21obj.c", 1680),__exception_result_var_b284=is_type_name(word_182,info), come_pop_stackframe(), __exception_result_var_b284),                                                                            _if_conditional343) {
                                                                                is_type_name_flag_179=(_Bool)1;
                                                                            }
                                                                            if(word_182 && !__freed_obj__) { word_182 = come_decrement_ref_count(word_182, (void*)0, (void*)0, 0, 0, 0); }
                                                                        }
                                                                        ((struct sInfo*)come_null_check(info, "21obj.c", 1685))->p=p_180;
                                                                        ((struct sInfo*)come_null_check(info, "21obj.c", 1686))->sline=sline_181;
                                                                    }
                                                                    if(_if_conditional344=is_type_name_flag_179,                                                                    _if_conditional344) {
                                                                        multiple_assign_var6=(come_push_stackframe("21obj.c", 1690),__exception_result_var_b285=((struct tuple3$3sTypephcharphbool*)(right_value413=parse_type(info,(_Bool)0,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b285);
                                                                        type_183=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                                                        name_184=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                                                        err_185=multiple_assign_var6->v3;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value413);
                                                                        if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value413;
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional345=!err_185,                                                                        _if_conditional345) {
                                                                            (come_push_stackframe("21obj.c", 1692),err_msg(info,"parse type"),come_pop_stackframe());
                                                                            (come_push_stackframe("21obj.c", 1693),exit(2),come_pop_stackframe());
                                                                        }
                                                                        (come_push_stackframe("21obj.c", 1696),__exception_result_var_b286=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b286);
                                                                        _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1698, "struct sNode");
                                                                        _inf_obj_value26=come_increment_ref_count((come_push_stackframe("21obj.c", 1698),__exception_result_var_b287=((struct sSizeOfNode*)(right_value415=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value414=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1698, "struct sSizeOfNode")))),(struct sType*)come_increment_ref_count(type_183),info))), come_pop_stackframe(), __exception_result_var_b287));
                                                                        _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                        _inf_value26->finalize=(void*)sSizeOfNode_finalize;
                                                                        _inf_value26->clone=(void*)sSizeOfNode_clone;
                                                                        _inf_value26->compile=(void*)sSizeOfNode_compile;
                                                                        _inf_value26->sline=(void*)sSizeOfNode_sline;
                                                                        _inf_value26->sname=(void*)sSizeOfNode_sname;
                                                                        _inf_value26->terminated=(void*)sSizeOfNode_terminated;
                                                                        _inf_value26->kind=(void*)sSizeOfNode_kind;
                                                                        __result281__ = __result_obj__ = ((struct sNode*)(right_value419=_inf_value26));
                                                                        if(type_183 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_183, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        if(name_184 && !__freed_obj__) { name_184 = come_decrement_ref_count(name_184, (void*)0, (void*)0, 0, 0, 0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value414);
                                                                        if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[1] = right_value414;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value415);
                                                                        if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[2] = right_value415;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value419);
                                                                        if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0); } 
                                                                        __right_value_freed_obj[3] = right_value419;
                                                                        __freed_obj__ = 0;
                                                                        return __result281__;
                                                                        if(type_183 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_183, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        if(name_184 && !__freed_obj__) { name_184 = come_decrement_ref_count(name_184, (void*)0, (void*)0, 0, 0, 0); }
                                                                    }
                                                                    else {
                                                                        exp_187=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1701),__exception_result_var_b288=((struct sNode*)(right_value420=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b288));
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value420);
                                                                        if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { right_value420 = come_decrement_ref_count(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0); } 
                                                                        __right_value_freed_obj[0] = right_value420;
                                                                        __freed_obj__ = 0;
                                                                        (come_push_stackframe("21obj.c", 1703),__exception_result_var_b289=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b289);
                                                                        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1705, "struct sNode");
                                                                        _inf_obj_value27=come_increment_ref_count((come_push_stackframe("21obj.c", 1705),__exception_result_var_b290=((struct sSizeOfExpNode*)(right_value422=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value421=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1705, "struct sSizeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_187),info))), come_pop_stackframe(), __exception_result_var_b290));
                                                                        _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                        _inf_value27->finalize=(void*)sSizeOfExpNode_finalize;
                                                                        _inf_value27->clone=(void*)sSizeOfExpNode_clone;
                                                                        _inf_value27->compile=(void*)sSizeOfExpNode_compile;
                                                                        _inf_value27->sline=(void*)sSizeOfExpNode_sline;
                                                                        _inf_value27->sname=(void*)sSizeOfExpNode_sname;
                                                                        _inf_value27->terminated=(void*)sSizeOfExpNode_terminated;
                                                                        _inf_value27->kind=(void*)sSizeOfExpNode_kind;
                                                                        __result284__ = __result_obj__ = ((struct sNode*)(right_value426=_inf_value27));
                                                                        if(exp_187 && !__freed_obj__) { exp_187 = come_decrement_ref_count(exp_187, ((struct sNode*)exp_187)->finalize, ((struct sNode*)exp_187)->_protocol_obj, 0, 0, 0); } 
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value421);
                                                                        if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[1] = right_value421;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value422);
                                                                        if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[2] = right_value422;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value426);
                                                                        if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { right_value426 = come_decrement_ref_count(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0); } 
                                                                        __right_value_freed_obj[3] = right_value426;
                                                                        __freed_obj__ = 0;
                                                                        return __result284__;
                                                                        if(exp_187 && !__freed_obj__) { exp_187 = come_decrement_ref_count(exp_187, ((struct sNode*)exp_187)->finalize, ((struct sNode*)exp_187)->_protocol_obj, 0, 0, 0); } 
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional358=(come_push_stackframe("21obj.c", 1708),__exception_result_var_b291=charp_operator_equals(buf,"_Alignof"), come_pop_stackframe(), __exception_result_var_b291),                                                                    _if_conditional358) {
                                                                        (come_push_stackframe("21obj.c", 1709),__exception_result_var_b292=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b292);
                                                                        is_type_name_flag_189=(_Bool)0;
                                                                        {
                                                                            p_190=((struct sInfo*)come_null_check(info, "21obj.c", 1714))->p;
                                                                            sline_191=((struct sInfo*)come_null_check(info, "21obj.c", 1715))->sline;
                                                                            if(_if_conditional359=(come_push_stackframe("21obj.c", 1717),__exception_result_var_b293=xisalpha(*((struct sInfo*)come_null_check(info, "21obj.c", 1717))->p), come_pop_stackframe(), __exception_result_var_b293)||*((struct sInfo*)come_null_check(info, "21obj.c", 1717))->p==95,                                                                            _if_conditional359) {
                                                                                word_192=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1718),__exception_result_var_b294=((char*)(right_value427=parse_word(info))), come_pop_stackframe(), __exception_result_var_b294));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value427);
                                                                                if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value427;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional360=(come_push_stackframe("21obj.c", 1720),__exception_result_var_b295=is_type_name(word_192,info), come_pop_stackframe(), __exception_result_var_b295),                                                                                _if_conditional360) {
                                                                                    is_type_name_flag_189=(_Bool)1;
                                                                                }
                                                                                if(word_192 && !__freed_obj__) { word_192 = come_decrement_ref_count(word_192, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
                                                                            ((struct sInfo*)come_null_check(info, "21obj.c", 1725))->p=p_190;
                                                                            ((struct sInfo*)come_null_check(info, "21obj.c", 1726))->sline=sline_191;
                                                                        }
                                                                        if(_if_conditional361=is_type_name_flag_189,                                                                        _if_conditional361) {
                                                                            multiple_assign_var7=(come_push_stackframe("21obj.c", 1730),__exception_result_var_b296=((struct tuple3$3sTypephcharphbool*)(right_value428=parse_type(info,(_Bool)0,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b296);
                                                                            type_193=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                                                            name_194=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                                                            err_195=multiple_assign_var7->v3;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value428);
                                                                            if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value428;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional362=!err_195,                                                                            _if_conditional362) {
                                                                                (come_push_stackframe("21obj.c", 1732),err_msg(info,"parse type"),come_pop_stackframe());
                                                                                (come_push_stackframe("21obj.c", 1733),exit(2),come_pop_stackframe());
                                                                            }
                                                                            (come_push_stackframe("21obj.c", 1736),__exception_result_var_b297=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b297);
                                                                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1738, "struct sNode");
                                                                            _inf_obj_value28=come_increment_ref_count((come_push_stackframe("21obj.c", 1738),__exception_result_var_b298=((struct sAlignOfNode*)(right_value430=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value429=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1738, "struct sAlignOfNode")))),(struct sType*)come_increment_ref_count(type_193),info))), come_pop_stackframe(), __exception_result_var_b298));
                                                                            _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                            _inf_value28->finalize=(void*)sAlignOfNode_finalize;
                                                                            _inf_value28->clone=(void*)sAlignOfNode_clone;
                                                                            _inf_value28->compile=(void*)sAlignOfNode_compile;
                                                                            _inf_value28->sline=(void*)sAlignOfNode_sline;
                                                                            _inf_value28->sname=(void*)sAlignOfNode_sname;
                                                                            _inf_value28->terminated=(void*)sAlignOfNode_terminated;
                                                                            _inf_value28->kind=(void*)sAlignOfNode_kind;
                                                                            __result287__ = __result_obj__ = ((struct sNode*)(right_value434=_inf_value28));
                                                                            if(type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            if(name_194 && !__freed_obj__) { name_194 = come_decrement_ref_count(name_194, (void*)0, (void*)0, 0, 0, 0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value429);
                                                                            if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[1] = right_value429;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value430);
                                                                            if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[2] = right_value430;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value434);
                                                                            if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { right_value434 = come_decrement_ref_count(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[3] = right_value434;
                                                                            __freed_obj__ = 0;
                                                                            return __result287__;
                                                                            if(type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            if(name_194 && !__freed_obj__) { name_194 = come_decrement_ref_count(name_194, (void*)0, (void*)0, 0, 0, 0); }
                                                                        }
                                                                        else {
                                                                            exp_197=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1741),__exception_result_var_b299=((struct sNode*)(right_value435=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b299));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value435);
                                                                            if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[0] = right_value435;
                                                                            __freed_obj__ = 0;
                                                                            (come_push_stackframe("21obj.c", 1743),__exception_result_var_b300=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b300);
                                                                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1745, "struct sNode");
                                                                            _inf_obj_value29=come_increment_ref_count((come_push_stackframe("21obj.c", 1745),__exception_result_var_b301=((struct sAlignOfExpNode*)(right_value437=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value436=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1745, "struct sAlignOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_197),info))), come_pop_stackframe(), __exception_result_var_b301));
                                                                            _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                            _inf_value29->finalize=(void*)sAlignOfExpNode_finalize;
                                                                            _inf_value29->clone=(void*)sAlignOfExpNode_clone;
                                                                            _inf_value29->compile=(void*)sAlignOfExpNode_compile;
                                                                            _inf_value29->sline=(void*)sAlignOfExpNode_sline;
                                                                            _inf_value29->sname=(void*)sAlignOfExpNode_sname;
                                                                            _inf_value29->terminated=(void*)sAlignOfExpNode_terminated;
                                                                            _inf_value29->kind=(void*)sAlignOfExpNode_kind;
                                                                            __result290__ = __result_obj__ = ((struct sNode*)(right_value441=_inf_value29));
                                                                            if(exp_197 && !__freed_obj__) { exp_197 = come_decrement_ref_count(exp_197, ((struct sNode*)exp_197)->finalize, ((struct sNode*)exp_197)->_protocol_obj, 0, 0, 0); } 
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value436);
                                                                            if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[1] = right_value436;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value437);
                                                                            if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[2] = right_value437;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value441);
                                                                            if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { right_value441 = come_decrement_ref_count(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[3] = right_value441;
                                                                            __freed_obj__ = 0;
                                                                            return __result290__;
                                                                            if(exp_197 && !__freed_obj__) { exp_197 = come_decrement_ref_count(exp_197, ((struct sNode*)exp_197)->finalize, ((struct sNode*)exp_197)->_protocol_obj, 0, 0, 0); } 
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional375=(come_push_stackframe("21obj.c", 1748),__exception_result_var_b302=charp_operator_equals(buf,"__alignof__"), come_pop_stackframe(), __exception_result_var_b302),                                                                        _if_conditional375) {
                                                                            (come_push_stackframe("21obj.c", 1749),__exception_result_var_b303=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b303);
                                                                            is_type_name_flag_199=(_Bool)0;
                                                                            {
                                                                                p_200=((struct sInfo*)come_null_check(info, "21obj.c", 1754))->p;
                                                                                sline_201=((struct sInfo*)come_null_check(info, "21obj.c", 1755))->sline;
                                                                                if(_if_conditional376=(come_push_stackframe("21obj.c", 1757),__exception_result_var_b304=xisalpha(*((struct sInfo*)come_null_check(info, "21obj.c", 1757))->p), come_pop_stackframe(), __exception_result_var_b304)||*((struct sInfo*)come_null_check(info, "21obj.c", 1757))->p==95,                                                                                _if_conditional376) {
                                                                                    word_202=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1758),__exception_result_var_b305=((char*)(right_value442=parse_word(info))), come_pop_stackframe(), __exception_result_var_b305));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value442);
                                                                                    if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { right_value442 = come_decrement_ref_count(right_value442, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value442;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional377=(come_push_stackframe("21obj.c", 1760),__exception_result_var_b306=is_type_name(word_202,info), come_pop_stackframe(), __exception_result_var_b306),                                                                                    _if_conditional377) {
                                                                                        is_type_name_flag_199=(_Bool)1;
                                                                                    }
                                                                                    if(word_202 && !__freed_obj__) { word_202 = come_decrement_ref_count(word_202, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
                                                                                ((struct sInfo*)come_null_check(info, "21obj.c", 1765))->p=p_200;
                                                                                ((struct sInfo*)come_null_check(info, "21obj.c", 1766))->sline=sline_201;
                                                                            }
                                                                            if(_if_conditional378=is_type_name_flag_199,                                                                            _if_conditional378) {
                                                                                multiple_assign_var8=(come_push_stackframe("21obj.c", 1770),__exception_result_var_b307=((struct tuple3$3sTypephcharphbool*)(right_value443=parse_type(info,(_Bool)0,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b307);
                                                                                type_203=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                name_204=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                err_205=multiple_assign_var8->v3;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value443);
                                                                                if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value443;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional379=!err_205,                                                                                _if_conditional379) {
                                                                                    (come_push_stackframe("21obj.c", 1772),err_msg(info,"parse type"),come_pop_stackframe());
                                                                                    (come_push_stackframe("21obj.c", 1773),exit(2),come_pop_stackframe());
                                                                                }
                                                                                (come_push_stackframe("21obj.c", 1776),__exception_result_var_b308=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b308);
                                                                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1778, "struct sNode");
                                                                                _inf_obj_value30=come_increment_ref_count((come_push_stackframe("21obj.c", 1778),__exception_result_var_b309=((struct sAlignOfNode2*)(right_value445=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value444=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1778, "struct sAlignOfNode2")))),(struct sType*)come_increment_ref_count(type_203),info))), come_pop_stackframe(), __exception_result_var_b309));
                                                                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                _inf_value30->finalize=(void*)sAlignOfNode2_finalize;
                                                                                _inf_value30->clone=(void*)sAlignOfNode2_clone;
                                                                                _inf_value30->compile=(void*)sAlignOfNode2_compile;
                                                                                _inf_value30->sline=(void*)sAlignOfNode2_sline;
                                                                                _inf_value30->sname=(void*)sAlignOfNode2_sname;
                                                                                _inf_value30->terminated=(void*)sAlignOfNode2_terminated;
                                                                                _inf_value30->kind=(void*)sAlignOfNode2_kind;
                                                                                __result293__ = __result_obj__ = ((struct sNode*)(right_value449=_inf_value30));
                                                                                if(type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                if(name_204 && !__freed_obj__) { name_204 = come_decrement_ref_count(name_204, (void*)0, (void*)0, 0, 0, 0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value444);
                                                                                if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[1] = right_value444;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value445);
                                                                                if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[2] = right_value445;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value449);
                                                                                if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { right_value449 = come_decrement_ref_count(right_value449, ((struct sNode*)right_value449)->finalize, ((struct sNode*)right_value449)->_protocol_obj, 1, 0, 0); } 
                                                                                __right_value_freed_obj[3] = right_value449;
                                                                                __freed_obj__ = 0;
                                                                                return __result293__;
                                                                                if(type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                if(name_204 && !__freed_obj__) { name_204 = come_decrement_ref_count(name_204, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
                                                                            else {
                                                                                exp_207=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1781),__exception_result_var_b310=((struct sNode*)(right_value450=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b310));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value450);
                                                                                if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { right_value450 = come_decrement_ref_count(right_value450, ((struct sNode*)right_value450)->finalize, ((struct sNode*)right_value450)->_protocol_obj, 1, 0, 0); } 
                                                                                __right_value_freed_obj[0] = right_value450;
                                                                                __freed_obj__ = 0;
                                                                                (come_push_stackframe("21obj.c", 1783),__exception_result_var_b311=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b311);
                                                                                _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1785, "struct sNode");
                                                                                _inf_obj_value31=come_increment_ref_count((come_push_stackframe("21obj.c", 1785),__exception_result_var_b312=((struct sAlignOfExpNode2*)(right_value452=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value451=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1785, "struct sAlignOfExpNode2")))),(struct sNode*)come_increment_ref_count(exp_207),info))), come_pop_stackframe(), __exception_result_var_b312));
                                                                                _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                _inf_value31->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                _inf_value31->clone=(void*)sAlignOfExpNode2_clone;
                                                                                _inf_value31->compile=(void*)sAlignOfExpNode2_compile;
                                                                                _inf_value31->sline=(void*)sAlignOfExpNode2_sline;
                                                                                _inf_value31->sname=(void*)sAlignOfExpNode2_sname;
                                                                                _inf_value31->terminated=(void*)sAlignOfExpNode2_terminated;
                                                                                _inf_value31->kind=(void*)sAlignOfExpNode2_kind;
                                                                                __result296__ = __result_obj__ = ((struct sNode*)(right_value456=_inf_value31));
                                                                                if(exp_207 && !__freed_obj__) { exp_207 = come_decrement_ref_count(exp_207, ((struct sNode*)exp_207)->finalize, ((struct sNode*)exp_207)->_protocol_obj, 0, 0, 0); } 
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value451);
                                                                                if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[1] = right_value451;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value452);
                                                                                if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[2] = right_value452;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value456);
                                                                                if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { right_value456 = come_decrement_ref_count(right_value456, ((struct sNode*)right_value456)->finalize, ((struct sNode*)right_value456)->_protocol_obj, 1, 0, 0); } 
                                                                                __right_value_freed_obj[3] = right_value456;
                                                                                __freed_obj__ = 0;
                                                                                return __result296__;
                                                                                if(exp_207 && !__freed_obj__) { exp_207 = come_decrement_ref_count(exp_207, ((struct sNode*)exp_207)->finalize, ((struct sNode*)exp_207)->_protocol_obj, 0, 0, 0); } 
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional392=(come_push_stackframe("21obj.c", 1788),__exception_result_var_b313=charp_operator_equals(buf,"_Alignas"), come_pop_stackframe(), __exception_result_var_b313),                                                                            _if_conditional392) {
                                                                                (come_push_stackframe("21obj.c", 1789),__exception_result_var_b314=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b314);
                                                                                is_type_name_flag_209=(_Bool)0;
                                                                                {
                                                                                    p_210=((struct sInfo*)come_null_check(info, "21obj.c", 1794))->p;
                                                                                    sline_211=((struct sInfo*)come_null_check(info, "21obj.c", 1795))->sline;
                                                                                    if(_if_conditional393=(come_push_stackframe("21obj.c", 1797),__exception_result_var_b315=xisalpha(*((struct sInfo*)come_null_check(info, "21obj.c", 1797))->p), come_pop_stackframe(), __exception_result_var_b315)||*((struct sInfo*)come_null_check(info, "21obj.c", 1797))->p==95,                                                                                    _if_conditional393) {
                                                                                        word_212=(char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1798),__exception_result_var_b316=((char*)(right_value457=parse_word(info))), come_pop_stackframe(), __exception_result_var_b316));
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value457);
                                                                                        if(right_value457 && right_value457 != __result_obj__ && !__freed_obj__) { right_value457 = come_decrement_ref_count(right_value457, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value457;
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional394=(come_push_stackframe("21obj.c", 1800),__exception_result_var_b317=is_type_name(word_212,info), come_pop_stackframe(), __exception_result_var_b317),                                                                                        _if_conditional394) {
                                                                                            is_type_name_flag_209=(_Bool)1;
                                                                                        }
                                                                                        if(word_212 && !__freed_obj__) { word_212 = come_decrement_ref_count(word_212, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    }
                                                                                    ((struct sInfo*)come_null_check(info, "21obj.c", 1805))->p=p_210;
                                                                                    ((struct sInfo*)come_null_check(info, "21obj.c", 1806))->sline=sline_211;
                                                                                }
                                                                                if(_if_conditional395=is_type_name_flag_209,                                                                                _if_conditional395) {
                                                                                    multiple_assign_var9=(come_push_stackframe("21obj.c", 1810),__exception_result_var_b318=((struct tuple3$3sTypephcharphbool*)(right_value458=parse_type(info,(_Bool)0,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b318);
                                                                                    type_213=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                                                    name_214=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                                                    err_215=multiple_assign_var9->v3;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value458);
                                                                                    if(right_value458 && right_value458 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value458;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional396=!err_215,                                                                                    _if_conditional396) {
                                                                                        (come_push_stackframe("21obj.c", 1812),err_msg(info,"parse type"),come_pop_stackframe());
                                                                                        (come_push_stackframe("21obj.c", 1813),exit(2),come_pop_stackframe());
                                                                                    }
                                                                                    (come_push_stackframe("21obj.c", 1816),__exception_result_var_b319=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b319);
                                                                                    _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1818, "struct sNode");
                                                                                    _inf_obj_value32=come_increment_ref_count((come_push_stackframe("21obj.c", 1818),__exception_result_var_b320=((struct sAlignAsNode*)(right_value460=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value459=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1818, "struct sAlignAsNode")))),(struct sType*)come_increment_ref_count(type_213),info))), come_pop_stackframe(), __exception_result_var_b320));
                                                                                    _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                    _inf_value32->finalize=(void*)sAlignAsNode_finalize;
                                                                                    _inf_value32->clone=(void*)sAlignAsNode_clone;
                                                                                    _inf_value32->compile=(void*)sAlignAsNode_compile;
                                                                                    _inf_value32->sline=(void*)sAlignAsNode_sline;
                                                                                    _inf_value32->sname=(void*)sAlignAsNode_sname;
                                                                                    _inf_value32->terminated=(void*)sAlignAsNode_terminated;
                                                                                    _inf_value32->kind=(void*)sAlignAsNode_kind;
                                                                                    __result299__ = __result_obj__ = ((struct sNode*)(right_value464=_inf_value32));
                                                                                    if(type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    if(name_214 && !__freed_obj__) { name_214 = come_decrement_ref_count(name_214, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value459);
                                                                                    if(right_value459 && right_value459 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[1] = right_value459;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value460);
                                                                                    if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[2] = right_value460;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value464);
                                                                                    if(right_value464 && right_value464 != __result_obj__ && !__freed_obj__) { right_value464 = come_decrement_ref_count(right_value464, ((struct sNode*)right_value464)->finalize, ((struct sNode*)right_value464)->_protocol_obj, 1, 0, 0); } 
                                                                                    __right_value_freed_obj[3] = right_value464;
                                                                                    __freed_obj__ = 0;
                                                                                    return __result299__;
                                                                                    if(type_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    if(name_214 && !__freed_obj__) { name_214 = come_decrement_ref_count(name_214, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
                                                                                else {
                                                                                    exp_217=(struct sNode*)come_increment_ref_count((come_push_stackframe("21obj.c", 1821),__exception_result_var_b321=((struct sNode*)(right_value465=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b321));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value465);
                                                                                    if(right_value465 && right_value465 != __result_obj__ && !__freed_obj__) { right_value465 = come_decrement_ref_count(right_value465, ((struct sNode*)right_value465)->finalize, ((struct sNode*)right_value465)->_protocol_obj, 1, 0, 0); } 
                                                                                    __right_value_freed_obj[0] = right_value465;
                                                                                    __freed_obj__ = 0;
                                                                                    (come_push_stackframe("21obj.c", 1823),__exception_result_var_b322=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b322);
                                                                                    _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1825, "struct sNode");
                                                                                    _inf_obj_value33=come_increment_ref_count((come_push_stackframe("21obj.c", 1825),__exception_result_var_b323=((struct sAlignAsExpNode*)(right_value467=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value466=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1825, "struct sAlignAsExpNode")))),(struct sNode*)come_increment_ref_count(exp_217),info))), come_pop_stackframe(), __exception_result_var_b323));
                                                                                    _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                    _inf_value33->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                    _inf_value33->clone=(void*)sAlignAsExpNode_clone;
                                                                                    _inf_value33->compile=(void*)sAlignAsExpNode_compile;
                                                                                    _inf_value33->sline=(void*)sAlignAsExpNode_sline;
                                                                                    _inf_value33->sname=(void*)sAlignAsExpNode_sname;
                                                                                    _inf_value33->terminated=(void*)sAlignAsExpNode_terminated;
                                                                                    _inf_value33->kind=(void*)sAlignAsExpNode_kind;
                                                                                    __result302__ = __result_obj__ = ((struct sNode*)(right_value471=_inf_value33));
                                                                                    if(exp_217 && !__freed_obj__) { exp_217 = come_decrement_ref_count(exp_217, ((struct sNode*)exp_217)->finalize, ((struct sNode*)exp_217)->_protocol_obj, 0, 0, 0); } 
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value466);
                                                                                    if(right_value466 && right_value466 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[1] = right_value466;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value467);
                                                                                    if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[2] = right_value467;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value471);
                                                                                    if(right_value471 && right_value471 != __result_obj__ && !__freed_obj__) { right_value471 = come_decrement_ref_count(right_value471, ((struct sNode*)right_value471)->finalize, ((struct sNode*)right_value471)->_protocol_obj, 1, 0, 0); } 
                                                                                    __right_value_freed_obj[3] = right_value471;
                                                                                    __freed_obj__ = 0;
                                                                                    return __result302__;
                                                                                    if(exp_217 && !__freed_obj__) { exp_217 = come_decrement_ref_count(exp_217, ((struct sNode*)exp_217)->finalize, ((struct sNode*)exp_217)->_protocol_obj, 0, 0, 0); } 
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
    __result303__ = __result_obj__ = (come_push_stackframe("21obj.c", 1829),__exception_result_var_b324=((struct sNode*)(right_value472=string_node_v20(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b324);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value472);
    if(right_value472 && right_value472 != __result_obj__ && !__freed_obj__) { right_value472 = come_decrement_ref_count(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value472;
    __freed_obj__ = 0;
    return __result303__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
_Bool _if_conditional197;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional196=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1!=((void*)0),            _if_conditional196) {
                if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional197=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2!=((void*)0),            _if_conditional197) {
                if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void sNewNode_finalize(struct sNewNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional215;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional215=self!=((void*)0)&&((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 0))->type!=((void*)0),                _if_conditional215) {
                    if(((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional216=self!=((void*)0)&&((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 1))->sname!=((void*)0),                _if_conditional216) {
                    if(((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 1))->sname && !__freed_obj__) { ((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 1))->sname = come_decrement_ref_count(((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional217;
struct sNewNode* __result218__;
void* right_value289;
struct sNewNode* result_144;
_Bool _if_conditional218;
void* right_value290;
struct sType* __dec_obj123;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value291;
char* __dec_obj124;
struct sNewNode* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value289, 0, sizeof(void*));
memset(&result_144, 0, sizeof(struct sNewNode*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
                if(_if_conditional217=self==(void*)0,                _if_conditional217) {
                    __result218__ = __result_obj__ = (void*)0;
                    return __result218__;
                }
                result_144=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value289=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
                if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value289;
                __freed_obj__ = 0;
                if(_if_conditional218=self!=((void*)0)&&((struct sNewNode*)come_null_check(self, "sNewNode_clone", 4))->type!=((void*)0),                _if_conditional218) {
                    __dec_obj123=((struct sNewNode*)come_null_check(result_144, "sNewNode_clone", 4))->type;
                    ((struct sNewNode*)come_null_check(result_144, "sNewNode_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(((struct sNewNode*)come_null_check(self, "sNewNode_clone", 4))->type))));
                    if(__dec_obj123) { come_call_finalizer(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
                    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value290;
                    __freed_obj__ = 0;
                }
                if(_if_conditional219=self!=((void*)0),                _if_conditional219) {
                    ((struct sNewNode*)come_null_check(result_144, "sNewNode_clone", 5))->sline=((struct sNewNode*)come_null_check(self, "sNewNode_clone", 5))->sline;
                }
                if(_if_conditional220=self!=((void*)0)&&((struct sNewNode*)come_null_check(self, "sNewNode_clone", 6))->sname!=((void*)0),                _if_conditional220) {
                    __dec_obj124=((struct sNewNode*)come_null_check(result_144, "sNewNode_clone", 6))->sname;
                    ((struct sNewNode*)come_null_check(result_144, "sNewNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value291=string_clone(((struct sNewNode*)come_null_check(self, "sNewNode_clone", 6))->sname))));
                    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value291);
                    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value291;
                    __freed_obj__ = 0;
                }
                __result219__ = __result_obj__ = result_144;
                if(result_144 && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result219__;
                if(result_144 && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sTrueNode_finalize(struct sTrueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional222=self!=((void*)0)&&((struct sTrueNode*)come_null_check(self, "sTrueNode_finalize", 0))->sname!=((void*)0),                _if_conditional222) {
                    if(((struct sTrueNode*)come_null_check(self, "sTrueNode_finalize", 0))->sname && !__freed_obj__) { ((struct sTrueNode*)come_null_check(self, "sTrueNode_finalize", 0))->sname = come_decrement_ref_count(((struct sTrueNode*)come_null_check(self, "sTrueNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional223;
struct sTrueNode* __result221__;
void* right_value295;
struct sTrueNode* result_145;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value296;
char* __dec_obj125;
struct sTrueNode* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value295, 0, sizeof(void*));
memset(&result_145, 0, sizeof(struct sTrueNode*));
memset(&right_value296, 0, sizeof(void*));
                if(_if_conditional223=self==(void*)0,                _if_conditional223) {
                    __result221__ = __result_obj__ = (void*)0;
                    return __result221__;
                }
                result_145=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value295=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
                if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value295;
                __freed_obj__ = 0;
                if(_if_conditional224=self!=((void*)0),                _if_conditional224) {
                    ((struct sTrueNode*)come_null_check(result_145, "sTrueNode_clone", 4))->sline=((struct sTrueNode*)come_null_check(self, "sTrueNode_clone", 4))->sline;
                }
                if(_if_conditional225=self!=((void*)0)&&((struct sTrueNode*)come_null_check(self, "sTrueNode_clone", 5))->sname!=((void*)0),                _if_conditional225) {
                    __dec_obj125=((struct sTrueNode*)come_null_check(result_145, "sTrueNode_clone", 5))->sname;
                    ((struct sTrueNode*)come_null_check(result_145, "sTrueNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value296=string_clone(((struct sTrueNode*)come_null_check(self, "sTrueNode_clone", 5))->sname))));
                    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value296;
                    __freed_obj__ = 0;
                }
                __result222__ = __result_obj__ = result_145;
                if(result_145 && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,result_145, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result222__;
                if(result_145 && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,result_145, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFalseNode_finalize(struct sFalseNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional227;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional227=self!=((void*)0)&&((struct sFalseNode*)come_null_check(self, "sFalseNode_finalize", 0))->sname!=((void*)0),                    _if_conditional227) {
                        if(((struct sFalseNode*)come_null_check(self, "sFalseNode_finalize", 0))->sname && !__freed_obj__) { ((struct sFalseNode*)come_null_check(self, "sFalseNode_finalize", 0))->sname = come_decrement_ref_count(((struct sFalseNode*)come_null_check(self, "sFalseNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
struct sFalseNode* __result224__;
void* right_value300;
struct sFalseNode* result_146;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value301;
char* __dec_obj126;
struct sFalseNode* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value300, 0, sizeof(void*));
memset(&result_146, 0, sizeof(struct sFalseNode*));
memset(&right_value301, 0, sizeof(void*));
                    if(_if_conditional228=self==(void*)0,                    _if_conditional228) {
                        __result224__ = __result_obj__ = (void*)0;
                        return __result224__;
                    }
                    result_146=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value300=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
                    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value300;
                    __freed_obj__ = 0;
                    if(_if_conditional229=self!=((void*)0),                    _if_conditional229) {
                        ((struct sFalseNode*)come_null_check(result_146, "sFalseNode_clone", 4))->sline=((struct sFalseNode*)come_null_check(self, "sFalseNode_clone", 4))->sline;
                    }
                    if(_if_conditional230=self!=((void*)0)&&((struct sFalseNode*)come_null_check(self, "sFalseNode_clone", 5))->sname!=((void*)0),                    _if_conditional230) {
                        __dec_obj126=((struct sFalseNode*)come_null_check(result_146, "sFalseNode_clone", 5))->sname;
                        ((struct sFalseNode*)come_null_check(result_146, "sFalseNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value301=string_clone(((struct sFalseNode*)come_null_check(self, "sFalseNode_clone", 5))->sname))));
                        if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
                        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value301;
                        __freed_obj__ = 0;
                    }
                    __result225__ = __result_obj__ = result_146;
                    if(result_146 && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,result_146, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result225__;
                    if(result_146 && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,result_146, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional232;
_Bool _if_conditional233;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional232=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0))->node!=((void*)0),                        _if_conditional232) {
                            if(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0))->node && !__freed_obj__) { ((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0))->node = come_decrement_ref_count(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0))->node, ((struct sNode*)((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional233=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1))->sname!=((void*)0),                        _if_conditional233) {
                            if(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1))->sname && !__freed_obj__) { ((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1))->sname = come_decrement_ref_count(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
struct sDeleteNode* __result227__;
void* right_value306;
struct sDeleteNode* result_148;
_Bool _if_conditional235;
void* right_value307;
struct sNode* __dec_obj127;
_Bool _if_conditional236;
_Bool _if_conditional237;
void* right_value308;
char* __dec_obj128;
struct sDeleteNode* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value306, 0, sizeof(void*));
memset(&result_148, 0, sizeof(struct sDeleteNode*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
                        if(_if_conditional234=self==(void*)0,                        _if_conditional234) {
                            __result227__ = __result_obj__ = (void*)0;
                            return __result227__;
                        }
                        result_148=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value306=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value306;
                        __freed_obj__ = 0;
                        if(_if_conditional235=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 4))->node!=((void*)0),                        _if_conditional235) {
                            __dec_obj127=((struct sDeleteNode*)come_null_check(result_148, "sDeleteNode_clone", 4))->node;
                            ((struct sDeleteNode*)come_null_check(result_148, "sDeleteNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 4))->node))));
                            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
                            if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value307;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional236=self!=((void*)0),                        _if_conditional236) {
                            ((struct sDeleteNode*)come_null_check(result_148, "sDeleteNode_clone", 5))->sline=((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 5))->sline;
                        }
                        if(_if_conditional237=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 6))->sname!=((void*)0),                        _if_conditional237) {
                            __dec_obj128=((struct sDeleteNode*)come_null_check(result_148, "sDeleteNode_clone", 6))->sname;
                            ((struct sDeleteNode*)come_null_check(result_148, "sDeleteNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value308=string_clone(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 6))->sname))));
                            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308);
                            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value308;
                            __freed_obj__ = 0;
                        }
                        __result228__ = __result_obj__ = result_148;
                        if(result_148 && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,result_148, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result228__;
                        if(result_148 && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,result_148, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional239;
_Bool _if_conditional240;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional239=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0))->node!=((void*)0),                            _if_conditional239) {
                                if(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0))->node && !__freed_obj__) { ((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0))->node = come_decrement_ref_count(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0))->node, ((struct sNode*)((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional240=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1))->sname!=((void*)0),                            _if_conditional240) {
                                if(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1))->sname && !__freed_obj__) { ((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1))->sname = come_decrement_ref_count(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional241;
struct sForceDeleteNode* __result230__;
void* right_value313;
struct sForceDeleteNode* result_150;
_Bool _if_conditional242;
void* right_value314;
struct sNode* __dec_obj129;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value315;
char* __dec_obj130;
struct sForceDeleteNode* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value313, 0, sizeof(void*));
memset(&result_150, 0, sizeof(struct sForceDeleteNode*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
                            if(_if_conditional241=self==(void*)0,                            _if_conditional241) {
                                __result230__ = __result_obj__ = (void*)0;
                                return __result230__;
                            }
                            result_150=(struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value313=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "struct sForceDeleteNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
                            if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value313;
                            __freed_obj__ = 0;
                            if(_if_conditional242=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 4))->node!=((void*)0),                            _if_conditional242) {
                                __dec_obj129=((struct sForceDeleteNode*)come_null_check(result_150, "sForceDeleteNode_clone", 4))->node;
                                ((struct sForceDeleteNode*)come_null_check(result_150, "sForceDeleteNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=sNode_clone(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 4))->node))));
                                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
                                if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value314;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional243=self!=((void*)0),                            _if_conditional243) {
                                ((struct sForceDeleteNode*)come_null_check(result_150, "sForceDeleteNode_clone", 5))->sline=((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 5))->sline;
                            }
                            if(_if_conditional244=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 6))->sname!=((void*)0),                            _if_conditional244) {
                                __dec_obj130=((struct sForceDeleteNode*)come_null_check(result_150, "sForceDeleteNode_clone", 6))->sname;
                                ((struct sForceDeleteNode*)come_null_check(result_150, "sForceDeleteNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value315=string_clone(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 6))->sname))));
                                if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
                                if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value315;
                                __freed_obj__ = 0;
                            }
                            __result231__ = __result_obj__ = result_150;
                            if(result_150 && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result231__;
                            if(result_150 && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
_Bool _if_conditional247;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional246=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0))->node!=((void*)0),                                _if_conditional246) {
                                    if(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0))->node && !__freed_obj__) { ((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0))->node = come_decrement_ref_count(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0))->node, ((struct sNode*)((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional247=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1))->sname!=((void*)0),                                _if_conditional247) {
                                    if(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1))->sname && !__freed_obj__) { ((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1))->sname = come_decrement_ref_count(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional248;
struct sBorrowNode* __result233__;
void* right_value320;
struct sBorrowNode* result_152;
_Bool _if_conditional249;
void* right_value321;
struct sNode* __dec_obj131;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value322;
char* __dec_obj132;
struct sBorrowNode* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value320, 0, sizeof(void*));
memset(&result_152, 0, sizeof(struct sBorrowNode*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
                                if(_if_conditional248=self==(void*)0,                                _if_conditional248) {
                                    __result233__ = __result_obj__ = (void*)0;
                                    return __result233__;
                                }
                                result_152=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value320=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
                                if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value320;
                                __freed_obj__ = 0;
                                if(_if_conditional249=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 4))->node!=((void*)0),                                _if_conditional249) {
                                    __dec_obj131=((struct sBorrowNode*)come_null_check(result_152, "sBorrowNode_clone", 4))->node;
                                    ((struct sBorrowNode*)come_null_check(result_152, "sBorrowNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=sNode_clone(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 4))->node))));
                                    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321);
                                    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value321;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional250=self!=((void*)0),                                _if_conditional250) {
                                    ((struct sBorrowNode*)come_null_check(result_152, "sBorrowNode_clone", 5))->sline=((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 5))->sline;
                                }
                                if(_if_conditional251=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 6))->sname!=((void*)0),                                _if_conditional251) {
                                    __dec_obj132=((struct sBorrowNode*)come_null_check(result_152, "sBorrowNode_clone", 6))->sname;
                                    ((struct sBorrowNode*)come_null_check(result_152, "sBorrowNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value322=string_clone(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 6))->sname))));
                                    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
                                    if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value322;
                                    __freed_obj__ = 0;
                                }
                                __result234__ = __result_obj__ = result_152;
                                if(result_152 && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result234__;
                                if(result_152 && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional253;
_Bool _if_conditional254;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional253=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0))->node!=((void*)0),                                    _if_conditional253) {
                                        if(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0))->node && !__freed_obj__) { ((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0))->node = come_decrement_ref_count(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0))->node, ((struct sNode*)((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional254=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1))->sname!=((void*)0),                                    _if_conditional254) {
                                        if(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1))->sname && !__freed_obj__) { ((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1))->sname = come_decrement_ref_count(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional255;
struct sDelegateNode* __result236__;
void* right_value327;
struct sDelegateNode* result_154;
_Bool _if_conditional256;
void* right_value328;
struct sNode* __dec_obj133;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value329;
char* __dec_obj134;
struct sDelegateNode* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value327, 0, sizeof(void*));
memset(&result_154, 0, sizeof(struct sDelegateNode*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
                                    if(_if_conditional255=self==(void*)0,                                    _if_conditional255) {
                                        __result236__ = __result_obj__ = (void*)0;
                                        return __result236__;
                                    }
                                    result_154=(struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value327=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "struct sDelegateNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
                                    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value327;
                                    __freed_obj__ = 0;
                                    if(_if_conditional256=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 4))->node!=((void*)0),                                    _if_conditional256) {
                                        __dec_obj133=((struct sDelegateNode*)come_null_check(result_154, "sDelegateNode_clone", 4))->node;
                                        ((struct sDelegateNode*)come_null_check(result_154, "sDelegateNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=sNode_clone(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 4))->node))));
                                        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
                                        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value328;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional257=self!=((void*)0),                                    _if_conditional257) {
                                        ((struct sDelegateNode*)come_null_check(result_154, "sDelegateNode_clone", 5))->sline=((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 5))->sline;
                                    }
                                    if(_if_conditional258=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 6))->sname!=((void*)0),                                    _if_conditional258) {
                                        __dec_obj134=((struct sDelegateNode*)come_null_check(result_154, "sDelegateNode_clone", 6))->sname;
                                        ((struct sDelegateNode*)come_null_check(result_154, "sDelegateNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value329=string_clone(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 6))->sname))));
                                        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
                                        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value329;
                                        __freed_obj__ = 0;
                                    }
                                    __result237__ = __result_obj__ = result_154;
                                    if(result_154 && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,result_154, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result237__;
                                    if(result_154 && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,result_154, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sShareNode_finalize(struct sShareNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional260;
_Bool _if_conditional261;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional260=self!=((void*)0)&&((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0))->node!=((void*)0),                                        _if_conditional260) {
                                            if(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0))->node && !__freed_obj__) { ((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0))->node = come_decrement_ref_count(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0))->node, ((struct sNode*)((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional261=self!=((void*)0)&&((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1))->sname!=((void*)0),                                        _if_conditional261) {
                                            if(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1))->sname && !__freed_obj__) { ((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1))->sname = come_decrement_ref_count(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional262;
struct sShareNode* __result239__;
void* right_value334;
struct sShareNode* result_156;
_Bool _if_conditional263;
void* right_value335;
struct sNode* __dec_obj135;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value336;
char* __dec_obj136;
struct sShareNode* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value334, 0, sizeof(void*));
memset(&result_156, 0, sizeof(struct sShareNode*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
                                        if(_if_conditional262=self==(void*)0,                                        _if_conditional262) {
                                            __result239__ = __result_obj__ = (void*)0;
                                            return __result239__;
                                        }
                                        result_156=(struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value334=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "struct sShareNode"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334);
                                        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value334;
                                        __freed_obj__ = 0;
                                        if(_if_conditional263=self!=((void*)0)&&((struct sShareNode*)come_null_check(self, "sShareNode_clone", 4))->node!=((void*)0),                                        _if_conditional263) {
                                            __dec_obj135=((struct sShareNode*)come_null_check(result_156, "sShareNode_clone", 4))->node;
                                            ((struct sShareNode*)come_null_check(result_156, "sShareNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=sNode_clone(((struct sShareNode*)come_null_check(self, "sShareNode_clone", 4))->node))));
                                            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335);
                                            if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value335;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional264=self!=((void*)0),                                        _if_conditional264) {
                                            ((struct sShareNode*)come_null_check(result_156, "sShareNode_clone", 5))->sline=((struct sShareNode*)come_null_check(self, "sShareNode_clone", 5))->sline;
                                        }
                                        if(_if_conditional265=self!=((void*)0)&&((struct sShareNode*)come_null_check(self, "sShareNode_clone", 6))->sname!=((void*)0),                                        _if_conditional265) {
                                            __dec_obj136=((struct sShareNode*)come_null_check(result_156, "sShareNode_clone", 6))->sname;
                                            ((struct sShareNode*)come_null_check(result_156, "sShareNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value336=string_clone(((struct sShareNode*)come_null_check(self, "sShareNode_clone", 6))->sname))));
                                            if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
                                            if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value336;
                                            __freed_obj__ = 0;
                                        }
                                        __result240__ = __result_obj__ = result_156;
                                        if(result_156 && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result240__;
                                        if(result_156 && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sCloneNode_finalize(struct sCloneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional267=self!=((void*)0)&&((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0))->node!=((void*)0),                                            _if_conditional267) {
                                                if(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0))->node && !__freed_obj__) { ((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0))->node = come_decrement_ref_count(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0))->node, ((struct sNode*)((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional268=self!=((void*)0)&&((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1))->sname!=((void*)0),                                            _if_conditional268) {
                                                if(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1))->sname && !__freed_obj__) { ((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1))->sname = come_decrement_ref_count(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional269;
struct sCloneNode* __result242__;
void* right_value341;
struct sCloneNode* result_158;
_Bool _if_conditional270;
void* right_value342;
struct sNode* __dec_obj137;
_Bool _if_conditional271;
_Bool _if_conditional272;
void* right_value343;
char* __dec_obj138;
struct sCloneNode* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value341, 0, sizeof(void*));
memset(&result_158, 0, sizeof(struct sCloneNode*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
                                            if(_if_conditional269=self==(void*)0,                                            _if_conditional269) {
                                                __result242__ = __result_obj__ = (void*)0;
                                                return __result242__;
                                            }
                                            result_158=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value341=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode"))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                                            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value341;
                                            __freed_obj__ = 0;
                                            if(_if_conditional270=self!=((void*)0)&&((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 4))->node!=((void*)0),                                            _if_conditional270) {
                                                __dec_obj137=((struct sCloneNode*)come_null_check(result_158, "sCloneNode_clone", 4))->node;
                                                ((struct sCloneNode*)come_null_check(result_158, "sCloneNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=sNode_clone(((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 4))->node))));
                                                if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342);
                                                if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value342;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional271=self!=((void*)0),                                            _if_conditional271) {
                                                ((struct sCloneNode*)come_null_check(result_158, "sCloneNode_clone", 5))->sline=((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 5))->sline;
                                            }
                                            if(_if_conditional272=self!=((void*)0)&&((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 6))->sname!=((void*)0),                                            _if_conditional272) {
                                                __dec_obj138=((struct sCloneNode*)come_null_check(result_158, "sCloneNode_clone", 6))->sname;
                                                ((struct sCloneNode*)come_null_check(result_158, "sCloneNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value343=string_clone(((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 6))->sname))));
                                                if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343);
                                                if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value343;
                                                __freed_obj__ = 0;
                                            }
                                            __result243__ = __result_obj__ = result_158;
                                            if(result_158 && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,result_158, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result243__;
                                            if(result_158 && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,result_158, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDupeNode_finalize(struct sDupeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional274;
_Bool _if_conditional275;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional274=self!=((void*)0)&&((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0))->node!=((void*)0),                                                _if_conditional274) {
                                                    if(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0))->node && !__freed_obj__) { ((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0))->node = come_decrement_ref_count(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0))->node, ((struct sNode*)((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                                }
                                                if(_if_conditional275=self!=((void*)0)&&((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1))->sname!=((void*)0),                                                _if_conditional275) {
                                                    if(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1))->sname && !__freed_obj__) { ((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1))->sname = come_decrement_ref_count(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional276;
struct sDupeNode* __result245__;
void* right_value348;
struct sDupeNode* result_160;
_Bool _if_conditional277;
void* right_value349;
struct sNode* __dec_obj139;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value350;
char* __dec_obj140;
struct sDupeNode* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value348, 0, sizeof(void*));
memset(&result_160, 0, sizeof(struct sDupeNode*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
                                                if(_if_conditional276=self==(void*)0,                                                _if_conditional276) {
                                                    __result245__ = __result_obj__ = (void*)0;
                                                    return __result245__;
                                                }
                                                result_160=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value348=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode"))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
                                                if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value348;
                                                __freed_obj__ = 0;
                                                if(_if_conditional277=self!=((void*)0)&&((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 4))->node!=((void*)0),                                                _if_conditional277) {
                                                    __dec_obj139=((struct sDupeNode*)come_null_check(result_160, "sDupeNode_clone", 4))->node;
                                                    ((struct sDupeNode*)come_null_check(result_160, "sDupeNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=sNode_clone(((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 4))->node))));
                                                    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
                                                    if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value349;
                                                    __freed_obj__ = 0;
                                                }
                                                if(_if_conditional278=self!=((void*)0),                                                _if_conditional278) {
                                                    ((struct sDupeNode*)come_null_check(result_160, "sDupeNode_clone", 5))->sline=((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 5))->sline;
                                                }
                                                if(_if_conditional279=self!=((void*)0)&&((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 6))->sname!=((void*)0),                                                _if_conditional279) {
                                                    __dec_obj140=((struct sDupeNode*)come_null_check(result_160, "sDupeNode_clone", 6))->sname;
                                                    ((struct sDupeNode*)come_null_check(result_160, "sDupeNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value350=string_clone(((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 6))->sname))));
                                                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value350);
                                                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value350;
                                                    __freed_obj__ = 0;
                                                }
                                                __result246__ = __result_obj__ = result_160;
                                                if(result_160 && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,result_160, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result246__;
                                                if(result_160 && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,result_160, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional281;
_Bool _if_conditional282;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    if(_if_conditional281=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0))->node!=((void*)0),                                                    _if_conditional281) {
                                                        if(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0))->node && !__freed_obj__) { ((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0))->node = come_decrement_ref_count(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0))->node, ((struct sNode*)((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                                    }
                                                    if(_if_conditional282=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1))->sname!=((void*)0),                                                    _if_conditional282) {
                                                        if(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1))->sname && !__freed_obj__) { ((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1))->sname = come_decrement_ref_count(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional283;
struct sDummyHeapNode* __result248__;
void* right_value355;
struct sDummyHeapNode* result_162;
_Bool _if_conditional284;
void* right_value356;
struct sNode* __dec_obj141;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value357;
char* __dec_obj142;
struct sDummyHeapNode* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value355, 0, sizeof(void*));
memset(&result_162, 0, sizeof(struct sDummyHeapNode*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
                                                    if(_if_conditional283=self==(void*)0,                                                    _if_conditional283) {
                                                        __result248__ = __result_obj__ = (void*)0;
                                                        return __result248__;
                                                    }
                                                    result_162=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value355=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode"))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
                                                    if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value355;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional284=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 4))->node!=((void*)0),                                                    _if_conditional284) {
                                                        __dec_obj141=((struct sDummyHeapNode*)come_null_check(result_162, "sDummyHeapNode_clone", 4))->node;
                                                        ((struct sDummyHeapNode*)come_null_check(result_162, "sDummyHeapNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=sNode_clone(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 4))->node))));
                                                        if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
                                                        if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[0] = right_value356;
                                                        __freed_obj__ = 0;
                                                    }
                                                    if(_if_conditional285=self!=((void*)0),                                                    _if_conditional285) {
                                                        ((struct sDummyHeapNode*)come_null_check(result_162, "sDummyHeapNode_clone", 5))->sline=((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 5))->sline;
                                                    }
                                                    if(_if_conditional286=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 6))->sname!=((void*)0),                                                    _if_conditional286) {
                                                        __dec_obj142=((struct sDummyHeapNode*)come_null_check(result_162, "sDummyHeapNode_clone", 6))->sname;
                                                        ((struct sDummyHeapNode*)come_null_check(result_162, "sDummyHeapNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value357=string_clone(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 6))->sname))));
                                                        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
                                                        if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value357;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __result249__ = __result_obj__ = result_162;
                                                    if(result_162 && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    return __result249__;
                                                    if(result_162 && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional288;
_Bool _if_conditional289;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional288=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0))->node!=((void*)0),                                                        _if_conditional288) {
                                                            if(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0))->node && !__freed_obj__) { ((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0))->node = come_decrement_ref_count(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0))->node, ((struct sNode*)((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                                        }
                                                        if(_if_conditional289=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1))->sname!=((void*)0),                                                        _if_conditional289) {
                                                            if(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1))->sname && !__freed_obj__) { ((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1))->sname = come_decrement_ref_count(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional290;
struct sGCIncNode* __result251__;
void* right_value362;
struct sGCIncNode* result_164;
_Bool _if_conditional291;
void* right_value363;
struct sNode* __dec_obj143;
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value364;
char* __dec_obj144;
struct sGCIncNode* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value362, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct sGCIncNode*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
                                                        if(_if_conditional290=self==(void*)0,                                                        _if_conditional290) {
                                                            __result251__ = __result_obj__ = (void*)0;
                                                            return __result251__;
                                                        }
                                                        result_164=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value362=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode"))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
                                                        if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value362;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional291=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 4))->node!=((void*)0),                                                        _if_conditional291) {
                                                            __dec_obj143=((struct sGCIncNode*)come_null_check(result_164, "sGCIncNode_clone", 4))->node;
                                                            ((struct sGCIncNode*)come_null_check(result_164, "sGCIncNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=sNode_clone(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 4))->node))));
                                                            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
                                                            if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0); } 
                                                            __right_value_freed_obj[0] = right_value363;
                                                            __freed_obj__ = 0;
                                                        }
                                                        if(_if_conditional292=self!=((void*)0),                                                        _if_conditional292) {
                                                            ((struct sGCIncNode*)come_null_check(result_164, "sGCIncNode_clone", 5))->sline=((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 5))->sline;
                                                        }
                                                        if(_if_conditional293=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 6))->sname!=((void*)0),                                                        _if_conditional293) {
                                                            __dec_obj144=((struct sGCIncNode*)come_null_check(result_164, "sGCIncNode_clone", 6))->sname;
                                                            ((struct sGCIncNode*)come_null_check(result_164, "sGCIncNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value364=string_clone(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 6))->sname))));
                                                            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                                                            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, (void*)0, (void*)0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value364;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __result252__ = __result_obj__ = result_164;
                                                        if(result_164 && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,result_164, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                        return __result252__;
                                                        if(result_164 && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,result_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional295;
_Bool _if_conditional296;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            if(_if_conditional295=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0))->node!=((void*)0),                                                            _if_conditional295) {
                                                                if(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0))->node && !__freed_obj__) { ((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0))->node = come_decrement_ref_count(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0))->node, ((struct sNode*)((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                                            }
                                                            if(_if_conditional296=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1))->sname!=((void*)0),                                                            _if_conditional296) {
                                                                if(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1))->sname && !__freed_obj__) { ((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1))->sname = come_decrement_ref_count(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                            }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional297;
struct sGCDecNode* __result254__;
void* right_value369;
struct sGCDecNode* result_166;
_Bool _if_conditional298;
void* right_value370;
struct sNode* __dec_obj145;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value371;
char* __dec_obj146;
struct sGCDecNode* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value369, 0, sizeof(void*));
memset(&result_166, 0, sizeof(struct sGCDecNode*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
                                                            if(_if_conditional297=self==(void*)0,                                                            _if_conditional297) {
                                                                __result254__ = __result_obj__ = (void*)0;
                                                                return __result254__;
                                                            }
                                                            result_166=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value369=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode"))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value369);
                                                            if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value369;
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional298=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 4))->node!=((void*)0),                                                            _if_conditional298) {
                                                                __dec_obj145=((struct sGCDecNode*)come_null_check(result_166, "sGCDecNode_clone", 4))->node;
                                                                ((struct sGCDecNode*)come_null_check(result_166, "sGCDecNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=sNode_clone(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 4))->node))));
                                                                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
                                                                if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0); } 
                                                                __right_value_freed_obj[0] = right_value370;
                                                                __freed_obj__ = 0;
                                                            }
                                                            if(_if_conditional299=self!=((void*)0),                                                            _if_conditional299) {
                                                                ((struct sGCDecNode*)come_null_check(result_166, "sGCDecNode_clone", 5))->sline=((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 5))->sline;
                                                            }
                                                            if(_if_conditional300=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 6))->sname!=((void*)0),                                                            _if_conditional300) {
                                                                __dec_obj146=((struct sGCDecNode*)come_null_check(result_166, "sGCDecNode_clone", 6))->sname;
                                                                ((struct sGCDecNode*)come_null_check(result_166, "sGCDecNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value371=string_clone(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 6))->sname))));
                                                                if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
                                                                if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value371;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __result255__ = __result_obj__ = result_166;
                                                            if(result_166 && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,result_166, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                            return __result255__;
                                                            if(result_166 && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,result_166, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sIsHeap_finalize(struct sIsHeap* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                if(_if_conditional303=self!=((void*)0)&&((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 0))->type!=((void*)0),                                                                _if_conditional303) {
                                                                    if(((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                }
                                                                if(_if_conditional304=self!=((void*)0)&&((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 1))->sname!=((void*)0),                                                                _if_conditional304) {
                                                                    if(((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 1))->sname && !__freed_obj__) { ((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 1))->sname = come_decrement_ref_count(((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional305;
struct sIsHeap* __result257__;
void* right_value377;
struct sIsHeap* result_171;
_Bool _if_conditional306;
void* right_value378;
struct sType* __dec_obj147;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value379;
char* __dec_obj148;
struct sIsHeap* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value377, 0, sizeof(void*));
memset(&result_171, 0, sizeof(struct sIsHeap*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
                                                                if(_if_conditional305=self==(void*)0,                                                                _if_conditional305) {
                                                                    __result257__ = __result_obj__ = (void*)0;
                                                                    return __result257__;
                                                                }
                                                                result_171=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value377=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap"))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value377);
                                                                if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value377;
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional306=self!=((void*)0)&&((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 4))->type!=((void*)0),                                                                _if_conditional306) {
                                                                    __dec_obj147=((struct sIsHeap*)come_null_check(result_171, "sIsHeap_clone", 4))->type;
                                                                    ((struct sIsHeap*)come_null_check(result_171, "sIsHeap_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value378=sType_clone(((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 4))->type))));
                                                                    if(__dec_obj147) { come_call_finalizer(sType_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
                                                                    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value378;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                if(_if_conditional307=self!=((void*)0),                                                                _if_conditional307) {
                                                                    ((struct sIsHeap*)come_null_check(result_171, "sIsHeap_clone", 5))->sline=((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 5))->sline;
                                                                }
                                                                if(_if_conditional308=self!=((void*)0)&&((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 6))->sname!=((void*)0),                                                                _if_conditional308) {
                                                                    __dec_obj148=((struct sIsHeap*)come_null_check(result_171, "sIsHeap_clone", 6))->sname;
                                                                    ((struct sIsHeap*)come_null_check(result_171, "sIsHeap_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value379=string_clone(((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 6))->sname))));
                                                                    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value379);
                                                                    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value379;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __result258__ = __result_obj__ = result_171;
                                                                if(result_171 && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,result_171, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                return __result258__;
                                                                if(result_171 && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,result_171, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional346;
_Bool _if_conditional347;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                            if(_if_conditional346=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 0))->type!=((void*)0),                                                                            _if_conditional346) {
                                                                                if(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            }
                                                                            if(_if_conditional347=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 1))->sname!=((void*)0),                                                                            _if_conditional347) {
                                                                                if(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 1))->sname && !__freed_obj__) { ((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 1))->sname = come_decrement_ref_count(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional348;
struct sSizeOfNode* __result279__;
void* right_value416;
struct sSizeOfNode* result_186;
_Bool _if_conditional349;
void* right_value417;
struct sType* __dec_obj155;
_Bool _if_conditional350;
_Bool _if_conditional351;
void* right_value418;
char* __dec_obj156;
struct sSizeOfNode* __result280__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value416, 0, sizeof(void*));
memset(&result_186, 0, sizeof(struct sSizeOfNode*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
                                                                            if(_if_conditional348=self==(void*)0,                                                                            _if_conditional348) {
                                                                                __result279__ = __result_obj__ = (void*)0;
                                                                                return __result279__;
                                                                            }
                                                                            result_186=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value416=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode"))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value416);
                                                                            if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value416;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional349=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 4))->type!=((void*)0),                                                                            _if_conditional349) {
                                                                                __dec_obj155=((struct sSizeOfNode*)come_null_check(result_186, "sSizeOfNode_clone", 4))->type;
                                                                                ((struct sSizeOfNode*)come_null_check(result_186, "sSizeOfNode_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value417=sType_clone(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 4))->type))));
                                                                                if(__dec_obj155) { come_call_finalizer(sType_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value417);
                                                                                if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value417;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            if(_if_conditional350=self!=((void*)0),                                                                            _if_conditional350) {
                                                                                ((struct sSizeOfNode*)come_null_check(result_186, "sSizeOfNode_clone", 5))->sline=((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 5))->sline;
                                                                            }
                                                                            if(_if_conditional351=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 6))->sname!=((void*)0),                                                                            _if_conditional351) {
                                                                                __dec_obj156=((struct sSizeOfNode*)come_null_check(result_186, "sSizeOfNode_clone", 6))->sname;
                                                                                ((struct sSizeOfNode*)come_null_check(result_186, "sSizeOfNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value418=string_clone(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 6))->sname))));
                                                                                if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value418);
                                                                                if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { right_value418 = come_decrement_ref_count(right_value418, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value418;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __result280__ = __result_obj__ = result_186;
                                                                            if(result_186 && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                            return __result280__;
                                                                            if(result_186 && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional352;
_Bool _if_conditional353;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                            if(_if_conditional352=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0))->exp!=((void*)0),                                                                            _if_conditional352) {
                                                                                if(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0))->exp && !__freed_obj__) { ((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0))->exp = come_decrement_ref_count(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0))->exp, ((struct sNode*)((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0))->exp)->finalize, ((struct sNode*)((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0))->exp)->_protocol_obj, 0, 0, 0); } 
                                                                            }
                                                                            if(_if_conditional353=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1))->sname!=((void*)0),                                                                            _if_conditional353) {
                                                                                if(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1))->sname && !__freed_obj__) { ((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1))->sname = come_decrement_ref_count(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional354;
struct sSizeOfExpNode* __result282__;
void* right_value423;
struct sSizeOfExpNode* result_188;
_Bool _if_conditional355;
void* right_value424;
struct sNode* __dec_obj157;
_Bool _if_conditional356;
_Bool _if_conditional357;
void* right_value425;
char* __dec_obj158;
struct sSizeOfExpNode* __result283__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value423, 0, sizeof(void*));
memset(&result_188, 0, sizeof(struct sSizeOfExpNode*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
                                                                            if(_if_conditional354=self==(void*)0,                                                                            _if_conditional354) {
                                                                                __result282__ = __result_obj__ = (void*)0;
                                                                                return __result282__;
                                                                            }
                                                                            result_188=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value423=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode"))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value423);
                                                                            if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value423;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional355=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 4))->exp!=((void*)0),                                                                            _if_conditional355) {
                                                                                __dec_obj157=((struct sSizeOfExpNode*)come_null_check(result_188, "sSizeOfExpNode_clone", 4))->exp;
                                                                                ((struct sSizeOfExpNode*)come_null_check(result_188, "sSizeOfExpNode_clone", 4))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value424=sNode_clone(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 4))->exp))));
                                                                                if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value424);
                                                                                if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { right_value424 = come_decrement_ref_count(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0); } 
                                                                                __right_value_freed_obj[0] = right_value424;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            if(_if_conditional356=self!=((void*)0),                                                                            _if_conditional356) {
                                                                                ((struct sSizeOfExpNode*)come_null_check(result_188, "sSizeOfExpNode_clone", 5))->sline=((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 5))->sline;
                                                                            }
                                                                            if(_if_conditional357=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 6))->sname!=((void*)0),                                                                            _if_conditional357) {
                                                                                __dec_obj158=((struct sSizeOfExpNode*)come_null_check(result_188, "sSizeOfExpNode_clone", 6))->sname;
                                                                                ((struct sSizeOfExpNode*)come_null_check(result_188, "sSizeOfExpNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value425=string_clone(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 6))->sname))));
                                                                                if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value425);
                                                                                if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { right_value425 = come_decrement_ref_count(right_value425, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value425;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __result283__ = __result_obj__ = result_188;
                                                                            if(result_188 && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,result_188, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                            return __result283__;
                                                                            if(result_188 && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,result_188, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional363;
_Bool _if_conditional364;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                if(_if_conditional363=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 0))->type!=((void*)0),                                                                                _if_conditional363) {
                                                                                    if(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                }
                                                                                if(_if_conditional364=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 1))->sname!=((void*)0),                                                                                _if_conditional364) {
                                                                                    if(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional365;
struct sAlignOfNode* __result285__;
void* right_value431;
struct sAlignOfNode* result_196;
_Bool _if_conditional366;
void* right_value432;
struct sType* __dec_obj159;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value433;
char* __dec_obj160;
struct sAlignOfNode* __result286__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value431, 0, sizeof(void*));
memset(&result_196, 0, sizeof(struct sAlignOfNode*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
                                                                                if(_if_conditional365=self==(void*)0,                                                                                _if_conditional365) {
                                                                                    __result285__ = __result_obj__ = (void*)0;
                                                                                    return __result285__;
                                                                                }
                                                                                result_196=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value431=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode"))));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value431);
                                                                                if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value431;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional366=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 4))->type!=((void*)0),                                                                                _if_conditional366) {
                                                                                    __dec_obj159=((struct sAlignOfNode*)come_null_check(result_196, "sAlignOfNode_clone", 4))->type;
                                                                                    ((struct sAlignOfNode*)come_null_check(result_196, "sAlignOfNode_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value432=sType_clone(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 4))->type))));
                                                                                    if(__dec_obj159) { come_call_finalizer(sType_finalize,__dec_obj159, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value432);
                                                                                    if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value432;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                if(_if_conditional367=self!=((void*)0),                                                                                _if_conditional367) {
                                                                                    ((struct sAlignOfNode*)come_null_check(result_196, "sAlignOfNode_clone", 5))->sline=((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 5))->sline;
                                                                                }
                                                                                if(_if_conditional368=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 6))->sname!=((void*)0),                                                                                _if_conditional368) {
                                                                                    __dec_obj160=((struct sAlignOfNode*)come_null_check(result_196, "sAlignOfNode_clone", 6))->sname;
                                                                                    ((struct sAlignOfNode*)come_null_check(result_196, "sAlignOfNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value433=string_clone(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 6))->sname))));
                                                                                    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value433);
                                                                                    if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { right_value433 = come_decrement_ref_count(right_value433, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value433;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __result286__ = __result_obj__ = result_196;
                                                                                if(result_196 && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,result_196, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                return __result286__;
                                                                                if(result_196 && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,result_196, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional369;
_Bool _if_conditional370;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                if(_if_conditional369=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0))->exp!=((void*)0),                                                                                _if_conditional369) {
                                                                                    if(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0))->exp && !__freed_obj__) { ((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0))->exp = come_decrement_ref_count(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0))->exp, ((struct sNode*)((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0))->exp)->finalize, ((struct sNode*)((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0))->exp)->_protocol_obj, 0, 0, 0); } 
                                                                                }
                                                                                if(_if_conditional370=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1))->sname!=((void*)0),                                                                                _if_conditional370) {
                                                                                    if(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional371;
struct sAlignOfExpNode* __result288__;
void* right_value438;
struct sAlignOfExpNode* result_198;
_Bool _if_conditional372;
void* right_value439;
struct sNode* __dec_obj161;
_Bool _if_conditional373;
_Bool _if_conditional374;
void* right_value440;
char* __dec_obj162;
struct sAlignOfExpNode* __result289__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value438, 0, sizeof(void*));
memset(&result_198, 0, sizeof(struct sAlignOfExpNode*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
                                                                                if(_if_conditional371=self==(void*)0,                                                                                _if_conditional371) {
                                                                                    __result288__ = __result_obj__ = (void*)0;
                                                                                    return __result288__;
                                                                                }
                                                                                result_198=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value438=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode"))));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value438);
                                                                                if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value438;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional372=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 4))->exp!=((void*)0),                                                                                _if_conditional372) {
                                                                                    __dec_obj161=((struct sAlignOfExpNode*)come_null_check(result_198, "sAlignOfExpNode_clone", 4))->exp;
                                                                                    ((struct sAlignOfExpNode*)come_null_check(result_198, "sAlignOfExpNode_clone", 4))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=sNode_clone(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 4))->exp))));
                                                                                    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value439);
                                                                                    if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { right_value439 = come_decrement_ref_count(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0); } 
                                                                                    __right_value_freed_obj[0] = right_value439;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                if(_if_conditional373=self!=((void*)0),                                                                                _if_conditional373) {
                                                                                    ((struct sAlignOfExpNode*)come_null_check(result_198, "sAlignOfExpNode_clone", 5))->sline=((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 5))->sline;
                                                                                }
                                                                                if(_if_conditional374=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 6))->sname!=((void*)0),                                                                                _if_conditional374) {
                                                                                    __dec_obj162=((struct sAlignOfExpNode*)come_null_check(result_198, "sAlignOfExpNode_clone", 6))->sname;
                                                                                    ((struct sAlignOfExpNode*)come_null_check(result_198, "sAlignOfExpNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value440=string_clone(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 6))->sname))));
                                                                                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value440);
                                                                                    if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { right_value440 = come_decrement_ref_count(right_value440, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value440;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __result289__ = __result_obj__ = result_198;
                                                                                if(result_198 && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,result_198, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                return __result289__;
                                                                                if(result_198 && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,result_198, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional380;
_Bool _if_conditional381;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                    if(_if_conditional380=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 0))->type!=((void*)0),                                                                                    _if_conditional380) {
                                                                                        if(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    }
                                                                                    if(_if_conditional381=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 1))->sname!=((void*)0),                                                                                    _if_conditional381) {
                                                                                        if(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional382;
struct sAlignOfNode2* __result291__;
void* right_value446;
struct sAlignOfNode2* result_206;
_Bool _if_conditional383;
void* right_value447;
struct sType* __dec_obj163;
_Bool _if_conditional384;
_Bool _if_conditional385;
void* right_value448;
char* __dec_obj164;
struct sAlignOfNode2* __result292__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value446, 0, sizeof(void*));
memset(&result_206, 0, sizeof(struct sAlignOfNode2*));
memset(&right_value447, 0, sizeof(void*));
memset(&right_value448, 0, sizeof(void*));
                                                                                    if(_if_conditional382=self==(void*)0,                                                                                    _if_conditional382) {
                                                                                        __result291__ = __result_obj__ = (void*)0;
                                                                                        return __result291__;
                                                                                    }
                                                                                    result_206=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value446=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2"))));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value446);
                                                                                    if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value446;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional383=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 4))->type!=((void*)0),                                                                                    _if_conditional383) {
                                                                                        __dec_obj163=((struct sAlignOfNode2*)come_null_check(result_206, "sAlignOfNode2_clone", 4))->type;
                                                                                        ((struct sAlignOfNode2*)come_null_check(result_206, "sAlignOfNode2_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value447=sType_clone(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 4))->type))));
                                                                                        if(__dec_obj163) { come_call_finalizer(sType_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value447);
                                                                                        if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value447;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    if(_if_conditional384=self!=((void*)0),                                                                                    _if_conditional384) {
                                                                                        ((struct sAlignOfNode2*)come_null_check(result_206, "sAlignOfNode2_clone", 5))->sline=((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 5))->sline;
                                                                                    }
                                                                                    if(_if_conditional385=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 6))->sname!=((void*)0),                                                                                    _if_conditional385) {
                                                                                        __dec_obj164=((struct sAlignOfNode2*)come_null_check(result_206, "sAlignOfNode2_clone", 6))->sname;
                                                                                        ((struct sAlignOfNode2*)come_null_check(result_206, "sAlignOfNode2_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value448=string_clone(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 6))->sname))));
                                                                                        if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0,0); }
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value448);
                                                                                        if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { right_value448 = come_decrement_ref_count(right_value448, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value448;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __result292__ = __result_obj__ = result_206;
                                                                                    if(result_206 && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,result_206, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                    return __result292__;
                                                                                    if(result_206 && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,result_206, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional386;
_Bool _if_conditional387;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                    if(_if_conditional386=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0))->exp!=((void*)0),                                                                                    _if_conditional386) {
                                                                                        if(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0))->exp && !__freed_obj__) { ((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0))->exp = come_decrement_ref_count(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0))->exp, ((struct sNode*)((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0))->exp)->finalize, ((struct sNode*)((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0))->exp)->_protocol_obj, 0, 0, 0); } 
                                                                                    }
                                                                                    if(_if_conditional387=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1))->sname!=((void*)0),                                                                                    _if_conditional387) {
                                                                                        if(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional388;
struct sAlignOfExpNode2* __result294__;
void* right_value453;
struct sAlignOfExpNode2* result_208;
_Bool _if_conditional389;
void* right_value454;
struct sNode* __dec_obj165;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value455;
char* __dec_obj166;
struct sAlignOfExpNode2* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value453, 0, sizeof(void*));
memset(&result_208, 0, sizeof(struct sAlignOfExpNode2*));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
                                                                                    if(_if_conditional388=self==(void*)0,                                                                                    _if_conditional388) {
                                                                                        __result294__ = __result_obj__ = (void*)0;
                                                                                        return __result294__;
                                                                                    }
                                                                                    result_208=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value453=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2"))));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value453);
                                                                                    if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value453;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional389=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 4))->exp!=((void*)0),                                                                                    _if_conditional389) {
                                                                                        __dec_obj165=((struct sAlignOfExpNode2*)come_null_check(result_208, "sAlignOfExpNode2_clone", 4))->exp;
                                                                                        ((struct sAlignOfExpNode2*)come_null_check(result_208, "sAlignOfExpNode2_clone", 4))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=sNode_clone(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 4))->exp))));
                                                                                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0); }
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value454);
                                                                                        if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { right_value454 = come_decrement_ref_count(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0); } 
                                                                                        __right_value_freed_obj[0] = right_value454;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    if(_if_conditional390=self!=((void*)0),                                                                                    _if_conditional390) {
                                                                                        ((struct sAlignOfExpNode2*)come_null_check(result_208, "sAlignOfExpNode2_clone", 5))->sline=((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 5))->sline;
                                                                                    }
                                                                                    if(_if_conditional391=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 6))->sname!=((void*)0),                                                                                    _if_conditional391) {
                                                                                        __dec_obj166=((struct sAlignOfExpNode2*)come_null_check(result_208, "sAlignOfExpNode2_clone", 6))->sname;
                                                                                        ((struct sAlignOfExpNode2*)come_null_check(result_208, "sAlignOfExpNode2_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value455=string_clone(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 6))->sname))));
                                                                                        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0,0); }
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value455);
                                                                                        if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { right_value455 = come_decrement_ref_count(right_value455, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value455;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __result295__ = __result_obj__ = result_208;
                                                                                    if(result_208 && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,result_208, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                    return __result295__;
                                                                                    if(result_208 && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,result_208, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional397;
_Bool _if_conditional398;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                        if(_if_conditional397=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 0))->type!=((void*)0),                                                                                        _if_conditional397) {
                                                                                            if(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                        }
                                                                                        if(_if_conditional398=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 1))->sname!=((void*)0),                                                                                        _if_conditional398) {
                                                                                            if(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                        }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional399;
struct sAlignAsNode* __result297__;
void* right_value461;
struct sAlignAsNode* result_216;
_Bool _if_conditional400;
void* right_value462;
struct sType* __dec_obj167;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value463;
char* __dec_obj168;
struct sAlignAsNode* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value461, 0, sizeof(void*));
memset(&result_216, 0, sizeof(struct sAlignAsNode*));
memset(&right_value462, 0, sizeof(void*));
memset(&right_value463, 0, sizeof(void*));
                                                                                        if(_if_conditional399=self==(void*)0,                                                                                        _if_conditional399) {
                                                                                            __result297__ = __result_obj__ = (void*)0;
                                                                                            return __result297__;
                                                                                        }
                                                                                        result_216=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value461=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode"))));
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value461);
                                                                                        if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value461;
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional400=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 4))->type!=((void*)0),                                                                                        _if_conditional400) {
                                                                                            __dec_obj167=((struct sAlignAsNode*)come_null_check(result_216, "sAlignAsNode_clone", 4))->type;
                                                                                            ((struct sAlignAsNode*)come_null_check(result_216, "sAlignAsNode_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value462=sType_clone(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 4))->type))));
                                                                                            if(__dec_obj167) { come_call_finalizer(sType_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value462);
                                                                                            if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value462;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        if(_if_conditional401=self!=((void*)0),                                                                                        _if_conditional401) {
                                                                                            ((struct sAlignAsNode*)come_null_check(result_216, "sAlignAsNode_clone", 5))->sline=((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 5))->sline;
                                                                                        }
                                                                                        if(_if_conditional402=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 6))->sname!=((void*)0),                                                                                        _if_conditional402) {
                                                                                            __dec_obj168=((struct sAlignAsNode*)come_null_check(result_216, "sAlignAsNode_clone", 6))->sname;
                                                                                            ((struct sAlignAsNode*)come_null_check(result_216, "sAlignAsNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value463=string_clone(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 6))->sname))));
                                                                                            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value463);
                                                                                            if(right_value463 && right_value463 != __result_obj__ && !__freed_obj__) { right_value463 = come_decrement_ref_count(right_value463, (void*)0, (void*)0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value463;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __result298__ = __result_obj__ = result_216;
                                                                                        if(result_216 && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,result_216, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                        return __result298__;
                                                                                        if(result_216 && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,result_216, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional403;
_Bool _if_conditional404;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                        if(_if_conditional403=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0))->exp!=((void*)0),                                                                                        _if_conditional403) {
                                                                                            if(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0))->exp && !__freed_obj__) { ((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0))->exp = come_decrement_ref_count(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0))->exp, ((struct sNode*)((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0))->exp)->finalize, ((struct sNode*)((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0))->exp)->_protocol_obj, 0, 0, 0); } 
                                                                                        }
                                                                                        if(_if_conditional404=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1))->sname!=((void*)0),                                                                                        _if_conditional404) {
                                                                                            if(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                        }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional405;
struct sAlignAsExpNode* __result300__;
void* right_value468;
struct sAlignAsExpNode* result_218;
_Bool _if_conditional406;
void* right_value469;
struct sNode* __dec_obj169;
_Bool _if_conditional407;
_Bool _if_conditional408;
void* right_value470;
char* __dec_obj170;
struct sAlignAsExpNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value468, 0, sizeof(void*));
memset(&result_218, 0, sizeof(struct sAlignAsExpNode*));
memset(&right_value469, 0, sizeof(void*));
memset(&right_value470, 0, sizeof(void*));
                                                                                        if(_if_conditional405=self==(void*)0,                                                                                        _if_conditional405) {
                                                                                            __result300__ = __result_obj__ = (void*)0;
                                                                                            return __result300__;
                                                                                        }
                                                                                        result_218=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value468=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode"))));
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value468);
                                                                                        if(right_value468 && right_value468 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value468;
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional406=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 4))->exp!=((void*)0),                                                                                        _if_conditional406) {
                                                                                            __dec_obj169=((struct sAlignAsExpNode*)come_null_check(result_218, "sAlignAsExpNode_clone", 4))->exp;
                                                                                            ((struct sAlignAsExpNode*)come_null_check(result_218, "sAlignAsExpNode_clone", 4))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value469=sNode_clone(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 4))->exp))));
                                                                                            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value469);
                                                                                            if(right_value469 && right_value469 != __result_obj__ && !__freed_obj__) { right_value469 = come_decrement_ref_count(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0); } 
                                                                                            __right_value_freed_obj[0] = right_value469;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        if(_if_conditional407=self!=((void*)0),                                                                                        _if_conditional407) {
                                                                                            ((struct sAlignAsExpNode*)come_null_check(result_218, "sAlignAsExpNode_clone", 5))->sline=((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 5))->sline;
                                                                                        }
                                                                                        if(_if_conditional408=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 6))->sname!=((void*)0),                                                                                        _if_conditional408) {
                                                                                            __dec_obj170=((struct sAlignAsExpNode*)come_null_check(result_218, "sAlignAsExpNode_clone", 6))->sname;
                                                                                            ((struct sAlignAsExpNode*)come_null_check(result_218, "sAlignAsExpNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value470=string_clone(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 6))->sname))));
                                                                                            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value470);
                                                                                            if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { right_value470 = come_decrement_ref_count(right_value470, (void*)0, (void*)0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value470;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __result301__ = __result_obj__ = result_218;
                                                                                        if(result_218 && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,result_218, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                        return __result301__;
                                                                                        if(result_218 && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,result_218, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b325;
_Bool _if_conditional409;
_Bool __exception_result_var_b326;
_Bool _if_conditional410;
long int __exception_result_var_b327;
_Bool __exception_result_var_b328;
_Bool __exception_result_var_b329;
_Bool _if_conditional411;
long int __exception_result_var_b330;
_Bool _if_conditional412;
_Bool __exception_result_var_b331;
_Bool _if_conditional413;
long int __exception_result_var_b332;
_Bool __exception_result_var_b333;
_Bool _if_conditional414;
long int __exception_result_var_b334;
_Bool __exception_result_var_b335;
_Bool _if_conditional415;
long int __exception_result_var_b336;
void* right_value473;
void* right_value474;
struct sNullNodeX* __exception_result_var_b337;
struct sNode* _inf_value34;
struct sNullNodeX* _inf_obj_value34;
void* right_value477;
struct sNode* __result306__;
void* right_value478;
char* __exception_result_var_b338;
void* right_value479;
struct sNode* __exception_result_var_b339;
struct sNode* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value473, 0, sizeof(void*));
memset(&right_value474, 0, sizeof(void*));
memset(&right_value477, 0, sizeof(void*));
memset(&right_value478, 0, sizeof(void*));
memset(&right_value479, 0, sizeof(void*));
    if(_if_conditional409=(come_push_stackframe("21obj.c", 1834),__exception_result_var_b325=string_operator_equals(buf,"using"), come_pop_stackframe(), __exception_result_var_b325),    _if_conditional409) {
        if(_if_conditional410=(come_push_stackframe("21obj.c", 1835),__exception_result_var_b326=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1835))->p,"comelang"), come_pop_stackframe(), __exception_result_var_b326),        _if_conditional410) {
            ((struct sInfo*)come_null_check(info, "21obj.c", 1836))->p+=(come_push_stackframe("21obj.c", 1836),__exception_result_var_b327=strlen("comelang"), come_pop_stackframe(), __exception_result_var_b327);
            (come_push_stackframe("21obj.c", 1837),skip_spaces_and_lf(info),come_pop_stackframe());
            gComeC=(_Bool)0;
        }
        else {
            if(_if_conditional411=(come_push_stackframe("21obj.c", 1841),__exception_result_var_b328=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1841))->p,"c"), come_pop_stackframe(), __exception_result_var_b328)||(come_push_stackframe("21obj.c", 1841),__exception_result_var_b329=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1841))->p,"C"), come_pop_stackframe(), __exception_result_var_b329),            _if_conditional411) {
                ((struct sInfo*)come_null_check(info, "21obj.c", 1842))->p+=(come_push_stackframe("21obj.c", 1842),__exception_result_var_b330=strlen("c"), come_pop_stackframe(), __exception_result_var_b330);
                (come_push_stackframe("21obj.c", 1843),skip_spaces_and_lf(info),come_pop_stackframe());
                if(_if_conditional412=*((struct sInfo*)come_null_check(info, "21obj.c", 1845))->p==123,                _if_conditional412) {
                    ((struct sInfo*)come_null_check(info, "21obj.c", 1846))->p++;
                    (come_push_stackframe("21obj.c", 1847),skip_spaces_and_lf(info),come_pop_stackframe());
                    gComeC=(_Bool)1;
                    (come_push_stackframe("21obj.c", 1851),transpile_toplevel((_Bool)1,info),come_pop_stackframe());
                    gComeC=(_Bool)0;
                }
                else {
                    gComeC=(_Bool)1;
                }
            }
            else {
                if(_if_conditional413=(come_push_stackframe("21obj.c", 1859),__exception_result_var_b331=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1859))->p,"gc"), come_pop_stackframe(), __exception_result_var_b331),                _if_conditional413) {
                    ((struct sInfo*)come_null_check(info, "21obj.c", 1860))->p+=(come_push_stackframe("21obj.c", 1860),__exception_result_var_b332=strlen("gc"), come_pop_stackframe(), __exception_result_var_b332);
                    (come_push_stackframe("21obj.c", 1861),skip_spaces_and_lf(info),come_pop_stackframe());
                }
                else {
                    if(_if_conditional414=(come_push_stackframe("21obj.c", 1863),__exception_result_var_b333=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1863))->p,"no-gc"), come_pop_stackframe(), __exception_result_var_b333),                    _if_conditional414) {
                        ((struct sInfo*)come_null_check(info, "21obj.c", 1864))->p+=(come_push_stackframe("21obj.c", 1864),__exception_result_var_b334=strlen("no-gc"), come_pop_stackframe(), __exception_result_var_b334);
                        (come_push_stackframe("21obj.c", 1865),skip_spaces_and_lf(info),come_pop_stackframe());
                    }
                    else {
                        if(_if_conditional415=(come_push_stackframe("21obj.c", 1867),__exception_result_var_b335=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1867))->p,"unsafe"), come_pop_stackframe(), __exception_result_var_b335),                        _if_conditional415) {
                            ((struct sInfo*)come_null_check(info, "21obj.c", 1868))->p+=(come_push_stackframe("21obj.c", 1868),__exception_result_var_b336=strlen("unsafe"), come_pop_stackframe(), __exception_result_var_b336);
                            (come_push_stackframe("21obj.c", 1869),skip_spaces_and_lf(info),come_pop_stackframe());
                        }
                        else {
                            (come_push_stackframe("21obj.c", 1872),err_msg(info,"invalid using"),come_pop_stackframe());
                            (come_push_stackframe("21obj.c", 1873),exit(2),come_pop_stackframe());
                        }
                    }
                }
            }
        }
        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1876, "struct sNode");
        _inf_obj_value34=come_increment_ref_count((come_push_stackframe("21obj.c", 1876),__exception_result_var_b337=((struct sNullNodeX*)(right_value474=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value473=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1876, "struct sNullNodeX")))),info))), come_pop_stackframe(), __exception_result_var_b337));
        _inf_value34->_protocol_obj=_inf_obj_value34;
        _inf_value34->finalize=(void*)sNullNodeX_finalize;
        _inf_value34->clone=(void*)sNullNodeX_clone;
        _inf_value34->compile=(void*)sNullNodeX_compile;
        _inf_value34->sline=(void*)sNullNodeX_sline;
        _inf_value34->sname=(void*)sNullNodeX_sname;
        _inf_value34->terminated=(void*)sNullNodeX_terminated;
        _inf_value34->kind=(void*)sNullNodeX_kind;
        __result306__ = __result_obj__ = ((struct sNode*)(right_value477=_inf_value34));
        if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value473);
        if(right_value473 && right_value473 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value473;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value474);
        if(right_value474 && right_value474 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value474;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value477);
        if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { right_value477 = come_decrement_ref_count(right_value477, ((struct sNode*)right_value477)->finalize, ((struct sNode*)right_value477)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value477;
        __freed_obj__ = 0;
        return __result306__;
    }
    __result307__ = __result_obj__ = (come_push_stackframe("21obj.c", 1879),__exception_result_var_b339=((struct sNode*)(right_value479=top_level_v93((char*)come_increment_ref_count((come_push_stackframe("21obj.c", 1879),__exception_result_var_b338=((char*)(right_value478=__builtin_string(buf))), come_pop_stackframe(), __exception_result_var_b338)),head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b339);
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value478);
    if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { right_value478 = come_decrement_ref_count(right_value478, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value478;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value479);
    if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { right_value479 = come_decrement_ref_count(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value479;
    __freed_obj__ = 0;
    return __result307__;
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
}

static void sNullNodeX_finalize(struct sNullNodeX* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional416;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional416=self!=((void*)0)&&((struct sNullNodeX*)come_null_check(self, "sNullNodeX_finalize", 0))->sname!=((void*)0),            _if_conditional416) {
                if(((struct sNullNodeX*)come_null_check(self, "sNullNodeX_finalize", 0))->sname && !__freed_obj__) { ((struct sNullNodeX*)come_null_check(self, "sNullNodeX_finalize", 0))->sname = come_decrement_ref_count(((struct sNullNodeX*)come_null_check(self, "sNullNodeX_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional417;
struct sNullNodeX* __result304__;
void* right_value475;
struct sNullNodeX* result_219;
_Bool _if_conditional418;
_Bool _if_conditional419;
void* right_value476;
char* __dec_obj171;
struct sNullNodeX* __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value475, 0, sizeof(void*));
memset(&result_219, 0, sizeof(struct sNullNodeX*));
memset(&right_value476, 0, sizeof(void*));
            if(_if_conditional417=self==(void*)0,            _if_conditional417) {
                __result304__ = __result_obj__ = (void*)0;
                return __result304__;
            }
            result_219=(struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value475=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "sNullNodeX_clone", 3, "struct sNullNodeX"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value475);
            if(right_value475 && right_value475 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value475;
            __freed_obj__ = 0;
            if(_if_conditional418=self!=((void*)0),            _if_conditional418) {
                ((struct sNullNodeX*)come_null_check(result_219, "sNullNodeX_clone", 4))->sline=((struct sNullNodeX*)come_null_check(self, "sNullNodeX_clone", 4))->sline;
            }
            if(_if_conditional419=self!=((void*)0)&&((struct sNullNodeX*)come_null_check(self, "sNullNodeX_clone", 5))->sname!=((void*)0),            _if_conditional419) {
                __dec_obj171=((struct sNullNodeX*)come_null_check(result_219, "sNullNodeX_clone", 5))->sname;
                ((struct sNullNodeX*)come_null_check(result_219, "sNullNodeX_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value476=string_clone(((struct sNullNodeX*)come_null_check(self, "sNullNodeX_clone", 5))->sname))));
                if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value476);
                if(right_value476 && right_value476 != __result_obj__ && !__freed_obj__) { right_value476 = come_decrement_ref_count(right_value476, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value476;
                __freed_obj__ = 0;
            }
            __result305__ = __result_obj__ = result_219;
            if(result_219 && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,result_219, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result305__;
            if(result_219 && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,result_219, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b340;
_Bool _if_conditional420;
long int __exception_result_var_b341;
void* right_value480;
struct tuple3$3sTypephcharphbool* __exception_result_var_b342;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type3_220;
char* name2_221;
_Bool err_222;
_Bool _if_conditional421;
int __exception_result_var_b343;
void* right_value481;
struct sType* inf_type_223;
void* right_value482;
void* right_value483;
struct sImplementsNode* __exception_result_var_b344;
struct sNode* _inf_value35;
struct sImplementsNode* _inf_obj_value35;
void* right_value488;
struct sNode* __result310__;
_Bool _if_conditional430;
_Bool __exception_result_var_b345;
_Bool _while_condtional9;
void* right_value489;
struct sNode* __exception_result_var_b346;
struct sNode* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value480, 0, sizeof(void*));
memset(&type3_220, 0, sizeof(struct sType*));
memset(&name2_221, 0, sizeof(char*));
memset(&err_222, 0, sizeof(_Bool));
memset(&type3_220, 0, sizeof(struct sType*));
memset(&name2_221, 0, sizeof(char*));
memset(&err_222, 0, sizeof(_Bool));
memset(&right_value481, 0, sizeof(void*));
memset(&inf_type_223, 0, sizeof(struct sType*));
memset(&right_value482, 0, sizeof(void*));
memset(&right_value483, 0, sizeof(void*));
memset(&right_value488, 0, sizeof(void*));
memset(&right_value489, 0, sizeof(void*));
    if(_if_conditional420=(come_push_stackframe("21obj.c", 1884),__exception_result_var_b340=strmemcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1884))->p,"implements"), come_pop_stackframe(), __exception_result_var_b340),    _if_conditional420) {
        ((struct sInfo*)come_null_check(info, "21obj.c", 1885))->p+=(come_push_stackframe("21obj.c", 1885),__exception_result_var_b341=strlen("implements"), come_pop_stackframe(), __exception_result_var_b341);
        (come_push_stackframe("21obj.c", 1886),skip_spaces_and_lf(info),come_pop_stackframe());
        multiple_assign_var10=(come_push_stackframe("21obj.c", 1888),__exception_result_var_b342=((struct tuple3$3sTypephcharphbool*)(right_value480=parse_type(info,(_Bool)0,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b342);
        type3_220=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        name2_221=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_222=multiple_assign_var10->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value480);
        if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value480;
        __freed_obj__ = 0;
        if(_if_conditional421=!err_222,        _if_conditional421) {
            (come_push_stackframe("21obj.c", 1890),__exception_result_var_b343=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "21obj.c", 1890))->sname,((struct sInfo*)come_null_check(info, "21obj.c", 1890))->sline), come_pop_stackframe(), __exception_result_var_b343);
            (come_push_stackframe("21obj.c", 1891),exit(2),come_pop_stackframe());
        }
        inf_type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value481=sType_clone(type3_220))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value481);
        if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value481;
        __freed_obj__ = 0;
        _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1896, "struct sNode");
        _inf_obj_value35=come_increment_ref_count((come_push_stackframe("21obj.c", 1896),__exception_result_var_b344=((struct sImplementsNode*)(right_value483=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value482=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1896, "struct sImplementsNode")))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_223),info))), come_pop_stackframe(), __exception_result_var_b344));
        _inf_value35->_protocol_obj=_inf_obj_value35;
        _inf_value35->finalize=(void*)sImplementsNode_finalize;
        _inf_value35->clone=(void*)sImplementsNode_clone;
        _inf_value35->compile=(void*)sImplementsNode_compile;
        _inf_value35->sline=(void*)sImplementsNode_sline;
        _inf_value35->sname=(void*)sImplementsNode_sname;
        _inf_value35->terminated=(void*)sImplementsNode_terminated;
        _inf_value35->kind=(void*)sImplementsNode_kind;
        __result310__ = __result_obj__ = ((struct sNode*)(right_value488=_inf_value35));
        if(type3_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_220, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name2_221 && !__freed_obj__) { name2_221 = come_decrement_ref_count(name2_221, (void*)0, (void*)0, 0, 0, 0); }
        if(inf_type_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_223, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value482);
        if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value482;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value483);
        if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value483;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value488);
        if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { right_value488 = come_decrement_ref_count(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[4] = right_value488;
        __freed_obj__ = 0;
        return __result310__;
        if(type3_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_220, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name2_221 && !__freed_obj__) { name2_221 = come_decrement_ref_count(name2_221, (void*)0, (void*)0, 0, 0, 0); }
        if(inf_type_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional430=*((struct sInfo*)come_null_check(info, "21obj.c", 1898))->p==64,        _if_conditional430) {
            ((struct sInfo*)come_null_check(info, "21obj.c", 1899))->p++;
            while(_while_condtional9=(come_push_stackframe("21obj.c", 1900),__exception_result_var_b345=xisalnum(*((struct sInfo*)come_null_check(info, "21obj.c", 1900))->p), come_pop_stackframe(), __exception_result_var_b345)||*((struct sInfo*)come_null_check(info, "21obj.c", 1900))->p==95,            _while_condtional9) {
                ((struct sInfo*)come_null_check(info, "21obj.c", 1901))->p++;
            }
            (come_push_stackframe("21obj.c", 1903),skip_spaces_and_lf(info),come_pop_stackframe());
        }
    }
    __result311__ = __result_obj__ = (come_push_stackframe("21obj.c", 1906),__exception_result_var_b346=((struct sNode*)(right_value489=post_position_operator3_v20((struct sNode*)come_increment_ref_count(node),info))), come_pop_stackframe(), __exception_result_var_b346);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value489);
    if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { right_value489 = come_decrement_ref_count(right_value489, ((struct sNode*)right_value489)->finalize, ((struct sNode*)right_value489)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value489;
    __freed_obj__ = 0;
    return __result311__;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional422=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0))->obj_exp!=((void*)0),            _if_conditional422) {
                if(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0))->obj_exp && !__freed_obj__) { ((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0))->obj_exp = come_decrement_ref_count(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0))->obj_exp, ((struct sNode*)((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0))->obj_exp)->finalize, ((struct sNode*)((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0))->obj_exp)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional423=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1))->inf_type!=((void*)0),            _if_conditional423) {
                if(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1))->inf_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1))->inf_type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional424=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 2))->sname!=((void*)0),            _if_conditional424) {
                if(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 2))->sname && !__freed_obj__) { ((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 2))->sname = come_decrement_ref_count(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional425;
struct sImplementsNode* __result308__;
void* right_value484;
struct sImplementsNode* result_224;
_Bool _if_conditional426;
void* right_value485;
struct sNode* __dec_obj172;
_Bool _if_conditional427;
void* right_value486;
struct sType* __dec_obj173;
_Bool _if_conditional428;
_Bool _if_conditional429;
void* right_value487;
char* __dec_obj174;
struct sImplementsNode* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value484, 0, sizeof(void*));
memset(&result_224, 0, sizeof(struct sImplementsNode*));
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value487, 0, sizeof(void*));
            if(_if_conditional425=self==(void*)0,            _if_conditional425) {
                __result308__ = __result_obj__ = (void*)0;
                return __result308__;
            }
            result_224=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value484=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value484);
            if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value484;
            __freed_obj__ = 0;
            if(_if_conditional426=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 4))->obj_exp!=((void*)0),            _if_conditional426) {
                __dec_obj172=((struct sImplementsNode*)come_null_check(result_224, "sImplementsNode_clone", 4))->obj_exp;
                ((struct sImplementsNode*)come_null_check(result_224, "sImplementsNode_clone", 4))->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value485=sNode_clone(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 4))->obj_exp))));
                if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value485);
                if(right_value485 && right_value485 != __result_obj__ && !__freed_obj__) { right_value485 = come_decrement_ref_count(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value485;
                __freed_obj__ = 0;
            }
            if(_if_conditional427=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 5))->inf_type!=((void*)0),            _if_conditional427) {
                __dec_obj173=((struct sImplementsNode*)come_null_check(result_224, "sImplementsNode_clone", 5))->inf_type;
                ((struct sImplementsNode*)come_null_check(result_224, "sImplementsNode_clone", 5))->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value486=sType_clone(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 5))->inf_type))));
                if(__dec_obj173) { come_call_finalizer(sType_finalize,__dec_obj173, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value486);
                if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value486;
                __freed_obj__ = 0;
            }
            if(_if_conditional428=self!=((void*)0),            _if_conditional428) {
                ((struct sImplementsNode*)come_null_check(result_224, "sImplementsNode_clone", 6))->sline=((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 6))->sline;
            }
            if(_if_conditional429=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 7))->sname!=((void*)0),            _if_conditional429) {
                __dec_obj174=((struct sImplementsNode*)come_null_check(result_224, "sImplementsNode_clone", 7))->sname;
                ((struct sImplementsNode*)come_null_check(result_224, "sImplementsNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value487=string_clone(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 7))->sname))));
                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value487);
                if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { right_value487 = come_decrement_ref_count(right_value487, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value487;
                __freed_obj__ = 0;
            }
            __result309__ = __result_obj__ = result_224;
            if(result_224 && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,result_224, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result309__;
            if(result_224 && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,result_224, (void*)0, (void*)0, 0, 0, 0, 0); }
}

