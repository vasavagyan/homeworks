#ifndef XOXO_H
#define XOXO_H

#include <iostream>

class Xoxo
{
public:
	Xoxo();
	void startGame();
	
private:
	char board[3][3];
	char input {};

	void printBoard();
	void inputPlayer1();
	void inputPlayer2();
	bool boardIsFull() const;
	bool winsPlayer1() const;
	bool winsPlayer2() const;
};

#endif
