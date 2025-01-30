#include<stdio.h>
#include<string.h>
int main()
{
   char name[4][20]={"Chakresh","Kumar","Ray","Ambreesh"};
   for(int i=0;i<4;i++)
   {
    puts(name[i]);
   }
   for(int i=0;i<4;i++)
   {
    for(int j=0;j<strlen(name[i]);j++);
    {
      printf("%c",name[i]);
    }
    printf("\n");
   }
}