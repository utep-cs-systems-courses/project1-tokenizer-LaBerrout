#include "tokenizer.h"

int space_char(char c)
{
  if((c == '\t') || (c ==' ')){
      return 1;
    }
    return 0;
}

