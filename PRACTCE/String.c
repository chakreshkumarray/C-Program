#include<stdio.h>
int main()           //indexing will start from 0 also in string 0,1,2,3,4,5,6........infinite
{
  char c[]="hello";                    // first method to declare of string
  char c[50]="hello";                  // second method to declare of string
  char c[]={'h','e','l','l','e','\0'};  // third method to declare of string
  char c[5]={'h','e','l','l','e','\0'};  // 0,1,2,3,4,5 total =6 but character are 5 also zeo is 6th char
}