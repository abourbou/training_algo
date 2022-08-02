#include <vector>

using namespace std;

//problem : https://leetcode.com/problems/binary-search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int min = 0;
        int max = nums.size() - 1;
        int middle;

        while (min <= max)
        {
            middle = (max + min) / 2;
            if (nums[middle] == target)
                return middle;
            else if (nums[middle] > target)
                max = middle  - 1;
            else
                min = middle + 1;
        }
        return (-1);
    }
};