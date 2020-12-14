/// 771. Jewels and Stones: https://leetcode.com/problems/jewels-and-stones/

class Solution_771 {
public:
    int numJewelsInStones(string J, string S)
	{
    	auto retVal = 0;

        for (auto j : J)
        {
	        retVal += count(S.begin(), S.end(), j);
        }
    	
        return retVal;
    }
};