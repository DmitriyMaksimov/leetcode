/// 1688. Count of Matches in Tournament: https://leetcode.com/problems/count-of-matches-in-tournament/

class Solution_1688 {
public:
    int numberOfMatches(int n)
    {
    	if (n == 1) return 0;

    	if (n % 2) return (n - 1) / 2 + numberOfMatches((n - 1) / 2 + 1);

    	return n / 2 + numberOfMatches(n / 2);
    }
};