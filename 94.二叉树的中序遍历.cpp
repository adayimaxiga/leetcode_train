/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        if(root == nullptr)
        {
            return ret;
        }
        vector<int> left = inorderTraversal(root->left);
        for(int i = 0; i < left.size(); i++)
        {
            ret.push_back(left[i]);
        }
        //ret.instert(ret.end(),left.begin(),left.end());
        ret.push_back(root->val);
        vector<int> right = inorderTraversal(root->right);
        for(int i = 0; i < right.size(); i++)
        {
            ret.push_back(right[i]);
        }
        return ret;
    }
};
// @lc code=end

