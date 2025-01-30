#include<stdio.h>
int  main()
{
  FILE *file;
  file=fopen("chakesh kumar ray.txt","r");
  if(file==NULL)
  {
    printf("file could not be opened");
    return 1;
  }
  int result=fclose(file);
  if(result==0)
  {
    file=NULL;
  }
  else{
    printf("file was not closed properly.");
    return 1;
  }
  fclose(file);
  file==NULL;
  return 0;
}