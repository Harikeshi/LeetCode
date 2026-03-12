#pragma once

#include <vector>

namespace b_search {

int search(std::vector<int>& nums, int target);

int guess(int mid, int target);

int guessNumber(int n, int pick);

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target);

int rotateSearch(std::vector<int>& nums, int target);

int findMin(std::vector<int>& nums);

bool search2(std::vector<int>& nums, int target);

} // namespace b_search