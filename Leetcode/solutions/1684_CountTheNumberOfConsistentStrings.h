/// 1684. Count the Number of Consistent Strings: https://leetcode.com/problems/count-the-number-of-consistent-strings/

class Solution_1684
{
public:
    int countConsistentStrings(string allowed, vector<string>& words)
	{
        int count = 0;

    	const set<char> allowedSet(allowed.cbegin(), allowed.cend());
    	
    	for (const auto& word: words)
    	{
    		if (all_of(word.cbegin(), word.cend(), [&allowed, &allowedSet](char c) { return allowedSet.contains(c); })) ++count;
    	}

    	return count;
    }
};
