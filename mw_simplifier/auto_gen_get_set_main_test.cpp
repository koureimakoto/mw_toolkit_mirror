#include <iostream>
#include "mw_simplifier.h"


struct X
{
  mk_auto_io(int, idade)
  mk_auto_io(int, peso)
};


int
main()
{
  X test;
  //test::name("Talles");
  test.idade(30);
  
  std::cout << ':' << test.idade() << '\n'; 
  
  return 0;
}
