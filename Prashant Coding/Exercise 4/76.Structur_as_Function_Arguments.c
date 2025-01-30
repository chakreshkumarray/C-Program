#include<stdio.h>
struct student {
  int rollno;
  char name[10];
  float marks;
};
void print_student(struct student stu);
void print_student_from_pointer(struct student *stu);

int main()
{
  int a=5;
  int *ptr=&a;
  struct student student ={1,"ck",45.63};

  print_student(student);
  printf("Rollno:%d\n,Name:%s\n,Marks:%f",student.rollno,student.name,student.marks);
  
  print_student_from_pointer(&student);
  printf("Rollno:%d\n,Name:%s\n,Marks:%f",student.rollno,student.name,student.marks);
  
}
void print_student(struct student stu)
{
  stu.rollno=5;
  printf("Rollno:%d\n,Name:%s\n,Marks:%f",stu.rollno,stu.name,stu.marks);
}
void print_student_from_pointer(struct student *ptr)
{
  ptr->rollno=6;
  
  printf("Rollno:%d\n,Name:%s\n,Marks:%f",ptr->rollno,ptr->name,ptr->marks);
}
