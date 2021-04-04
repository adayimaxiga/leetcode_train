/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for(int i = 0;i < rowIndex+1; i++)
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
        return ans[rowIndex];
    }
};
// @lc code=end

