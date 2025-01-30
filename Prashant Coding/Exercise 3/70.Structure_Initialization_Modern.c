#include<stdio.h>

struct student{
  int rollno;
  char name[10];
  float marks;
};
int main()
{
  struct student s1={.rollno=205423,.name="chakresh",.marks=67.88};

  printf("Rollno:%d\n,Name:%s\n,Marks:%f",s1.rollno,s1.name,s1.marks);
  return 0;
}