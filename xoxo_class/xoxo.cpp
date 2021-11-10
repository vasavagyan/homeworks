#include "xoxo.h"

#include <iostream>

Xoxo::Xoxo()
{
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			board[i][j] = '-';
		}
	}
}

bool Xoxo::boardIsFull() const
{
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (board[i][j] == '-') {
				return false;
			}
		}
	}
	return true;
}

void Xoxo::printBoard()
{
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::cout << "|"  << board[i][j];
		}
		std::cout << "|" << std::endl;
	}
}

void Xoxo::inputPlayer1()
{
	std::cout << "player1 (X): must enter 1-9 to mention location" << std::endl;
	std::cin >> input;

	switch(input)
	{
		case '1' : if (board[0][0] == '-') {board[0][0] = 'X'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '2' : if (board[0][1] == '-') {board[0][1] = 'X'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '3' : if (board[0][2] == '-') {board[0][2] = 'X'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '4' : if (board[1][0] == '-') {board[1][0] = 'X'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '5' : if (board[1][1] == '-') {board[1][1] = 'X'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '6' : if (board[1][2] == '-') {board[1][2] = 'X'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '7' : if (board[2][0] == '-') {board[2][0] = 'X'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '8' : if (board[2][1] == '-') {board[2][1] = 'X'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '9' : if (board[2][2] == '-') {board[2][2] = 'X'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		default  : std::cout << "you must enter 1-9 digit" << std::endl;
	}
}

void Xoxo::inputPlayer2()
{
	std::cout << "player2 (O): must enter 1-9 to mention location" << std::endl;
	std::cin >> input;

	switch(input)
	{
		case '1' : if (board[0][0] == '-') {board[0][0] = 'O'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '2' : if (board[0][1] == '-') {board[0][1] = 'O'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '3' : if (board[0][2] == '-') {board[0][2] = 'O'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '4' : if (board[1][0] == '-') {board[1][0] = 'O'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '5' : if (board[1][1] == '-') {board[1][1] = 'O'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '6' : if (board[1][2] == '-') {board[1][2] = 'O'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '7' : if (board[2][0] == '-') {board[2][0] = 'O'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '8' : if (board[2][1] == '-') {board[2][1] = 'O'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		case '9' : if (board[2][2] == '-') {board[2][2] = 'O'; break;}
				   else {std::cout << "the cell is not empty" << std::endl; break;}
		default  : std::cout << "you must enter 1-9 digit" << std::endl;
	}
}

bool Xoxo::winsPlayer1() const
{
	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') return true;
	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') return true;
	if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') return true;
	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') return true;
	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') return true;
	if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') return true;
	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') return true;
	if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') return true;

	return false;
}

bool Xoxo::winsPlayer2() const
{
	if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') return true;
	if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') return true;
	if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') return true;
	if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') return true;
	if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') return true;
	if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') return true;
	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') return true;
	if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') return true;

	return false;
}

void Xoxo::startGame()
{
	printBoard();
	while (!boardIsFull()) {
		inputPlayer1();
		printBoard();
		if (winsPlayer1()) {
			std::cout << "wins player 1: xoxo))) bye!!" << std::endl;
			return;
		}

		inputPlayer2();
		printBoard();
		if (winsPlayer2()) {
			std::cout << "wins player 2: xoxo))) bye!!" << std::endl;
			return;
		}
	}
	std::cout << "friendship wins) xoxo))\nbye!!!" << std::endl;
}
