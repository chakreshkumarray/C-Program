
//  this using another file or outside of any other function:-

#include<stdio.h>          
extern int extVar;
void printExtVar();

int main()
{
  printExtVar();
  return 0;
}

#include<stdio.h>
int extVar=40;

void printExtVar()
{
  printf("%d\n",extVar);
}