#include<stdio.h>
int main()
{
  int i=3;
  printf("Address of i =%p\n",&i);
  printf("Value of i=%d\n",i);
  printf("value of i=%d",*(&i));
  return 0;
}