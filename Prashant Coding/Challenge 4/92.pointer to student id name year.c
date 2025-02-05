/* Write a function that accepts a pointer to a Student structure
with fields for id, name, year, gpa and modifies its grades.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
  char id[10];
  char name[50];
  char  year[10];
  char grade;
}Student;

void increase_grade(Student*);
void decrease_grade(Student*);
void print_student(Student*);
  
int main()
{
 Student Stu1={.id="CS01",.name="Chakresh",.year="first",.grade='A'};
 Student Stu2={.id="CS02",.name="Ambreesh",.year="second",.grade='B'};
 Student Stu3={.id="CS03",.name="Chak",.year="first",.grade='C'};

 printf(&Stu1);
 printf(&Stu2);
 printf(&Stu3);

 decrease_grade(&Stu1);
 increase_grade(&Stu3);

 printf("After changes.");
 printf(&Stu1);
 printf(&Stu2);
 printf(&Stu3);


}
void increase_grade(Student *stu)
{
 stu->grade--;
}
void decrease_grade(Student *stu)
{
  stu->grade++;
}
void print_student(Student *stu){
  printf("\n\nThe student with %s \nname has id:%s and \nstudents in %s \nyear has acheived %c grade", stu->name,stu->id,stu->year,stu->grade );
}