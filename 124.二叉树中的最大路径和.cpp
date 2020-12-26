/*
 * @lc app=leetcode.cn id=124 lang=cpp
 *
 * [124] 二叉树中的最大路径和
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
    int ans;
    int maxdeep(TreeNode* r)
    {
        if(r == NULL) 
        {
            return 0;
        }
        if(r -> left == NULL && r-> right ==NULL)
        {
            ans = max(ans,r->val);
            return r->val;
        }else
        {
            int maxleft = maxdeep(r->left);
            int maxright = maxdeep(r->right);
            
            int tmp = max(maxleft,maxright) + r->val;
            tmp = max(tmp,r->val);
            
            ans = max(ans,tmp);
            ans = max(ans,maxleft+maxright+r->val);
            return tmp;
        }
    }
    int maxPathSum(TreeNode* root) {
        ans = 0x80000000;
        int d = maxdeep(root);
        return ans;
    }
};
// @lc code=end

