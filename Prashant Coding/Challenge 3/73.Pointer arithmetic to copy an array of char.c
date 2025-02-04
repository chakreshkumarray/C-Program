/* Write a function that uses pointer arithmetic to copy an array of char
into another.*/
#include<stdio.h>
void copy(char *arr,int size,char *new_arr)
{
 for(int i=0;i<size;i++)
 {
  *new_arr=*arr;
  new_arr++;
  arr++;
 }
}

void print_arr(char arr[],int size)
{
   for(int i=0; i<size; i++)
 {
  printf("%c",arr[i]);
 }
}
int main()
{
 char arr[14] ={'C','H','A','K','R','E','S','H',' ','K','U','M','A','R'};
 char new_arr[14];
 printf("\nOriginal array :");
 print_arr(arr,14);
 copy(arr,14,new_arr);
 printf("\nCopied arry:");
 print_arr(new_arr,14);
}