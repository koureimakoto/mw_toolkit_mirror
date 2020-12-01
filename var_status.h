#ifndef MK_VERBOSE_LIB_VAR_STATUS_H_
#define MK_VERBOSE_LIB_VAR_STATUS_H_

#ifndef MK_VERBOSEO_VA_ARGS_COUNT
#define MK_VERBOSEO_VA_ARGS_COUNT
int mk_verbose_va_args_count = 0;
#endif // __MK_VERBOSEO_VA_ARGS_COUNT__

/* CPP Compiler */
#ifdef __cplusplus  

    #define get_name(x) #x
    #define type_name(x)
    #define chk_pointer(x)
    #define chk_fmt(x) 
    #define print_mem(x) 
    #define _(x)
    #define mk_mem_verbose(title, ...)

/* C Compiler */
#else
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>  //[u]int[num]_t
#include <math.h>    //float_t double_t
#include <stdbool.h> //bool
#include <float.h>   //FLT_EVAL_METHOD 

/* Get var name as a string. */
#define get_name(x) #x

/* Return var type in string form. */
#define type_name(x) _Generic((x),\
_Bool          : "BOOL"          , signed char             : "CHAR"   ,        \
char           : "CHAR"          , unsigned char           : "UCHAR"  ,        \
short int      : "S_INT"         , unsigned short int      : "S_UINT" ,        \
int            : "INT"           , unsigned int            : "UINT"   ,        \
long int       : "L_INT"         , unsigned long int       : "L_UINT" ,        \
long long int  : "LL_INT"        , unsigned long long int  : "LL_UINT",        \
float          : "FLOAT"         , double                  : "DOUBLE" ,        \
long double    : "L_DOUBLE",                                                   \
_Bool*        : "BOOL[pointer]"  , signed char*           : "CHAR[pointer]"   ,\
char*         : "CHAR[pointer]"  , unsigned char*         : "UCHAR[pointer]"  ,\
short int*    : "S_INT[pointer]" , unsigned short int*    : "S_UINT[pointer]" ,\
int*          : "INT[pointer]"   , unsigned int*          : "UINT[pointer]"   ,\
long int*     : "L_INT[pointer]" , unsigned long int*     : "L_UINT[pointer]" ,\
long long int*: "LL_INT[pointer]", unsigned long long int*: "LL_UINT[pointer]",\
float*        : "FLOAT[pointer]" , double*                : "DOUBLE[pointer]" ,\
long double*  : "L_DOUBLE[pointer]",                                           \
default: "undefined")

/* Check if a var is pointer type. */
#define chk_pointer(x) _Generic((x), \
_Bool*        : 1, signed char*           : 1,\
char*         : 1, unsigned char*         : 1,\
short int*    : 1, unsigned short int*    : 1,\
int*          : 1, unsigned int*          : 1,\
long int*     : 1, unsigned long int*     : 1,\
long long int*: 1, unsigned long long int*: 1,\
float*        : 1, double*                : 1,\
long double*  : 1, void*                  : 1,\
default: 0)

/* Check the format of the variable to print formatted */
#define chk_fmt(x) _Generic((x), \
_Bool         : "%s"  , signed char           : "%c"   ,\
char          : "%c"  , unsigned char         : "%c"   ,\
short int     : "%h"  , unsigned short int    : "%hu"  ,\
int           : "%d"  , unsigned int          : "%u"   ,\
long int      : "%ld" , unsigned long int     : "%lu"  ,\
long long int : "%lld", unsigned long long int: "%llu" ,\
float         : "%F"  , double                : "%F"   ,\
long double   : "%lF" , \
_Bool*        : "%s"  , signed char*           : "%c"  ,\
char*         : "%s"  , unsigned char*         : "%c"  ,\
short int*    : "%h"  , unsigned short int*    : "%hu" ,\
int*          : "%d"  , unsigned int*          : "%u"  ,\
long int*     : "%ld" , unsigned long int*     : "%lu" ,\
long long int*: "%lld", unsigned long long int*: "%llu",\
float*        : "%F"  , double*                : "%F"  ,\
long double*  : "%lF" , \
default: 0)


  /* Print more verbose status about var */
#ifndef MK_VERBOSE_MEMORY_BUFFER
#define MK_VERBOSE_MEMORY_BUFFER
char mk_verbose_memory_buffer[50];
#endif //MK_VERBOSE_MEMORY_BUFFER

#define print_mem(x)                                         \
  snprintf(mk_verbose_memory_buffer, 50, "   | %s{%s}::%s\n",\
    get_name(x), type_name(x),                               \
    (chk_pointer(x)==1?"->%p": chk_fmt(x))                   \
  );                                                         \
  printf( mk_verbose_memory_buffer, x);                      \
  printf("   +-----  size[%ld]::mem[%p]\n",                  \
    sizeof(x), (void*)&x                                     \
  )

// Memory nested printer
  /* mk_mem_verbose("Section Title",
   *   _(var)
   *   _(var2)
   *   _(var3)
   * ); Without comma between fuctions
   */
#define _(x) print_mem(x) ; mk_verbose_va_args_count += 1;
#define mk_mem_verbose(title,...) \
  printf("[%s]\n",title);         \
  __VA_ARGS__                     \
  printf("   +[end]\n")
  
#endif // C/CPP Compilers
#endif // MK_VERBOSE_LIB_VAR_STATUS_H_
