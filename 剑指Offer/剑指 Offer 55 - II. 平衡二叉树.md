#### [剑指 Offer 55 - II. 平衡二叉树](https://leetcode-cn.com/problems/ping-heng-er-cha-shu-lcof/)

```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {

        return _isBalanced(root) != -1;
    }
private:
    int _isBalanced(TreeNode* root) {

        if (root != nullptr) {

            int left = _isBalanced(root->left);
            if (left == -1) return -1;

            int right = _isBalanced(root->right);
            if (right == -1) return -1;

            return abs(left - right) > 1 ? -1 : max(left, right) + 1;
        }
        else
            return 0;
    }
};
```

