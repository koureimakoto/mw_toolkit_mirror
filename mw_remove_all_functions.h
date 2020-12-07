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


#ifndef MW_TOOLKIT_REMOVE_ALL_FUNCTIONS_H_
#define MW_TOOLKIT_REMOVE_ALL_FUNCTIONS_H_

  #ifndef __MW_SIMPLE_ERROR_OUTPUT__
  #define __MW_SIMPLE_ERROR_OUTPUT__

    #define mw_serror(x)

  #endif // __MW_SIMPLE_ERROR_OUTPUT__



  #ifndef __MW_SIMPLE_MSG_OUTPUT__
  #define __MW_SIMPLE_MSG_OUTPUT__

    #define mw_smsg(x)

  #endif // __MW_SIMPLE_MSG_OUTPUT__



  #ifndef __MW_COMPLEX_MSG_OUTPUT__
  #define __MW_COMPLEX_MSG_OUTPUT__

    #define get_name(x) #x
    #define type_name(x)
    #define chk_pointer(x)
    #define chk_fmt(x) 
    #define print_mem(x) 
    #define _(x)
    #define mk_mem_verbose(title, ...)
  
  #endif // __MW_COMPLEX_MSG_OUTPUT__


  #ifndef __MW_FINAL_OUTPUT__
  #define __MW_FINAL_OUTPUT__

    #define MW_INIT_VERBOSE()
  
  #endif // __MW_FINAL_OUTPUT__

#endif // MW_TOOLKIT_REMOVE_ALL_FUNCTIONS_H_
