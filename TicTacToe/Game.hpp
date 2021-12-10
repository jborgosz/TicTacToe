#pragma once

#include <memory>

#include "Player.hpp"
#include "Board.hpp"

class TicTacToe
{
public:
	TicTacToe(std::unique_ptr<Board> & b, std::unique_ptr<Player> & no1, std::unique_ptr <Player> & no2);

	void run();

private:
	std::unique_ptr<Board> board;
	std::unique_ptr<Player> player1;
	std::unique_ptr<Player> player2;
	std::string currentPlayer = "O";
	bool win = false;
};