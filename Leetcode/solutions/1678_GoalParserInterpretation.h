/// 1678. Goal Parser Interpretation: https://leetcode.com/problems/goal-parser-interpretation/

class Solution_1678 {
public:
    string interpret(string command)
    {
    	auto retVal = ""s;

    	for (auto i = 0u; i < command.length();)
	    {
			if (command[i] == 'G')
		    {
			    retVal += 'G';
		    	++i;
		    }
			else if (command[i + 1] == ')')
		    {
			    retVal += 'o';
		    	i += 2;
		    }
			else
            {
			    retVal += "al";
		    	i += 4;
            }
	    }
    	
        return retVal;
    }
};