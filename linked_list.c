/*
 * Basic Linked List Implementation in C 
 */

/*
 *
 * TODO
 * complete append_last function
 * complete display list function
 */


#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void append(struct Node **head, int data){
  if (*head == NULL) {
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->next = NULL;
    new_node->data = data;
    *head = new_node;
    return ;
  }else {
    struct Node *it = *head;
    while (it->next) {
      it = it->next;
    }
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->next = NULL;
    new_node->data = data;
    it->next = new_node;
  }
} 

void display(struct Node *head){
  struct Node *it = head;
  while(it){
    printf("%d\n",it->data);
    it=it->next;
  }
}
//
// int main(int argc, char *argv[])
// {
//   struct Node *head = NULL;
//   append(&head,10);
//   append(&head,20);
//   append(&head,30);
//
//   display(head);
//   return 0;
// }


