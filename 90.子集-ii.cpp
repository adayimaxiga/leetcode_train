/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    bool path[100];
    void robot(int idx, vector<int>& nums)
    {
        if(idx >= nums.size())
        {
            vector<int> tmp_ans;
            for(int i = 0;i<nums.size();i++)
            {
                if(path[i])
                {
                    tmp_ans.push_back(nums[i]);
                }
            }

            ans.push_back(tmp_ans);
            return;
        }
        if(idx>0 && (nums[idx -1] == nums[idx]) && (path[idx -1] == false))
        {
            path[idx] = false;
            robot(idx+1,nums);
        }else
        {
            path[idx] = true;
            robot(idx+1,nums);
            path[idx] = false;
            robot(idx+1,nums);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if(nums[i]>nums[j])
                {
                    int tmp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = tmp;
                }
            }
        }
        robot(0,nums);
        return ans;
    }
};
// @lc code=end

