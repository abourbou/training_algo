

//problem : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int buy, sell;
		int profit = 0;
		
		if (prices.empty())
			return (0);
		buy = sell = prices[0];
	
		for (auto it = prices.begin(); it != prices.end(); ++it)
		{
			if (*it > sell)
			{
				sell = *it;
				if (sell - buy > profit)
					profit = sell - buy;
			}
			if (*it < buy)
			{
				buy = *it;
				sell = 0;
			}
		}
		
		return (profit);
	}
};