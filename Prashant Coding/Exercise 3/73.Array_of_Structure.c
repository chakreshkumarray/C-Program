#include<stdio.h>

struct student{
  int rollno;
  char name[10];
  float marks;
};
int main()
{
  struct student student [5]=
  {
  {1,"ak",93.1},
  {2,"ck ",91.2},
  {3,"sk ",97.3},
  {4,"bk ",95.4},
  {5,"nk ",94.5},
  };
  for(int i=0;i<5;i++)
  {
    printf("Student name is:%s,Rollno:%d,marks:%f\n ",student[i].name,student[i].rollno,student[i].marks);
  }
  return 0;
}