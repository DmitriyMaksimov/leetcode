/// 1480. Running Sum of 1d Array: https://leetcode.com/problems/running-sum-of-1d-array/

class Solution_1480
{
public:
    vector<int> runningSum(vector<int>& nums)
	{
    	for (unsigned n = 1; n < nums.size(); ++n)
    	{
    		nums[n] += nums[n - 1];
    	}

    	return nums;
    }
};
