/*Use a 2-D character array to store and display a tic-tac-toe board.*/
#include<stdio.h>
int main()
{
  char board[3][3]={{'X','0','0'},{'0','X','X'},{'X','0','X'}};

  printf("\n%c|%c|%c",board[0][0],board[0][1],board[0][2]);
  printf("\n-----");
  printf("\n%c|%c|%c",board[1][0],board[1][1],board[1][2]);
  printf("\n-----");
  printf("\n%c|%c|%c\n\n",board[2][0],board[2][1],board[2][2]);

}