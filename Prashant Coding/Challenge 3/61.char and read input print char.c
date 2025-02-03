/*. Declare a pointer to a char and use it to read and print a character
entered by the user.*/
#include<stdio.h>
int  main()
{
  char c;
  char *ptr=&c;
  
  printf("Enter the value:");
  scanf("%c",ptr);

  printf("value of char is:%c",*ptr);
  printf("value of char is: %c",c);

  return 0;
}