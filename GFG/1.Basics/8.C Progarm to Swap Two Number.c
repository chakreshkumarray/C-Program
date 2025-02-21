// C Program to Swap to Number by using Call by Reference (in Pointer)
#include<stdio.h>
void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}
int main()
{
  int a=20;
  int b=15;
  printf("Before swap number %d and %d\n",a,b);

  swap(&a,&b);

  printf("After swap number %d and %d",a,b);

  return 0;
}