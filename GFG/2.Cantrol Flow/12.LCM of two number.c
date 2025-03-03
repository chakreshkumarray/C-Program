#include<stdio.h>
int main()
{
  int firstnumber;
  int secondnumber;
  printf("Enter a first number:");
  scanf("%d",&firstnumber);
  printf("Enter a second number:");
  scanf("%d",&secondnumber);

  int min=firstnumber>secondnumber?firstnumber:secondnumber;
  int max=firstnumber*secondnumber;

  for(int i=min; i<=min;i++)
  {
    if(i%firstnumber==0  && i % secondnumber==0)
    {
      printf("LCM of %d is %d and %d",firstnumber,secondnumber,i);
      break;
    }
  }
}