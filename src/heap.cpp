#include <algorithm>
#include <Leet/heap.hpp>

#include <unordered_map>
#include <algorithm>

namespace heap
{
    std::vector<std::string> topKFrequent(std::vector<std::string>& words, int k)
    {
        std::unordered_map<std::string, int> wordsNums;
        for (auto word : words) wordsNums[word]++;

        std::vector<std::pair<std::string, int>> temp(wordsNums.begin(), wordsNums.end());

        std::sort(temp.begin(), temp.end(), [](auto& a, auto& b)
        {
            if (a.second == b.second) return a.first < b.first;
            return a.second > b.second;
        });

        std::vector<std::string> result;

        for (size_t i = 0; i != k; ++i)
            result.push_back(temp[i].first);

        return result;
    }

    std::vector<int> topKFrequentElements(std::vector<int>& nums, int k)
    {
        std::unordered_map<int, int> numbers;
        for (auto num : nums) numbers[num]++;
        std::vector<std::pair<int, int>> temp(numbers.begin(), numbers.end());
        std::sort(temp.begin(), temp.end(), [](auto& a, auto& b)
        {
            if (a.second == b.second) return a.first < b.first;
            return a.second > b.second;
        });
        std::vector<int> result;
        for (size_t i = 0; i != k; ++i)
            result.push_back(temp[i].first);
        return result;
    }
}
