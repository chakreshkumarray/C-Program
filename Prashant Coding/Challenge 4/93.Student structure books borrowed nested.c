/*Write a function where the Student structure also has books
they have borrowed inside, showing nested structure usage.*//* Write a function that accepts a pointer to a Student structure
with fields for id, name, year, gpa and modifies its grades.*/
#include<stdio.h>
#include<string.h>

typedef struct
{
  char id[10];
  char name[50];
  char  year[10];
  char grade;
  char book_barrow[50];
}Student;

void increase_grade(Student*);
void decrease_grade(Student*);
void print_student(Student*);
  
int main()
{
 Student Stu1={.id="CS01",.name="Chakresh",.year="first",.grade='A',.book_barrow="399"};
 

 printf("After changes.");
 printf(&Stu1);
 


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
  printf("\n\nThe student with %s \nname has id:%s and \nstudents in %s \nyear has acheived %c grade \nbook barrow: %s", stu->name,stu->id,stu->year,stu->grade,stu->book_barrow );
}