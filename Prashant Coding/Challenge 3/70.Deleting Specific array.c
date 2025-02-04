/*Create a program to return a new array deleting a specific element.*/
#include<stdio.h>
void delete(int arr[],int size,int new_arr[],int *new_size,int element)
{
  int j=0;
  for(int i=0; i<size; i++)
  {
    if(arr[i]!= element)
    {
      new_arr[j++]=arr[i];
    }
  }
  *new_size=j;
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
  int arr[8]={1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 };
  int new_arr[8];
  int new_size;

  delete(arr,8,new_arr,&new_size,5);
  printf("\nThe array deleting after 5 is:");
  print_arr(new_arr,new_size);

  delete(arr,8,new_arr,&new_size,6);
  printf("\nThe array deleting after 6 is:");
  print_arr(new_arr,new_size);

  delete(arr,8,new_arr,&new_size,8);
  printf("\nThe array deleting after 8 is:");
  print_arr(new_arr,new_size);

  delete(arr,8,new_arr,&new_size,9);
  printf("\nThe array deleting after 9 is:");
  print_arr(new_arr,new_size);
}