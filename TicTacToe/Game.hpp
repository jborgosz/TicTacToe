#pragma once

#include "Player.hpp"
#include "Board.hpp"

class TicTacToe
{
public:
	TicTacToe(Board b, Player no1, Player no2);

	void run();

private:
	Board board;
	Player player1;
	Player player2;
	std::string currentPlayer = "O";
	bool win = false;
};