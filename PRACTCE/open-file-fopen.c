#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *demo;
  demo=fopen("demo_FILE.txt","w+");
  fprintf(demo,"%s%s%s", "welcome", "geeks", "for","geeks");
  fclose(demo);
  
  return 0;
}