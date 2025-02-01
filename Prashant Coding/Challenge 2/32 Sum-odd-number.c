#include<stdio.h>
int main()
{
  int num;

  printf("Enter the number:");
  scanf("%d",&num);


int i=1;
int sum=0;
while (i<=num)
{
  sum+= i;
  i+=2;
}
printf("sum of all odd number is %d is %d", num,sum);

return 0;
}