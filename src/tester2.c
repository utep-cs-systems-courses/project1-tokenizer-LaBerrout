#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "tester2.h"

void test_space_char()
{
  char c1 = ' ';
  char c2 = '\t';
  char c3 = 'a';
  printf("Test c is a space:\n");
  printf(" %c = %d\n", c1, space_char(c1));
  printf(" %c = %d\n", c2, space_char(c2));
  printf(" %c = %d\n", c3, space_char(c3));
}

void test_non_space_char()
{
  char c1 = ' ';
  char c2 = '\t';
  char c3 = 'a';
  printf("Test c is not a space:\n");
  printf(" %c = %d\n", c1, non_space_char(c1));
  printf(" %c = %d\n", c2, non_space_char(c2));
  printf(" %c = %d\n", c3, non_space_char(c3));
}

void test_word_start()
{
  char  str[80] = "High hopes for a living";
  printf("String = %s\n", str);
  char *p = (char *)malloc(sizeof(str));
  
  
  int i=0;
  while(str[i]!='\0'){
    p[i]=str[i];
    i++;
  }  
  printf("Pointer = %d\n", word_start(p));
  printf("Character = %c\n", word_start(p));
  printf("Pointer = %d\n", word_start(p+8));
  printf("Character = %c\n", word_start(p+8));
  
  free(p);
}

void test_word_terminator()
{
  
  char str[50] = "High hopes for a living";
  printf("String = %s\n", str);
  char *p = (char *)malloc(sizeof(str));

  int i=0;
  while(str[i]!='\0'){
    p[i]=str[i];
    i++;
  }
  printf("Pointer terminator = %d\n", word_terminator(p+8));
  printf("Character = %c\n",*(word_terminator(p+8)+1));
  free(p);
}

void test_count_words()
{
  char str[50] = "High hopes for a living";
  printf("String = %s\n", str);
  char *p = (char *)malloc(sizeof(str));
   
  int i=0;
  while(str[i]!='\0'){
    p[i]=str[i];
    i++;
  }
  
  printf("Total words = %d\n", count_words(p));
  free(p);
}

void test_copy_str()
{
  
  char str[50] = "High hopes";
  char *p = (char *)malloc(sizeof(str));
  int i=0;
  while(str[i]!='\0'){
    p[i] = str[i];
    i++;
  }
  short len = 3;
  char *pstr = (char *)malloc(sizeof(len));
  
  pstr = copy_str(p,len);
  printf("Copy string:\n");

  for(int i=0; i<=len; i++){
    printf("%c\n",pstr[i]);
  }

  printf("\n");
  
}

void test_tokenize()
{
  char str[50] = "High hopes for a living";
  char *p = (char *)malloc(sizeof(str));
  int i=0;
  while(str[i]!='\0'){
    p[i] = str[i];
    i++;
  }

  tokenize(p);
}

void test_print_tokens()
{
  char *str = "high hopes";
  
  char **pt = tokenize(str);
  //printf("address tokenize: %p\n",tokenize(str));
  printf("string pt: %s\n", (tokenize(str))[0]);
  //printf("toskens[0] = %s\n",pt[0]);
  print_tokens(pt);

}

void test_free_tokens()
{
  printf("free tokens pending...\n");
}

void test_all()
{
  //test_space_char();
  //test_non_space_char();
  //test_word_start();
  //test_word_terminator();
  //test_count_words();
  //test_copy_str();
  //test_tokenize();
  test_print_tokens();
  test_free_tokens();
}
