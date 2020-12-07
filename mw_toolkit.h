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


#ifndef MW_TOOLKIT_H_
#define MW_TOOLKIT_H_
  #if defined( __MK_TOOLKIT_SIMPLIFIER__ )

     #include "mw_simplifier/mw_simplifier.hpp"

  #endif // __MK_TOOLKIT_SIMPLIFIER__

  #if defined( __MW_TOOLKIT_VERBOSE__ )

    #define __MW_VERBOSE__
    #define __MW_FINAL_OUTPUT__
    #define __MW_SIMPLE_MSG_OUTPUT__
    #define __MW_SIMPLE_ERROR_OUTPUT__


    #ifdef __cplusplus
  
      #include "mw_verbose/mw_verbose.hpp"
        
    #else
  
      #include "mw_verbose/mw_verbose.h"
  
    #endif // __cplusplus
  #else
  
      #include "mw_remove_all_functions.h"
    
  #endif // __MK_TOOLKIT__

#endif // MW_TOOLKIT_H_
 
 


 
