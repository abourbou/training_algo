#pragma once

using namespace std

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        string str_nbr = "0";
        vector<string> vec;
        
        for (int i = 1; i <= n; ++i)
        {
            string buffer = "";
            if (i % 3 == 0)
                buffer += "Fizz";
            if (i % 5 == 0)
                buffer += "Buzz";
            if (buffer.empty())
            {
                stringstream ss;
                ss << i;
                buffer = ss.str();
            }
            vec.push_back(buffer);
        }
        return (vec);
    }
};