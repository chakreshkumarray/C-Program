#include<stdio.h>
#include<string.h>
int main()                   //copy the name
{
  char name[50];
  printf("please anter your name : ");
  fgets(name,50, stdin);                                 


  char new_name[50];
  strcpy(new_name,name);
   printf("length copy name : %d",name,new_name);
  
}