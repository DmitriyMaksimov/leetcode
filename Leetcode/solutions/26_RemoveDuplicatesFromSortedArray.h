/// 26. Remove Duplicates from Sorted Array: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution_26
{
public:
	int removeDuplicates(vector<int>& nums)
	{
		if (nums.empty())
		{
			return 0;
		}

		auto len = 0;

		for (auto n = 1u; n < nums.size(); ++n)
		{
			if (nums[n] == nums[len])
			{
				continue;
			}

			nums[++len] = nums[n];
		}

		return len + 1;
	}
};
