#pragma once

#include <memory>

#include "Player.hpp"
#include "Board.hpp"
#include "WinCheck.hpp"

class TicTacToe
{
public:
	TicTacToe(const std::shared_ptr<Board> & b, std::unique_ptr<Player> & no1, std::unique_ptr <Player> & no2, std::unique_ptr<WinCheck> & w);

	void run();

private:
	std::shared_ptr<Board> board;
	std::unique_ptr<Player> player1;
	std::unique_ptr<Player> player2;
	std::unique_ptr<WinCheck> winCheck;
	std::string currentPlayer = "O";
};