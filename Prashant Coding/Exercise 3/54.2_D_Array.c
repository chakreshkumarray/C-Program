#include<stdio.h>
int main()
{
  int marks[2][3];
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("Enter marks of students :%d,subject %d is:",i+1,j+1);
      scanf("%d",&marks[i][j]);
    }
  }
  return 0;
}