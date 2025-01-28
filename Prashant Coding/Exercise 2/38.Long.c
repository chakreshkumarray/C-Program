#include<stdio.h>
long long factorial(int num)
{
  long long result=1;
  for(int i=2;i<=num;i++)
  {
    result=result*i;
  }
  return result;
}
int main()
{
  int fact=factorial(52);
  printf("factorial : %lld ",fact);
  return 0;
}
