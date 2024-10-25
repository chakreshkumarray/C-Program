
// Value at address opertor declaration by pointer 

#include<stdio.h>
int main()
{
  int i=3;
  printf("Address  is : %p\n",&i);
  printf("value is : %d\n",i);
  printf("value is : %d\n",*(&i));
  return 0;
}