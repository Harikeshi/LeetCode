#include <Leet/hashtable.hpp>

#include <algorithm>
#include <unordered_map>
#include <map>
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
    std::unordered_map<int, int> num_map;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (num_map.find(complement) != num_map.end()) {
            return {num_map[complement], i};
        }
        num_map[nums[i]] = i; // Записываем в словарь
    }
    return {};
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