/*Write a program that continuously reads integers from the user and
prints their squares. Use an infinite loop and a break statement to
exit when a special number (e.g., -1) is entered.*/
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  while(1)
  {
    if(num==-1)
    break;
    printf("\nSquare of %d is: %d",num,num*num);
  }
  return 0;
}