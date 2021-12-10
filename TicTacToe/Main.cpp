#include <iostream>
#include <utility>
#include <memory>

#include "Board.hpp"
#include "Player.hpp"
#include "Game.hpp"

int main()
{
    int a;
    std::unique_ptr<Player> p1 = std::make_unique<Player>("O");
    std::unique_ptr<Player> p2 = std::make_unique<Player>("X");
    std::shared_ptr<Board> b = std::make_shared<Board>();
    std::unique_ptr<WinCheck> w = std::make_unique<WinCheck>(b);
    TicTacToe game = TicTacToe(b, p1, p2, w);
    game.run();
    std::cin >> a;
}