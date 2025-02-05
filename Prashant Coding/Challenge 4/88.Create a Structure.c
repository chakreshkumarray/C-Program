/*Create a program where you need to store and process data
for a Book with attributes like title, author, and price,
demonstrating why a structure is more suitable than separate
variables.*/
#include<stdio.h>
void input(char title[],char author[],float *price)
{
  printf("\nEnter book title:");
    fgets(title,100,stdin);
    printf("\nEnter book authors:");
    fgets(author,100,stdin);
    printf("\nEnter book price:");
    scanf("%f",price);

    while(getchar()!='\n');
}
void book(char title[],char author[],float price[])
{
  printf("\nBooks title:%s \nauthors: %s \n price:%f",title,author,price);
}

int main()
{
  char titles[3][100];
  char authors[3][100];
  float prices[3][3];

  for(int i=0;i<3;i++){
    input(titles[i],authors[i],&prices[i]);
  }
  
  for(int i=0;i<3;i++)
  {
    book(titles[i],authors[i],prices[i]);
  }
  return 0;
}
// The  Selfish gene:Richard Drawins
// Why we sleep :Matthew Walker
// dogla pan:Asneer grover

