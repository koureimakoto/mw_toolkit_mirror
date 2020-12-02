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



#ifndef MK_VERBOSE_LIB_VERBOSE_COLOR_H_
#define MK_VERBOSE_LIB_VERBOSE_COLOR_H_

  #if  defined(__unix__) || defined(__linux__)
    #define _B_RED_ "\033[1;031m"	
    #define _B_GRN_ "\033[1;032m"
    #define _B_YLW_ "\033[1;033m"
    #define _B_BLU_ "\033[1;034m"
    #define _MGT_   "\033[0;035m"	
    #define _RESET_ "\033[0m"
  #elif defined(_WIN32) || defined(WIN32) || defined(_WIN64) || defined(WIN64)
    #define _B_RED_ 
    #define _B_GRN_ 
    #define _B_YLW_ 
    #define _B_BLU_ 
    #define _MGT_   
    #define _RESET_
  #elif defined(__APPLE__)
    #define _B_RED_ "\033[1;031m"	
    #define _B_GRN_ "\033[1;032m"
    #define _B_YLW_ "\033[1;033m"
    #define _B_BLU_ "\033[1;034m"
    #define _MGT_   "\033[0;035m"	
    #define _RESET_ "\033[0m"
  #endif

#endif // MK_VERBOSE_LIB_VERBOSE_COLOR_H__
 
