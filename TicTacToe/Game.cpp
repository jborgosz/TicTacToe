#include "Game.hpp"

TicTacToe::TicTacToe(Board b, Player no1, Player no2) : board(b), player2(no1), player1(no2) {}

void TicTacToe::run() {
	std::cout << "WANNA PLAY A GAME?" << std::endl << std::endl;
	board.printBoard();
	std::cout << std::endl;
	int round = 0;
	while (!win && round < 9) {
		if (currentPlayer == "O")
		{
			player1.askForMove();
			board.markMove(player1.tellRow(), player1.tellColumn(), player1.tellSymbol());
			currentPlayer = "X";
			round++;
			board.printBoard();
			std::cout << std::endl;
			std::cout << "_____________________________" << std::endl;
			std::cout << std::endl;
		}
		else if (currentPlayer == "X")
		{
			player2.askForMove();
			board.markMove(player2.tellRow(), player2.tellColumn(), player2.tellSymbol());
			currentPlayer = "O";
			round++;
			board.printBoard();
			std::cout << std::endl;
			std::cout << "_____________________________" << std::endl;
			std::cout << std::endl;
		}
		else {
			std::cout << "CPNT";
		}
	}
	std::cout << "Game has ended!";
}
