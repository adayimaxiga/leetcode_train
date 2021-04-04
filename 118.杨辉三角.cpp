/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 0;i < numRows; i++)
        {
            vector<int> rownum(i+1);
            for(int j = 0;j < i+1;j++)
            {
                if(j == 0 || j == i)
                {
                    rownum[j] = 1;
                }else
                {
                    rownum[j] = ans[i-1][j-1] + ans[i-1][j];
                }
            }
            ans.push_back(rownum);
        }
        return ans;
    }
};
// @lc code=end

