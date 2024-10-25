
// factorial using pointer

#include<stdio.h>

unsigned factorial(int);

int main()
{
printf("factorial of 4  : %ld\n",factorial(4));
printf("factorial of 5 : %ld\n",factorial(5));
printf("factorial of 10 : %ld\n",factorial(10));
printf("factorial of 15 : %ld\n",factorial(15));
printf("factorial of 20 : %ld\n",factorial(20));
printf("factorial of 25: %ld\n",factorial(25));
printf("factorial of 30 is: %ld\n",factorial(30));
printf("factorial of 31 is: %ld",factorial(31));

}

unsigned factorial(int num)
{
unsigned result=1;
for(int i=2; i<=num;i++)
{
  result *=i;
}
return result;
}
