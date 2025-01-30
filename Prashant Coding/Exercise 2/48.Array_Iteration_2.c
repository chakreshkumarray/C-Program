#include<stdio.h>
int main()
{
  int marks[5]={65,67,24,25,89,};

  for(int i=0;i<5;i++)
  {
    printf("marks of student %d are %d\n",i+1,marks[i]);
  }
  return 0;
}