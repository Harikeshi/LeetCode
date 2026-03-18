#include <Leet/hashtable.hpp>
#include <gtest/gtest.h>

namespace hashtable {
TEST(HashTableTest, SingleNumber1)
{
    std::vector<int> nums = {2, 2, 1};
    EXPECT_TRUE(hashtable::singleNumber(nums) == 1);
}

TEST(HashTableTest, SingleNumber2)
{
    std::vector<int> nums = {4, 1, 2, 1, 2};
    EXPECT_TRUE(hashtable::singleNumber(nums) == 4);
}

TEST(HashTableTest, SingleNumber3)
{
    std::vector<int> nums = {1};
    EXPECT_TRUE(hashtable::singleNumber(nums) == 1);
}

TEST(HashTableTest, TwoSum1)
{

    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    EXPECT_TRUE(hashtable::twoSum(nums, target) == std::vector<int>({0, 1}));
}

TEST(HashTableTest, TwoSum2)
{

    std::vector<int> nums = {3, 2, 4};
    int target = 6;
    EXPECT_TRUE(hashtable::twoSum(nums, target) == std::vector<int>({1, 2}));
}

TEST(HashTableTest, TwoSum3)
{
    std::vector<int> nums = {3, 3};
    int target = 6;
    EXPECT_TRUE(hashtable::twoSum(nums, target) == std::vector<int>({0, 1}));
}

TEST(HashTableTest, FourSum1)
{
    std::vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    std::vector<std::vector<int>> result = {{-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}};
    EXPECT_TRUE(hashtable::fourSum(nums, target) == result);
}

TEST(HashTableTest, FourSum2)
{
    std::vector<int> nums = {2, 2, 2, 2, 2};
    int target = 8;
    std::vector<std::vector<int>> result = {{2, 2, 2, 2}};
    EXPECT_TRUE(hashtable::fourSum(nums, target) == result);
}

TEST(HashTableTest, GroupAnagrams1)
{
    std::vector<std::string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::vector<std::string>> result = {{"bat"}, {"nat", "tan"}, {"ate", "eat", "tea"}};
    EXPECT_TRUE(hashtable::groupAnagrams(strs) == result);
}

TEST(HashTableTest, GroupAnagrams2)
{
    std::vector<std::string> strs = {""};
    std::vector<std::vector<std::string>> result = {{""}};
    EXPECT_TRUE(hashtable::groupAnagrams(strs) == result);
}

TEST(HashTableTest, GroupAnagrams3)
{
    std::vector<std::string> strs = {"a"};
    std::vector<std::vector<std::string>> result = {{"a"}};
    EXPECT_TRUE(hashtable::groupAnagrams(strs) == result);
}

TEST(HashTableTest, IsAnagram1)
{
    std::string s = "anagram";
    std::string t = "nagaram";
    EXPECT_TRUE(hashtable::isAnagram(s, t));
}

TEST(HashTableTest, IsAnagram2)
{
    std::string s = "rat";
    std::string t = "car";
    EXPECT_FALSE(hashtable::isAnagram(s, t));

}

TEST(HashTableTest, FindAnagrams1)
{
    std::string s = "cbaebabacd";
    std::string t = "abc";
    std::vector<int> result = {0, 6};
    EXPECT_TRUE(hashtable::findAnagrams(s, t) == result);
}

TEST(HashTableTest, FindAnagrams2)
{
    std::string s = "abab";
    std::string t = "ab";
    std::vector<int> result = {0, 1, 2};
    EXPECT_TRUE(hashtable::findAnagrams(s, t) == result);
}
} // namespace hashtable