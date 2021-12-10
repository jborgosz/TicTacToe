#pragma once

#include <iostream>
#include <vector>
#include <utility>

class Board
{
public:
	void printBoard();

	void markMove(int x, int y, std::string s);

private:

	std::vector<std::vector<std::string>> currentBoard{ {"-","-","-"}, {"-","-","-"}, {"-","-","-"} };

};
