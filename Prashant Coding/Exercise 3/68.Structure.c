#include<stdio.h>

struct student{
  int rollno;
  char name[10];
  float marks;
};

int main()
{
  struct student student1;

  printf("Enter Roll No:");
  scanf("%d",&student1.rollno);

  printf("Enter the name:");
  scanf("%s",&student1.name);

  printf("Enter the marks:");
  scanf("%f",&student1.marks);

  printf("Rollno:%d\n,Name:%s\n,Marks:%f",student1.rollno,student1.name,student1.marks);

  return 0;
}