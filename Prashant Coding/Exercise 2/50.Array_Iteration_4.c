#include<stdio.h>
int main()
{
  int marks[10];
  int students[10];


  for(int i=0;i<students;i++)
  {
   printf("Marks of student %d:",(i+1));
   scanf("%d",marks[i]);
  }

  for (int i = 0; i < students; i++)
  {
    printf("marks of student %d are %d",(i+1),marks[i]);
  }
  return 0;
}