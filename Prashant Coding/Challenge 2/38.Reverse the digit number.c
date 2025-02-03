//Create a program to reverse the digits of a number
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  int reverse=0;
  int copy=num;
  while(copy>0)
  {
    reverse=(reverse*10)+(copy%10);
    copy=copy/10;
  }
  printf("Reverse of %d is: %d",num,reverse);
  return 0;
}