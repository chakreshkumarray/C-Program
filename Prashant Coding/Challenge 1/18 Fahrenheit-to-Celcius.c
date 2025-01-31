
// Fahrenheit-to-Celcius. C=(F-32)*5/9

#include<stdio.h>
int main()
{
  float Fahrenheit;
  
  printf("Enter tempreature in Fahrenheit is :");
  scanf("%f",&Fahrenheit);

  float Celcius = (Fahrenheit-32)*5/9;

  printf("temprature Fahrenheit to Celius is : %f",Celcius);

  return 0;

}