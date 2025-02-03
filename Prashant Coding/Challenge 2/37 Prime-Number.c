//Create a program to check whether a given number is prime using for loop

#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  for(int i=2;i<num;i++)
  {
  if(num%i==0)
   {
    printf("This is not Prime  Number %d",num );
    return 0;
    }
  }
  printf("This is Prime Number %d",num); 
  return 0;
}