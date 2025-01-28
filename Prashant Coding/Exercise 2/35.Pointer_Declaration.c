#include<stdio.h>
int main()
{
  int i=3;
  int *j=&i;
  printf("Address of i=%p\n",&i);
  printf("Address of i=%p\n",j);
  printf("Address of j=%p\n",&j);
  printf("Address of j=%p\n",j);
  printf("values of i=%d\n",i);
  printf("Values of i=%d\n",*(&i));
  printf("Value of i=%d",*j);
}