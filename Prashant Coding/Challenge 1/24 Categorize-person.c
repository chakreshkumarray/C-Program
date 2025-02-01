#include<stdio.h>
int mai()
{
  int age;
  printf("Enter the age:");
  scanf("%d",&age);

  if(age<90)
  {
    printf("These are senior");
  }
  else if (age<60)
  {
    printf("These are Adult");
  }
  else if(age<30)
  {
    printf("These are Teen");
  }
  else 
  {
    printf("These are child");
  }
}
