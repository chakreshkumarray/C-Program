#include<stdio.h>
int main()
{
  int marks[2][3][5];
  int i,k,j;

  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=0;k<5;k++)
      {
      printf("Student %d, Subject %d, Marks %d is:\n",(i+1),(j+1),(k+1));
      scanf("%d%d%d",&marks[i][j][k]);
      }
    }
  }
  return 0;
}