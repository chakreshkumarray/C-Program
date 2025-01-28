#include<stdio.h>
int main()
{
  int n=0;
  while(n!=10)
  {
  printf("Enter a number:");
  scanf("%d",&n);
  n++;
  }
  printf("Guessed Correct Number By the user");
  return 0;
}