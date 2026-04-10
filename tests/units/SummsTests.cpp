#include <Leet/summs.hpp>
#include <gtest/gtest.h>

namespace summs {
TEST(SummsTest, Matrix)
{
    std::vector<std::vector<int>> m{
        {3, 0, 1, 4, 2},
        {5, 6, 3, 2, 1},
        {1, 2, 0, 1, 5},
        {4, 1, 0, 1, 7},
        {1, 0, 3, 0, 5}};
    std::vector<std::vector<int>> r{{2, 1, 4, 3}, {1, 1, 2, 2}, {1, 2, 2, 4}};
    summs::NumMatrix matrix(m);

    auto result = matrix.ForAll(r);
    std::vector<int> check{8, 11, 12};
    EXPECT_TRUE(result == check);
}

TEST(SummsTest, Array)
{
    std::vector<int> a{-2, 0, 3, -5, 2, -1};
    std::vector<std::vector<int>> r{{0, 2}, {2, 5}, {0, 5}};
    summs::NumArray array(a);

    auto result = array.ForAll(r);
    std::vector<int> check{1, -1, -3};
    EXPECT_TRUE(result == check);
}
} // namespace summs