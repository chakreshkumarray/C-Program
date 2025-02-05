/* Create a program that dynamically allocates memory for a Car
structure and then free it at the end of the program.*/

#include<stdio.h>
#include<stdlib.h>

struct  Car
{
   char make[25];
   char model[25];
   int year;
   char color[15];

};

typedef struct Car Car;
void print_car(Car *car);
int main()
{
  Car *my_car=(Car*)malloc(sizeof(Car));

  if(my_car==NULL)
  {
    printf("Memory was not Allocated !!!");
    return 1;
  }

  printf("\nEnter your car model:");
  scanf("%s",my_car->model);
  printf("\nEnter your car make:");
  scanf("%s",my_car->make);
  printf("\nEnter your car color:");
  scanf("%s",my_car->color);
  printf("\nEnter your car year:");
  scanf("%d",&my_car->year);

  print_car(my_car);
  free(my_car);
  my_car=NULL;
  return 0;

}
void print_car(Car *car){
  printf("\nmodel of car:%s,\nwhich is of :%s color ,\nwas pucchased in: %d year,\nand is made by : %s company",car->model,car->color,car->year,car->make);
}