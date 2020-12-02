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



#if defined(MK_VLIB) == 1
  #define _MK_VAR_OUTPUT_
  #define _MK_SIMPLE_MSG_
  #define _MK_SIMPLE_ERROR_
  #define _MK_VERBOSE_SIGNALS_
#endif
 

#ifndef MK_VERBOSE_LIB_VERBOSE_HEADER_H_
#define MK_VERBOSE_LIB_VERBOSE_HEADER_H_

#ifndef   _MK_VERBOSE_GLOBAL_CONTROL_
  
  // Prototypes 
  static inline void mk_verbose_process_end() __attribute__((always_inline));


  #define _MK_VERBOSE_GLOBAL_CONTROL_ 
  #define _MAX_VERBOSE_SIZE_ 100
  #include <stdlib.h>
  #include "simple_msg_output.h"
  #include "simple_error_output.h"
  #include "verbose_color.h"
  #include "variables_output.h"
  
  static char     mk_verbose_line[_MAX_VERBOSE_SIZE_];
  static long int mk_error_count = 0;
  static long int mk_msg_count   = 0;
  
  #if defined(_MK_VERBOSE_SIGNALS_)
    #ifdef __cplusplus
    #include <iostream>
    #include <cstdint>
    #include <cstring>
    using namespace std;
    
    inline void mk_verbose_process_end()
      {
      std::cout << "SIMPLE ERROR SUM::" << std::endl;
      std::cout << "\t" << mk_error_count << std::endl;
      std::cout << "SIMPLE MSG SUM::" << std::endl;
      std::cout << "\t" << mk_msg_count << std::endl;
      }
    
    #else
    
    #include <stdio.h>
    #include <string.h>
    #include <stdint.h>
  
    void mk_verbose_process_end()
      {
      printf(
        "SIMPLE ERROR SUM::\n"
        "\t%ld\n"
        "SIMPLE MSG SUM::\n"
        "\t%ld\n",
        mk_error_count, mk_msg_count
      );
      }
    #endif
    #define MK_INIT_VERBOSE() atexit(mk_verbose_process_end)
  #else
    #define MK_INIT_VERBOSE()
  #endif
  
#endif // _MK_VERBOSE_GLOBAL_CONTROL_
#endif // MK_VERBOSE_LIB_VERBOSE_HEADER_H_
 
