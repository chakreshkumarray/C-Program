#include<stdio.h>

struct student{
  int rollno;
  char name[10];
  float marks;
};
int main()
{
 
 int a=5;
 int *ptr=&a;
 struct student student={1,"ck",45.5};
 struct student *stu_ptr=&student;

  printf("Rollno:%d\n,Name:%s\n,Marks:%f",(*stu_ptr).rollno,(*stu_ptr).name,(*stu_ptr).marks);
  return 0;
 
}