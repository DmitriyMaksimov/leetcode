/// 1470. Shuffle the Array: https://leetcode.com/problems/shuffle-the-array/

class Solution_1470 {
public:
    vector<int> shuffle(const vector<int>& nums, int n)
    {
        vector<int> retVal;
    	retVal.reserve(nums.size());

    	for (auto i = 0u; i < nums.size() / 2; ++i)
    	{
    		retVal.push_back(nums[i]);
    		retVal.push_back(nums[n + i]);
    	}

    	return retVal;
    }
};