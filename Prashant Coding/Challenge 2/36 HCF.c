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
  

  for(int i=min; i>=1;i--)
  {
    if(a%i==0  && b % i ==0)
    {
      printf("HCF of %d and %d is %d",a,b,i);
      break;
    }
  }
  return 0;
}