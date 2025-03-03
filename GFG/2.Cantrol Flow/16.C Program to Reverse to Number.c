#include<stdio.h>
int reverseDigits(int num){
int reverse=0;
while (num>0)
{
  reverse=reverse*10+num%10;
  num=num/10;
}
return reverse;

}

int main()
{
  int num=4652;
  printf("Revrese is: %d",reverseDigits(num));
  
  return 0;
  
}
