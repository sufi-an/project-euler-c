// File: test_ll.c

#include <stdio.h>
#include "linked_list.h"

int main(int argc, char *argv[])
{
  struct Node *head = NULL;
  append(&head,10);
  append(&head,20);
  append(&head,30);

  display(head);

  return 0;
}
