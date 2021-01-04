#pragma once

#include "Board.hpp"

std::string printBoard(const Board &board)
{
    std::string boardString = "";
    for (size_t i = 0; i < board.width * board.height; i++)
    {
        if (i % board.width == 0 && i > 0)
        {
            boardString += "\n";
        }
        switch (board.board[i])
        {
        case Value::NONE:
            boardString += "?";
            break;

        case Value::ON:
            boardString += "B";
            break;

        case Value::OFF:
            boardString += " ";
            break;
        }
    }
    return boardString;
}
