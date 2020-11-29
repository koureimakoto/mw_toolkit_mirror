#if defined(MK_VLIB) == 1
  #define _V_S_ERROR_
  #define _V_S_MSG_
  #define _L_CPP_
  #define _MK_VERBOSE_SIGNALS_
#endif
 

#ifndef MK_VERBOSE_LIB_VERBOSE_HEADER_H_
#define MK_VERBOSE_LIB_VERBOSE_HEADER_H_

#if not defined(_MK_VERBOSE_GLOBAL_CONTROL_)
  #define _MAX_VERBOSE_SIZE_ 100
  #define _MK_VERBOSE_GLOBAL_CONTROL_ 
  #include <stdlib.h>
  #include "simple_msg_output.h"
  #include "simple_error_output.h"
  #include "verbose_color.h"
  
  static char     mk_verbose_line[_MAX_VERBOSE_SIZE_];
  static long int mk_error_count = 0;
  static long int mk_msg_count   = 0;
  
  #if defined(_MK_VERBOSE_SIGNALS_)
    #if defined(_L_CPP_)
    #include <iostream>
    #include <cstdint>
    #include <cstring>
    using namespace std;
    
    void mk_verbose_process_end()
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
          printf("SIMPLE ERROR SUM::\n"
                 "\t%ld\n"
                 "SIMPLE MSG SUM::\n"
                 "\t%ld\n",
                 mk_error_count, mk_msg_count);
      }
    #endif
    #define MK_INIT_VERBOSE() atexit(mk_verbose_process_end)
  #else
    #define MK_INIT_VERBOSE()
  #endif
  
#endif // _MK_VERBOSE_GLOBAL_CONTROL_
#endif // MK_VERBOSE_LIB_VERBOSE_HEADER_H_
 
