#include<stdio.h>
int main()
{
  
  int num;
  printf("Enter the number:");
  scanf("%d",&num);

  int i=1;
  int fact=1;
  while (i<=num)
  {
    fact=fact*i;
    i++;
  }
  printf("factorial of %d is %d",num,fact);

  return 0;
}