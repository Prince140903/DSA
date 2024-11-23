#include <vector>
#include <iostream>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int MaxProfit = 0, BestBuy = prices[0];
    int n = prices.size();

    for (int i = 1; i < n; i++)
    {
        if (prices[i] > BestBuy)
        {
            MaxProfit = max(MaxProfit, prices[i] - BestBuy);
        }
        BestBuy = min(BestBuy, prices[i]);
    }

    return MaxProfit;
}
