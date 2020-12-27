/*
 * @lc app=leetcode.cn id=218 lang=cpp
 *
 * [218] 天际线问题
 */

// @lc code=start
class Solution {
public:
    struct treenode
    {
        int st;
        int ed;
        int h;
        treenode *left;
        treenode *right;
        treenode(int s,int e,int hh)
        {
            st =s;
            ed = e;
            h = hh;
            left = NULL;
            right = NULL;
        }
    };
    void insert(treenode * r,int st, int ed, int h)
    {
        if(r ==NULL)
            return;
        if(r->st > ed || r->ed < st)
            return;
        if(r->left == NULL&&r->right==NULL)
        {
            if(st<= r->st && ed >=r->ed)
            {
                r->h =max(r->h,h);
            }else
            {
                if(r->st<st)
                {
                    r->left = new treenode(r->st,st - 1,r->h);
                    r->right = new treenode(st,r->ed,r->h);
                    insert(r->right,st,ed,h);
                }else
                {
                    if(r->ed > ed)
                    {
                        r->left = new treenode(r->st,ed,r->h);
                        r->right = new treenode(ed+1,r->ed,r->h);
                        insert(r->left,st,ed,h);
                    }
                    
                }
            }
        }else
        {
            insert(r->left,st,ed,h);
            insert(r->right,st,ed,h);
        }
    }
    void buildans(treenode *r,vector<vector<int>> &ans, int &lasth)
    {
        if(r == NULL)
            return;
        if(r->left == NULL&&r->right == NULL)
        {
            if(r->h!= lasth)
            {
                lasth=r->h;
                vector<int> aaa;
                aaa.push_back(r->st);
                aaa.push_back(r->h);
                ans.push_back(aaa);
            }
        }else
        {
            buildans(r->left,ans,lasth);
            buildans(r->right,ans,lasth);
        }
        
    }
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        treenode * root = new treenode(0,0x7fffffff,0);
        for(int i = 0; i <buildings.size();i++)
        {
            insert(root,buildings[i][0],buildings[i][1]-1,buildings[i][2]);
        }
        vector<vector<int>> ans;
        int lasth = 0;
        buildans(root,ans,lasth);
        return ans;
    }
};
// @lc code=end

