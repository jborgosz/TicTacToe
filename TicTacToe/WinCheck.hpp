#pragma once

#include <string>

#include "Board.hpp"

class WinCheck
{
public:
	WinCheck(const std::shared_ptr<Board>& b);

	void check();
	void checkVertical(std::vector<std::vector<std::string>> board);
	void checkHorizontal(std::vector<std::vector<std::string>> board);
	void checkDiagonal(std::vector<std::vector<std::string>> board);

	bool won();

private:
	std::shared_ptr<Board> board;
	std::string winner;
	bool win = false;
};