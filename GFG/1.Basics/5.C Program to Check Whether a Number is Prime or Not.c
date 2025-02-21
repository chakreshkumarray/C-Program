// C Program to Check Whether a Number is Prime or Not
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a Number:");
  scanf("%d",&num);

  for(int i=2;i<num;i++){
    if(num%i==0)
    {
      printf("This is Not a Prime Number:%d",num);
      return 0;
    }
  }
  printf("This is Prime Number:%d",num);
  return 0;
}