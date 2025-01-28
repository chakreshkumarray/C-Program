#include<stdio.h>
int main()
{
  int num;
  input_number;
  printf("Enter a number:");
  scanf("%d",&num);
  if(num!=10)
  {
    goto input_number;
  }
}