/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return 0;
        }

        int startnum = nums[0];
        int count = 1;
        for(int i= 1; i < nums.size() ; i++)
        {
            if(startnum == nums[i])
            {
                count ++;
            }else 
            {
                if(count > 0)
                {
                    count --;
                }else
                {
                    startnum = nums[i];
                }
            }
        }
        return startnum;
    }
};
// @lc code=end

