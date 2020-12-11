/// 136. Single Number: https://leetcode.com/problems/single-number/

class Solution_136
{
public:
	int singleNumber(vector<int>& nums)
	{
		// -3 * 10^4 <= nums[i] <= 3 * 10^4
		const auto minNum = -3 * 10000;
		const auto maxNum = 3 * 10000;
		const auto totalNums = maxNum - minNum + 1;

		vector<bool> flags(totalNums);

		for (auto n: nums)
		{
			flags[n + maxNum] = !flags[n + maxNum];
		}

		for (auto i = 0u; i < flags.size(); ++i)
		{
			if (flags[i]) return i - maxNum;
		}

		return minNum - 1;
	}
};
