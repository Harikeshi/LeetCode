#include <Leet/bsearch.hpp>
#include <gtest/gtest.h>

namespace b_search {
TEST(BSearchTest, Search1)
{
    std::vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    EXPECT_TRUE(b_search::search(nums, target) == 4);
}

TEST(BSearchTest, Search2)
{
    std::vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 2;
    EXPECT_TRUE(b_search::search(nums, target) == -1);
}
} // namespace b_search
