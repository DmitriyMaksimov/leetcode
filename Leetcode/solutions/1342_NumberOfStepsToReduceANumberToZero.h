/// 1342. Number of Steps to Reduce a Number to Zero: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution_1342 {
public:
    int numberOfSteps (int num)
	{
    	auto steps = 0;

    	while (num)
    	{
    		if (num % 2)
    		{
    			--num;
    		}
    		else
    		{
    			num /= 2;
    		}

    		++steps;
    	}

    	return steps;
    }
};