#include <string.h>
#include <stdio.h>
#include "tokenizer.h"
#include "tester2.h"

void test_space_char()
{
  char c1 = " ";
  char c2 = "\t";
  char c3 = "a";
  printf("Test returns true(1) if c is a space: space_char:\n");
  printf(" %c = %d\n", c1, space_char(c1));
  printf(" %c = %d\n", c2, space_char(c2));
  printf(" %c = %d\n", c3, space_char(c3));
}

void test_non_space_char()
{
  char c1 = " ";
  char c2 = "\t";
  char c3 = "a";
  printf("Test returns true(1) if c is not a space: space_char:\n");
  printf(" %c = %d\n", c1, non_space_char(c1));
  printf(" %c = %d\n", c2, non_space_char(c2));
  printf(" %c = %d\n", c3, non_space_char(c3));
}

void test_word_start()
{
  printf("Test, returns a pointer to the first character of the next space-separated word in zero terminated string\n");
  char[] str = "Hello World!";
  printf("String = %s\n", str);
  char *p = (char *)malloc(sizeof(str));
  strcpy(p,str);
  printf("Pointer = %c\n", word_start(*(p+i)));
}

void test_word_terminator()
{
  
}
