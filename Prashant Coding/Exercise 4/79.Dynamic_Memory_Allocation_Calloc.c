#include<stdio.h>
#include<stdlib.h>
int main()
{
  int size;

  printf("Please enter the number of elements:");
  scanf("%d",&size);

  int *arr=(int*)calloc(size,sizeof(int));

  if(arr==NULL)
  {
    printf("not Enough Memory");
    return 1;
  }
  for(int i=0;i<size;i++)
  {
    printf("Elements Enter number: %d\n",i+1);
    scanf("%d",arr[i]);
  }
  long sum=0;
  for(int i=0;i<size;i++)
  {
    sum=sum+arr[i];
  }
  printf("The sum of elements is %d\n",sum );

  return 0;
}