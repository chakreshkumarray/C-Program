/*Use calloc to allocate an array for a set of char characters
representing a sentence, ensuring all the memory is initialized
to zero.*/
#include<stdio.h>
#include<stdlib.h>
int  main()
{
  char *sent=(char*)calloc(100,sizeof(char));
  if(sent==NULL)
  {
    printf("\nMemory error !!");
    return 1;
  }

  for(int i=0;i<100;i++)
  {
    printf("\n%c",sent);
  }
  printf("\nNow enter elemtns:");
  fgets(sent, 100 ,stdin);

  printf("\nHere is your sent :%s",sent);

  free(sent);
  sent=NULL;
}