#include<stdio.h>
int main()
{
  int a;
  int b;
  char opr;
  int result;
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("Enter the operator (+, -, * , /)\n");
  scanf("%c",&opr);
  switch(opr)
  {
  case '+': result=a+b;
    break;
  case '-':  result=a-b;
    break;
  case '*':  result=a*b;
    break;
  case '/':  result=a/b;
    break;

  default: printf("Invalid operator , please enter (*,+,/,-)");
    break;
  }
  printf("the result is : %d",result);
  return 0;
}