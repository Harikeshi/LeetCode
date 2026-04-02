#pragma once

#include <vector>

namespace greedy {
/*!
*/
int maxProfit1(std::vector<int>& prices);
/*!
*/
int maxProfit2(std::vector<int>& prices);
/*!
* with transaction
*/
int maxProfit(std::vector<int>& prices, int fee);
/*!
* with cooldown
*/
int maxProfit(std::vector<int>& prices);
}