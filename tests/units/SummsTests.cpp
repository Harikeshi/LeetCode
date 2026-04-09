#include <Leet/summs.hpp>
#include <gtest/gtest.h>

namespace summs {
    TEST(SummsTest, Matrix)
    {
        std::vector<std::vector<int>> m{{3, 0, 1, 4, 2}, {5, 6, 3, 2, 1}, {1, 2, 0, 1, 5}, {4, 1, 0, 1, 7}, {1, 0, 3, 0, 5}};
        std::vector<std::vector<int>>
        summs::NumMatrix matrix(m);
        

        EXPECT_TRUE(true);
    }
}