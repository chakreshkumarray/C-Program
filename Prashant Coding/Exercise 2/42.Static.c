#include<stdio.h>
void increment()
{
  static int count=0;
  count++;
  printf("count is: %d\n",count);
}
int main()
{
  for(int i=0;i<3;i++)
  {
    increment();
  }
  return 0;
}