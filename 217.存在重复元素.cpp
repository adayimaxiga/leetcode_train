/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    void fastsort(vector<int>& nums,int left, int right)
    {
        if(left >= right)
        {
            return ;
        }

        int temp = nums[(left+right)/2] ;
        nums[(left+right)/2] = nums[left];
        nums[left] = temp;

        int mid = nums[left];
        int low = left;
        int high = right;

        while(low < high)
        {
            while(nums[high] >= mid && low < high)
            {
                high --;
            }
            if(low < high)
            {
                int temp = nums[low];
                nums[low] = nums[high];
                nums[high] = temp;
            }


            while(nums[low] <= mid  && low < high)
            {
                low ++;
            }
            if(low < high)
            {
                int temp = nums[low];
                nums[low] = nums[high];
                nums[high] = temp;
            }

        }

        fastsort(nums, left, low);
        fastsort(nums, low+1, right);
        
        return;
    }

    bool containsDuplicate(vector<int>& nums) 
    {
        fastsort(nums,0,nums.size()-1);

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

