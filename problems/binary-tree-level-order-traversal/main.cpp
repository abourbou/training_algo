#include "code.hpp"
#include <iostream>

using namespace std;

void print_vec_2D(vector<vector<int>> &vec)
{
	cout << "[";
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		cout << "[";
		for (auto it2 = it->begin(); it2 != it->end(); ++it2)
			cout << *it2 << ",";
		cout << "],";
	}
	cout << "]" << endl;
}

int main(void)
{
	TreeNode *node = new TreeNode(3);
	node->left = new TreeNode(9);
	node->right = new TreeNode(20);
	node->right->left = new TreeNode(15);
	node->right->right = new TreeNode(7);

	vector<vector<int>> vec = Solution::levelOrder(node);
	print_vec_2D(vec);

	delete(node->right->right);
	delete(node->right->left);
	delete(node->right);
	delete(node->left);
	delete(node);

	return 0;
}