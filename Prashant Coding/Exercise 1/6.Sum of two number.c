#include<stdio.h>
int main()
{
  int a;
  int b;
  int c;
  printf("Enter a First number:");
  scanf("%d",&a);
  printf("Enter a second number:");
  scanf("%d",&b);
  c=a+b;
  printf("The sum of %d and %d is:%d\n",a,b,c);
  return 0;
}