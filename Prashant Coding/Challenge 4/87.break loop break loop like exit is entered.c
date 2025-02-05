/* Create a program using break to read inputs from the user in a loop and
break the loop if a specific keyword (like "exit") is entered.*/

#include<stdio.h>
#include<string.h>
int main()
{
  const char EXIT[]="exit";
  char command[20];
  while(1){
    printf("Enter the commmand:");
    scanf("%s",command);
    if(!strcmp(command,EXIT))
    {
      break;
    }
  } 
  printf("Exited Successfully.");
  return 0;
}