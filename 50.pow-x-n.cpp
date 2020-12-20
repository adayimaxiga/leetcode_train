/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
        {
            return 1;
        }
        double a = myPow(x, n/2);
        if(n>0)
        {
            if(n%2 ==0)
            {
                return a*a;
            }else
            {
                return a*a*x;
            }
        }else
        {
            if(n%2 ==0)
            {
                return a*a;
            }else
            {
                return (a*a*1/x);
            }
        }
        
        
        
    }
};
// @lc code=end

