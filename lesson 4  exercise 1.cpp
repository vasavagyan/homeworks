#include <iostream>
enum chessPieces
{
  peshka=1,
  navak,
  njuyg,
  pix,
  taguhi,
  tagavor
};

int main() {

  //chess board-i 2-rd ev 7-rd sharqeri vra zinvornern en xosqi
  int chessBoard[8][8];
  for (int i=1; i<8; i+=5){
    for (int j=0; j<8; ++j){
    chessBoard[i][j]=peshka;
    }
  }
    
  for (int i=0; i<8; i+=7){
    //sharum enq navakner
    for (int j=0; j<8; j+=7){
      chessBoard[i][j]=navak;
    }
    //njuygner
    for (int j=1; j<8; j+=5){
      chessBoard[i][j]=njuyg;
    }
    //pxikner
    for (int j=2; j<8; j+=3){
      chessBoard[i][j]=njuyg;
    }
    //taguhiner
    for (int j=3; j<8; j+=6){
      chessBoard[i][j] =taguhi;
    }
    //tagavorner
    for (int j=4; j<8; j+=6){
      chessBoard[i][j] =tagavor;
    }
    return 0;
}