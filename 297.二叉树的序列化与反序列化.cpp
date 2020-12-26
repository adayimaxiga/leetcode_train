/*
 * @lc app=leetcode.cn id=297 lang=cpp
 *
 * [297] 二叉树的序列化与反序列化
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
class Codec {
public:
    void ser(TreeNode* r,stringstream &ss)
    {
        if (r == NULL)
        {
            ss<<"*";
        }else
        {
            ss<<"n"<<r->val;
            ser(r->left,ss);
            ser(r->right,ss);
        }
    }
    TreeNode* build(stringstream &ss)
    {
        char ch;
        ss>>ch;
        TreeNode* r;
        if(ch == '*')
        {
            return NULL;
        }else
        {
            int x;
            ss>>x;
            r = new TreeNode(x);
            r->left = build(ss);
            r->right = build(ss);
        }
        return r;
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        stringstream ss;
        ser(root,ss);
        return ss.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return build(ss);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
// @lc code=end

