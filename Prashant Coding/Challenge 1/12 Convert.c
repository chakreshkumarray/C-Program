#include<stdio.h>
int main()
{
  int number;
  printf("Enter a number:");
  scanf("%d",&number);

  float floating = number;

  printf("Original number is :%d\n",number);
  printf("float number is :%f\n",floating);
  printf("converted  number is :%f",(float)number);
}