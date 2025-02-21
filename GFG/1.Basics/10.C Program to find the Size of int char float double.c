//C Program to find the Size of int char float double
#include<stdio.h>
int main()
{
  int x;
  char y;
  float z;
  double m;
  printf("The size of int is: %u\n",sizeof(x));
  printf("The size of char is: %u\n",sizeof(y));
  printf("The size of float is: %u\n",sizeof(z));
  printf("The size of double is: %u\n",sizeof(m));

  return 0;
}