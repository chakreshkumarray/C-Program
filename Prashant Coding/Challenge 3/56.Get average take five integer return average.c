/*. Call a function get_average that takes five int numbers and returns
the average.*/
#include<stdio.h>
int get_average(int a, int b, int c  ,int d, int e)
{
  return (a+b+c+d+e)/5;

}
int main()
{

int i,j,k,l,m;
printf("Enter a first number:");
scanf("%d",&i);
printf("Enter a second number:");
scanf("%d",&j);
printf("Enter a third number:");
scanf("%d",&k);
printf("Enter a four number:");
scanf("%d",&l);
printf("Enter a five number:");
scanf("%d",&m);

printf("Average is: %d",get_average(i,j,k,l,m));
}