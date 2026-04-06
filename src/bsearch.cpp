#include <Leet/bsearch.hpp>
#include <set>

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
    // target 0
    // [4,5,6,7,0,1,2]
    // [7,0,1,2,4,5,6]
    // target 7
    // [2,4,5,6,7,0,1]
    // [7,0,1,2,4,5,6]
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left)/2;
        if (nums[mid] == target) return mid;

        // если левая отсортирована
        if (nums[mid] > nums[left])
        {
            // Искомое число не в этом интервале(в правом)
            if (target > nums[mid] || target < nums[left])
                left = mid + 1;
            // Искомое число в этом интервале(в левом)
            else
                right = mid - 1;
        }
        // Правая отсортирована
        else
        {
            // Искомое число не в этом интервале(в левом)
            if (target < nums[mid] || target > nums[right])
                right = mid - 1;
            // Искомое число в этом интервале(в правом)
            else
                left = mid + 1;
        }
    }

    return -1;
}

int findMin(std::vector<int>& nums)
{
    int left = 0; int right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left)/ 2;
        // Пример с левой стороны и с правой стороны
        // [7,0,2,3,4]
        // [4,5,6,0,1]
        // [2,1] Пример, для чего нужно нестрогое неравенство
        if (nums[mid] <= nums[right])
        {
            right = mid;
        }
        else if (nums[mid] >= nums[left])
        {
            left = mid + 1;
        }
    }

    return nums[left];
}

bool search2(std::vector<int>& nums, int target)
{
    // target 0
    // [4,5,6,7,0,1,2]
    // [7,0,1,2,4,5,6]
    // target 7
    // [2,4,5,6,7,0,1]
    // [7,0,1,2,4,5,6]
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left)/2;
        if (nums[mid] == target) return true;
        // [1,0,1,1,1]
        // Если левая и правая равны
        if (nums[mid] == nums[right] && nums[mid] == nums[left])
        {
            --right;
            ++left;
        }

        // Левая отсортирована
        else if (nums[left] <= nums[mid])
        {
            // Число в левом интервале
            if (target < nums[mid] && target >= nums[left])
                right = mid - 1;
            else
                left = mid + 1;
        }
        // Правая отсортирована
        else
        {
            // Искомое число не в этом интервале(в левом)
            if (target > nums[mid] && target <= nums[right])
                left = mid + 1;
            // Искомое число в этом интервале(в правом)
            else
                right = mid - 1;
        }
    }

    return false;
}
} // namespace b_search