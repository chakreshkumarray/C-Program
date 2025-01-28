#include<stdio.h>
int main()
  {
    int n;
    int i;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
    {
      printf("%d*%d=%d\n",n,i,n*i); // Table print
    }
    if(i==5)     // odd number print
    {
      break;
    }       
  }
   return 0;
  }
