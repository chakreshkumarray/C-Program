#include<stdio.h>
#include<string.h>
int  main()
{
  char name1[50];
  char name2[50];
  printf("Enter your First name:");
  fgets(name1,50,stdin);
  printf("Enter your First name:");
  fgets(name2,50,stdin);


  
  strcat(name1,name2);
  printf("Final name is : %s ",name1);

  return 0;


}