/*Create a program to find the sum of two diagonal elements.*/
#include<stdio.h>

const int SIZE=3;
void sum_diagonal(int arr[][SIZE])
{
  
  int l_ds=0;
  int r_ds=0;
 for(int i=0;i<SIZE;i++)
 {
  l_ds += arr[i][i];
  r_ds +=arr[i][SIZE-1-i];
 }
 printf("\nsum of left diognal : %d",l_ds);
 printf("\nsum of right diognal : %d",r_ds);

 int total_ds=l_ds+r_ds; 
 if(SIZE%2==1)
 {
  int index=SIZE/2;
  total_ds-=arr[index][index];
  printf("\nThe sum of total diagonal is : %d",total_ds);
}
}

int main()
{
  int arr1[3][3]={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
  int arr2[4][4]={{1, 2, 3, 4},{4, 5, 6, 8},{7, 8, 9, -6},{4, 5, 8, -3}};

  sum_diagonal(arr1);
}