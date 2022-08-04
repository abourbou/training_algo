
#include <vector>
#include <utility>
#include <iostream>

using namespace std;

// solution in O(n - k) memory

// class Solution {
// public:
// 	void rotate(vector<int>& nums, int k)
// 	{
// 		auto it = nums.begin() + nums.size() - k / nums.size();
// 		vector<int> buffer(it, nums.end());

// 		nums.erase(it, nums.end());
// 		nums.insert(nums.begin(), buffer.begin(), buffer.end());
// 	}
// };

void	partial_rotate(vector<int>& nums, int &start, int &k)
{
	static int size = nums.size();
	int p = k - start;
	int min = (p < k) ? p : k;

	cout << "k : " << k << ", p : " << p << endl;
	for (int i = start; i < start + min; ++i)
		swap(nums[i], nums[i + p]);
}

class Solution {
public:
	static void rotate(vector<int>& nums, int k)
	{
		int i;
		k = nums.size() - k;
		int end = nums.size() - 1;
		
		
	}
};