#include<stdio.h>
int main()
{
  int age;
  char indian;
  printf("Enter your age:");
  scanf("%d",&age);

  printf("Are you an indian Ciizen(Y/N):");
  scanf(" %c",&indian);

  if(indian=='Y')
  {
  if(age<18)
  {
    printf("You are not Eligible for license\n");
  }
  else if(age>60)
  {
    printf("You are senior,so  not eligible for licesne\n ");
  }
  else{
    printf("You are eligible\n");
  }
  }
  else 
  {
    printf("only indian citizen can apply");
  }
  
  printf("Your age is:%d",age);
  return 0;
}