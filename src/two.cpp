#include <Leet/two.hpp>
#include <map>

namespace two {
int maxArea(std::vector<int>& height)
{
    int result = 0;
    size_t begin = 0, end = height.size() - 1;
    while (begin < end)
    {
        int temp = std::min(height[end], height[begin]) * (end - begin);

        if (temp > result)
            result = temp;
        height[end] >= height[begin] ? ++begin : --end;
    }
    return result;
}

std::vector<int> partitionLabels(std::string s)
{
    std::vector<int> result;
    std::map<char, int> charIndex;
    // ababcbacadefegdehijhklij
    for (int i = 0; i < s.length(); ++i)
        charIndex[s[i]] = i;

    // начальная
    for (int cur = 0, start = cur, from = charIndex[s[cur]]; cur < s.length(); ++cur)
    {
        if (from < charIndex[s[cur]])
        {
            from = charIndex[s[cur]];
        }

        if (cur == from)
        {
            int temp{0};
            if (result.empty())
            {
                temp = from - start + 1;
            }
            else
            {
                temp = from - start;
            }

            start = cur;
            result.push_back(temp);
        }
    }

    return result;
}
} // namespace two
