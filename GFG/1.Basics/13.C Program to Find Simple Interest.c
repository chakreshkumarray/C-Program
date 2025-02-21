#include<stdio.h>
int main()
{
  int Principle;
  printf("Enter the Principle:");
  scanf("%d",&Principle);
  int Rate;
  printf("Enter the Rate:");
  scanf("%d",&Rate);
  int Time;
  printf("Enter the Time:");
  scanf("%d",&Time);

  int Simple_Interest=(Principle*Time*Rate)/100;

  printf("Simple interest is :%d",Simple_Interest);

  return 0;
}