
#include <vector>
#include <utility>
#include <iostream>

//problem : https://leetcode.com/problems/median-of-two-sorted-arrays

using namespace std;

class Solution {
public:
    static double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
	{
		int m = nums1.size();
		int n = nums2.size();
		int i = 0;
		int i1 = -1;
		int i2 = -1;
		int median_pos = (m + n + 1) / 2 - 1;

		cout << "total size : " << m + n << endl;
		cout << "median position : " << median_pos << endl;
		while (i < median_pos && i1 < m -1 && i2 < n - 1)
		{
			if (nums1[i1 + 1] < nums2[i2 + 1])
				++i1;
			else
				++i2;
			++i;
		}
		while (i)
		cout << "nums1[i1] : " << nums1[i1] << ", nums2[i2] : " << nums2[i2] << endl;

    }
};