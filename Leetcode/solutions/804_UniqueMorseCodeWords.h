/// 804. Unique Morse Code Words: https://leetcode.com/problems/unique-morse-code-words/

class Solution_804
{
public:
    int uniqueMorseRepresentations(const vector<string>& words)
	{
        static const char* morseCodes[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> transformedWords;

        for (const auto& word: words)
        {
	        string s;
	        for (auto ch : word)
	        {
		        s += morseCodes[ch - 'a'];
	        }

        	transformedWords.insert(s);
        }

    	return transformedWords.size();
    }
};
