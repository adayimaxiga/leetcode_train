/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size == 1)
        {
            return 1;
        }else if (size == 0)
        {
            return 0;
        }

        int count =1;
        int lastnum = nums[0];
        while(count < nums.size())
        {
            if(nums[count] != lastnum)
            {
                
                lastnum = nums[count];
                count ++;
            }else
            {
                nums.erase(nums.begin()+count);
            }
        }
        return nums.size();
    }
};
// @lc code=end

