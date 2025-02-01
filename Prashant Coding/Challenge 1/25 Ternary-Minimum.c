#include<stdio.h>
int main()
{
  int a;
  int b;
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);

  int min=a<b?a:b;
  printf("minimum of two is:%d",min);

  return 0;
}