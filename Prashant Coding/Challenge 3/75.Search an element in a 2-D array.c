/*Create a program to search an element in a 2-D array.*/
#include<stdio.h>

int search( int arr[][3],int rows,int cols,int elements)
{
  int occ=0;
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
      if(arr[i][j]==elements)
      {
        occ++;
      }
    }
  }
  return 0;
}
int  main()
{
 int arr[3][3]={{1, 2, 3},{4, 5, 6},{7, 8, 9}};

 int occ= search(arr,3,3,1);
 printf("\nSeraching for 1 found %d",occ);
  
 int occ1= search(arr,3,3,5);
 printf("\nSeraching for 5 found %d",occ1);

 int occ2= search(arr,3,3,9);
 printf("\nSeraching for 9 found %d",occ2);

 return 0;
}