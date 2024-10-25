#include<stdio.h>
struct Student{
int rollno;
char name[10];
float marks;
};
int main()
{
  struct Student Student1;

  printf("please enter student details \n");
  printf("enter the roll  no:\n");
  scanf("%d\n",&Student1.rollno);
  printf("enter the name:");
  scanf("%d\n",Student1.name);
  printf("enter the marks:");
  scanf("%d\n",Student1.marks);

  printf("here the student details\n");
  printf("rollnumber:%d,name :%s,marks:%f",Student1.rollno,Student1.name,Student1.marks);

  return 0;
}