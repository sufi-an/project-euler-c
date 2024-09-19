// File: linked_list.h 

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Struct 

struct Node {
  int data;
  struct Node *next;
};



// Fucntion declarations

void append(struct Node **head, int data);
void display(struct Node *head);
#endif // !DEBUGef 
