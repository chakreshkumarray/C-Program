#include<stdio.h>
int factorial(int num)
{
  if(num==0)
  {
    return 1;
  }
  return num*factorial(num-1);

}
int main()
{
int fact=factorial(5);
printf("factorial Using Recursion:%d",fact);

}
