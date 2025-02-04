/* Create a program to find the sum and average of all elements in an
arr*/
#include<stdio.h>
int sum(int arr[],int size)
{
  int addition=0;
  for(int i=0;i<size;i++)
  {
    addition +=arr[i];
  }
  return addition;
}
int  main()
{
  int arr[10];
  for(int i=0;i<10;i++)
  {
  printf("%dth element is:",(i+1));
  scanf("%d",&arr[i]);
  }
  int addition=sum(arr,10);
  float avg=addition/10.0;
  printf("the sum of numbers is %d and average %.2f",addition,avg);
  
  return 0;
}