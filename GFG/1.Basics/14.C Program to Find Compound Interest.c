#include<stdio.h>
#include<math.h>
int main()
{
  long long int P;
  printf("Enter Principle:");
  scanf("%lld",&P);
  long long int R;
  printf("Enter Rate:");
  scanf("%lld",&R);
  long long  int T;
  printf("Enter Time:");
  scanf("%lld",&T);

  long long int Amount=P * ((pow((1 + R / 100),T)));
  long long int CI=Amount-P;

  printf("Compound Interest is : %lld",CI);

  return 0;
}