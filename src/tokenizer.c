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

char *word_terminator(char *word)
{
  char *temp;
  while(non_space_char(*word)){
    word++;
    }
  temp = word;
  return temp;
}

int count_words(char *str)
{
  int i=0;
  int count=0;

  if(str[0] != '\0'){
    count++;
  }
  while(str[i] != '\0'){
    if(space_char(str[i])){
	count++;
    }
    ++i;
  }
  return count;
}

char *copy_str(char *inStr, short len)
{
  char *temp;
  return temp;
}

