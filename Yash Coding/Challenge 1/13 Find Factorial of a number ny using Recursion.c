// Find Factorial of a number by using recursion
#include<stdio.h>
int fact(int n)
{
  if(n==0)
  return 1;
  return n*fact(n-1);
}
int main()
{
  int num=2;
  printf("Factrial of %d is %d",num,fact(num));
  return 0;
}