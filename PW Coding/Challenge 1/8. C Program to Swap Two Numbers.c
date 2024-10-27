// C Program to Swap Two Numbers

#include<stdio.h>
int main()
{
  int x;
  int y;
  int temp;
  printf("Enter First Number:",x);
  scanf("%d",&x);
  printf("Enter Second Number:",y);
  scanf("%d",&y);
  temp=x;
  x=y;
  y=temp;
  printf("After Swapping:x=%d,y=%d\n",x,y);

  return 0;
}