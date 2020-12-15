/// 1295. Find Numbers with Even Number of Digits: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution_1295 {

	int countOfDigits(int n)
	{
		if (n == 0) return 1;

		auto count = 0;

    	while (n)
    	{
    		++count;
    		n /= 10;
    	}

    	return count;
    }

public:

	int findNumbers(const vector<int>& nums)
	{
    	auto count = 0;

    	for (auto n: nums)
    	{
    		if ((countOfDigits(n) % 2) == 0) ++count;
    	}

    	return count;
    }
};