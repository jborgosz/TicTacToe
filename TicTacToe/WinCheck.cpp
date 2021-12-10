#include "WinCheck.hpp"

WinCheck::WinCheck(const std::shared_ptr<Board>& b) : board(b) {};

void WinCheck::check() {
	
	std::vector<std::vector<std::string>> b = board->tellBoard();
	checkHorizontal(b);
	checkVertical(b);
	checkDiagonal(b);
	if (winner == "X") {
		std::cout << "Player X won!!" << std::endl;
		win = true;
	}
	else if (winner == "O") {
		std::cout << "Player O won!!" << std::endl;
		win = true;
	}
	
	
}

void WinCheck::checkHorizontal(std::vector<std::vector<std::string>> board) {
	
	for (auto row : board) {
		if (row[0] == row[1] && row[1] == row[2]) {
			winner = row[0];
			break;
		}
	}
}

void WinCheck::checkVertical(std::vector<std::vector<std::string>> board) {
	for (int i = 0; i < 3; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
			winner = board[0][i];
			break;
		}
	}
}

void WinCheck::checkDiagonal(std::vector<std::vector<std::string>> board) {
	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
		winner = board[1][1];
	}
}

bool WinCheck::won() {
	return win;
}