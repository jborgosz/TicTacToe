#include <memory>
#include "Game.hpp"

TicTacToe::TicTacToe(const std::shared_ptr<Board> & b, std::unique_ptr<Player> & no1, std::unique_ptr<Player> & no2, std::unique_ptr<WinCheck> & w) {
	board = b;
	player1 = std::move(no1);
	player2 = std::move(no2);
	winCheck = std::move(w);
}

void TicTacToe::run() {
	std::cout << "WANNA PLAY A GAME?" << std::endl << std::endl;
	board->printBoard();
	std::cout << std::endl;
	int round = 0;
	bool isFree = true;
	while (round < 9) {
		if (currentPlayer == "O")
		{
			do {
				player1->askForMove();
				isFree = !board->isTaken(player1->tellRow(), player1->tellColumn());
			} while (!isFree);
			board->markMove(player1);
			currentPlayer = "X";
			round++;
			board->printBoard();
			std::cout << std::endl;
			winCheck->check();
			if (winCheck->won()) { break; }
			std::cout << "_____________________________" << std::endl;
			std::cout << std::endl;
		}
		else if (currentPlayer == "X")
		{
			do {
				player2->askForMove();
				isFree = !board->isTaken(player2->tellRow(), player2->tellColumn());
			} while (!isFree);
			board->markMove(player2);
			currentPlayer = "O";
			round++;
			board->printBoard();
			std::cout << std::endl;
			winCheck->check();
			if (winCheck->won()) { break; }
			std::cout << "_____________________________" << std::endl;
			std::cout << std::endl;
		}
		else {
			std::cout << "CPNT";
		}
	}
	std::cout << "Game has ended!";
}
