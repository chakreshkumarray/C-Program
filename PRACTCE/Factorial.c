#include<stdio.h>
int factorial_using_loop(int);
int factorial_using_recursion(int);

int main()    // Factorial using loop
{
  int res = factorial_using_loop(3);
  printf("factorial_using_loop:%d",res);
  return 0;
}

int factorial_using_loop(int num)
{
  int result=1;
  for(int i=2;i<=num;i++)
  {
    result *=i;
  }
  return result;
}
