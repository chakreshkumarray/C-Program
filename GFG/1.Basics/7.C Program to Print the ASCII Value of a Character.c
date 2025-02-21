// C Program to pirnt the ASCII Value of a Character
#include<stdio.h>
int main()
{
  char ch;
  
  printf("Enter a Character:");
  scanf("%c",&ch);

  printf("The ASCII value of %c is %d",ch,ch);

  return 0;
}