#include<stdio.h>
int main()
{
  int num;
  do
  {
    printf("Enetr a number:");
    scanf("%d",&num);
    num++;
  } while (num<=10);

  return 0;
}