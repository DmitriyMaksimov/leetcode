/// 1281. Subtract the Product and Sum of Digits of an Integer: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution_1281 {
public:
    int subtractProductAndSum(int n)
	{
    	auto sum = 0;
    	auto product = 1;

    	while (n)
    	{
    		sum += n % 10;
    		product *= n % 10;
    		n /= 10;
    	}

    	return product - sum;
    }
};