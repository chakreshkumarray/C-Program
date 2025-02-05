/*Pass a Car structure to a function that prints out a description
of the car in one complete sentence.*/
#include<stdio.h>
#include<string.h>
struct Car{
   char make[25];
   char model[25];
   int year;
   char color[15];
};

typedef struct Car Car;

void priint_car(Car *Car);
int main()
{
 Car ford={.make="ford",.model="aspire",.color="red",.year=2025 };

  print_car(&ford);
}

void print_car(Car *car)
{
 printf("\nmake is :%s,\nmodel: %s, \ncolor: %s,\nyear : %d",car->make,car->model,car->color,car->year);
}