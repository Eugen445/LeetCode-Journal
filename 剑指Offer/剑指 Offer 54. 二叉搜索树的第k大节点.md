#### [剑指 Offer 54. 二叉搜索树的第k大节点](https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof/)

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
    int kthLargest(TreeNode* root, int k) {

        aid = k;
        dfs(root);

        return res;
    }
private:
    void dfs(TreeNode* root) {

        if (!root) return;
        dfs(root->right);
        if (--aid == 0) res = root->val;
        dfs(root->left);

    }
private:
    int res, aid;
};

2.阿布
class Solution {
public:
    int kthLargest(TreeNode* root, int k) {
        dfs(root);
        sort(arr.begin(), arr.end(), [](int&a, int& b) {return a > b;});
        return arr[k - 1];
    }
    void dfs(TreeNode* root) {
        if (!root) return;
        arr.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
private:
    vector<int> arr;
};
```

