/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_pro = 0;
        int min_price = 0x7FFFFFFF;
        for(int price : prices)
        {
            max_pro = max(max_pro, price - min_price);
            min_price = min(min_price, price);
        }
        return max_pro;
    }
};
// @lc code=end

