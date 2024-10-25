#include<stdio.h>
#include<string.h>
int main()                         //length find
{
  char name[50];
  printf("please anter your name : ");
  fgets(name,50, stdin);
  int size = strlen(name);                               
  printf("length of name : %d",size);

}