#include<stdio.h>
int main()
{
  int a;
  int b;
  printf("Enter the first number : ");
  scanf("%d",&a);
  printf("Enter the second number :");
  scanf("%d",&b);

  int min=a>b?a:b;
  int max=a*b;

  for(int i=min; i<=min;i++)
  {
    if(i%a==0  && i % b==0)
    {
      printf("LCM of %d is %d and %d",a,b,i);
      break;
    }
  }
  return 0;
}