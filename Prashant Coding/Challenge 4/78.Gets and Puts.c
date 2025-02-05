/*Read a line of text from the user using fgets and then print it using puts.*/
#include<stdio.h>
int main()
{
  char name[25];
  printf("Enter the name:");
  fgets(name,sizeof(name),stdin);

  printf("Entered name is :");
  puts(name);
  

}
