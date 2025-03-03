#include<stdio.h>
int  main()
{
 char ch;
 int a,b,res;

 printf("Enter an operator(+,-,*,/):");
 scanf("%c",&ch);

 printf("Enter Two Operands:");
 scanf("%d %d",&a,&b);
 
if(a&&b!=0){
 switch (ch)
 {
 case '+':
          res=a+b;
          printf("%d",res);
          break;
 case '-':
          res=a+b;
          printf("%d",res);
          break; 
 case '*':
          res=a+b;
          printf("%d",res);
          break;
 case '/':
          res=a+b;
          printf("%d",res);
          break;                      
 
 default:
        printf("Enter correct operands");
        break;
 }
}
}