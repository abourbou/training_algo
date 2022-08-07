
#include <vector>

using namespace std;

//problem : https://leetcode.com/problems/n-ary-tree-preorder-traversal

/**
 * Definition for a binary tree node.
*/
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


void	recurs_process(vector<vector<int>>& arr, TreeNode *root, int level)
{
	static int max_level = -1;
	if (!root)
		return;
	if (level > max_level)
	{
		++max_level;
		arr.resize(level);
	}
	arr[level].push_back(root->val);
	recurs_process(arr, root->left, level + 1);
	recurs_process(arr, root->right, level + 1);
}

class Solution {
public:
	static vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> arr({});

		recurs_process(arr, root, 0);
		return arr;
	}
};