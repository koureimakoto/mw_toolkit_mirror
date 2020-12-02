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


#ifndef MK_VERBOSE_LIB_VAR_STATUS_H_
#define MK_VERBOSE_LIB_VAR_STATUS_H_
  #include "verbose_color.h"
// You can use or not this header. -D_MK_VAR_OUTPUT_ - GCC or CLang
#ifdef _MK_VAR_OUTPUT_ 

#ifndef MK_VERBOSEO_VA_ARGS_COUNT
  #define MK_VERBOSEO_VA_ARGS_COUNT
  int mk_verbose_va_args_count = 0;
#endif // __MK_VERBOSEO_VA_ARGS_COUNT__

#ifdef __cplusplus
  #include <cstring>
  #include <iostream>
  #include <typeinfo>
  #include <cstdint>
  #include <cstdbool> // Only GCC accpet _Bool
  #include <cfloat>   // FLT_EVAL_METHOD
  
  #ifndef _Bool
    #define _Bool bool
  #endif

  #ifndef float_t
    #define float_t float
  #endif

  #ifndef double_t
    #define double_t double
  #endif
  
  /* Get var name as a string. */
  #define get_name(x) #x
  
  /* Return var type in string form. */
  template <typename T>
  char *
  type_name( T type )
    {
    const char * str = typeid(type).name(); 
    if(strcmp(str, "b")  == 0) return (char *)"Boolean";
    if(strcmp(str, "Pb") == 0) return (char *)"Boolean[*]";
    if(strcmp(str, "c")  == 0) return (char *)"Char";
    if(strcmp(str, "Pc") == 0) return (char *)"Char[*]";
    if(strcmp(str, "h")  == 0) return (char *)"Unsigned Char";
    if(strcmp(str, "Ph") == 0) return (char *)"Unsigned Char[*]";
    if(strcmp(str, "a")  == 0) return (char *)"Signed Char";
    if(strcmp(str, "Pa") == 0) return (char *)"Signed Char[*]";
    if(strcmp(str, "i")  == 0) return (char *)"Signed Int";
    if(strcmp(str, "Pi") == 0) return (char *)"Signed Int[*]";
    if(strcmp(str, "j")  == 0) return (char *)"Unsigned Int";
    if(strcmp(str, "Pj") == 0) return (char *)"Unsigned Int[*]";
    if(strcmp(str, "s")  == 0) return (char *)"Signed Short Int";
    if(strcmp(str, "Ps") == 0) return (char *)"Signed Short Int[*]";
    if(strcmp(str, "t")  == 0) return (char *)"Unsigned Short Int";
    if(strcmp(str, "Pt") == 0) return (char *)"Unsigned Short Int[*]";
    if(strcmp(str, "l")  == 0) return (char *)"Signed Long Int";
    if(strcmp(str, "Pl") == 0) return (char *)"Signed Long Int[*]";
    if(strcmp(str, "m")  == 0) return (char *)"Unsigned Long Int";
    if(strcmp(str, "Pm") == 0) return (char *)"Unsigned Long Int[*]";
    if(strcmp(str, "x")  == 0) return (char *)"Signed L.Long Int";
    if(strcmp(str, "Px") == 0) return (char *)"Signed L.Long Int[*]";
    if(strcmp(str, "y")  == 0) return (char *)"Unsigned L.Long Int";
    if(strcmp(str, "Py") == 0) return (char *)"Unsigned L.Long Int[*]";
    if(strcmp(str, "f")  == 0) return (char *)"Float";
    if(strcmp(str, "Pf") == 0) return (char *)"Float[*]";
    if(strcmp(str, "d")  == 0) return (char *)"Double";
    if(strcmp(str, "Pd") == 0) return (char *)"Double[*]";
    if(strcmp(str, "e")  == 0) return (char *)"Long Double";
    if(strcmp(str, "Pe") == 0) return (char *)"Long Double[*]"; 
    if(strncmp(str, "NSt7",  4) == 0) return (char *)"String";
    if(strncmp(str, "PNSt7", 5) == 0) return (char *)"String[*]";
    return (char *)"undefined";
    }
   /* Check if a var is pointer type. */
  template <typename T>
  int
  chk_pointer(T type)
    {
      if(strncmp(typeid(type).name(), "P", 1) == 0)
        return 1;
      return 0;
    }
  
  /* Check the format of the variable to print formatted */
  template <typename T>
  char *
  chk_fmt(T type)
    {
    const char * str = typeid(type).name(); 
    if(strcmp(str, "b")  == 0) return (char *)"%d";
    if(strcmp(str, "c")  == 0) return (char *)"%c";
    if(strcmp(str, "h")  == 0) return (char *)"%c";
    if(strcmp(str, "a")  == 0) return (char *)"%c";
    if(strcmp(str, "i")  == 0) return (char *)"%d";
    if(strcmp(str, "j")  == 0) return (char *)"%u";
    if(strcmp(str, "s")  == 0) return (char *)"%h";
    if(strcmp(str, "t")  == 0) return (char *)"%hu";
    if(strcmp(str, "l")  == 0) return (char *)"%ld";
    if(strcmp(str, "m")  == 0) return (char *)"%lu";
    if(strcmp(str, "x")  == 0) return (char *)"%lld";
    if(strcmp(str, "y")  == 0) return (char *)"%llu";
    if(strcmp(str, "f")  == 0) return (char *)"%F";
    if(strcmp(str, "d")  == 0) return (char *)"%F";
    if(strcmp(str, "e")  == 0) return (char *)"%lF";
    if(strncmp(str, "NSt7",  4) == 0) return (char *)"%s";
    if(chk_pointer(str) == 1) return (char *)"%p";
    return (char *)"undefined";
    }  
  
  
    /* 
   * PRINT_MEM( variable )
   *   |
   *   + variable : Any type.
   *
   * Print more verbose status about var 
   *
   */
  #ifndef MK_VERBOSE_MEMORY_BUFFER
  #define MK_VERBOSE_MEMORY_BUFFER
  //It protects the variable from trying to be created more than once.
  char mk_verbose_memory_buffer[50];
  #endif //MK_VERBOSE_MEMORY_BUFFER
    
  #define print_mem(x) \
      std::cout << "   | " << get_name(x) << '{' << type_name(x) << "}::" \
                << _B_BLU_ << '[' << x << ']' <<_RESET_ << '\n'                        \
                << "   +----- size[" << sizeof(x) << "]::mem["            \
                << _B_GRN_ << &x << _RESET_ << "]\n" 
  
  
    /*  
   *  Memory nested printer
   *  
   *  mk_mem_verbose("Section Title",
   *   _(var)
   *   _(var2)
   *   _(var3)
   * ); 
   *  Without comma between fuctions.
   */
  #define _(x) print_mem(x); mk_verbose_va_args_count += 1;
  #define mk_mem_verbose(title,...)    \
    std::cout << '[' << _B_YLW_ << title << _RESET_ << "]\n"; \
    __VA_ARGS__                        \
    std::cout << "   +[end]"  << '\n'; \

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
  _Bool         :"BOOL"           , signed char            :"CHAR"   ,         \
  char          :"CHAR"           , unsigned char          :"UCHAR"  ,         \
  short int     :"S_INT"          , unsigned short int     :"S_UINT" ,         \
  int           :"INT"            , unsigned int           :"UINT"   ,         \
  long int      :"L_INT"          , unsigned long int      :"L_UINT" ,         \
  long long int :"LL_INT"         , unsigned long long int :"LL_UINT",         \
  float         :"FLOAT"          , double                 :"DOUBLE" ,         \
  long double   :"L_DOUBLE",                                                   \
  _Bool*        :"BOOL[pointer]"  , signed char*           :"CHAR[pointer]"   ,\
  char*         :"CHAR[pointer]"  , unsigned char*         :"UCHAR[pointer]"  ,\
  short int*    :"S_INT[pointer]" , unsigned short int*    :"S_UINT[pointer]" ,\
  int*          :"INT[pointer]"   , unsigned int*          :"UINT[pointer]"   ,\
  long int*     :"L_INT[pointer]" , unsigned long int*     :"L_UINT[pointer]" ,\
  long long int*:"LL_INT[pointer]", unsigned long long int*:"LL_UINT[pointer]",\
  float*        :"FLOAT[pointer]" , double*                :"DOUBLE[pointer]" ,\
  long double*  : "L_DOUBLE[pointer]",                                         \
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
  #ifndef MK_VERBOSE_MEMORY_BUFFER
  #define MK_VERBOSE_MEMORY_BUFFER
  //It protects the variable from trying to be created more than once.
  char mk_verbose_memory_buffer[50];
  #endif //MK_VERBOSE_MEMORY_BUFFER

  #define print_mem(x)                                         \
    snprintf                                                   \
      (                                                        \
      mk_verbose_memory_buffer, 50, "   | %s{%s}::[%s%s%s]\n", \
      get_name(x), type_name(x), _B_BLU_,                      \
      (chk_pointer(x)==1?"%p": chk_fmt(x)) , _RESET_           \
      );                                                       \
    printf( mk_verbose_memory_buffer, x);                      \
    printf                                                     \
      (                                                        \
      "   +-----  size[%ld]::mem[%s%p%s]\n",                   \
      sizeof(x), _B_GRN_ ,(void*)&x , _RESET_                  \
      )
  
   
  /*  
   *  Memory nested printer
   *  
   *  mk_mem_verbose("Section Title",
   *   _(var)
   *   _(var2)
   *   _(var3)
   * ); 
   *  Without comma between fuctions.
   */
  #define _(x) print_mem(x) ; mk_verbose_va_args_count += 1;
  #define mk_mem_verbose(title,...)                \
    printf("[%s%s%s]\n", _B_YLW_, title, _RESET_ );\
    __VA_ARGS__                                    \
    printf("   +[end]\n")
    
#endif // __cplusplus

#else  // _MK_VAR_STATUS_
  
  /* 
   *  Blank Macros  
   *
   *  For to each new macro add here a 
   * new blankmacro with the same name.
   */
  #define get_name(x) #x
  #define type_name(x)
  #define chk_pointer(x)
  #define chk_fmt(x) 
  #define print_mem(x) 
  #define _(x)
  #define mk_mem_verbose(title, ...)

#endif // _MK_VAR_STATUS_
#endif // MK_VERBOSE_LIB_VAR_STATUS_H_
