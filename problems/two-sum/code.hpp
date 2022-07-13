#include <vector>
#include <map>

//problem: https://leetcode.com/problems/two-sum

int check_solution(std::multimap<int, int> &map_var, int diff)
{
	auto it = map_var.find(diff);
	if (it == map_var.end())
		return (-1);
	return (it->second);
}

class Solution {
public:
    static std::vector<int> twoSum(std::vector<int>& nums, int target)
	{
		std::multimap<int, int> map_var;
		int i_sol;

		for (int i = 0; (size_t)i < nums.size(); ++i)
		{
			if ((i_sol = check_solution(map_var, target - nums[i])) != -1)
				return (std::vector({i_sol, i}));
			map_var.insert(std::pair<int, int>(nums[i], i));
		}
		return (std::vector({-1, -1}));
    }
};