#include "Leet/greedy.hpp"

namespace greedy {
int maxProfit1(std::vector<int>& prices)
{
    int sum = 0;
    int last = prices[0];
    for (auto price : prices)
    {
        if (price < last)
        {
            last = price;
            continue;
        }

        if (price - last > sum)
            sum = price - last;
    }
    return sum;
}

int maxProfit2(std::vector<int>& prices)
{
    int profit{0};
    for (int i = 1; i != prices.size(); ++i) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }

    return profit;
}

int maxProfit(std::vector<int>& prices, int fee)
{
    int profit{0};

    return profit;
}

int maxProfit(std::vector<int>& prices)
{
    int profit{0};

    return profit;
}

} // namespace greedy