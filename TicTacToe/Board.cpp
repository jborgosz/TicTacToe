#include "Board.hpp"

void Board::printBoard() {

	for (auto row : currentBoard) {
		for (auto position : row) {
			std::cout << position;
		}
		std::cout << std::endl;
	}

}

void Board::markMove(int x, int y, std::string s) {
	currentBoard[x - 1][y - 1] = s;
}