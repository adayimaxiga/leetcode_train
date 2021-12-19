/*
 * @lc app=leetcode.cn id=693 lang=cpp
 *
 * [693] 交替位二进制数
 */

// @lc code=start
class Solution
{
public:
    bool hasAlternatingBits(int n)
    {
         while(n>0){
            if(n%2==(n/2)%2) return false;
            n/=2;
        }
        return true;
    }
};
// @lc code=end
