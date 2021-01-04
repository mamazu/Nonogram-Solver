#pragma once

#include "Board.hpp"
#include <numeric>

class Solver
{
public:
    Board solve(const Board &board)
    {
        unsigned int count = 0;

        while (board.isValid() && board.countFreeFields() < 0 && count < 1000)
        {
        }
        return board;
    }

private:
    Board solveRow(const Board &board, size_t rowId)
    {
        Constraint rowConstraints = board.rowConstraints[rowId];
        Board newBoard{board};
        if (rowConstraints.size() == 0)
        {
            newBoard.setRow(rowId, Value::OFF);
        }

        int sum = std::accumulate(rowConstraints.begin(), rowConstraints.end(), 0);
        int holes = rowConstraints.size() - 1;
        if (sum + holes == board.width)
        {
            // Fill in all of the row
            size_t i = 0;

            while (i < board.width)
            {
            }
        }
        else
        {
            /* code */
        }
        return newBoard;
    }
};
