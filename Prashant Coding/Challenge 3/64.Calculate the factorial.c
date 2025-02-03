/*. Write a program to demonstrate the difference in range between
long and long long by calculating the factorial of 20.*/
#include<stdio.h>
int factorial(int num)
{
  if(num<=1)
  {
    return 1;
  }
  return num*factorial(num-1);
}

int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);

  int result=factorial(n);
  printf("The factorial is :%d",factorial(n));
}