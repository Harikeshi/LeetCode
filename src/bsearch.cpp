#include "leet/bsearch.hpp"

namespace b_search {

int search(std::vector<int>& nums, int target)
{
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        else
            nums[mid] > target ? right = mid - 1 : left = mid + 1;
    }

    return -1;
}

int guess(int mid, int target)
{
    if (mid > target)
    {
        return -1;
    }
    else if (mid < target)
    {
        return 1;
    }

    return 0;
}

int guessNumber(int n, int pick)
{
    int left = 1;
    int right = n;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (guess(mid, pick) == 0)
        {
            return mid;
        }
        else if (guess(mid, pick) == -1)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return 0;
}

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target)
{
    int left = 0, right = matrix.size();

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (target < matrix[mid][0])
        {
            right = mid - 1;
        }
        else if (target > matrix[mid][matrix[mid].size() - 1])
        {
            left = mid + 1;
        }
        else
        {
            // поиск внутри матрицы
            left = 0, right = matrix[mid].size() - 1;
            while (left <= right)
            {
                int _mid = left + (right - left) / 2;
                if (matrix[mid][_mid] == target)
                    return true;
                else
                    matrix[mid][_mid] > target ? right = mid - 1 : left = mid + 1;
            }
        }
    }
    return false;
}

int rotateSearch(std::vector<int>& nums, int target)
{
    return -1;
}

int findMin(std::vector<int>& nums)
{
    return 0;
}

bool search2(std::vector<int>& nums, int target)
{
    return true;
}
} // namespace b_search