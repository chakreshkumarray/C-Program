
//using logical and operator

#include<stdio.h>
int main()
{
  int age;
  char is_indian;
  printf("Welcome to ARTO.\n Please enter your age:");
  scanf("%d\n",age);
  printf("are you a indian citizen(Y/N): ");
  scanf("%c", &is_indian);

  if (age >= 18 && age<70)
  {
    printf("your are eligible for license.\n");
  }
  else
  {
    printf("you are not eligible.");
  }
  printf("your age is :%d",age);
  return 0;
}