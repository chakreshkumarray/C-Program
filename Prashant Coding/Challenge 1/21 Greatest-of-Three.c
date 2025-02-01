#include<stdio.h>
int main()
{
  int a;
  int b;
  int c;

  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("Enter the third number:");
  scanf("%d",&c);

  if(a > b && a >c)
  {
    printf("Greatest number is: %d", a);
  }
  else if (b>c)
  {
    printf("Greatest number is : %d",b);
  }
  else
  {
    printf("Greatest number is : %d",c);
  }

  return 0;
}