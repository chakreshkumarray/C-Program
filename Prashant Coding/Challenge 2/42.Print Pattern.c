//Create a program that print patterns:
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  for(int i=1; i<=num; i++)
  {
    printf("\n");
    for(int j=0;j<i;j++)
    {
      printf("* ");
    }
  }
  return 0;
}
//
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  for(int i=0; i<=num; i++)
  {
    printf("\n");
    for(int j=0;j<num-i;j++)
    {
      printf("* ");
    }
  }
  return 0;
}
//
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  for(int i=1; i<=num; i++)
  {
    printf("\n");
    for(int j=0;j<num-i;j++)
    {
      printf("  ");
    }
    for(int k=0;k<i;k++)
    {
      printf("* ");
    }
  }
  return 0;
}