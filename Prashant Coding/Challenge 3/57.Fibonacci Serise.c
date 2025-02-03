/*. Create a program using recursion to display the Fibonacci series upto
a certain number.*/
#include<stdio.h>
int fibonacci(int pos)
{
  if(pos<=1)
  {
  return pos;
  }
  int current=fibonacci(pos-1)+fibonacci(pos-2);
  return current;
}
int main()
{
  int terms;
  printf("Enter the terms:");
  scanf("%d",&terms);
  for(int i=0;i<=terms;i++)
  {
    printf("Fibonnacci series is:%d\n",fibonacci(i));
  }
  return 0;
}