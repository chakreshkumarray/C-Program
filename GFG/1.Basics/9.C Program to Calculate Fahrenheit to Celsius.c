// C Program to Calculate Fahrenheit to celcius
#include<stdio.h>
int main()
{
  float Fahrenheit;
  printf("Enter a Tempreature in Fahrenheit:");
  scanf("%f",&Fahrenheit);

  float Celcius=((Fahrenheit-32)*5)/9;

  printf("Fahrenheit ot Celcius : %f",Celcius);
  return 0;

}