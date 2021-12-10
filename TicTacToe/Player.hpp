#pragma once

#include <string>
#include <utility>

class Player
{
public:
	Player(std::string symbol_selecton);

	std::string tellSymbol();
	unsigned int tellRow();
	unsigned int tellColumn();
	void askForMove();



private:
	unsigned int currentMoveRow;
	unsigned int currentMoveColumn;
	std::string symbol;

};