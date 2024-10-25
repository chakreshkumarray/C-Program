#include<stdio.h>
#include<string.h>
int main()
{
char name[3][20]={ "chakresh","kumar","ray"};
for(int i=0;i,3;i++)
{
  puts (name[i]);
}
for(int i=0; i<3;i++)
{
  for(int j=0; j<strlen(name[i]);j++ ){
    printf("%c",name[i][j]);
  }
  printf("\n");
}
}