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
#define _TEST_VAR_TYPES_

int main()
{

  int test = 2;
  int *dtest = &test;
  print_mem(test);
  print_mem(dtest);

 
  mk_mem_verbose("Struct X",
    _(test)
    _(dtest)
  );

  
  #ifdef _TEST_VAR_TYPES_
  /*BOOL*/
  _Bool _b = true;
  bool  b = true;
  printf("BOOL TYPE::\n"
    "\tname\ttype\t\t\tsize\n"
    "\t%s  \t[ %s ] \t\t[ %ld ]\n"
    "\t%s  \t[ %s ] \t\t[ %ld ]\n",
    get_name(_b), type_name(_b), sizeof(_b),
    get_name(b) , type_name(b) , sizeof(b));  

  _Bool *_bp;
  bool  *bp;
  printf("BOOL POINTER::\n"
    "\tname\ttype\t\t\tsize\n"
    "\t%s  \t[ %s ] \t[ %ld ]\n"
    "\t%s  \t[ %s ] \t[ %ld ]\n\n",
    get_name(_bp), type_name(_bp), sizeof(_bp),
    get_name(bp) , type_name(bp) , sizeof(bp));  
  
  
  /*CHAR*/
  int8_t        i8_t = 'a';
  char          c    = 'a';
  signed   char sc   = 'a';
  unsigned char usc  = 'a';
  printf("CHAR TYPE::\n"
    "\tname\ttype\t\t\tsize\n"
    "\t%s  \t[ %s  ]\t\t[ %ld ]\n"
    "\t%s  \t[ %s  ]\t\t[ %ld ]\n"
    "\t%s  \t[ %s  ]\t\t[ %ld ]\n"
    "\t%s  \t[ %s ]\t\t[ %ld ]\n\n",
    get_name(i8_t), type_name(i8_t), sizeof(i8_t),
    get_name(c)   , type_name(c)   , sizeof(c)   ,
    get_name(sc)  , type_name(sc)  , sizeof(sc)  ,
    get_name(usc) , type_name(usc) , sizeof(usc)); 

  int8_t        *i8_tp;
  char          *cp   ;
  signed   char *scp  ;
  unsigned char *uscp ;
  printf("CHAR POINTER::\n"
    "\tname\ttype\n"
    "\t%s  \t[ %s  ]\t[ %ld ]\n"
    "\t%s  \t[ %s  ]\t[ %ld ]\n"
    "\t%s  \t[ %s  ]\t[ %ld ]\n"
    "\t%s  \t[ %s ]\t[ %ld ]\n\n",
    get_name(i8_tp), type_name(i8_tp), sizeof(i8_tp),
    get_name(cp)   , type_name(cp)   , sizeof(cp)   ,
    get_name(scp)  , type_name(scp)  , sizeof(scp)  ,
    get_name(uscp) , type_name(uscp) , sizeof(uscp)); 
  
  
  /*INT*/
  int16_t   i16_t  = 1;
  int32_t   i32_t  = 1;
  int64_t   i64_t  = 1;
  intmax_t  imax_t = 1;
  uint16_t  ui16_t = 1;
  uint32_t  ui32_t = 1;
  uint64_t  ui64_t = 1;
  uintmax_t uimax_t= 1;
  printf("INT_T::\n"
    "\tname\ttype\n"
    "\t%s\t[ %s  ]\t\t[ %ld ]\n"
    "\t%s\t[ %s    ]\t\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t\t[ %ld ]\n"
    "\t%s\t[ %s ]\t\t[ %ld ]\n"
    "\t%s\t[ %s   ]\t\t[ %ld ]\n"
    "\t%s\t[ %s ]\t\t[ %ld ]\n"
    "\t%s\t[ %s ]\t\t[ %ld ]\n\n",
    get_name(i16_t)  , type_name(i16_t)  , sizeof(i16_t) ,
    get_name(i32_t)  , type_name(i32_t)  , sizeof(i32_t) ,
    get_name(i64_t)  , type_name(i64_t)  , sizeof(i64_t) ,
    get_name(imax_t) , type_name(imax_t) , sizeof(imax_t),
    get_name(ui16_t) , type_name(ui16_t) , sizeof(ui16_t),
    get_name(ui32_t) , type_name(ui32_t) , sizeof(ui32_t),
    get_name(ui64_t) , type_name(ui64_t) , sizeof(ui64_t),
    get_name(uimax_t), type_name(uimax_t), sizeof(uimax_t)); 
  
  int16_t   *i16_tp  ;
  int32_t   *i32_tp  ;
  int64_t   *i64_tp  ;
  intmax_t  *imax_tp ;
  uint16_t  *ui16_tp ;
  uint32_t  *ui32_tp ;
  uint64_t  *ui64_tp ;
  uintmax_t *uimax_tp;
  printf("INT_T POINTER::\n"
    "\tname\ttype\n"
    "\t%s\t[ %s  ]\t[ %ld ]\n"
    "\t%s\t[ %s    ]\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t[ %ld ]\n"
    "\t%s\t[ %s ]\t[ %ld ]\n"
    "\t%s\t[ %s   ]\t[ %ld ]\n"
    "\t%s\t[ %s ]\t[ %ld ]\n"
    "\t%s[ %s ]\t[ %ld ]\n\n",
    get_name(i16_tp)  , type_name(i16_tp)  , sizeof(i16_tp) ,
    get_name(i32_tp)  , type_name(i32_tp)  , sizeof(i32_tp) ,
    get_name(i64_tp)  , type_name(i64_tp)  , sizeof(i64_tp) ,
    get_name(imax_tp) , type_name(imax_tp) , sizeof(imax_tp),
    get_name(ui16_tp) , type_name(ui16_tp) , sizeof(ui16_tp),
    get_name(ui32_tp) , type_name(ui32_tp) , sizeof(ui32_tp),
    get_name(ui64_tp) , type_name(ui64_tp) , sizeof(ui64_tp),
    get_name(uimax_tp), type_name(uimax_tp), sizeof(uimax_tp)); 
  
  
  short                  s   = 1;
  long                   l   = 1;
  long long              ll  = 1;
  unsigned short         us  = 1;
  unsigned long          ul  = 1;
  unsigned long long     ull = 1;
  printf("ONLY_SIGNAL::\n"
    "\tname\ttype\n"
    "\t%s\t[ %s   ]\t\t[ %ld ]\n"
    "\t%s\t[ %s   ]\t\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t\t[ %ld ]\n"
    "\t%s\t[ %s ]\t\t[ %ld ]\n\n",
    get_name(s)  , type_name(s)  , sizeof(s),
    get_name(l)  , type_name(l)  , sizeof(l),
    get_name(ll) , type_name(ll) , sizeof(ll),
    get_name(us) , type_name(us) , sizeof(us),
    get_name(ul) , type_name(ul) , sizeof(ul),
    get_name(ull), type_name(ull), sizeof(ull)); 
    
  short              *sp  ;
  long               *lp  ;
  long long          *llp ;
  unsigned short     *usp ;
  unsigned long      *ulp ;
  unsigned long long *ullp;
  printf("ONLY_SIGNAL POINTER::\n"
    "\tname\ttype\n"
    "\t%s\t[ %s   ]\t[ %ld ]\n"
    "\t%s\t[ %s   ]\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t[ %ld ]\n"
    "\t%s\t[ %s ]\t[ %ld ]\n\n",
    get_name(sp)  , type_name(sp)  , sizeof(sp),
    get_name(lp)  , type_name(lp)  , sizeof(lp),
    get_name(llp) , type_name(llp) , sizeof(llp),
    get_name(usp) , type_name(usp) , sizeof(usp),
    get_name(ulp) , type_name(ulp) , sizeof(ulp),
    get_name(ullp), type_name(ullp), sizeof(ullp)); 
  
   
  short int              s_i = 1;
  int                    i   = 1;
  long int               li  = 1;
  long long int          lli = 1;
  signed short int       ssi = 1;
  signed int             si  = 1;
  signed long int        sli = 1;
  signed long long int   slli= 1;
  printf("SIGNED INT::\n"
    "\tname\ttype\n"
    "\t%s\t[ %s  ]\t\t[ %ld ]\n"
    "\t%s\t[ %s    ]\t\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t\t[ %ld ]\n"
    "\t%s\t[ %s ]\t\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t\t[ %ld ]\n"
    "\t%s\t[ %s    ]\t\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t\t[ %ld ]\n"
    "\t%s\t[ %s ]\t\t[ %ld ]\n\n",
    get_name(s_i) , type_name(s_i) , sizeof(s_i),
    get_name(i)   , type_name(i)   , sizeof(i)  ,
    get_name(li)  , type_name(li)  , sizeof(li) ,
    get_name(lli) , type_name(lli) , sizeof(lli),
    get_name(ssi) , type_name(ssi) , sizeof(ssi),
    get_name(si)  , type_name(si)  , sizeof(si) ,
    get_name(sli) , type_name(sli) , sizeof(sli),
    get_name(slli), type_name(slli), sizeof(slli)); 
    
  short int            *s_ip ;
  int                  *ip   ;
  long int             *lip  ;
  long long int        *llip ;
  signed short int     *ssip ;
  signed int           *sip  ;
  signed long int      *slip ;
  signed long long int *sllip;
  printf("SIGNED INT POINTER::\n"
    "\tname\ttype\n"
    "\t%s\t[ %s  ]\t[ %ld ]\n"
    "\t%s\t[ %s    ]\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t[ %ld ]\n"
    "\t%s\t[ %s ]\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t[ %ld ]\n"
    "\t%s\t[ %s    ]\t[ %ld ]\n"
    "\t%s\t[ %s  ]\t[ %ld ]\n"
    "\t%s\t[ %s ]\t[ %ld ]\n\n",
    get_name(s_ip) , type_name(s_ip) , sizeof(s_ip),
    get_name(ip)   , type_name(ip)   , sizeof(ip)  ,
    get_name(lip)  , type_name(lip)  , sizeof(lip) ,
    get_name(llip) , type_name(llip) , sizeof(llip),
    get_name(ssip) , type_name(ssip) , sizeof(ssip),
    get_name(sip)  , type_name(sip)  , sizeof(sip) ,
    get_name(slip) , type_name(slip) , sizeof(slip),
    get_name(sllip), type_name(sllip), sizeof(sllip)); 



  unsigned short int     usi = 1;
  unsigned int           ui  = 1;
  unsigned long int      uli = 1;
  unsigned long long int ulli= 1;
  printf("UNSIGNED INT::\n"
    "\tname\ttype\n"
    "\t%s  \t[ %s  ]\t\t[ %ld ]\n"
    "\t%s  \t[ %s    ]\t\t[ %ld ]\n"
    "\t%s  \t[ %s  ]\t\t[ %ld ]\n"
    "\t%s  \t[ %s ]\t\t[ %ld ]\n\n",
    get_name(usi) , type_name(usi) , sizeof(usi),
    get_name(ui)  , type_name(ui)  , sizeof(ui) ,
    get_name(uli) , type_name(uli) , sizeof(uli),
    get_name(ulli), type_name(ulli), sizeof(ulli)); 

  unsigned short int     *usip ;
  unsigned int           *uip  ;
  unsigned long int      *ulip ;
  unsigned long long int *ullip;
  printf("UNSIGNED INT POINTEr::\n"
    "\tname\ttype\n"
    "\t%s  \t[ %s  ]\t[ %ld ]\n"
    "\t%s  \t[ %s    ]\t[ %ld ]\n"
    "\t%s  \t[ %s  ]\t[ %ld ]\n"
    "\t%s  \t[ %s ]\t[ %ld ]\n\n",
    get_name(usip) , type_name(usip) , sizeof(usip),
    get_name(uip)  , type_name(uip)  , sizeof(uip) ,
    get_name(ulip) , type_name(ulip) , sizeof(ulip),
    get_name(ullip), type_name(ullip), sizeof(ullip)); 



  /*FLOAT-DOUBLE*/
  float_t  f_t = 0.1f;
  double_t d_t = 0.1f;
  printf("FLOAT_T / DOUBLE_T::\n"
    "\tname\ttype\n"
    "\t%s  \t[ %s  ]\t\t[ %ld ]\n"
    "\t%s  \t[ %s ]\t\t[ %ld ]\n\n",
    get_name(f_t), type_name(f_t), sizeof(f_t),
    get_name(d_t), type_name(d_t), sizeof(d_t)); 
     
  float_t  f_tp;
  double_t d_tp;
  printf("FLOAT_T / DOUBLE_T POINTER::\n"
    "\tname\ttype\n"
    "\t%s  \t[ %s  ]\t\t[ %ld ]\n"
    "\t%s  \t[ %s ]\t\t[ %ld ]\n\n",
    get_name(f_tp), type_name(f_tp), sizeof(f_tp),
    get_name(d_tp), type_name(d_tp), sizeof(d_tp));  
     

  float       f  = 0.1f;
  double      d  = 0.1f;
  long double ld = 0.1f;
  printf("FLOAT / DOUBLE::\n"
    "\tname\ttype\n"
    "\t%s  \t[ %s    ]\t\t[ %ld ]\n"
    "\t%s  \t[ %s   ]\t\t[ %ld ]\n"
    "\t%s  \t[ %s ]\t\t[ %ld ]\n\n",
    get_name(f) , type_name(f) , sizeof(f),
    get_name(d) , type_name(d) , sizeof(d),
    get_name(ld), type_name(ld), sizeof(ld)); 
    
  float       *fp ;
  double      *dp ;
  long double *ldp;
  printf("FLOAT / DOUBLE POINTER::\n"
    "\tname\ttype\n"
    "\t%s  \t[ %s    ]\t[ %ld ]\n"
    "\t%s  \t[ %s   ]\t[ %ld ]\n"
    "\t%s  \t[ %s ]\t[ %ld ]\n\n",
    get_name(fp) , type_name(fp) , sizeof(fp),
    get_name(dp) , type_name(dp) , sizeof(dp),
    get_name(ldp), type_name(ldp), sizeof(ldp)); 
    printf("\tFLT_EVAL_METHOD :: %d\n", FLT_EVAL_METHOD);
  #endif //TEST_VAR_TYPES

  
  return 0;
}

#endif // MK_VERBOSE_LIB_VAR_STATUS_H_
