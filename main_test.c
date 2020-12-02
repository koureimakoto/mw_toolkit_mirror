#include "verbose_header.h"

int
main()
{
  MK_INIT_VERBOSE();
  
  mk_serror("ERRO");
  mk_smsg("MSG");
  mk_serror("ERRO");
  return 0;
}
