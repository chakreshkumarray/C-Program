/*. Demonstrate with a function increment that the original integer
passed to it does not change after incrementing it inside the function.*/
#include<stdio.h>
void swap(int a, int b)
{
  int temp =a;
  a=b;
  b=temp;
}
int main()
{
 int x=10;
 int y=20;
 printf("Before swap number is: %d,%d\n",x,y);
 swap(x,y);
 printf("After swap number is: %d,%d",x,y);
}