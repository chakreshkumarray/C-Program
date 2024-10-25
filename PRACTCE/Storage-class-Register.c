#include<stdio.h>
int main()
{
  register int counter;
  for(counter=0; counter<=10;++counter)       //stored in CPU register
  {
    printf("counter is :%d\n",counter);
  }
  return 0;
}