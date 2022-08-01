
#include <string>
#include <vector>
#include <map>

//https://leetcode.com/problems/isomorphic-strings

using namespace std;

class Solution {
public:
    static bool isIsomorphic(string s, string t)
    {
        map<char, char> map_s;
        map<char, char> map_t;

        if (s.size() != t.size())
            return (false);
        for (size_t i = 0; i < s.size(); ++i)
        {
            auto it = map_s.find(s[i]);
            
            if (it == map_s.end())
            {
                if ((it = map_t.find(t[i])) != map_t.end())
                    return (false);
                map_s.insert(pair<char, char>(s[i], t[i]));
                map_t.insert(pair<char, char>(t[i], s[i]));
            }
            else
            {
                if (it->second != t[i])
                    return (false);
            }
        }
        return (true);
    }
};