#include "tokenizer.h"
#include <stdio.h>
#include <stdlib.h>

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
  char str[len];
  char *p = (char *)malloc(sizeof(len));
  
  for(int i=0; i<len; i++){
    str[i]=inStr[i];
    p[i]=str[i];
  }  
  return p;
}


char **tokenize(char* str)
{
  int words = count_words(str);  /*number of words in the string */
  int count = 0, i = 0, j = 0;
  char tokens[words+1][50];  /*save all the tokens */
  char **p = (char **)malloc(words*sizeof(char *));
  for (int i=0; i<50; i++){
    p[i]=(char *)malloc(50*sizeof(char *));
  }
  /* save a pointer to contain the tokens from the string */

  while(str[i]!='\0'){
    if(non_space_char(str[i])){
      tokens[count][j]=str[i];
      j++;
    } else {
      count++;
      j=0;
    }
    i++;
  }
  *tokens[words+1]='\0';

  for(int i=0; i<=words; i++){
    p[i] = tokens[i];
  }

  printf("Address p in tokenize: %p \n",p);
  printf("token[0] = %s in %p\n", p[0],p[0]);
  /*    
  i = 0;  
  while(*p[i]!='\0'){
    printf("tokens[%d] = %s\n", i, p[i]);
    i++;
  }
  */
 
  return p;
}

void print_tokens(char **tokens)
{
  int i = 0;

  printf("\nGathered p address: %p \n",tokens);
  printf("token[0] = %s in %p\n",tokens[0],tokens[0]);
  /* 
  while(*tokens[i]!='\0'){
    printf("tokens[%d] = %s\n", i, tokens[i]);
    i++;
  } 
  */ 
}
