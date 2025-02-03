/*. Create a program using recursion to check if a number is a
palindrome using recursion.*/
#include<stdio.h>
int palindrome(int num,int rev)
{
  int reminder=num%10;
  int new_num=num/10;
  int new_rev=rev*10+reminder;
}
int main()
{
 int num;
 printf("Enter a number:");
 scanf("%d",&num);

 int rev=palindrome(num,0);
 if(num==rev)
 {
  printf("This is pallindrome:%d",num);
 }
 else{
  printf("This is not pallindrome:%d",num);
 }

}