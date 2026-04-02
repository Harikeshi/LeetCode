#include <Leet/greedy.hpp>
#include <gtest/gtest.h>

namespace greedy {
TEST(GreedyTest, MaxProfit21)
{
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    int target = 7;
    EXPECT_TRUE(greedy::maxProfit2(prices) == target);
}
TEST(GreedyTest, MaxProfit22)
{
    std::vector<int> prices = {1, 2, 3, 4, 5};
    int target = 4;
    EXPECT_TRUE(greedy::maxProfit2(prices) == target);
}
TEST(GreedyTest, MaxProfit23)
{
    std::vector<int> prices = {7, 6, 4, 3, 1};
    int target = 0;
    EXPECT_TRUE(greedy::maxProfit2(prices) == target);
}
TEST(GreedyTest, MaxProfit11)
{
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    int target = 5;
    EXPECT_TRUE(greedy::maxProfit2(prices) == target);
}
TEST(GreedyTest, MaxProfit12)
{
    std::vector<int> prices = {7, 6, 4, 3, 1};
    int target = 0;
    EXPECT_TRUE(greedy::maxProfit2(prices) == target);
}
TEST(GreedyTest, MaxProfitTransaction1)
{
    std::vector<int> prices = {1, 3, 2, 8, 4, 9};
    int fee = 2;
    int target = 8;
    EXPECT_TRUE(greedy::maxProfit(prices, fee) == target);
}
TEST(GreedyTest, MaxProfitTransaction2)
{
    std::vector<int> prices = {1, 3, 7, 5, 10, 3};
    int fee = 3;
    int target = 6;
    EXPECT_TRUE(greedy::maxProfit(prices, fee) == target);
}
TEST(GreedyTest, MaxProfitCooldown1)
{
    std::vector<int> prices = {1, 2, 3, 0, 2};
    int target = 3;
    EXPECT_TRUE(greedy::maxProfit(prices) == target);
}
TEST(GreedyTest, MaxProfitCooldown2)
{
    std::vector<int> prices = {1};
    int target = 0;
    EXPECT_TRUE(greedy::maxProfit(prices) == target);
}

} // namespace greedy
