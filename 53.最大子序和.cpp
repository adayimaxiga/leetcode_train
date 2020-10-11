/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsum=nums[0];
        for(int i=0; i< nums.size();i++)
        {
            sum = nums[i];

            if(sum >maxsum)
            {
                maxsum = sum;
            }

            for(int j =i+1 ; j < nums.size();j++)
            {
                sum += nums[j];
                if(sum > maxsum)
                {
                    maxsum = sum;
                }
            }
        }
        return maxsum;
    }
};
// @lc code=end

