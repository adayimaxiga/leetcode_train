/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
        {
            return false;
        }
        const int maxint = 0x7fffffff;
        int k = log(maxint)/log(3); 
        int big3 = pow(3,k);
        return (big3 % n == 0);


    }
};
// @lc code=end

