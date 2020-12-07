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


#ifndef MW_VERBOSE_SIMPLE_MSG_OUTPUT_H_
#define MW_VERBOSE_SIMPLE_MSG_OUTPUT_H_

  #ifdef __MW_SIMPLE_MSG_OUTPUT__
    #ifndef __cplusplus
      #define mw_smsg(x)                                                       \
        if((strncmp(mw_verbose_line,__FILE__, MAX_VERBOSE_SIZE) != 0))         \
          {                                                                    \
          strncpy(mw_verbose_line, __FILE__, MAX_VERBOSE_SIZE );               \
          fprintf                                                              \
            (                                                                  \
            stdout,                                                            \
            "%s::%s::%s\n",                                                    \
            _B_YLW_, __FILE__, _RESET_                                         \
            );                                                                 \
          }                                                                    \
        mw_msg_count += 1;                                                     \
        fprintf                                                                \
          (                                                                    \
          stdout,                                                              \
          "%s\t<%d>%s %s \n",                                                  \
          _B_BLU_,__LINE__,_RESET_ , x                                         \
          )
    #endif // END _L_CPP.
  #endif   //__MW_SIMPLE_ERROR_OUTPUT__

#endif // MW_VERBOSE_SIMPLE_MSG_OUTPUT_H_
