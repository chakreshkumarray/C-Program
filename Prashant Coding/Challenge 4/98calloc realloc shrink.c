/*Create an array using calloc and fill it with random numbers,
then use realloc to shrink the array size by half and print the
remaining numbers.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int *arr=(int*)calloc(10,sizeof(int));
  if(arr==NULL){
    printf("\nMemory error !!!");
    return 1;
  }

  srand(time(NULL));
  for(int i=0;i<10;i++){
    arr[i]=rand()%100;
  }
  printf("\nRandom number is:");
  for(int i=0;i<10;i++){
    printf("%d",arr[i]);
  }
   
   int *Shrinked=(int*)realloc(arr,5*sizeof(int));
   if(Shrinked==NULL)
   {
    printf("\nmemory error !!");
    free(arr);
    arr=NULL;
    return 1;
   }

   arr=Shrinked;

  printf("\nRandom number is:");
  for(int i=0;i<5;i++){
    printf("%d",arr[i]);
  }

  free(arr);
  arr=NULL; 
  return 0;

}