
// Call by reference:-

#include<stdio.h>
void swap(int *x ,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}
int main()
{

  int x=13;
  int y=20;
  printf("before swap number is x and y :%d, %d\n", x ,y);
  swap(&x,&y);
  printf("After swap number is x and y :%d , %d", x ,y);
}