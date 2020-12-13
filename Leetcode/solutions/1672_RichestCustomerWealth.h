/// 1672. Richest Customer Wealth: https://leetcode.com/problems/richest-customer-wealth/

class Solution_1672
{
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
    	int m = INT_MIN;

    	for (const auto& v: accounts)
        {
	        auto k = std::accumulate(v.cbegin(), v.cend(), 0);
    		if (k > m) m = k;
        }

    	return m;
    }
};
