#include "leet/hashtable.hpp"

#include <algorithm>
#include <unordered_map>

namespace hashtable {

int singleNumber(std::vector<int>& nums)
{
    int result = 0;

    for (auto x : nums)
    {
        result ^= x;
    }

    return result;
}

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    std::unordered_multimap<int, int> m;
    for (int i = 0; i != nums.size(); ++i)
        m.insert({nums[i], i});

    for (int i = 0; i < nums.size(); i++)
    {
        auto it = m.find(target - nums[i]);
        if (it != m.end() && i != it->second)
            return (i > it->second) ? std::vector<int>({it->second, i}) : std::vector<int>({i, it->second});
    }

    return std::vector<int>{};
}

std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target)
{
    std::vector<std::vector<int>> result;

    return result;
}

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs)
{
    std::unordered_map<std::string, std::vector<std::string>> m;

    for (auto str : strs)
    {
        auto temp = str;
        sort(str.begin(), str.end());
        m[str].push_back(temp);
    }

    std::vector<std::vector<std::string>> result(m.size());
    int i = m.size() - 1;
    for (auto& strs : m)
    {
        sort(strs.second.begin(), strs.second.end());
        result[i] = strs.second;
        --i;
    }

    return result;
}

bool isAnagram(std::string s, std::string t)
{
    int cnt[26] = {0};
    for (auto x : s)
        cnt[x - 'a']++;
    for (auto x : t)
        cnt[x - 'a']--;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i])
            return false;
    }
    return true;
}

std::vector<int> findAnagrams(std::string s, std::string p)
{
    std::vector<int> ans, m1(26, 0), m2(26, 0);
    int n = (int)s.size(), m = (int)p.size(), j = 0;
    for (auto x : p)
        m2[x - 'a']++;
    for (int i = 0; i < n; i++)
    {
        while (j < n && j - i + 1 <= m)
            m1[s[j++] - 'a']++;
        if (m1 == m2)
            ans.push_back(i);
        m1[s[i] - 'a']--;
    }
    return ans;
}
} // namespace hashtable