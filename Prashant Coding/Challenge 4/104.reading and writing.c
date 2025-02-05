/*Create a program that performs both reading and writing
operations on a file called data.txt*/
#include<stdio.h>
int  main()
{
  FILE *file=fopen("data.txt","r+");
  if(!file){
    printf("Error opening file.");
    return 1;
  }
  char buffer[100];
  fgets(buffer,100,file);
  printf("Reading from I file : %s",buffer);

  fseek(file,0,SEEK_END);
  fputs("\nmessage written by programmmer Chakresh kumar ray",file);

  fclose(file);
  file=NULL;
  return 0;
}