#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *arr=(int*)calloc(2,sizeof(int));

  if(arr==NULL)
  {
    printf("Not Enough Memory");
    return 1;
  }
  printf("Address of arr:%p\n",arr);
  arr[0]=14;
  arr[10]=33;

  arr=(int*)realloc(arr,3*sizeof(int));
  if(arr==NULL)
  {
    printf("Not Enough Memory");
    return 1;
  }
  printf("new Address of arr:%p\n",arr);
  printf("Original element arr:%d%d",arr[0],arr[1]);
  arr[98];
  return 0;
}