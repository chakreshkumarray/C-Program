
// pointer declaration 

#include<stdio.h>
int main()
{
int i=7;
int *j=&i;
printf("address of i is: %p\n",&i);
printf("address of i is :%p\n",j);
printf("address of j is %p\n",&j);
printf("value  of j is :%p\n",j);
printf("values of i  is :%d\n",i);
printf("value of i is :%d\n", *(&i));
printf("value of i is:%d",*j);

}