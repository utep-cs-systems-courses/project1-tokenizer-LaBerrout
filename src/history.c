#include <stdio.h>
#include <stdlib.h>
#include "history.h"

int count = 0;

List* init_history()
{
  Item *temp;
  List *head;

  head = (List *)malloc(sizeof(List));
  head->root = temp;
  return head;
}


void add_history(List *list, char *str)
{
  Item *temp = (Item *)malloc(sizeof(Item));
  temp->id = count++;
  temp->str = str;
  List *p = list;
    
  while(p->root != NULL){
    p->root = p->root->next;
  }
  p->root = temp;
  printf("data: %d\n",p->root->id);
  //printf("string: %s\n", p->root->str);

}

char *get_history(List *list, int id)
{
  List *p = list;
  if(list == NULL){
    printf("No list available.\n");
    return NULL;
  }
    
  while(p->root != NULL){
    if(p->root->id == id){
      return p->root->str;
    } else{
      printf("In node %d\n",p->root->id);
      p->root = p->root->next;
    }
  }
  printf("There's no history with this ID, try again.\n");
  return NULL;


  /* Stays in the same node, does not returns to the head of the list */
}

/*
void print_history(List *list);


void free_history(List *list);
*/
