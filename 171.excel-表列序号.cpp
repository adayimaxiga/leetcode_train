/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel 表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        if(columnTitle.size() == 0)
        {
            return 0;
        }
        int sum = 0;
        for(int i = 0; i < columnTitle.size(); i++)
        {
            char now = columnTitle[i];
            sum *= 26;
            sum += now - 'A' + 1;
        }
        return sum;
    }
};
// @lc code=end

