/*Use printf with format specifiers to format and print a date string (day,
month, year).*/
#include<stdio.h>
int main()
{
  char day[10];
  char month[15];
  int year;
  printf("current day:");
  scanf("%s",day);
  printf("current month:");
  scanf("%s",month);
  printf("current year:");
  scanf("%d",&year);

  printf("current date is :%s:%s:%04d",day,month,year);

}