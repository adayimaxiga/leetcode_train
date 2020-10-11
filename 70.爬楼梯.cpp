/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int n1,n2,n3;
        if(n<=2)
        {
            return n;
        }
        else
        {
            n1 = 1;
            n2 = 2;
            for(int i =3;i<= n;i++)
            {
                n3 = n1 + n2;
                n1 = n2;
                n2 = n3;
            }
            return n3;
        }
    }
};
// @lc code=end

