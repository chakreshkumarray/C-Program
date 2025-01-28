#include<stdio.h>
int factorial(int num)
{
  int result =1;
  for(int i=2;i<=num;i++)
  {
    result =result*i;
  }
  return result;
}
int main()
{
  int fact=factorial(15);
  printf("factorial using loop:%d",fact);
}