/*Create a function max that takes two float arguments and returns the
larger value.*/
#include<stdio.h>
int max(int a, int b)
{
 return a>b?a:b;
}
int main()
{
  int x;
  int y;
 printf("Enter the first number:");
 scanf("%d",&x);
 printf("Enter the second number:");
 scanf("%d",&y);

 printf("max number is: %d",max(x,y));
}