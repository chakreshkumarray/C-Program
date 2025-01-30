#include<stdio.h>
#include<string.h>
int  main()
{
  char name[50];
  printf("Enter your name:");
  fgets(name,50,stdin);

  char new_name[50];
  strcpy(new_name,name);
  printf("%s Copied to %s",name,new_name);

  return 0;


}