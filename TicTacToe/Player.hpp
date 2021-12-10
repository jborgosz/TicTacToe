#pragma once

#include <string>
#include <utility>

class Player
{
public:
	Player(std::string symbol_selecton);

	std::string tellSymbol();
	int tellRow();
	int tellColumn();
	void askForMove();



private:
	unsigned int currentMoveRow;
	unsigned int currentMoveColumn;
	std::string symbol;

};