// C Program to Check Whether a Number is Prime or Not

#include<stdio.h>
int main()
{
  int n;
  int i;
  int a=0;
  printf("enter a number:");
  scanf("%d",n);
  for(i=2;i*i<=n;i++)
  {
  if(n%i==0)
  {
  a=1;
  break;
  }
  }
  if (a==1)
  {
  printf("This is a prime number");
  }
  else
  {
  printf("This is not a prime number \n");
  }
}