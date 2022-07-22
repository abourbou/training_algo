
#include "code.hpp"
#include <iostream>
#include <vector>

using namespace std;

int	main(void)
{
	vector<int> v1 = {-1, 1, 2, 4, 5};
	vector<int> v2 = {3};
	cout << "median is : " << Solution::findMedianSortedArrays(v1, v2) << endl;

	swap(v1, v2);
	cout << "median is : " << Solution::findMedianSortedArrays(v1, v2) << endl;

	v1 = {-1, 155};
	v2 = {2, 54, 67};
	cout << "median is : " << Solution::findMedianSortedArrays(v1, v2) << endl;

	return (0);
}