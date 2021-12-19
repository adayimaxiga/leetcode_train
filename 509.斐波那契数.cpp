/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
class Solution {
public:
    int fib(int n) {
        int last1 = 1;
        int last2 = 0;
        int sum = 1;
        if(n == 0)
        {
            return 0;
        }
        if(n == 1)
        {
            return 1;
        }
        for(int i = 1; i < n; i++)
        {
            sum = last1 + last2;
            last2 = last1;
            last1 = sum;
        }
        return sum;
    }
};
// @lc code=end

