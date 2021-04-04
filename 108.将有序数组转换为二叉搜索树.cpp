/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    TreeNode *dfs(vector<int> &nums,int pleft,int pright)
    {
        if(pleft>=pright)
            return nullptr;
        int mid = (pleft + pright)/2;
        TreeNode * newnode = new TreeNode(nums[mid]);
        newnode->left = dfs(nums,pleft,mid);
        newnode->right = dfs(nums,mid+1,pright);

        return newnode;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return dfs(nums,0,nums.size());;
    }
};
// @lc code=end
