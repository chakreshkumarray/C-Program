/*Create a program using for loop multiplication table for a number */
#include<stdio.h>
int  main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  int i=2;
  while (i<num)
  {
    if(num%i==0)
    {
      printf("This is not prime number:%d\n",num);
      return 0;
    }
    i++;
  }
  printf("This is a prime number: %d",num);
  return 0;
}