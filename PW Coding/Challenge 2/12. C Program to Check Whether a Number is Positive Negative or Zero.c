// C Program to Check Whether a Number is Positive, Negative, or Zero
#include<stdio.h>
int main()
{
  int n;
  printf("Enter a Number :",n);
  scanf("%d",&n);
  if(n>0)
  {
    printf("positive number is:%d",n);
  }
  else if(n<0)
  {
   printf("Negative number is:%d",n);
  }
  else{
    printf("Zero\n");
  }
  return 0;
}