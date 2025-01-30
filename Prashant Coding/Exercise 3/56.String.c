#include<stdio.h>
int main()
{
  char c1[]="abcd";
  char c2[50]="abcd";
  char c3[]={'a','b','c','d','\0'};
  char c4[5]={'a','b','c','d','\0'};

  printf("%c",c1[0]);
  printf("%d",c2[50]);
  printf("%c",c3[0]);
  printf("%d",c4[5]);
  
}