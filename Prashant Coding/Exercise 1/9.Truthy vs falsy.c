#include<stdio.h>
int main()
{
  int age;
  printf("Enter your age:");
  scanf("%d",&age);

  if(age>=18)
  {
    printf("You are Eligible for license\n");
  }

  if(NULL)
  {
    printf("This is never going to Printed");
  }
  printf("Your age is:%d",age);
  return 0;
}