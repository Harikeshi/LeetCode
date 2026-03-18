#include <Leet/heap.hpp>
#include <gtest/gtest.h>

namespace heap
{
    TEST(HeapTest, TopKFrequent1)
    {
        std::vector<std::string> words{"i","love","leetcode","i","love","coding"};
        int k = 2;
        std::vector<std::string> result{"i","love"};
        EXPECT_TRUE(heap::topKFrequent(words, k) == result);
    }

    TEST(HeapTest, TopKFrequent2)
    {
        std::vector<std::string> words{"the","day","is","sunny","the","the","the","sunny","is","is"};
        int k = 4;
        std::vector<std::string> result{"the","is","sunny","day"};
        EXPECT_TRUE(heap::topKFrequent(words, k) == result);
    }

    TEST(HeapTest, TopKFrequentElements1)
    {
        std::vector<int> nums{1,1,1,2,2,3};
        int k = 2;
        std::vector<int> result{1, 2};
        EXPECT_TRUE(heap::topKFrequentElements(nums, k) == result);
    }

    TEST(HeapTest, TopKFrequentElements2)
    {
        std::vector<int> nums{1};
        int k = 1;
        std::vector<int> result{1};
        EXPECT_TRUE(heap::topKFrequentElements(nums, k) == result);
    }

    TEST(HeapTest, TopKFrequentElements3)
    {
        std::vector<int> nums{1,2,1,2,1,2,3,1,3,2};
        int k = 2;
        std::vector<int> result{1, 2};
        EXPECT_TRUE(heap::topKFrequentElements(nums, k) == result);
    }
}