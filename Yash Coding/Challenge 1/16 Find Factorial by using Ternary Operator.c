#include<stdio.h>
long long int fact(long long int n)
{
  return(n==1||n==0?1:n*fact(n-1));
}

  int main()
  {
   long long int num =5999999;
   printf("factorial of %d is %d",num,fact(num));
   return 0;
  }
