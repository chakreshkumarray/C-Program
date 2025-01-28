#include<stdio.h>
int main()
{
  int i=3;
  int *j=&i;
  int **k=&j;
  printf("Address of i=%p\n",*k);
  printf("Address of j=%p\n",k);
  printf("Address of k=%p\n",&k);
  
  printf("values of k =%p\n",k);
  printf("Values of i=%d",**k);
  
}