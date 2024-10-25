#include<stdio.h>
int main()
{
  char gender;
  printf("enter your gender?(M/F):");
  scanf("%c",&gender);

  gender=='M' ? printf("male"):printf("Female");

  return 0;
}