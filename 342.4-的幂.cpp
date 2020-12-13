/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        return (!(n&(n-1))) && (n&(0x55555555));
    }
};
// @lc code=end

