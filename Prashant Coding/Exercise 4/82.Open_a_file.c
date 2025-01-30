#include<stdio.h>
int  main()
{
  FILE *file;
  file=fopen("ck.txt","r");
  if(file==NULL)
  {
    printf("file could not be opened");
    return 1;
  }
  return 0;
}