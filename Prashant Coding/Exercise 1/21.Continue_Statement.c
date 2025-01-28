#include<stdio.h>
int main()
{
  int n;
  int i;
  printf("Enter a number:");
  scanf("%d",&n);

  for (i=0;i<=10;i++){
  {
    printf("%d*%d=%d\n",n,i,n*i);
  }
   if(i==5)
   {
    continue;
   } 
   }
   return 0;
}