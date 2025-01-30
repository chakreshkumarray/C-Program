#include<stdio.h>
int  main()
{
  FILE *file_pointer;
  char text[100];
  file_pointer=fopen("ck.txt","a");
  if(file_pointer==NULL)
  {
    printf("file could not be opened");
    return 1;
  }
  fprintf(file_pointer," writing something");
  fprintf(file_pointer,"square of %d is :",3,9);

  int result=fclose(file_pointer);
  if(result==0)
  {
    file_pointer=NULL;
  }
  else{
    printf("file was not closed properly.");
    return 1;
  }
  
  return 0;
}