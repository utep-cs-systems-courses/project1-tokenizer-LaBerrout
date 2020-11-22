/* Based on the uimain.c from the project0 draw example by Dr Eric Freudenthal*/
#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

void displayString();

int main()
{
  puts("Welcome!");
  int c = 0;
  char s[30] = "Hello World!";             //Limit of 19 characters, HARDCORED FOR TESTS
  char *sptr = (char *) malloc(31);  //THEN WE NEED TO COPY THE STRING
  sptr = &s[0];

  while (1){                               //Infinite while loop
    printf("\nSelect one the next options: (a,b, or c)\n");
    printf("a) Type a new line\n");
    printf("b) Review history\n");
    printf("c) Quit\n");
    fputs(" > ", stdout);
    fflush(stdout);
    
    while((c = getchar()) == '\n');        // ignores new lines
    if (c == EOF)
     goto done;

    switch(c){                             // switch for user options
    case 'a':
      printf("  Write your new line\n  > ");
      
      
      //fgets(s, sizeof(s), stdin);          // read string

      /* Use the functions from the tokenizer */

      
      printf("Your string is: %c\n",sptr[0]);
      printf("Start address of new word: %p\n", word_start(sptr));
      printf("Char in the address: %c\n", word_start(sptr));
      
      //puts(s);                             // displays string
      //printf("%s\n",s);                      //TEST: PRINT HARDCORED STRING

      //printf("\n");
      break;

    case 'b':
      printf("Select a string:\n");
      /* LINKED LIST*/

      printf("\n");
      break;

    case 'c':
      puts("Good bye!");
      exit(0);
      //goto done;     /* terminate */

    case '\n':
      break;

    default:
      printf("\nUnrecognized option '%c', please try again\n",c);
    }
  }
 done: //To exit from the program
  return 0;
}

void displayString(char str[])
{
  printf("String output: ");
  puts(str);
}
