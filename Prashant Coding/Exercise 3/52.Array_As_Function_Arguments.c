#include<stdio.h>
int SumArray(int arr[],int size)
{
  int Sum=0;
  for(int i=0;i<size;i++)
  {
    Sum=Sum+arr[i];
  }
  return Sum;
}

int main(){
  int myArray[]={1,2,3,4,5};
  int size=sizeof(myArray)/sizeof(myArray[0]);
  int total=SumArray(myArray,size);
  printf("Sum of Array is :%d\n",total);
  return 0;
}