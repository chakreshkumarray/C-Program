
// Call by value

#include<stdio.h>
void swap(int x ,int y)
{
  int temp =x;
  x=y;
  y=temp;
}
int main()
{
  int x=45;
  int y=27;
  printf("before swap number is x and y :%d, %d\n", x ,y);
  swap(x,y);
  printf("After swap number is x and y :%d , %d", x ,y);
}