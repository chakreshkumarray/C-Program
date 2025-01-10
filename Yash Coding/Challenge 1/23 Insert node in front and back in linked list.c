/*Insert node in front and back in linked list*/
#include<stdio.h>
#include<stdlib.h>
Struct Node
{
  int data;
  Struct Node*next;
}
void printList(Struct Node*node)
{
  while(node!=NULL)
  {
    printf("%d",node->data);
    node=node->next;
  }
}

int main()
{
  Struct Node* head=NULL;
  append(&head,1);
  push(&head,2);
  push(&head,3);
  append(&head,4);
  insert After (head->next,5);
  printf("\n Created Linked list is :" );
  printList(head);

  return 0;
}
