//C Program to Find the Size of int, float, double, and char

#include<stdio.h>
int main()
{
  int a;
  float b;
  char c;
  double d;
  printf("size of int in bytes: %d\n",sizeof(a));
  printf("size of float in bytes: %d\n",sizeof(b));
  printf("size of char in bytes: %d\n",sizeof(c));
  printf("size of double in bytes: %d",sizeof(d));

  return 0;
}