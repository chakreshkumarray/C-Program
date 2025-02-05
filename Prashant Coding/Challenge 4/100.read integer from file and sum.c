/*Create a program that reads integers from a file and
calculates their sum.*/
#include<stdio.h>
int main()
{
  char filename[]="ck.txt";
  FILE*file =fopen(filename,"r");
  if(file==NULL)
  {
    printf("file could not be opened.");
    return 1;
  }
  int temp;
  int sum=0;
  int read_status;
  do{
    read_status=fscanf(file,"%d",&temp);
    sum+=temp;
  }while(read_status==1);
 
 printf("The sum of number is: %d",sum);
 fclose(file);
 file=NULL;
  return 0;
}