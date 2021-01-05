/* Based on the uimain.c from the project0 draw example by Dr Eric Freudenthal*/

#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"
#include "tester2.h"

//void displayString();

int main()
{
  printf("\nWelcome!\n");
  int c = 0;
  char s[50] = "Hello World!";   //Hardcoded string for test
  char *sptr = (char *) malloc(sizeof(s)+1);  //allocate string
  sptr = &s[0];  //to copy the string

  while (1){        /* Infinite while loop */
    printf("Select one the next options: (a,b, or c)\n");
    printf(" a) Type a new line\n");
    printf(" b) Review history\n");
    printf(" c) Quit\n");
    fputs("  > ", stdout);
    fflush(stdout);
    
    while((c = getchar()) == '\n');  /* Ignores new lines*/
    if (c == EOF)
     goto done;

    switch(c){   /* switch for user options */
    case 'a':    /* gets new line */
      /*
      printf("\nWrite a new line\n  >");
      char str[80];
      fgets(str,80,stdin);
      char *p = (char *)malloc(sizeof(str));
      strcpy(p,str);
      */
      printf("Testing:\n");
      
      
      
      
      //fgets(s, sizeof(s), stdin);          // read string

      /* Use the functions from the tokenizer */

      
      printf("Your string is: %c\n",sptr[0]);
      //printf("Start address of new word: %p\n", word_terminator(&sptr[0]));
      //printf("Last char of the word: %c\n", *(word_terminator(&sptr[0])-1));
      printf("Testing...", copy_str(sptr,50));
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
