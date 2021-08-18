/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        if(root == nullptr)
        {
            return ret;
        }
        ret.push_back(root->val);
        vector<int> left = preorderTraversal(root->left);
        for(int i = 0;i < left.size(); i++)
        {
            ret.push_back(left[i]);
        }
        vector<int> right = preorderTraversal(root->right);
        for(int i = 0;i < right.size(); i++)
        {
            ret.push_back(right[i]);
        }
        return ret;
    }
};
// @lc code=end

