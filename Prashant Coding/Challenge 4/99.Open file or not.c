/* Write a program that asks the user for a filename, attempts
to open it, and reports whether the operation was successful
or not.*/
#include<stdio.h>
int main()
{
  char filename[100];
  printf("Enter the file name:");
  scanf("%99s",filename);

  FILE*file=fopen(filename,"r");
  if(file!=NULL){
    printf("\n%s was opened successfully.",filename);
    fclose(file);
  }else{
    printf("\n file was not found.");
  }
  return 0;
}