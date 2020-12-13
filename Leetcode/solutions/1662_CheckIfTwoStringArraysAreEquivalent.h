/// 1662. Check If Two String Arrays are Equivalent: https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/

class Solution_1662
{
	string combineStrings(const vector<string>& words)
	{
        auto retVal = ""s;

    	for (const auto& word: words)
            for (const auto& ch: word)
    			retVal.push_back(ch);

		return retVal;
	}
	
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
    {
        return combineStrings(word1) == combineStrings(word2);
    }
};