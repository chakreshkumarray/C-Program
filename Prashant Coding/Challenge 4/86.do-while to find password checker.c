/* Create a program using do-while to find password checker until a valid
password is entered.*/
#include<stdio.h>
#include<string.h>
int main()
{
  const char STORED_PASSWORD[]="Chak@5503";
  char password[20];
  do{
    printf("\nEnter a password:");
    scanf("%s",password);
  }while(strcmp(password,STORED_PASSWORD)!=0);

  printf("\nAccess Granted");
}