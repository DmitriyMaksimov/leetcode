/// 709. To Lower Case: https://leetcode.com/problems/to-lower-case/

class Solution_709
{
public:
	string toLowerCase(string str)
	{
		std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });

		return str;
	}
};
