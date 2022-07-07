#include <string>

//https://leetcode.com/problems/roman-to-integer/
class Solution {
public:
    static int romanToInt(std::string s) {
        int result = 0;
        std::string symbol = "IVXLCDM";
        int value[] = {1, 5, 10, 50, 100, 500, 1000};
        unsigned int prev_symbol = 0;
        unsigned int current_symbol;
        
        for (auto rit = s.rbegin(); rit != s.rend(); ++rit)
        {
            current_symbol = static_cast<unsigned int>(symbol.find(*rit));
            if (current_symbol + 1 == prev_symbol || current_symbol + 2 == prev_symbol)
               result -= value[current_symbol];
            else
                result += value[current_symbol];
            prev_symbol = current_symbol;
        }
        return (result);
    }
};
