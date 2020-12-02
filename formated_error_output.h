#ifndef MK_VERBOSE_LIB_SIMPLE_ERROR_OUTPUT_H_
#define MK_VERBOSE_LIB_SIMPLE_ERROR_OUTPUT_H_

  //Preset Global

  #if defined(_V_S_ERROR_) // Precompiler for active error verbose messege.
    #if   defined(_L_CPP_) // G++ or CLang++ Compilers  - C++.
      #define mk_serror(x) \
        if((strncmp(mk_verbose_line,__FILE__, _MAX_VERBOSE_SIZE_) != 0))       \
          {                                                                    \
          strncpy(mk_verbose_line, __FILE__, _MAX_VERBOSE_SIZE_);              \
          std::cerr << _B_YLW_ << "::" << __FILE__ << _RESET_ << endl;         \
          }                                                                    \
        mk_error_count += 1;                                                   \
        cerr << _B_RED_ << "\t<" << __LINE__ << "> " << _RESET_ << x << endl; 
    #else                // GCC ou CLang Compilers.    - C [[Default]]
      #define mk_ferror(fmt, ...)                                                     \
        if((strncmp(mk_verbose_line,__FILE__, _MAX_VERBOSE_SIZE_) != 0))       \
          {                                                                    \
          strncpy(mk_verbose_line, __FILE__, _MAX_VERBOSE_SIZE_);              \
          fprintf                                                              \
            (                                                                  \
            stderr,                                                            \
            "%s::%s::  %s\n",                                                  \
            _B_YLW_, __FILE__, _RESET_                                         \
            );                                                                 \
          }                                                                    \
        mk_error_count += 1;                                                   \
        fprintf                                                                \
          (                                                                    \
          stderr,                                                              \
          "%s\t<%d>%s",                                                        \
          _B_RED_,__LINE__,_RESET_                                             \
          )
        fprintf(strerr, fmt, __VA_ARGS__);
    #endif // END _L_CPP.
  // If not has been defined V_simple, all function will be set blank.
  #else
    #define mk_serror(x)
  #endif // END _V_S_ERROR_.

#endif // MK_VERBOSE_LIB_HEADER_
