//Find Factorial of a number by using While Loop
#include<stdio.h>
int fact(int n)
{
  if (n==0)
  return 1;
  int i=n,fact=1;
  while(n/i!=n)
  {
    fact=fact*i;
    i--;
  }
  return fact;
}
int main()
{
  int num=3;
  printf("Factorial of %d is %d",num,fact(num));
  return 0;
}