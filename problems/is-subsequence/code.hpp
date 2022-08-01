#include <string>

//https://leetcode.com/problems/is-subsequence/

using namespace std;

class Solution {
public:
    static bool isSubsequence(string s, string t)
    {
        size_t i = 0;

        if (s.size() > t.size())
            return (false);
        while (i < s.size())
        {
            while (i < t.size())
            {
                if (t[i] != s[i])
                    t.erase(i, 1);
                else
                    break;
            }
            if (i >= t.size())
                return (false);
            ++i;
        }
        return (true);
    }
};