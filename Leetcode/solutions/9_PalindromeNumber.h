/// 9. Palindrome Number: https://leetcode.com/problems/palindrome-number/

class Solution_9
{
public:
    bool isPalindrome(int x) {
	    if (x < 0) return false;
	    if (x == 0) return true;

    	vector<int> digits;

    	while (x)
    	{
    		digits.push_back(x % 10);
    		x /= 10;
    	}

    	for (unsigned i = 0; i < digits.size() / 2; ++i)
    	{
    		if (digits[i] != digits[digits.size() - 1 - i]) return false;
    	}

        return true;
    }
};
