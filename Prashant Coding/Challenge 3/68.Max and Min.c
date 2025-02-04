/*-Create a program to find the maximum and minimum element in an
array.*/

#include<stdio.h>

int  main()
{
  int arr[10];
  for(int i=0;i<10;i++)
  {
  printf("%dth element is:",(i+1));
  scanf("%d",&arr[i]);
  }
  int max=arr[0];
  int min=arr[0];
  for (int i = 0; i < 10; i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
    }
  }
  printf("The value is min %d and max is %d",min,max);
  
  return 0;
}