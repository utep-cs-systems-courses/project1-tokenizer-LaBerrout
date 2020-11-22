#include "tokenizer.h"

int space_char(char c)
{
  if((c == '\t') || (c ==' ')){
      return 1;
    }
    return 0;
}

int non_space_char(char c)
{
  if ((c == '\t') || (c ==' ')){
      return 0;
    }
    return 1;
}

char word_start(char *str)
{
  int i = 0;
  char temp;
  while(non_space_char(str[i])){
    i++;
  }
  temp = str[i+1];
  return temp;
}
