#include<stdio.h>
int main()
{
  int number;
  printf("Enter a number:");
  scanf("%d",&number);

  printf("The absloute value is %d",(number>0?number:number));

  return 0;
  
}