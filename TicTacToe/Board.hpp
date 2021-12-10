#pragma once

#include <iostream>
#include <vector>
#include <utility>

#include "Player.hpp"

class Board
{
public:
	void printBoard();
	std::vector<std::vector<std::string>> tellBoard();
	void markMove(std::unique_ptr<Player>& p);
	
	bool isTaken(unsigned int x, unsigned int y);

private:

	std::vector<std::vector<std::string>> currentBoard{ {"-","-","-"}, {"-","-","-"}, {"-","-","-"} };

};
