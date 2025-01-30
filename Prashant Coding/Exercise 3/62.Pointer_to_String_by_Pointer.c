#include<stdio.h>
int main()
{
  char *nickname[]="Chakresh Kumar ray";
  printf("Pointer : Before Modifying :%s\n",nickname);
  nickname[9]='C';
  printf("Pointer : After Modifying :%s\n",nickname);

  return 0;
}