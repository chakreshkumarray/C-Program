
// passing value call by reference using pointer

#include<stdio.h>
void swap(int *x , int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}
int main()
{
  int x=30;
  int y=25;

  printf("before using swap value of x and y is : %d,%d\n" ,x,y);
  swap(&x,&y);
  printf("after using swap value of x and y is : %d,%d" ,x,y);
}