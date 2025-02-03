//Create a program to check if a number is an Armstrong number
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  int sum=0;
  int copy=num;
  while (copy>0)
  {
    int digit=copy%10;
    sum+=digit*digit*digit;
    copy/=10;
  }
  if(sum==num)
  {
    printf("The number is Armstrong: %d ",num);
  }
  else{
    printf("The number is not Armstrong: %d ",num);
  }
  return 0;
}