#include<stdio.h>
int main()
{
  int age;
  scanf("%d\n",age);
  printf("Welcome to ARTO.\n Please enter your age\n:");
  if (age>18)
  {
    printf("you are eligible for licensce.\n");
  }
  else if(age<18)
  {
    printf("you are not eligible for license\n");
  }
  else
  printf("%d\n",age);
}