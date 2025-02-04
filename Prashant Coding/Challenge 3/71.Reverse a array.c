/*Create a program to reverse an array.*/
#include<stdio.h>
void revsere(int arr[],int size)
{
  for(int i=0;i<size/2;i++)
  {
    swap(&arr[i],&arr[size-1-i]);
  }
}

void print_arr(int arr[],int size)
{
   for(int i=0; i<size; i++)
 {
  printf("%d",arr[i]);
 }
}
int swap(int *first,int *second)
{
  int temp=*first;
  *first=*second;
  *second=temp;
};

int main()
{
 int arr1[]={1,2,5,7,8,9,4,5};
 int arr2[]={1,2,3,4,5};

 printf("\nReverse this array swaping:");
 print_arr(arr1,8);
 revsere(arr1,8);
 printf("\nAfter reversing :");
 print_arr(arr1,8);

 printf("\nReverse this array swaping:");
 print_arr(arr2,5);
 revsere(arr2,5);
 printf("\nAfter reversing :");
 print_arr(arr2,5);

 
}