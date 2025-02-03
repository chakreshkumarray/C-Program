/*Create a program using continue to print only even numbers using
continue for odd numbers.*/
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  for(int i=1;i<=num;i++)
  {
    if (num%2==0)
      continue;
      printf(" Number is: %d",i); 
  }

}
  
