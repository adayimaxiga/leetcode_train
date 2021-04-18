/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;

        while(l<r)
        {
            if(numbers[l] + numbers[r] == target)
            {
                int retnum[] = {l+1,r+1};
                return vector<int>(retnum,retnum+2);
            }else if (numbers[l] + numbers[r] <= target)
            {
                l++;
            }else
            {
                r--;
            }
        }
        return vector<int>(2);
    }
};
// @lc code=end

