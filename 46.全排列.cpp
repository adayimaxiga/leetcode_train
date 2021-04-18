/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    void robot(uint8_t index,vector<int>& nums,vector<int>& ans_tmp, vector<bool> used)
    {
        if(index >= nums.size())
        {
            ans.push_back(ans_tmp);
            return;
        }
        if(ans_tmp.size() == 0)
        {
            
        }
        for(int i=0;i<nums.size();i++)
        {
            ans_tmp.push_back(nums[i]);
            robot(index+1,nums,ans_tmp,ans_tmp,used);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {


    }
};
// @lc code=end

