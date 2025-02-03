/*2. Implement a void minmax(int *a, int *b, int *min, int *max) function
that takes two integer pointers a and b as input and assigns the
smaller value to min and the larger value to max using call by
reference. Write a main function to test it with different values.*/
#include<stdio.h>
void min_max(int*a,int*b,int*min,int*max)
{
  if(*a<*b){
    *min=*a;
    *max=*b;
  } else{
    *min=*b;
    *max=*a;
  }
}

int main()
{
  int first ,second,min,max;
  printf("Enter a first number:");
  scanf("%d",&first);
  printf("Enter a second number:");
  scanf("%d",&second);

  min_max(&first,&second,&min,&max);
  printf("Between %d and %d,minimum is %d and maximum is %d",first ,second,min,max);

}