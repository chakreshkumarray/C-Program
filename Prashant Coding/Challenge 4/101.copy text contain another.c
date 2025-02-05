/*Write a program that copies one text file's contents to
another, stopping when it reaches EOF of the source file.*/
#include<stdio.h>
int main()
{
  FILE *source_file=fopen("ck.txt","r");
  FILE *dest_file=fopen("ak.txt","w");

  if(source_file==NULL||dest_file==NULL){
    printf("Error while opening file.");
    return 1;
  }

  while(1)
  {
    char c=fgetc(source_file);
    if(c==EOF)break;
    fputc(c,dest_file);
    printf(".");
  }
  fclose(source_file);
  fclose(dest_file);
  dest_file=source_file=NULL;
  }