//C Program to Calculate Fahrenheit to Celcius

#include<stdio.h>
int main()
{
  float Fahrenheit;
  float Celcius;
  printf("Enter Tempreature in Fahrenheit:",Fahrenheit);
  scanf("%f",&Fahrenheit);

  Celcius=(Fahrenheit-32)*5/9;

  printf("Tempreature in Celcius:%f",Celcius);
}