#include <gtest/gtest.h>
#include "../src/Board.hpp"

TEST(BoardTests, TestInitialization) {
    Board b(10, 10);
    EXPECT_EQ(b.board.size(), 100);
}

TEST(BoardTests, TestPrinting) {
    Board b(2,2);
    EXPECT_EQ(printBoard(b), "??\n??");
}

TEST(BoardTests, TestSettingRowValue) {
    Board b(2,2);
    b.setRow(1, Value::ON);
    EXPECT_EQ(printBoard(b), "??\nBB");
}

TEST(BoardTests, TestGettingFreeCellsForEmptyBoard) {
    Board b(2, 2);
    EXPECT_EQ(b.countFreeFields(), 4);
}

TEST(BoardTests, TestPrintingEmptyBoard) {
    Board b(0, 0);
    EXPECT_EQ(printBoard(b), "");
}
