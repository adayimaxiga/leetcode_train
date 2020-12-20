/*
 * @lc app=leetcode.cn id=410 lang=cpp
 *
 * [410] 分割数组的最大值
 */

// @lc code=start
class Solution {
public:
    bool guess(int mid, vector<int>& nums, int m)
    {
        long sum = 0;
        for(int i=0;i < nums.size();i++)
        {
            if(sum + nums[i] > mid)
            {
                --m;
                sum = nums[i];
                if(nums[i]>mid)
                {
                    return false;
                }
            } else
            {
                sum += nums[i];
            }
            
        }
        return m >= 1;
    }
    int splitArray(vector<int>& nums, int m) {
        long len = nums.size();
        long r = 1;
        for(int i=0;i<len;i++)
        {
            r += nums[i];
        }
        long l = 0;
        long ans = 0;

        while(l<r)
        {
            long mid = (l+r)/2;
            if(guess(mid,nums,m))
            {
                ans = mid;
                //l = mid +1;
                r = mid;
            } else
            {   
                l = mid + 1;
                //r = mid;
            }
        }
        return ans;
    }
};
// @lc code=end

