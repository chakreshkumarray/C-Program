/* Create a program that checks if a given string is a palindrome (the same
forwards and backwards) and outputs the result.*/
#include<stdio.h>
#include<string.h>
int pallindrome(char arr[])
{
  int len=strlen(arr);
  for(int i=0;i<len;i++)
  {
  if(arr[i]!=arr[len-1-i])
  {
    return 0;
  }
  }
  return 1;
}
int main(){
 char name[100];
 printf("Enter name:");
 scanf("%s",name);
 if(pallindrome(name))
 {
  puts("This is pallindrome:");
 }else{
  puts("This is not pallindrome:");
 }

}