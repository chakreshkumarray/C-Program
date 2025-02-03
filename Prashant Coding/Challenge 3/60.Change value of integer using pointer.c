/*Write a program to change the value of an integer variable using a
pointer and the * operator*/
#include<stdio.h>
int main()
{
  int num=50;
  int *ptr=&num;
  printf("Value of num is :%d\n",num);
  *ptr=23;
  printf("value of num is :%d",num);
  return 0;

}