/*Implement a trim function that removes leading and trailing spaces
from a string.*/
#include<stdio.h>
#include<string.h>
int main()
{
 char input[100];
 char trimmed[100];
 printf("Enter the string:");
 fgets(input,sizeof(input),stdin);

 int start=0;
 int end=strlen(input)-1;

 while (input[start]==' ')start++;
 while(input[end]==' '||input[end]=='\n')end--;
 
 int i=0;
 while (i<=end-start)
 {
  if(input[i+start]==' ')
  {
    trimmed[i]=' ';
  }else{
    trimmed[i]=input[i+start];

  }
  i++;
 }


 trimmed[i]='\0';
 printf("Trimmed string is: %s",trimmed);
}

