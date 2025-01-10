/* Q. Jetha like chocolates and he loves to try different ones. There are N shops in a market lebelled from 1 to N and each shop offers a differnt variety of chocolate. Jetha starts from ith shop and goes ahead to each and every shop. But as there are too many shop Midori would like to know how to many more shops he has to visit.You have been given l denoting number of bits required to represnt N. You to return the maximum number of shops he can visit. 

 Example 1:
 input: i=2,L=3
 output: 6 

 Example 2:
 input:i=1,L=3
 output: 3 */

#include<stdio.h>
#include<math.h>
int main()
{
  int i,j,l;
  scanf("%d%d",&i,&l);
  j=pow(2,l)-i;
  printf("%d\n",j);

  return 0;
}