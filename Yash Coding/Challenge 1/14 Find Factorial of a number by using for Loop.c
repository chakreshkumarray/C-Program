//Find Factorial of a number by using for Loop
#include<stdio.h>
int fact(int n)
{
  int result=1,i;
  for(i=2;i<=n;i++)
    result=result*i;
    return result; 
}
int main()
{
  int num =3;
  printf("Factorial of %d is %d",num,fact(num));
  return 0;
}