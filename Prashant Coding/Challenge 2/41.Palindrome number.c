//Create a program to verify if a number is a palindrome
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  int reverse=0;
  int copy=num;
  while (copy>0)
  {
    reverse=(reverse*10)+(copy%10);
    copy/=10;
  }
  if(reverse==num)
  {
    printf("The number is pallindrome: %d ",num);
  }
  else{
    printf("The number is not pallindrome: %d ",num);
  }
  return 0;
}