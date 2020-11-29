
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
 
