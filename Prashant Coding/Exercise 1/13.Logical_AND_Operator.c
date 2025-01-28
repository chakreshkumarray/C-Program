#include<stdio.h>
int main()
{
  int age;
  char indian;
  printf("Enter your age:");
  scanf("%d",&age);

  printf("Are you an indian Citizen(Y/N):");
  scanf(" %c",&indian);
  
  if(indian=='Y' && age>=18 && age <70)
  {
    printf("You are  Eligible for license\n");
  }
  else 
  {
    printf("You are not eligible for licesne\n");
  }
  
  printf("Your age is:%d\n",age);
  return 0;
}
