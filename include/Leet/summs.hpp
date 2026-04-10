#pragma once

#include <iostream>
#include <vector>

namespace summs {
class NumArray
{
    std::vector<int> _n;

public:
    NumArray(std::vector<int>& nums)
        : _n(nums.size() + 1)
    {
        for (int i = 1; i != _n.size(); ++i)
        {
            _n[i] = _n[i - 1] + nums[i - 1];
        }
    }
   
    void show()
    {
        for (auto x : _n)
            std::cout << x << ",";
        std::cout << std::endl;
    }

    int sumRange(int left, int right)
    {
        if (_n.size() == 0)
            throw "не задан массив!";
        return _n[right + 1] - _n[left];
    }

    std::vector<int> ForAll(std::vector<std::vector<int>> vec)
    {
        std::vector<int> res;
        for (auto x : vec)
        {
            if (x.size() != 2)
                throw "Ќе верный размер массива.";
            res.push_back(sumRange(x[0], x[1]));
        }

        return res;
    }
};

class NumMatrix
{
    std::vector<std::vector<int>> _m;

public:
    NumMatrix(std::vector<std::vector<int>>& nums)
        : _m(nums.size() + 1, std::vector<int>(nums[0].size() + 1, 0))
    {
        for (int i = 1; i != _m.size(); ++i)
            for (int j = 1; j != _m[0].size(); ++j)
            {
                _m[i][j] = nums[i - 1][j - 1] +
                           _m[i - 1][j] + _m[i][j - 1] - _m[i - 1][j - 1];
            }
    }

    int sumRange(int row1, int col1, int row2, int col2)
    {
        if (_m.size() == 0)
            throw "не задана матрица!";

        return _m[row2 + 1][col2 + 1] - _m[row2 + 1][col1] - _m[row1][col2 + 1] + _m[row1][col1];
    }

    std::vector<int> ForAll(std::vector<std::vector<int>> vec)
    {
        std::vector<int> res;
        for (auto x : vec)
        {
            if (x.size() != 4)
                throw "Ќе верный размер массива.";
            res.push_back(sumRange(x[0], x[1], x[2], x[3]));
        }

        return res;
    }

    void show()
    {
        for (auto x : _m)
        {
            for (auto i : x)
                std::cout << i << ",";
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
};

} // namespace summs