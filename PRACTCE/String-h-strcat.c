#include<stdio.h>
#include<string.h>
int main()
{                                              // concatinate the string
  char first_name[50];
  char last_name[50];
  printf("please anter your first_name : ");
  fgets(first_name,50, stdin);
  printf("please anter your last_name : ");
  fgets(last_name,50, stdin);

  
  strcat(first_name,last_name);
  printf("final  name is : %s",first_name);
}