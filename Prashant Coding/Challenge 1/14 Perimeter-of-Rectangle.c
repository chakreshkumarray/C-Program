// Perimeter of Rectangle is ABCD= A+B+C+D :- it is wrong formla correct formula is
// 2(a+b) :-

#include<stdio.h>
int main()

{
  int A;
  int B;
  
  printf("side of first Rectangle is :",A);
  scanf("%d",&A);
  printf("side of Second Rectangle is :",B);
  scanf("%d",&B);

  int perimeter=2*(A+B);

  printf("Perimeter of  Rectangle is :%d",perimeter);
  
}