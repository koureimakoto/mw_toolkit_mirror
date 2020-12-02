 /******************************************************************************
 *                                                                             * 
 *               Copyright 2020 Makoto World - Talles HBF                      *
 *                                                                             *
 *       Licensed under the Apache License, Version 2.0 (the "License");       *
 *      you may not use this file  except in compliance with the License.      *
 *                You may obtain a copy of the License at                      *
 *                                                                             *
 *              http://www.apache.org/licenses/LICENSE-2.0                     *
 *                                                                             *
 *     Unless required by applicable law or agreed to in writing, software     *
 *      distributed under the License is distributed on an "AS IS" BASIS,      *
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  *
 *     See the License for the specific language governing permissions and     *
 *                      limitations under the License.                         *
 *                                                                             *
 ******************************************************************************/ 



#ifndef MK_VERBOSE_LIB_MAIN_VAR_STATUS_TEST_C_
#define MK_VERBOSE_LIB_MAIN_VAR_STATUS_TEST_C_
#define _MK_VAR_OUTPUT_ 
#include "variables_output.h"

/*Test Types*/
//#define _TEST_VAR_TYPES_

int main()
{

  /* BOOL */
  _Bool _b = true; // <cstdbool>
  bool  b  = true;
  _Bool *_bp;      // <cstdbool>
  bool  *bp ;
  
  std::cout << "BOOLEAN TYPE" << '\n'; 
  std::cout << get_name(_b) <<" is\t\t: "<< type_name(_b)  << '\n';
  std::cout << get_name(b)  <<" is\t\t: "<< type_name(b)   << '\n';
  std::cout << get_name(_bp)<<" is\t\t: "<< type_name(_bp) << '\n';
  std::cout << get_name(bp) <<" is\t\t: "<< type_name(bp)  << '\n';
  
 
  /*CHAR*/
  int8_t        i8_t = 'a';
  char          c    = 'a';
  signed   char sc   = 'a';
  unsigned char uc  = 'a';
  int8_t        *i8_tp;
  char          *cp   ;
  signed   char *scp  ;
  unsigned char *ucp  ;
  std::string    str  ;
  std::string    *strp;
  std::cout << "CHAR TYPE" << '\n'; 
  std::cout << get_name(i8_t) <<" is\t\t: "<< type_name(i8_t)  << '\n';
  std::cout << get_name(c)    <<" is\t\t: "<< type_name(c)     << '\n';
  std::cout << get_name(sc)   <<" is\t\t: "<< type_name(sc)    << '\n';
  std::cout << get_name(uc)   <<" is\t\t: "<< type_name(uc)    << '\n';
  std::cout << get_name(str)  <<" is\t\t: "<< type_name(str)   << '\n';
  std::cout << get_name(i8_tp)<<" is\t: "  << type_name(i8_tp) << '\n';
  std::cout << get_name(cp)   <<" is\t\t: "<< type_name(cp)    << '\n';
  std::cout << get_name(scp)  <<" is\t\t: "<< type_name(scp)   << '\n';
  std::cout << get_name(ucp)  <<" is\t\t: "<< type_name(ucp)   << '\n';
  std::cout << get_name(strp) <<" is\t\t: "<< type_name(strp)  << '\n';


  /*INT*/
  int16_t   i16_t  = 1;
  int32_t   i32_t  = 1;
  int64_t   i64_t  = 1;
  intmax_t  imax_t = 1;
  uint16_t  ui16_t = 1;
  uint32_t  ui32_t = 1;
  uint64_t  ui64_t = 1;
  uintmax_t uimax_t= 1;
  int16_t   *i16_tp  ;
  int32_t   *i32_tp  ;
  int64_t   *i64_tp  ;
  intmax_t  *imax_tp ;
  uint16_t  *ui16_tp ;
  uint32_t  *ui32_tp ;
  uint64_t  *ui64_tp ;
  uintmax_t *uimax_tp;
  std::cout << "STD INT TYPE" << '\n'; 
  std::cout << get_name(i16_t)    <<" is\t: "<< type_name(i16_t)   << '\n';
  std::cout << get_name(i32_t)    <<" is\t: "<< type_name(i32_t)   << '\n';
  std::cout << get_name(i64_t)    <<" is\t: "<< type_name(i64_t)   << '\n';
  std::cout << get_name(imax_t)   <<" is\t: "<< type_name(imax_t)  << '\n';
  std::cout << get_name(ui16_t)   <<" is\t: "<< type_name(ui16_t)  << '\n';
  std::cout << get_name(ui32_t)   <<" is\t: "<< type_name(ui32_t)  << '\n';
  std::cout << get_name(ui64_t)   <<" is\t: "<< type_name(ui64_t)  << '\n';
  std::cout << get_name(uimax_t)  <<" is\t: "<< type_name(uimax_t) << '\n';
  std::cout << get_name(i16_tp)   <<" is\t: "<< type_name(i16_tp)  << '\n';
  std::cout << get_name(i32_tp)   <<" is\t: "<< type_name(i32_tp)  << '\n';
  std::cout << get_name(i64_tp)   <<" is\t: "<< type_name(i64_tp)  << '\n';
  std::cout << get_name(imax_tp)  <<" is\t: "<< type_name(imax_tp) << '\n';
  std::cout << get_name(ui16_tp)  <<" is\t: "<< type_name(ui16_tp) << '\n';
  std::cout << get_name(ui32_tp)  <<" is\t: "<< type_name(ui32_tp) << '\n';
  std::cout << get_name(ui64_tp)  <<" is\t: "<< type_name(ui64_tp) << '\n';
  std::cout << get_name(uimax_tp) <<" is\t: "<< type_name(uimax_tp)<< '\n';

  
  short              s   = 1;
  long               l   = 1;
  long long          ll  = 1;
  unsigned short     us  = 1;
  unsigned long      ul  = 1;
  unsigned long long ull = 1;
  short              *sp  ;
  long               *lp  ;
  long long          *llp ;
  unsigned short     *usp ;
  unsigned long      *ulp ;
  unsigned long long *ullp;
  std::cout << "ONLY SIMBOL TYPE" << '\n'; 
  std::cout << get_name(s)    <<" is\t\t: "<< type_name(s)    << '\n';
  std::cout << get_name(l)    <<" is\t\t: "<< type_name(l)    << '\n';
  std::cout << get_name(ll)   <<" is\t\t: "<< type_name(ll)   << '\n';
  std::cout << get_name(us)   <<" is\t\t: "<< type_name(us)   << '\n';
  std::cout << get_name(ul)   <<" is\t\t: "<< type_name(ul)   << '\n';
  std::cout << get_name(ull)  <<" is\t\t: "<< type_name(ull)  << '\n';
  std::cout << get_name(sp)   <<" is\t\t: "<< type_name(sp)   << '\n';
  std::cout << get_name(lp)   <<" is\t\t: "<< type_name(lp)   << '\n';
  std::cout << get_name(llp)  <<" is\t\t: "<< type_name(llp)  << '\n';
  std::cout << get_name(usp)  <<" is\t\t: "<< type_name(usp)  << '\n';
  std::cout << get_name(ulp)  <<" is\t\t: "<< type_name(ulp)  << '\n';
  std::cout << get_name(ullp) <<" is\t\t: "<< type_name(ullp) << '\n';

  
  short int            s_i = 1;
  int                  i   = 1;
  long int             li  = 1;
  long long int        lli = 1;
  signed short int     ssi = 1;
  signed int           si  = 1;
  signed long int      sli = 1;
  signed long long int slli= 1;
  short int            *s_ip ;
  int                  *ip   ;
  long int             *lip  ;
  long long int        *llip ;
  signed short int     *ssip ;
  signed int           *sip  ;
  signed long int      *slip ;
  signed long long int *sllip;
  
  std::cout << "SIGNED INT TYPE" << '\n'; 
  std::cout << get_name(s_i)   <<" is\t\t: "<< type_name(s_i)   << '\n';
  std::cout << get_name(i)     <<" is\t\t: "<< type_name(i)     << '\n';
  std::cout << get_name(li)    <<" is\t\t: "<< type_name(li)    << '\n';
  std::cout << get_name(lli)   <<" is\t\t: "<< type_name(lli)   << '\n';
  std::cout << get_name(ssi)   <<" is\t\t: "<< type_name(ssi)   << '\n';
  std::cout << get_name(si)    <<" is\t\t: "<< type_name(si)    << '\n';
  std::cout << get_name(sli)   <<" is\t\t: "<< type_name(sli)   << '\n';
  std::cout << get_name(slli)  <<" is\t\t: "<< type_name(slli)  << '\n';
  std::cout << get_name(s_ip)  <<" is\t\t: "<< type_name(s_ip)  << '\n';
  std::cout << get_name(ip)    <<" is\t\t: "<< type_name(ip)    << '\n';
  std::cout << get_name(lip)   <<" is\t\t: "<< type_name(lip)   << '\n';
  std::cout << get_name(llip)  <<" is\t\t: "<< type_name(llip)  << '\n';
  std::cout << get_name(ssip)  <<" is\t\t: "<< type_name(ssip)  << '\n';
  std::cout << get_name(sip)   <<" is\t\t: "<< type_name(sip)   << '\n';
  std::cout << get_name(slip)  <<" is\t\t: "<< type_name(slip)  << '\n';
  std::cout << get_name(sllip) <<" is\t: "<< type_name(sllip) << '\n';


  unsigned short int     usi = 1;
  unsigned int           ui  = 1;
  unsigned long int      uli = 1;
  unsigned long long int ulli= 1;
  unsigned short int     *usip ;
  unsigned int           *uip  ;
  unsigned long int      *ulip ;
  unsigned long long int *ullip;
  std::cout << "UNSIGNED INT TYPE" << '\n'; 
  std::cout << get_name(usi)   << " is\t\t: " << type_name(usi)   << '\n';
  std::cout << get_name(ui)    << " is\t\t: " << type_name(ui)    << '\n';
  std::cout << get_name(uli)   << " is\t\t: " << type_name(uli)   << '\n';
  std::cout << get_name(ulli)  << " is\t\t: " << type_name(ulli)  << '\n';
  std::cout << get_name(usip)  << " is\t\t: " << type_name(usip)  << '\n';
  std::cout << get_name(uip)   << " is\t\t: " << type_name(uip)   << '\n';
  std::cout << get_name(ulip)  << " is\t\t: " << type_name(ulip)  << '\n';
  std::cout << get_name(ullip) << " is\t: "   << type_name(ullip)   << '\n';
 
  /*FLOAT-DOUBLE*/
  float_t  f_t = 0.1f;
  double_t d_t = 0.1f;     
  float_t  f_tp;
  double_t d_tp;
  std::cout << "STD FLOAT TYPE" << '\n'; 
  std::cout << get_name(f_t)  << " is\t\t: " << type_name(f_t)  << '\n';
  std::cout << get_name(d_t)  << " is\t\t: " << type_name(d_t)  << '\n';
  std::cout << get_name(f_tp) << " is\t\t: " << type_name(f_tp) << '\n';
  std::cout << get_name(d_tp) << " is\t\t: " << type_name(d_tp) << '\n';
  
  float       f  = 0.1f;
  double      d  = 0.1f;
  long double ld = 0.1f;
  float       *fp ;
  double      *dp = &d;
  long double *ldp;  
  std::cout << "FLOAT TYPE" << '\n'; 
  std::cout << get_name(f)   << " is\t\t: " << type_name(f)   << '\n';
  std::cout << get_name(d)   << " is\t\t: " << type_name(d)   << '\n';
  std::cout << get_name(ld)  << " is\t\t: " << type_name(ld)  << '\n';
  std::cout << get_name(fp)  << " is\t\t: " << type_name(fp)  << '\n';
  std::cout << get_name(dp)  << " is\t\t: " << type_name(dp)  << '\n';
  std::cout << get_name(ldp) << " is\t\t: " << type_name(ldp) << '\n';

  std::cout << "FLT_EVAL_METHOD :: " << FLT_EVAL_METHOD << '\n';

  
  if(chk_pointer(f) == 1)
    std::cout << "Is a Pointer " << '\n';
  else if(chk_pointer(f) == 0)
    std::cout << "Is not a Pointer " << '\n';
    
  if(chk_pointer(fp) == 1)
    std::cout << "Is a Pointer " << '\n';
  else if(chk_pointer(fp) == 0)
    std::cout << "Is not a Pointer " << '\n';

  if(chk_pointer(str) == 1)
    std::cout << "Is a Pointer " << '\n';
  else if(chk_pointer(str) == 0)
    std::cout << "Is not a Pointer " << '\n';
    
  if(chk_pointer(strp) == 1)
    std::cout << "Is a Pointer " << '\n';
  else if(chk_pointer(strp) == 0)
    std::cout << "Is not a Pointer " << '\n';


  print_mem(d);
  print_mem(dp);
  
  mk_mem_verbose("Type Float",
    _(f)_(d)_(fp) _(dp)
  )

  return 0;
}

#endif // MK_VERBOSE_LIB_VAR_STATUS_H_
