#include <vector>

namespace b_search {
inline int search(std::vector<int>& nums, int target)
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
} // namespace b_search