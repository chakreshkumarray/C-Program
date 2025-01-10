/*Add a node at the end in linked list*/
#include<stdio.h>
#include<stdlib.h>
Struct Node
{
  int data;
  Struct Node*next;
}

void append (Struct Node** head_ref,int new_data)
{
Struct Node* new_node=(Struct Node*)malloc(sizeof(Struct Node));
Srtuct Node*last= *head_ref;
new_node->data=new_data;
new_node->next=NULL;
if(*head_ref==NULL)
{
  *head_ref=new_node;
  return 0;
}
while (last->next!=NULL)
last=last->next;
last->next=new_node;

}