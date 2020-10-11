/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret_vec;
        vector<int> level;
        queue<TreeNode*> save_queue;
        if(root == NULL)
        {
            return ret_vec;
        }
        save_queue.push(root);
        
        while (!save_queue.empty())
        {
            int size = save_queue.size();
            for(int i=0;i< size;i++)
            {
                TreeNode* temp = save_queue.front();
                level.push_back(temp->val);
                save_queue.pop();
                if(temp->left!=NULL)
                {
                    save_queue.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    save_queue.push(temp->right);
                }
            }
            ret_vec.insert(ret_vec.begin(),level);
            level.clear();
        }
        return ret_vec;
        
    }
};
// @lc code=end

