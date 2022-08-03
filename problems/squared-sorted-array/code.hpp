
#include <vector>
#include <cstdlib>

//problem : https://leetcode.com/problems/squares-of-a-sorted-array

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int l = 0;
        int r = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (abs(nums[r]) > abs(nums[l]))
            {
                res[i] = nums[r] * nums[r];
                --r;
            }
            else
            {
                res[i] = nums[l] * nums[l];
                ++l;
            }
        }
        return res;
    }
};