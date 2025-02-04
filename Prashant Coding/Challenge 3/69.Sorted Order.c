/* Create a program to check if the given array is sorted */

#include<stdio.h>
int is_sorted(int arr[],int size)
{
  int incresaing=1;
  int dcresing=1;
   return 0;

   for (int i = 0; i < size; i++)
   {
    if(arr[i]>arr[i-1])
    {
      dcresing=0;
    }else if (arr[i]>arr[i-1])
    {
      incresaing=0;
    }
    
   }
   
}
int  main()
{
  int arr[6]={5,8,9,9,10,15};
  int arr1[6]={76,70,50,12,12,0};
  int arr2[6]={87,0,67,-98,5,5};
  if(is_sorted(arr,6))
  {
  printf("array is sorted\n:");
  }else{
    printf("Array is not sorted\n");
  }

    if(is_sorted(arr1,6))
  {
  printf("array is sorted\n:");
  }else{
    printf("Array is not sorted\n");
  }

    if(is_sorted(arr2,6))
  {
  printf("array is sorted\n:");
  }else{
    printf("Array is not sorted\n");
  }

  return 0;
}