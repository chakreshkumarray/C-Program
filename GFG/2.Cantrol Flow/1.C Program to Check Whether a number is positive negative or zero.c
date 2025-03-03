#include<stdio.h>
int main()
{
 int num;
 printf("Enter a number:");
 scanf("%d",&num);
 if(num>0){
  printf("Positive number:%d",num);
 }
 else if (num<0)
 {
  printf("This is Negative:%d",num);
 }
 else {
 printf("This is zero");
 }
 return 0;
 
}
