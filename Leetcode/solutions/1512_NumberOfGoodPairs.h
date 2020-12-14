/// 1512. Number of Good Pairs: https://leetcode.com/problems/number-of-good-pairs/

class Solution_1512 {
public:
    int numIdenticalPairs(const vector<int>& nums)
	{
		if (nums.size() <= 1) return 0;
    	
        auto retVal = 0;

        for (auto i = 0u; i < nums.size() - 1; ++i)
        {
	        retVal += count(nums.begin() + i + 1, nums.end(), nums[i]);
        }

    	return retVal;
    }
};