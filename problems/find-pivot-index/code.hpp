#include <vector>
#include <stdexcept>
#include <iostream>

using namespace std;

template <typename T>
T sums_vec(const vector<T> &vec)
{
    T result;

    if (vec.empty())
        throw (invalid_argument("empty vector"));
    result = vec[0];
    for (auto it = vec.begin() + 1; it != vec.end(); ++it)
    {
        result += *it;
    }
    return (result);
}

class Solution {
public:
    static int pivotIndex(vector<int>& nums)
    {
        int sum_left = 0;
        int sum_right = sums_vec(nums);

        for (int pivot = 0; pivot < (int)nums.size(); ++pivot)
        {
            sum_right -= nums[pivot];
            if (sum_left == sum_right)
                return (pivot);
            sum_left += nums[pivot];
        }
        return (-1);

    }
};