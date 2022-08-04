
#include <string>
#include <cctype>

using namespace std;

//problem : https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
	int longestPalindrome(string s)
	{
		int lowercase[26] = {0};
		int uppercase[26] = {0};
		int count = 0;
		bool is_odd = false;
		
		for (auto it = s.begin(); it != s.end(); ++it)
		{
			if (islower(*it))
				lowercase[(int)(*it - 'a')]++;
			else if (isupper(*it))
				uppercase[(int)(*it - 'A')]++;
		}
		for (int i = 0; i < 26; ++i)
		{
			count += lowercase[i] - (lowercase[i] & 1);
			if (!is_odd && lowercase[i] & 1)
				is_odd = true;
		}
		for (int i = 0; i < 26; ++i)
		{
			count += uppercase[i] - (uppercase[i] & 1);
			if (!is_odd && uppercase[i] & 1)
				is_odd = true;
		}
		if (is_odd)
			return (count + 1);
		return count;
	}
};