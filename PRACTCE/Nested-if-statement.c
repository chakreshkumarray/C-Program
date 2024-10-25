
// Check the candidate is eligible for ARTP license by using if esle if statement:-

#include<stdio.h>
int main()
{
  int age;
  char is_indian;
  printf("Welcome to ARTO.\n Please enter your age:");
  scanf("%d\n",age);
  printf("are you a indian citizen(Y/N): ");
  scanf("%c", & is_indian);

  if (is_indian == 'Y')
  {
    if(age<18)
    {
      printf("you are too ypung, please apply after you are 18.\n");
    }
    else if (age>70)
    {
      printf("You are eligible for a license.\n");
    } 
  }
  else
  {
    printf("Only indian Citizen can apply.\n");
  }
  

  printf("Your age is:%d", age);

  return 0;
}