#include <iostream>
#include "Board.hpp"

int main()
{
    Board board(10, 10);
    std::cout << printBoard(board) << std::endl;
    return 0;
}
