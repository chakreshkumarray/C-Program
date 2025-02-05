/*Write a program to convert a input string to uppercase.*/
#include<stdio.h>
#include<ctype.h>
int main()
{
  char name[25];
  printf("Enter the name:");
  fgets(name,sizeof(name),stdin);

  for(int i=0;name[i]!='\0';i++){
   name[i]=toupper(name[i]);
  }

  printf("Enterd name is :%s",name);

  

}