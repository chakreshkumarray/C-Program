/* Create a program to find number of occurrences of an element in an
array.*/
#include<stdio.h>
int occurrences(int arr[],int size,int element)
{
  int counter=0;
  for(int i=0;i<size;i++)
  {
    if(arr[i]==element)
    {
      counter++;
    }
  }
  return counter;
}

int main()
{
  int arr[]={12,54,45,78,63,63,14,13,13,54,100,56,56,25};

  int result=occurrences(arr,54,13);
  printf("the number of occurrences of 13 is:%d\n",result);
    result=occurrences(arr,56,56);
  printf("the number of occurrences of 56 is:%d\n",result);
    result=occurrences(arr,63,63);
  printf("the number of occurrences of 63 is:%d\n",result);
   result=occurrences(arr,101,25);
  printf("the number of occurrences of 101 is:%d\n",result);
  
}