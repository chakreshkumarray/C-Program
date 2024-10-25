//            use to comparison  of two string

#include<stdio.h>
#include<string.h>
int main()
{
int result =strcmp("apple","banana");
printf("comparison of apple and banana is %d\n", result);

result=strcmp("cherry","banana");
printf("comparison of cherry and banana is %d\n",result);

result=strcmp("date","date");
printf("comparison of date and date is %d\n",result);
return 0;

}