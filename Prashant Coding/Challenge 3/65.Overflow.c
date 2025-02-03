/*. Write a C program that initializes an unsigned int to its maximum
possible value and an int to a negative number. Add 1 to both, and
print the results to show how the unsigned int wraps around to 0,
whereas the int remains negative due to overflow */
#include<stdio.h>
#include<limits.h>
int main()
{
  unsigned int positive=UINT_MAX;
  int normal=INT_MAX;
  printf("Enter positive number is:%d\n",positive);
  
  printf("Enter normal number is :%d\n",normal);
  positive++;
  normal++;

   printf("Max value unsinged is:%u\n",positive);
   printf("Max value normal is:%d",normal);
}