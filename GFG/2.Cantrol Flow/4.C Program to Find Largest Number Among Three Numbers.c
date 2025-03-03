#include<stdio.h>
int main()
{
  int a=10,b=22,c=9;
  if(c>=b){
    if(c>=a)
    printf("%d is the largest number:",c);
    else
    printf("%d is the largest number:",a);
  }
  else{
    if(b>=a)
    printf("%d is the largest number:",b);
    else 
    printf("%d is the largest number:",a);
  }
  return 0;
}