/*Write a function that takes a string and reverses it in place.*/
#include<stdio.h>
#include<string.h>
void reverse(char str[])
{
  int length=strlen(str);
  for(int i=0;i<length/2;i++)
  {
    char temp=str[i];
    str[i]=str[length-1-i];
    str[length-1-i]=temp;
  }
}
int main()
{
 char string[100];
 printf("Enter a string:");
 fgets(string,sizeof(string),stdin);

 printf("Original String is :");
 puts(string);
 reverse(string);
 puts("String After reverse :");
 puts(string);

 return 0;
}