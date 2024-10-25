
// Declration of Pointer to a Pointer

#include<stdio.h>
int main()
{
  int i=10;
  int *j=&i;
  int **k=&j; 
printf("address of i is: %p\n",**(&j));
printf("address of i is: %d\n",*(&j));
printf("address of i is: %d\n",**k);
printf("address of i is: %p\n",&i);
printf("address of k is: %p\n",&j);
printf("address of j is: %p\n",&i);
printf("address of i is: %p\n",*&j);
printf("address of i is :%p\n",j);
printf("address of j is %p\n",&j);
printf("value  of j is :%p\n",j);
printf("values of i  is :%d\n",i);
printf("value of i is :%d\n", *(&i));
printf("value of i is:%d",*j);

}