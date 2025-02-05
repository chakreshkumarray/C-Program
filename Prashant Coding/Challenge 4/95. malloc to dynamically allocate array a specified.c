/* Create a program that uses malloc to dynamically allocate an
array for a specified number of float values entered by the
user and then stores user-entered numbers into it.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int size;
  printf("Enter the number of elements:");
  scanf("%d",&size);

  float *arr=(float*)malloc(size*sizeof(float));
  if(arr==NULL)
  {
   printf("Short of memory. !!!!");
   return 1;
  }

  for(int i=0;i<size;i++)
  {
    printf("Entered elements no %d:",(i+1));
    scanf("%f",&arr[i]);
  }

  for(int i=0;i<size;i++)
  {
    printf("%.2f",arr[i]);
  }

  free(arr);
  arr=NULL;

  return 0;

}