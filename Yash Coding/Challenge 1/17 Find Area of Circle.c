/*Find Area of circle

input =diameter,30,d
output =circle 
Area =3.14*r*r area of circle 
r=d/2 ,15 */
#include<stdio.h>
#include<math.h>
float findArea(float r)
{
  return 3.142*r*r;
}
int main()
{
  float d=4;
  float r=(float)d/2;
  printf("Area of Circle is %2f",findArea(r));
}
