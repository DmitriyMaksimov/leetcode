/// 1313. Decompress Run-Length Encoded List: https://leetcode.com/problems/decompress-run-length-encoded-list/

class Solution_1313 {
public:
    vector<int> decompressRLElist(vector<int>& nums)
	{
    	vector<int> retVal;
    	retVal.reserve(nums.size());
    	
        for (auto n = 0u; n < nums.size();)
        {
	        auto freq = nums[n++];
	        auto val = nums[n++];

        	while (freq--) retVal.push_back(val);
        }

    	return retVal;
    }
};