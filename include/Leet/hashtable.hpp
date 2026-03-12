#pragma once

#include <string>
#include <vector>

namespace hashtable {

int singleNumber(std::vector<int>& nums);

std::vector<int> twoSum(std::vector<int>& nums, int target);

std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target);

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs);

bool isAnagram(std::string s, std::string t);

std::vector<int> findAnagrams(std::string s, std::string p);

} // namespace hashtable