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
 
 
#ifndef MW_VERBOSE_COMMON_H_
#define MW_VERBOSE_COMMON_H_

  #define MAX_VERBOSE_SIZE 100
  static char     mw_verbose_line[MAX_VERBOSE_SIZE];
  static long int mw_error_count = 0;
  static long int mw_msg_count   = 0;
  
  #ifdef __cplusplus
  
    #include <iostream>
    #include <cstdint>
    #include <cstring>
  
  #else
  
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdint.h>
  
  #endif // __cplusplus

#endif   // MW_VERBOSE_COMMON_H_
 

 
