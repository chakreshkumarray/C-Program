#include<stdio.h>
int  main()
{
  FILE *file;
  char text[100];
  file=fopen("ck.txt","r");
  if(file==NULL)
  {
    printf("file could not be opened");
    return 1;
  }
  fgets(text,100,file);
  printf("%s",text);

  int result=fclose(file);
  if(result==0)
  {
    file=NULL;
  }
  else{
    printf("file was not closed properly.");
    return 1;
  }
  return 0;
}