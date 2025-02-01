#include<stdio.h>
int main()
{
  int mark;

  printf("Enter the marks :");
  scanf("%d",&mark);

  printf("marks are :");;
  mark >80? printf("High")
          : (mark >=50 ? printf("Moderate")
                       : printf("Low"));

  return 0;
}