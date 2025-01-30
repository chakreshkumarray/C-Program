#include<stdio.h>
int main()
{
  char name[]="Chakresh Kumar ray";
  printf("Array : Before Modifying :%s\n",name);
  name[9]='c';
  printf("Array:After Modifying :%s\n",name);

  return 0;
}