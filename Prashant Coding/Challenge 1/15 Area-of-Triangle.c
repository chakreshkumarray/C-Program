
//  Area of trianglr is 1/2  basde*height :-

#include<stdio.h>
int main()
{
int x;
int y;
printf("Enter the height \n:");
scanf("%d",&x);
printf("Enter the base \n:");
scanf("%d",&y);

float Area = 0.5*x*y;

printf("Area of Triangle is :%f", Area);

return 0;
}