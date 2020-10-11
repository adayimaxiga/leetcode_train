/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x==1)
            return 1;
        int max = x;
        int min = 0;
        int m = 0;
        while(max-min>1)
        {
            m = (max + min) / 2;
            if(x/m < m)
            {
                max = m;
            }else
            {
                min = m;
            }
        }
        return min;
    }
};
// @lc code=end

