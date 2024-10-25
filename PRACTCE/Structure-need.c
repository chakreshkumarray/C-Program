#include<stdio.h>
int main()
{
  int i;
  int rollno[5]={1,2,3,4,5};
  char name[5][20]={"ram","shayam","sita","Geeta","sameeta"};
  float marks[5]={45.5,78.9,90,95.5,99.9};
  for(i=0;i<5;i++)
  {
    printf("student name :%s\n,rollno:%d\n,marks :%.2f",name[i],rollno[i],marks[i]);
  }
}