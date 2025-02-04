/*Create a program to check is the array is palindrome or not.*/
#include<stdio.h>
int pallindrome(int arr[],int size)
{
 for(int i=0;i<size/2;i++)
 {
  if(arr[i]!=arr[size-1-i])
  {
    return 0;
  }
 }
 return 0;
}

int  main(){
 int arr[9]={3, 6, 8, 4, 5, 4, 8, 6, 3};
 int arr1[4]={1, 1, 1, 1};
 int arr2[5]={1, 1, 1, 1, 2};
 printf("\npallindrome of %d",pallindrome(arr,9));
 printf("\npallindrome of %d",pallindrome(arr1,4));
 printf("\npallindrome of %d",pallindrome(arr2,5));
}