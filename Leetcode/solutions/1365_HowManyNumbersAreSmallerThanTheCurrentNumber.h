/// 1365. How Many Numbers Are Smaller Than the Current Number: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution_1365 {
public:
    vector<int> smallerNumbersThanCurrent(const vector<int>& nums)
    {
        vector<int> retVal;
    	retVal.reserve(nums.size());

        for (auto n : nums)
        {
	        retVal.push_back(count_if(nums.begin(), nums.end(), [n](int k) { return k < n; } ));
        }

    	return retVal;
    }
};