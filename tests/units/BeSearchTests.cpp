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

TEST(BSearchTest, GuessNumber1)
{
    EXPECT_TRUE(b_search::guessNumber(10, 6) == 6);
}

TEST(BSearchTest, GuessNumber2)
{
    EXPECT_TRUE(b_search::guessNumber(1, 1) == 1);
}

TEST(BSearchTest, GuessNumber3)
{
    EXPECT_TRUE(b_search::guessNumber(2, 1) == 1);
}

TEST(BSearchTest, SearchMatrix1)
{
    std::vector<std::vector<int>> matrix{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    EXPECT_TRUE(b_search::searchMatrix(matrix, target));
}

TEST(BSearchTest, SearchMatrix2)
{
    std::vector<std::vector<int>> matrix{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 13;
    EXPECT_FALSE(b_search::searchMatrix(matrix, target));
}

TEST(BSearchTest, RotateSearch1)
{
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    EXPECT_TRUE(b_search::rotateSearch(nums, target) == 4);
}

TEST(BSearchTest, RotateSearch2)
{
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 3;
    EXPECT_TRUE(b_search::rotateSearch(nums, target) == -1);
}

TEST(BSearchTest, RotateSearch3)
{
    std::vector<int> nums = {1};
    int target = 0;
    EXPECT_TRUE(b_search::rotateSearch(nums, target) == -1);
}

TEST(BSearchTest, FindMin1)
{
    std::vector<int> nums = {3, 4, 5, 1, 2};
    EXPECT_TRUE(b_search::findMin(nums) == 1);
}

TEST(BSearchTest, FindMin2)
{
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    EXPECT_TRUE(b_search::findMin(nums) == 0);
}

TEST(BSearchTest, FindMin3)
{
    std::vector<int> nums = {11, 13, 15, 17};
    EXPECT_TRUE(b_search::findMin(nums) == 11);
}

TEST(BSearchTest, RotateSearch_1)
{
    std::vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;
    EXPECT_TRUE(b_search::search2(nums, target));
}

TEST(BSearchTest, RotateSearch_2)
{
    std::vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 3;
    EXPECT_FALSE(b_search::search2(nums, target));
}
} // namespace b_search
