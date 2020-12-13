/// 1528. Shuffle String: https://leetcode.com/problems/shuffle-string/

class Solution_1528 {
public:
    string restoreString(string s, vector<int>& indices)
	{
        string retVal(s.length(), '\0');

    	for (auto k = 0;auto n: indices)
    	{
    		retVal[n] = s[k++];
    	}

    	return retVal;
    }
};