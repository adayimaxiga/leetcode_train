/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    bool isbalaso(TreeNode* root,int &depth)
    {
        if(root ==nullptr)
        {
            depth = 0;
            return true;
        }else
        {
            int leftdep = 0;
            int rightdep = 0;
            if(isbalaso(root->left,leftdep) &&isbalaso(root->right,rightdep))
            {
                if(rightdep >= leftdep)
                {
                    depth = rightdep +1;
                    if(rightdep - leftdep <=1)
                    {
                        return true;
                    }
                }else
                {
                    depth = leftdep +1;
                    if(leftdep - rightdep <=1)
                    {
                        return true;
                    }
                }
            }
            
        }
        return false;
    }

    bool isBalanced(TreeNode* root) {
        int depth=0;
        return isbalaso(root,depth);
    }
};
// @lc code=end

