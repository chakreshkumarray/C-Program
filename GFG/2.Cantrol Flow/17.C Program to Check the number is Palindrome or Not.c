/*Input: 121
Output: Yes
Explanation: The number 121 remains the same when its digits are reversed*/

#include<stdio.h>
int ReverseNum(int N){
  int reverse=0;
  while (N>0)
  {
    reverse=reverse*10+N%10;;
    N=N/10;
  }
  return reverse;
}
int isPalindrome(int N){
  if(N<0)
  return 0;
  return N==ReverseNum(N);
}
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",num);
  if (isPalindrome(num)) {
    printf("Yes\n");
   }
   else {
    printf("No\n");
  }
  return 0;
}