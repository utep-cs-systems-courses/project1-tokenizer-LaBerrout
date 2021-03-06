#ifndef _TOKENIZER_
#define _TOKENIZER_
#define MAX_LIMIT 50

#include <stdio.h>
#include <stdlib.h>

//void start_tokenizer();
//int space_char(char c);
//int non_space_char(char c);


/* Return true (non-zero) if c is a whitespace characer
   ('\t' or ' ').  
   Zero terminators are not printable (therefore false) */
int space_char(char c)
{
  if (c==' ' || c=='\t'){
    return 1;
  }
  return 0;
}

/* Return true (non-zero) if c is a non-whitespace 
   character (not tab or space).  
   Zero terminators are not printable (therefore false) */ 
int non_space_char(char c)
{
  if (c !=' ' || c != '\t' || c){
    if(c != '\0'){
      return 0;
    }
  }
  return 1;
}

/* Returns a pointer to the first character of the next 
   space-separated word in zero-terminated str.  Return a zero pointer if 
   str does not contain any words. */
char word_start(char *str)
{
  char *(*pchar);
  char c = s[0];
  if(space_char(c)==0){
    pchar = &s;
  }
  else{
    pchar = NULL;
  }
  return *pchar;
}

  
/* Returns a pointer terminator char following *word */
char *word_terminator(char *word);

/* Counts the number of words in the string argument. */
int count_words(char *str);

/* Returns a fresly allocated new zero-terminated string 
   containing <len> chars from <inStr> */
char *copy_str(char *inStr, short len);

/* Returns a freshly allocated zero-terminated vector of freshly allocated 
   space-separated tokens from zero-terminated str.

   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string" 
     tokens[3] = 0
*/
char **tokenize(char* str);

/* Prints all tokens. */
void print_tokens(char **tokens)
{
  
}


  
/* Frees all tokens and the vector containing themx. */
void free_tokens(char **tokens);

/* Star tokenizer */
void start_tokenizer()
{
  //printf("Tokenizer....\n");
  int i=0;
  char *pstr = (char *)malloc(sizeof(char)*MAX_LIMIT);
  fputs(" > ", stdout);
  fflush(stdout);
  char str[MAX_LIMIT];
  while ((str[i]=getchar())!='\n'){
    i++;
  }
  //fgets(str,MAX_LIMIT,stdout);
  //scanf("%[^\n]s",str);
  for(i = 0; i < MAX_LIMIT; i++){
    *(pstr+i)=str[i];
  }
  printf("%c",str[1]);
  printf("%c",pstr[3]);  //print one character
  printf("\n%s",pstr);  //print sentence with pointer
}
  
#endif
