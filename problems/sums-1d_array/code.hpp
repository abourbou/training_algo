#include <vector>

//https://leetcode.com/problems/running-sum-of-1d-array/

using namespace std;

class Solution {
public:
    static vector<int> runningSum(vector<int>& nums) {
        for (auto it = nums.begin() + 1; it < nums.end(); ++it)
        {
            *it = *(it - 1) + *it;
        }
        return (nums);
    }
};