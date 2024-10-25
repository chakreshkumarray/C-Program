#include<stdio.h>
void incrementCounter()
{
  static int counter=0;
  counter++;
  printf("%d\n",counter);
}
int main()
{
  int i;
  for(i=0;i<=7;i++)
  {
    incrementCounter();
  }
  return 0;
}