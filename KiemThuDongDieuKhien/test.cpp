#include <gtest/gtest.h>
#include "tinhTien.h"

TEST(TinhTienTest, InvalidInputs) {
    EXPECT_EQ(tinhTien(-1, 5000, 30, 1), -1);
    EXPECT_EQ(tinhTien(5000, 10001, 30, 1), -1);
    EXPECT_EQ(tinhTien(5000, 5000, 151, 0), -1);
}

TEST(TinhTienTest, ValidInputs) {
    EXPECT_FLOAT_EQ(tinhTien(5000, 5000, 1, 1), (5000 * 10 + 5000 * 20) * 0.8);
    EXPECT_FLOAT_EQ(tinhTien(5000, 5000, 149, 0), (5000 * 10 + 5000 * 20) * 0.9);
    EXPECT_FLOAT_EQ(tinhTien(0, 5000, 30, 0), 5000 * 20);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}