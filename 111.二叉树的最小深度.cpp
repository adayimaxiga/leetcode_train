/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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

    int minDepth(TreeNode* root) {
        if(root == nullptr)
        {
            return 0;
        }else
        {
            int leftdep=0;
            int rightdep=0;
            
            leftdep = minDepth(root->left);
            rightdep = minDepth(root->right);
            
            if(leftdep == 0 && rightdep == 0)
            {
                
            }else if(leftdep == 0)
            {
                leftdep = 0x7fffffff;
            }else if(rightdep==0)
            {
                rightdep = 0x7fffffff;
            }
            

            if(leftdep<=rightdep)
            {
                return leftdep+1;
            }else
            {
                return rightdep+1;
            }
        }
    }
};
// @lc code=end

