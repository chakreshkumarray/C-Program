
//Using of go to statemnet to check the numeber

#include<stdio.h>
int main()
{
  int num;
  input_number:                 //label for goto
  printf("Enter the number");
  scanf("%d",&num);

  if (num != 18)
  {
    goto input_number;
  }

 return 0; 
}