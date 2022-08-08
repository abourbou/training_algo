
#include <limits.h>

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

bool    recurs_isvalid(TreeNode* root, long min, long max)
{
    if (!root)
        return true;
    if (root->val <= min || root->val >= max)
        return false;
    if (!recurs_isvalid(root->left, min, root->val))
        return false;
    return (recurs_isvalid(root->right, root->val, max));
}

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return (recurs_isvalid(root, (long)INT_MIN - 1, (long)INT_MAX + 1));
    }
};
