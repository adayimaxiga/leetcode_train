/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> retvec;
        
        for(int i =0; i < nums.size();i++)
        {
            
            for(int j=i+1; j < nums.size(); j++)
            {
                for (int k = j+1; k < nums.size(); k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                        vector<int> vec(3);
                        vec[0] = nums[i];
                        vec[1] = nums[j];
                        vec[2] = nums[k];
                        retvec.push_back(vec);
                    }
                }
                
            }
        }
        return retvec;
    }
};
// @lc code=end

