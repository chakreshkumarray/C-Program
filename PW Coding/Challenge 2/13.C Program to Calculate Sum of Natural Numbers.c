
//C Program to Calculate Sum of Natural Numbers

#include<stdio.h>
int main()
{
int n,i,j=0;
printf("Enter a positive Enteger:",n);
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  j=i+j;
}
 printf("Sum of natural numbers from 1 to %d: %d\n",n,j);

 return 0;
}