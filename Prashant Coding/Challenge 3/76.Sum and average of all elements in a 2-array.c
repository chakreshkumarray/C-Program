/* Create a program to do sum and average of all elements in a 2-array.*/

#include<stdio.h>
int sum( int arr[3][3],int rows,int cols)
{
  int sum=0;
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
    sum +=arr[i][j];
    }
  }
  return 0;
}

int  main()
{
 int arr[3][3]={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
 int add= sum(arr,3,3);
 float avg=add/9.0;
 printf("Addition is and average is",add,avg);

 return 0;
}