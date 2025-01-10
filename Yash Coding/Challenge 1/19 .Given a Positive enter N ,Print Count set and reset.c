/*   Given a Positive enter N ,Print Count set and reset

Example 1:
input =3
output =1

Example 2
input=6
output=2           */

#include<stdio.h>
unsigned int CountSetBits(unsigned int n)
{
  unsigned int count;
  while (n)
  {
    count=count+(n&1);
    n=n/2;   //n=n>>1;
  }
  return 0;
}
int  main()
{
  int i;
  scanf("%d",&i);
  printf("The number set bits of this number is %d",CountSetBits);
  return 0;
}