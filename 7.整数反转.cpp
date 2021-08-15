/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long int ret = 0;
        while(x != 0)
        {
            ret = ret * 10;
            ret += x % 10;
            x = x / 10;
        }
        if(ret > (int)0x7FFFFFFF || ret < (int)0x80000000)
        {
            return 0;
        }
        return ret;
    }
};
// @lc code=end

