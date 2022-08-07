
#include "code.hpp"
#include <vector>
#include <utility>
#include <iostream>

using namespace std;

int main(void)
{
	vector<int> vec{1, 2, 3, 4, 5, 6, 7,};

	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << ", ";
	cout << endl;

	Solution::rotate(vec, 1);

	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << ", ";
	cout << endl;
	return (0);
}