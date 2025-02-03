#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);

  int sum=0;
  int copy=n;
  while (n>0)
  {
    sum += n % 10;
    n = n/10;
  }
  printf("The sum of digit of %d is %d",copy,sum);

  return 0;

}