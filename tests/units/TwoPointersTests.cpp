#include <Leet/two.hpp>
#include <gtest/gtest.h>

namespace two {
TEST(TwoTest, MaxArea1)
{
    std::vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    EXPECT_TRUE(two::maxArea(height) == 49);
}

TEST(TwoTest, MaxArea2)
{
    std::vector<int> height = {1, 1};
    EXPECT_TRUE(two::maxArea(height) == 1);
}

TEST(TwoTest, PartitionLabels1)
{
    std::string s = "ababcbacadefegdehijhklij";
    EXPECT_TRUE(two::partitionLabels(s) == std::vector<int>({9, 7, 8}));
}
TEST(TwoTest, PartitionLabels2)
{
    std::string s = "eccbbbbdec";
    EXPECT_TRUE(two::partitionLabels(s) == std::vector<int>({10}));
}
} // namespace two