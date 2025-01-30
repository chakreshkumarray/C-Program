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
  char c;
  do{
    c=fgetc(file);
    printf("%c",c);
  }while(c!=EOF);

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