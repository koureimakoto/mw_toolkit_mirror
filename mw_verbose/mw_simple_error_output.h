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


#ifndef MW_VERBOSE_SIMPLE_ERROR_OUTPUT_H_
#define MW_VERBOSE_SIMPLE_ERROR_OUTPUT_H_

  // Precompiler for active error verbose message.
  #ifdef __MW_SIMPLE_ERROR_OUTPUT__
    #ifndef __cplusplus
      #define mw_serror(x)                                                     \
        if((strncmp(mw_verbose_line,__FILE__, MAX_VERBOSE_SIZE) != 0))         \
          {                                                                    \
          strncpy(mw_verbose_line, __FILE__, MAX_VERBOSE_SIZE);                \
          fprintf                                                              \
            (                                                                  \
            stderr,                                                            \
            "%s::%s::  %s\n",                                                  \
            _B_YLW_, __FILE__, _RESET_                                         \
            );                                                                 \
          }                                                                    \
        mw_error_count += 1;                                                   \
        fprintf                                                                \
          (                                                                    \
          stderr,                                                              \
          "%s\t<%d>%s %s \n",                                                  \
          _B_RED_,__LINE__,_RESET_ , x                                         \
          )
    #endif // __cplusplus
  #endif   // __MW_SIMPLE_ERROR_OUTPUT__

#endif // MW_VERBOSE_SIMPLE_ERROR_OUTPUT_H_
