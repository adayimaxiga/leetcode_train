/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        if(size <=1)
            return 0;
        vector<int> max_pro(size);
        max_pro[0] = 0;
        for(int i = 1;i < size;i++)
        {
            max_pro[i] = max_pro[i-1] - 
        }

    }
};
// @lc code=end

