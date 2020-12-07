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


#ifndef MW_VERBOSE_FINAL_MSG_OUTPUT_H_
#define MW_VERBOSE_FINAL_MSG_OUTPUT_H_

  #if defined(__MW_FINAL_OUTPUT__) & defined(__cplusplus)
    
    // Prototypes 
    static inline void 
    mw_verbose_process_end(void) __attribute__((always_inline));   
    
    void
    mw_verbose_process_end(void)
      {
      std::cout << "SIMPLE ERROR SUM::"   << std::endl;
      std::cout << "\t" << mw_error_count << std::endl;
      std::cout << "SIMPLE MSG SUM::"     << std::endl;
      std::cout << "\t" << mw_msg_count   << std::endl;
      }
      
    #define MW_INIT_VERBOSE() atexit(mw_verbose_process_end) 
  #endif // __cplusplus
  
#endif // MW_VERBOSE_FINAL_MSG_OUTPUT_H_
 
