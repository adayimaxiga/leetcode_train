/*
 * @lc app=leetcode.cn id=872 lang=cpp
 *
 * [872] 叶子相似的树
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
    void findroot(vector<int> &rootnum,TreeNode* root)
    {
        if(root==nullptr)
        {
            return;
        }

        if((root->left == nullptr) && (root->right == nullptr))
        {
            rootnum.push_back(root->val);
        }

        findroot(rootnum, root->left);
        findroot(rootnum, root->right);
        
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> root1num;
        vector<int> root2num;

        findroot(root1num,root1);
        findroot(root2num,root2);

        if(root1num.size() == root2num.size())
        {
            for(int i = 0;i < root1num.size();i++)
            {
                if(root1num[i]==root2num[i])
                {

                }else
                {
                    return false;
                }
                
            }
        }else
        {
            return false;
        }
        
        return true;
           
    }
};
// @lc code=end

