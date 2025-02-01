#include<stdio.h>
int main()
{
  int mark;

  printf("Enter the marks :");
  scanf("%d",&mark);

  if(mark>90)
  {
    printf("You have got grade A");
  }
  else if (mark>75)
  {
    printf("You have got grade B");
  }
  else if(mark>60)
  {
    printf("You have got grade C");
  }
  else if (mark>30)
  {
    printf("You have got grade D");
  }
  else
  {
    printf("You have Failed with grade F ");
  }

  return 0;
}
