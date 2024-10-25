#include<stdio.h>
void printf_marks(int marks[],int no_of_student);
int main()
{
int marks[6];
int no_of_student=6;
for(int i=0; i<no_of_student; i++)
{
printf("enter marks for student : %d\n", i+1);
scanf("%d",&marks[i]);  
}
printf_marks(marks,no_of_student);
return 0;
}
void printf_marks(int student_marks[],int student_count)
{
  for(int i=0; i<student_count; i++)
  {
  printf("marks for student %d are: %d\n", (i+1),
  student_marks[i]);
  }

}