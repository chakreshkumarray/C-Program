#include<stdio.h>
int main()
{
  int year;
  printf("Enter the Year:");
  scanf("%d",&year);
  if(year%400==0)
  {
    printf("This is Leap year:%d",year);
  }
  else{
  printf("This is not leap year:%d",year);
  }

  return 0;
}