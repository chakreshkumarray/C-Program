/*Add the node of the Front in Linked list. */
#include<stdio.h>
#include<stdlib.h>
Struct node
{
  int data;
  Struct Node*next;
  
}

void push(Struct Node** head_ref,int new_data)
{
  Struct Node* new_node= (Struct Node*)malloc (sizeof(Struct Node));
  new_node->data=new_data;
  new_node->next=(*head_ref);
  (*head_ref)=new_node;
}