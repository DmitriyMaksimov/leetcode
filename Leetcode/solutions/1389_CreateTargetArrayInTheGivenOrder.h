/// 1389. Create Target Array in the Given Order: https://leetcode.com/problems/create-target-array-in-the-given-order/

class Solution_1389 {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index)
    {
        vector<int> retVal;
    	retVal.reserve(nums.size());

        for (auto n = 0; auto i : index)
        {
	        retVal.insert(retVal.begin() + i, nums[n++]);
        }

    	return retVal;
    }
};