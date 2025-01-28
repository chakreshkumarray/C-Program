#include<stdio.h>
int addition;
void sum(int a,int b)
{
  addition=a+b;
}
int main()
{
  sum(25,20);
  printf("Sum of the number is :%d",addition);
}