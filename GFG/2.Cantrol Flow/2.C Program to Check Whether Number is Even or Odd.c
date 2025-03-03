#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  if(num%2==0)
  {
  printf("This is Even number:%d",num);
  }
  else{
  printf("This is Odd Number:%d",num);
   }
  
  return 0;
}