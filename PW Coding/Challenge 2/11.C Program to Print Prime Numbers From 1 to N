//C Program to Print Prime Numbers From 1 to N

#include <stdio.h>
int main()
{
 int i,j,k,n;
 printf("Enter a number (N): ");
 scanf("%d",&n);
 printf("Prime numbers between 1 and %d are: ", n);
 for(i=2; i<=n; ++i)
 {
 k= 1;
 for(j=2; j<=i/2; ++j) 
 {
 if(i%j==0) 
 {
 k= 0;
 break;
 }
 }
 if (k)
 printf("%d",i);
 }
 return 0;
}
