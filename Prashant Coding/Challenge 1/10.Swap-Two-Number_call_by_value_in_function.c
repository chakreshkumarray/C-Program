#include<stdio.h>
void swap(int x, int y)
{
int temp =x;
x=y;
y=temp;
}
int main()
{
  int x=10;
  int y=22;
  printf("before swap x and y is %d,%d\n",x,y);
  swap(x,y);
  printf("After swap x and y is %d,%d",x,y);
}
