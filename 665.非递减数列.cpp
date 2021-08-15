/*
 * @lc app=leetcode.cn id=665 lang=cpp
 *
 * [665] 非递减数列
 */

// @lc code=start
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int numsSize = nums.size();
    if(numsSize<2)
    {
        return true;
    }

        int changeCount = 0;
        if (nums[0] > nums[1]) {
            nums[0] = nums[1];
            changeCount++;
        }
        
        for (int i = 1; i < numsSize - 1; i++) {
            int right = nums[i+1];
            if (nums[i] > right) {
                changeCount++;
                if (changeCount > 1) {
                    // 后面不用再看了
                    return false;
                }
                int left = nums[i-1];
                if (left > right) {
                    nums[i+1] = nums[i];
                } else {
                    nums[i] = left;
                }
            }
        }
        return true;
        

    }
};
// @lc code=end

