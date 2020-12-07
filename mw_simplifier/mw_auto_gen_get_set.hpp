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


#ifndef MK_SIMPLIFY_ENGINE_AUTO_GEN_GETSET_H_
#define MK_SIMPLIFY_ENGINE_AUTO_GEN_GETSET_H_

  /* Individual Get/Output Define */
  #define mk_out( type, name, ...)            \
    /* AUTOGEN - GETTER */                    \
    __VA_ARGS__                               \
    inline type                               \
    name (void)                               \
      {                                       \
      return this->name##_ ;                  \
      }                     

  /* Individual Set/Input Define */
  #define mk_in(type, name, ...)              \
    /* AUTOGEN - SETTER */                    \
    __VA_ARGS__                               \
    inline void                               \
    name( type generic_name )                 \
      {                                       \
      this->name##_ = generic_name;           \
      }                                   
    
   /*
    *
    *    Both the defined words as mk_in and mk_out and private/public keyword 
    * in the same macro,  generate  the attribute and 'get-set' functions with
    * just one call. 
    *
    *
    */
  #define mk_auto_io(type, name,...)                                \
    private:                                                        \
      type name##_ __VA_ARGS__ ;                                    \
    public:                                                         \
    mk_in( type, name, __attribute__((always_inline)) __VA_ARGS__)  \
    mk_out(type, name, __attribute__((always_inline)) __VA_ARGS__) 
    
    
#endif // MK_SIMPLIFY_ENGINE_AUTO_GEN_GETSET_H_
