#include <stdio.h>
int calculateEvenSum(int n)
{
    if (n <= 0)
        return 0;
    int num[2 * n + 1];
    num[0] = 0, num[1] = 1;
    int sum = 0;
    for (int i = 2; i <= 2 * n; i++) {
      num[i] = num[i - 1] + num[i - 2];
        if (i % 2 == 0)
        sum += num[i];
    }
    return sum;
}

int main()
{
  int n=5;
  int sum = calculateEvenSum(n);
  printf("Even indexed Fibonacci Sum upto %d terms = %d",n, sum);

  return 0;
}
