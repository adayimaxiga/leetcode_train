/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    int path[100];
    int k_save=0;
    void robot(int index, int n, int k) //index [0,n)
    {
        if(k==0)
        {
            vector<int> tmp_ans;
            for(int i=0;i< k_save;i++)
            {
                tmp_ans.push_back(path[i]);
            }
            ans.push_back(tmp_ans);
            return;
        }
        for(int i = index+1;i<=n;i++){
            path[k-1] = i;
            robot(i,n,k-1);
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        k_save = k;
        robot(0,n,k);
        return ans;
    }
};
// @lc code=end

