
#include <string>

//problem : https://leetcode.com/problems/longest-substring-without-repeating-characters

using namespace std;

class Solution {
public:
    static int lengthOfLongestSubstring(string s) {
        string	current_str = "";
		int		current_size = 0;
		int		longest = 0;;
		size_t	char_find;

		for (auto it = s.begin(); it != s.end(); ++it)
		{
			char_find = current_str.find(*it);
			if (char_find != string::npos)
			{
				if (current_size > longest)
					longest = current_size;
				if ((size_t)current_size == char_find + 1)
				{
					current_str.clear();
					current_size = 0;
				}
				else
				{
					current_str = current_str.substr(char_find + 1);
					current_size = current_str.size();
				}
			}
			current_str.push_back(*it);
			++current_size;
		}
		if (current_size > longest)
			return (current_size);
		return (longest);
    }
};