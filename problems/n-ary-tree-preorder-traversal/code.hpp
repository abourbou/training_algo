
#include <vector>

using namespace std;

//problem : https://leetcode.com/problems/n-ary-tree-preorder-traversal

/*
** Definition for a Node.
*/
class Node {
public:
	int val;
	vector<Node*> children;

	Node() {}

	Node(int _val) {
		val = _val;
	}

	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};


void	recurs_process(vector<int>& arr, Node *root)
{
	arr.push_back(root->val);
	for (auto it = root->children.begin(); it != root->children.end(); ++it)
		recurs_process(arr, *it);
}

class Solution {
public:
	vector<int> preorder(Node* root) {
		vector<int> arr;

		if (root)
			recurs_process(arr, root);
		return arr;
	}
};