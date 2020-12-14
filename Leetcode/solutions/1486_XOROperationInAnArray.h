/// 1486. XOR Operation in an Array: https://leetcode.com/problems/xor-operation-in-an-array/

class Solution_1486 {
public:
    int xorOperation(int n, int start)
    {
    	auto retVal = 0;

        for (auto i = 0; i < n; ++i)
        {
	        retVal ^= start + 2 * i;
        }
    	
        return retVal;
    }
};