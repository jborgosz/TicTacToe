#include "Board.hpp"
#include "Player.hpp"

void Board::printBoard() {

	for (auto row : currentBoard) {
		for (auto position : row) {
			std::cout << position;
		}
		std::cout << std::endl;
	}

}

std::vector<std::vector<std::string>> Board::tellBoard() {
	return currentBoard;
}

void Board::markMove(std::unique_ptr<Player>& p) {
	currentBoard[p->tellRow()-1][p->tellColumn()-1] = p->tellSymbol();
}

bool Board::isTaken(unsigned int x, unsigned int y) {
	if (currentBoard[x - 1][y - 1] == "X" || currentBoard[x - 1][y - 1] == "O") {
		std::cout << "This spot is already taken!" << std::endl;
	}
	return currentBoard[x-1][y-1] == "X" || currentBoard[x - 1][y - 1] == "O";
}