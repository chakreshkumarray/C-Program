#include<stdio.h>
int main()
{ 
  int length;
  printf("Enter Area:");
  scanf("%d",&length);
  int breadth;
  printf("Enter breadth:");
  scanf("%d",&breadth);

  int Area=length*breadth;
  int Peremiter=2*(length+breadth);
  
  printf("Area of Rectangle is:%d\n",Area);
  printf("Perimeter of Rectangle is:%d\n",Peremiter);

  return 0;


}