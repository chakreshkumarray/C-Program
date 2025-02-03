/*Define a function square that takes an int and returns its square.*/
#include<stdio.h>
int square(int num)
{
  return num*num;
}
int main()
{
  int a;
  printf("Enter a number:");
  scanf("%d",&a);
  printf("The Square is: %d ",square(a));
  return 0;
}

