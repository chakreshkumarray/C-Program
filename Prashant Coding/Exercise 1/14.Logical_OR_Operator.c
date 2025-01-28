#include<stdio.h>
int main()
{
  int age;
  int indian;
  printf("Enter your age:");
  scanf("%d",&age);
  printf("Are you an indain:");
  scanf("%d",&indian);

  if(indian=='Y'|| (age>=18 && age<70))
  {
    printf("you are Eligible for license\n");
  }
  else
  {
    printf("You are not eligible\n");
  }
  printf("Your age is: %d",age);

  return 0;
}