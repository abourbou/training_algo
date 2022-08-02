#include <vector>

using namespace std;

//problem : https://leetcode.com/problems/search-insert-position

class Solution {
public:
    static int searchInsert(vector<int>& nums, int target) {
        long min = 0;
        long max = nums.size() - 1;
        long middle;

        while (min < max)
        {
            middle = (min + max) / 2;
            if (nums[middle] == target)
                return (middle);
            else if (nums[middle] > target)
                max = middle - 1;
            else
                min = middle + 1;
        }
        if (max == -1)
            return (0);
        else if (target > nums[max])
            return (max + 1);
        return (max);
    }
};