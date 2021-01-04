#pragma once

#include <vector>
#include <string>

enum Value {
    NONE = 1,
    ON,
    OFF
};

using Constraint = std::vector<int>;
using Constraints = std::vector<Constraint>;

class Board {
public:
    std::vector<Value> board;
    size_t width;
    size_t height;

    Constraints rowConstraints;
    Constraints colConstraints;
    
    Board(const size_t width, const size_t height): width(width), height(height) {
        board.resize(width * height);
        for(size_t i = 0; i < board.size(); i++) {
            board[i] = Value::NONE;
        }
    }

    void setRow(size_t rowId, Value value) {
        size_t startingIndex = width * rowId;
        for(size_t i = 0; i < width; i++) {
            board[i + startingIndex] = value;
        }
    }

    bool isValid() const {
        return true;
    }

    unsigned int countFreeFields() const {
        unsigned int freeCells = 0;
        for (const Value& value : board)
        {
            freeCells += (value == Value::NONE);
        }
        return freeCells ;
    }

};

std::string printBoard(const Board& board);
