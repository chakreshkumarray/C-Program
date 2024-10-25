#include<stdio.h>
int main()
{
  char name[40];
  printf("Enter your name: ");
  gets(name);                     // this is gets function in string
  printf("Good Morning %s",name);
}


#include<stdio.h>
int main()
{
  char name[40];
  printf("Enter your name: ");
  gets(name);                     // this is gets function in string
  printf("Good Morning %s",name);
  puts(name);
}

#include<stdio.h>
int main()
{
  char name[40];
  printf("Enter your name: ");
  gets(name);                     // this is gets function in string
  printf("Good Morning %s",name);
  puts(name);
  printf("eneter your name");
  fgets(name,sizeof(name),stdin);
}