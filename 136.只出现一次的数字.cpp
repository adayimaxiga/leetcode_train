/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num_ret = 0;
        for(int i = 0;i<nums.size();i++)
        {
            num_ret ^= nums[i];
        }
        return num_ret;
    }
};
// @lc code=end

