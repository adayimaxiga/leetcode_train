/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        if(root == nullptr)
        {
            return ret;
        }
        vector<int> left = postorderTraversal(root->left);
        ret.insert(ret.end(),left.begin(),left.end());
        vector<int> right = postorderTraversal(root->right);
        ret.insert(ret.end(),right.begin(),right.end());

        ret.push_back(root->val);

        return ret;
    }
};
// @lc code=end

