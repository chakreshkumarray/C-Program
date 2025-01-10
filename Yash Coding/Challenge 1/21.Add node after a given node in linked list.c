/*Add node after a given node in linked list*/
#include<stdio.h>
#include<stdlib.h>
Struct Node
{
  int data;
  Struct Node* next;
}
void insertAfter(Struct Node* prev_node,int new_data)
{
  if(prev_node==Null)
  {
    printf("The perevious nade can not be Null ");\
    return 0;
  }
  Struct Node* new_node=(Struct Node*)malloc(sizeof(Struct Node));
  new_node->data=new_data;
  new_node->next=prev_node->next;
  prev_node->next=new_node;
}