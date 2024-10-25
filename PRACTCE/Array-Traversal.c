#include<stdio.h>
int main()
{
int marks[6];
int no_of_student=10;

for(int i=0; i<no_of_student; i++)
{
printf("enter marks for student : %d\n", i+1);
scanf("%d",&marks[i]);  
}

for(int i=0; i<no_of_student; i++)
{
  printf("marks of student %d are : %d\n", i+1, marks[i]);
}

}