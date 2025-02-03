/*Develop a program that calculates the sum of all numbers entered by
a user until the user enters 0. The total sum should then be displayed.*/
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  
  int sum=0;
  do{
     printf("Enter a number:");
     scanf("%d",&num);
     sum=sum+num;
  }while (num!=0);
  printf("sum of number is :%d",sum);
  return 0;
}