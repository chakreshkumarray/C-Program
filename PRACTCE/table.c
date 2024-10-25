#include<stdio.h>
int main()
{
  int num;
  int i;
  printf("\n\n please enter the number:" );
  scanf("%d",&num);

  for(i=1; i<=10;i++)
  {
    printf("%d X %d = %d\n", num, i, num*i);
  }
  return 0;
}