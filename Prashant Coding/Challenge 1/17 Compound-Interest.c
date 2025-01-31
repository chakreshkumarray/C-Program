
 // Fotrmula of Compund interest = p(1+R/100)t

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

 float Interest = Principle * ((1+ Rate /100 )*Time);
 
 printf("compund Interest is :%f",Interest);

return 0;
}