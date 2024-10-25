#include<stdio.h>
int main()
{
  char name[]= "Chakresh Kumar Ray";
  printf("Before Modifying : %s\n",name);
  name[9]='P';                              // in pointer Editning are allowed after declaration
  printf("After Modifying : %s\n",name);


   char *nick_name= "Chakresh Kumar Ray";
  printf("Before Modifying : %s\n",nick_name);
  nick_name[9]='P';                              // modification not allowed in string
  printf("After Modifying : %s\n",nick_name);
}