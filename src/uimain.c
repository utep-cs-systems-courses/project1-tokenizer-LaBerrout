/* Based on the uimain.c from the project0 draw example by Dr Eric Freudenthal*/
#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main()
{
  puts("Welcome!");

  while (1){  //Infinite while loop
    printf("\nSelect one the next options: (a,b, or c)\n");
    printf("a) Type a new line\n");
    printf("b) Review history\n");
    printf("c) Quit\n");
    fputs(" > ", stdout);
    fflush(stdout);
    int c;
    while((c = getchar()) == '\n');  /* ignores new lines */
    if (c == EOF)
      goto done;

    // Given the user answer, select method to call
    switch(c){
    case 'a':
      print();
      break;

    case 'b':
      printf("In process...\n");
      break;

    case 'c':
      puts("Good bye!");
	goto done;     /* terminate */

    case '\n':
      break;

    default:
      printf("\nUnrecognized option '%c', please try again\n",c);
    }
  }
 done: //To exit from the program
  return 0;
}
