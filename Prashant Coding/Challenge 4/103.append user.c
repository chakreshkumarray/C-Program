/* Develop a program that appends user input to the end of a
log file each time it's run.*/
#include<stdio.h>
int main()
{
  FILE*file=fopen("ckk.txt","a");
  if(!file){
    printf("Could not be opened.");
    return 1;

  }

  char input[100];
  while(1)
  {
    printf("Enter your text:");
    fgets(input,100,stdin);
    if(strcmp(input,"exit\n")==0)
    break;
    fputs(input,file);
  }
  fclose(file);
  file=NULL;
  return 0;
}