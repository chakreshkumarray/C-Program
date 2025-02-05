/* Allocate memory for a struct representing a Point with x and y
coordinates, set some values, and then properly deallocate
the memory using free.*/
#include<stdio.h>
#include<string.h>
typedef struct
{
  int x;
  int y;

} Point;

int main()
{
  Point *start=(Point*)malloc(sizeof(Point));
  Point *end=(Point*) malloc(sizeof(Point)); 
  if(start==NULL ||end==NULL){
    printf("\nMemory Issues !!!!");
    return 1;
  }
  printf("\nstarting point of lines:");
  input_point(start);
  printf("\nEnding points of lines:");
  input_point(end);

  show_point(start);
  show_point(end);

  start=end=NULL;
  return 0;
}
void input_point(Point *point){
  printf("\nEnter x:");
  scanf("%d",&point->x);
  printf("\nEnter y:");
  scanf("%d",&point->y);
}
void show_point(Point *point){
  printf("\nCoordinates (%d %d)",point->x,point->y);
}