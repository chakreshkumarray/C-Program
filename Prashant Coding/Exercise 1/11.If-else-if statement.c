#include<stdio.h>
int main()
{
  int age;
  printf("Enter your age:");
  scanf("%d",&age);

  if(age<18)
  {
    printf("You are not Eligible for license\n");
  }
  else if(age>60)
  {
    printf("You are senior,so  not eligible for licesne\n ");
  }
  else{
    printf("You are eligible\n");
  }
  printf("Your age is:%d",age);
  return 0;
}