/*. Create a program that converts a large number of kilometers to miles,
using long or long long to store the distance.*/
#include<stdio.h>
int main()
{
  const float mpkm=0.61371;
  long kms;
  printf("Enter the kilometer:");
  scanf("%d",&kms);
  long miles=kms*mpkm;

  printf("The number of miles:%d",miles);

  return 0;

}