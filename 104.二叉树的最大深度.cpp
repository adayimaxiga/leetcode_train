/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
    int maxDepth(TreeNode* root) {
        std::queue<TreeNode*> save_queue;
        int depth = 0;
        if(root==NULL)
        {
            return 0;
        }
        save_queue.push(root);
        
        while (!save_queue.empty())
        {
            depth++;
            int size = save_queue.size();
            for(int i=0;i< size;i++)
            {
                TreeNode* temp = save_queue.front();
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
        }
        return depth;
    }
};
// @lc code=end

