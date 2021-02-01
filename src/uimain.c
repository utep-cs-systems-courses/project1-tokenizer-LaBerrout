/* 
   Based on the uimain.c from the project0 draw example by Dr Eric Freudenthal
   Last Update: 01/31/2021
   Project 1
   Computer Architecture I
   Laura Berrout
*/

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
  char s[50] = "Hello World!";                /* Hardcoded string for test */
  char *sptr = (char *) malloc(sizeof(s)+1);  /* Allocate string */
  sptr = &s[0];                               /* to copy the string */
  List *list = init_history();                /* Create the linked list */


  while (1){                                  /* Infinite while loop */
    printf("Select one the next options: (a, b, or c)\n");
    printf(" a) Type a new line\n");
    printf(" b) Review history and tokenize\n");
    printf(" c) Quit\n");
    fputs("  > ", stdout);
    fflush(stdout);
    
    while((c = getchar()) == '\n');           /* Ignores new lines*/
    if (c == EOF)
     goto done;

    switch(c){                                /* switch for user options */
    case 'a':                                 /* gets new line */
      /*
	// After finishing testing, for the interface:
      printf("\nWrite a new line\n  >");
      char str[80];
      fgets(str,80,stdin);
      char *p = (char *)malloc(sizeof(str));
      strcpy(p,str);
      */
      printf("Testing:\n");

      add_history(list,sptr);                 /* Add string to the linked list */
      

      
      
    
      break;

    case 'b':
      printf("Select a string to tokenize:\n");
      /* LINKED LIST*/
      //print_history();                      /* Show all the history */


      
      printf("History: %s\n",get_history(list,2)); /* Get a line from all the history */

      //NEEDS TO GO TO THE START OF THE LIST TO ITERATE

      printf("\n");

      /* Tokenize */
      
      break;

    case 'c':
      puts("Good bye!");
      exit(0);                                 /* Terminate */
      goto done;

    case '\n':
      break;

    default:
      printf("\nUnrecognized option '%c', please try again\n",c);
    }
  }
 done:                                        /* To exit from the program */
  return 0;
}

void displayString(char str[])
{
  printf("String output: ");
  puts(str);
}
