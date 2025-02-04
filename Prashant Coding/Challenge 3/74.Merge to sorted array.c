/* Create a program to merge two sorted arrays.*/
#include<stdio.h>
void sorted_array(int arr1[],int size1,
                  int arr2[],int size2,
                  int arr3[], int size3)
 {
  int i=0,j=0,k=0;
  while(k<size3)
  {
   if(j==size2||(i<size1 && arr1[i]<arr2[j]))
   {
    arr3[k]=arr1[i++];
   }
   else{
    arr3[k]=arr2[j++];
   }
  //  if(j==size2)
  //  {
  //    arr3[k]=arr1[i++];
  //  }
  //   else if(i==size1)
  //   {
  //       arr3[k]=arr2[j++];
  //   }
  //  }
  //   if(arr1[i]<arr2[j])
  //   {
  //     arr3[k]=arr1[i++];
  //   }
  //   else{
  //     arr3[k]=arr2[j++];
  //   }
  k++;
  }
  }
                

void print_arr(int arr[],int size)
{
   for(int i=0; i<size; i++)
 {
  printf("%d",arr[i]);
 }
}                 

int main()
{
 int arr1[6]={1, 3, 5, 7, 9, 11};
 int arr2[7]={2, 4, 6, 8, 10, 12, 14};
 int arr3[13];
 printf("\nMerged array:");
 sorted_array(arr1,6,arr2,7,arr3,13);
 print_arr(arr3,13);

int arr4[8]={1, 3, 5, 7, 9, 11,-34,-15};
 int arr5[9]={2, 4, 6, 8, 10, 12, 14,-67,0};
 int arr6[17];
 printf("\nMerged array:");
 sorted_array(arr4,8,arr5,9,arr6,17);
 print_arr(arr6,17);
}