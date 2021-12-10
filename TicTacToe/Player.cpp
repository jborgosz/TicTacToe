#include <iostream>

#include "Player.hpp"

Player::Player(std::string symbol_selecton) : symbol(symbol_selecton) {};

std::string Player::tellSymbol() {
	return symbol;
}

int Player::tellRow() {
	return currentMoveRow;
}

int Player::tellColumn() {
	return currentMoveColumn;
}

void Player::askForMove()
{
	std::cout << "Player " << symbol << ", select row: ";
	std::cin >> currentMoveRow;
	std::cout << "select column: ";
	std::cin >> currentMoveColumn;
	std::cout << std::endl;
}
