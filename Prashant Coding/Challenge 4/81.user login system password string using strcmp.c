/*. Create a simple text-based user login system that compares a stored
password string using strcmp.*/
#include<stdio.h>
#include<string.h>
int main()
{
 const char STORED_PASSWORD[]="Chak@5503";
 char password[50];
 printf("Enter the password:");
 scanf("%s",password);
//  fgets(password,sizeof(password),stdin);


 if(strcmp(password, STORED_PASSWORD)!=0)
 {
  puts("Access danied the password");
 }else{
  puts("Access  password.");
 }
 return 0;
}