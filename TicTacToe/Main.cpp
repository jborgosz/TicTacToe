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
    std::unique_ptr<Board> b = std::make_unique<Board>();
    TicTacToe game = TicTacToe(b, p1, p2);
    game.run();
    std::cin >> a;
}