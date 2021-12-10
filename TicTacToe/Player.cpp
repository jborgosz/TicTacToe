#include <iostream>

#include "Player.hpp"

Player::Player(std::string symbol_selecton) : symbol(symbol_selecton){};

std::string Player::tellSymbol() {
	return symbol;
}

unsigned int Player::tellRow() {
	return currentMoveRow;
}

unsigned int Player::tellColumn() {
	return currentMoveColumn;
}

void Player::askForMove()
{
	unsigned int tempMoveRow = 0;
	unsigned int tempMoveColumn = 0;
	std::cout << "Player " << symbol << ", select row: ";
	std::cin >> tempMoveRow;
	while (!(tempMoveRow < 4)) {
		std::cout << "Player " << symbol << ", selected row is greater than the size of board, select again (0-3): ";
		std::cin >> tempMoveRow;
	}
	std::cout << "select column: ";
	std::cin >> tempMoveColumn;
	while (!(tempMoveColumn < 4)) {
		std::cout << "Player " << symbol << ", selected column is greater than the size of board, select again (0-3): ";
		std::cin >> tempMoveColumn;
	}
	currentMoveRow = tempMoveRow;
	currentMoveColumn = tempMoveColumn;
	std::cout << std::endl;
}
