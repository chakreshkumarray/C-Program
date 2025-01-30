#include<stdio.h>
struct student {
  int rollno;
  char name[10];
  float marks;
};
int main()
{
  typedef int chakresh;
  chakresh i=5;
  typedef struct{
   int rollno;
   char name[10];
   float marks;
  }stu;
  struct student ck = {2,"ak",45.5};
  
  printf("Rollno:%d\n,Name:%s\n,Marks:%f",ck.rollno,ck.name,ck.marks);
}