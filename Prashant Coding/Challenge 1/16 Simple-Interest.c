
//   formula of Simple Interest = (Principle * Rate * Time)/100;

#include<stdio.h>
int main()
{
float Principle;
float Time;
float Rate;

printf("Enter the Principle  is :");
scanf("%f",&Principle);
printf("Enter the Time is :");
scanf("%f",&Time);
printf("Enter the Rate is :");
scanf("%f",&Rate);

 float Interest = (Principle * Rate * Time)/100;

 printf("Simple Interest is :%f",Interest);

return 0;
}