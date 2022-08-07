
#include <vector>
#include <utility>
#include <iostream>

using namespace std;

// solution in O(n - k) memory but quick

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


//Solution in O(1) memory
class Solution {
public:
	static void rotate(vector<int>& nums, int k)
	{
		
		int start = 0;
		const int size = nums.size();
		k %= size;
		int dist = size - k;
		int buffer;

		while (k && dist)
		{
			if (k <= dist)
			{
				for (int i = 0; i < k; ++i)
				{
					buffer = nums[start + i];
					nums[start + i] = nums[start + dist + i];
					nums[start + dist + i] = buffer;
				}
				start += k;
				dist -= k;
			}
			else
			{
				for (int i = 0; i < dist; ++i)
				{
					buffer = nums[start + i];
					nums[start + i] = nums[start + dist + i];
					nums[start + dist + i] = buffer;
				}
				start += dist;
				k -= dist;
			}
		}
	}
};

//optimal solution

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         k %=nums.size();
//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin()+k);
//         reverse(nums.begin()+k, nums.end());
//     }
// };