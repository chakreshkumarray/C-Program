/* Write a program that declares an integer variable and a pointer to it.
Assign a value and print it using the pointer.*/
#include<stdio.h>
int main()
{
  int a;
  int *b=&a;
  printf("Enter the value:");
  scanf("%d",b);

  printf("The value of a is:%d",*b);
  printf("The value of a is:%d",a);

  return 0;
}