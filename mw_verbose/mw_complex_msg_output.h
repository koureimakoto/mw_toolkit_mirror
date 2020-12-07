/*******************************************************************************
*                                                                              * 
*                Copyright 2020 Makoto World - Talles HBF                      *
*                                                                              *
*        Licensed under the Apache License, Version 2.0 (the "License");       *
*       you may not use this file  except in compliance with the License.      *
*                 You may obtain a copy of the License at                      *
*                                                                              *
*               http://www.apache.org/licenses/LICENSE-2.0                     *
*                                                                              *
*     Unless required by applicable law or  agreed to in writing, software     *
*       distributed under the License is distributed on an "AS IS" BASIS,      *
*   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
*     See the License for the specific language governing permissions  and     *
*                      limitations under the License.                          *
*                                                                              *
*******************************************************************************/ 
/*******************************************************************************
*  Author: Talles HBF - Kourei                                                 *
*  Collab: <empty>                                                             *
*******************************************************************************/


#ifndef MW_VERBOSE_MW_COMPLEX_MSG_OUTPUT_H_
#define MW_VERBOSE_MW_COMPLEX_MSG_OUTPUT_H_

#ifdef __MW_COMPLEX_MG_OUTPUT__ 

  #ifndef MW_VERBOSEO_VA_ARGS_COUNT
  #define MW_VERBOSEO_VA_ARGS_COUNT
    int mw_verbose_va_args_count = 0;
  #endif // __MW_VERBOSEO_VA_ARGS_COUNT__

  #ifndef __cplusplus
    #include <stdio.h>
    #include <string.h>
    #include <stddef.h>
    #include <stdint.h>  //[u]int[num]_t
    #include <math.h>    //float_t double_t
    #include <stdbool.h> //bool  
    #include <float.h>   //FLT_EVAL_METHOD 
  
    #include "mw_verbose_color.h"

    /* Get var name as a string. */
    #define get_name(x) #x
  
    /* Return var type in string form. */
    #define type_name(x) _Generic((x)               ,\
    _Bool                  :"Bool"                  ,\
    signed char            :"Signed Char"           ,\
    char                   :"Signed Char"           ,\
    unsigned char          :"Unsigend Char"         ,\
    short int              :"Signed Short Int"      ,\
    unsigned short int     :"Unsigend Short Int"    ,\
    int                    :"Signed Int"            ,\
    unsigned int           :"Unsigend Int"          ,\
    long int               :"Signed Long Int"       ,\
    unsigned long int      :"Unsigend Long Int"     ,\
    long long int          :"Signed L.Long Int"     ,\
    unsigned long long int :"Unsigend L.Long Int"   ,\
    float                  :"Float"                 ,\
    double                 :"Double"                ,\
    long double            :"Long Double"           ,\
    _Bool*                 :"Bool[*]"               ,\
    signed char*           :"Signed Char[*]"        ,\
    char*                  :"Signed Char[*]"        ,\
    unsigned char*         :"Unsigend Char[*]"      ,\
    short int*             :"Signed Short Int[*]"   ,\
    unsigned short int*    :"Unsigend Short Int[*]" ,\
    int*                   :"Signed Int[*]"         ,\
    unsigned int*          :"Unsigend Int[*]"       ,\
    long int*              :"Signed Long Int[*]"    ,\
    unsigned long int*     :"Unsigend Long Int[*]"  ,\
    long long int*         :"Signed L.Long Int[*]"  ,\
    unsigned long long int*:"Unsigend L.Long Int[*]",\
    float*                 :"Float[*]"              ,\
    double*                :"Double[*]"             ,\
    long double*           : "Long Double[*]"       ,\
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
    _Bool         : "%d"  , signed char           : "%c"   ,\
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


    /* 
    * PRINT_MEM( variable )
    *   |
    *   + variable : Any type.
    *
    * Print more verbose status about var 
    *
    */
    #ifndef MW_VERBOSE_MEMORY_BUFFER
    #define MW_VERBOSE_MEMORY_BUFFER
    //It protects the variable from trying to be created more than once.
    char mw_verbose_memory_buffer[50];
    #endif //MW_VERBOSE_MEMORY_BUFFER

    #define print_mem(x)                                         \
      snprintf                                                   \
        (                                                        \
        mw_verbose_memory_buffer, 50, "   | %s{%s}::[%s%s%s]\n", \
        get_name(x), type_name(x), _B_BLU_,                      \
        (chk_pointer(x)==1?"%p": chk_fmt(x)) , _RESET_           \
        );                                                       \
      printf( mw_verbose_memory_buffer, x);                      \
      printf                                                     \
        (                                                        \
        "   +-----  size[%ld]::mem[%s%p%s]\n",                   \
        sizeof(x), _B_GRN_ ,(void*)&x , _RESET_                  \
        )
  
   
    /*  
    *  Memory nested printer
    *  
    *  -- HOW TO USE --
    *  mw_mem_verbose("Section Title",
    *   _(var)
    *   _(var2)
    *   _(var3)
    *  ); 
    *  Without comma between fuctions.
    */
    #define _(x) print_mem(x) ; mk_verbose_va_args_count += 1;
    #define mw_mem_verbose(title,...)                \
      printf("[%s%s%s]\n", _B_YLW_, title, _RESET_ );\
      __VA_ARGS__                                    \
      printf("   +[end]\n")
    
  #endif // __cplusplus

#endif // __MW_COMPLEX_MSG_OUTPUT__ 

#endif // MK_VERBOSE_MW_COMPLEX_MG_OUTPUT_H_
