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
 
#ifndef MW_VERBOSE_H_
#define MW_VERBOSE_H_

  #ifdef __MW_VERBOSE__
     #include "mw_verbose_common.h"

    #ifndef __cplusplus
  
      #include "mw_verbose_color.h"
      //#include "mw_fmt_msg_output.h"
      #include "mw_simple_msg_output.h"
      #include "mw_simple_error_output.h"
      #include "mw_complex_msg_output.h"
      #include "mw_final_msg_output.h"
      
    #endif // __cplusplus
  
  #endif   // __MW_VERBOSE__

#endif     // MW_VERBOSE_H_
 
