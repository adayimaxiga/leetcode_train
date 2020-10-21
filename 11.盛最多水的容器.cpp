/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        for(int i = 0; i < height.size()-1;i++)
        {
            for(int j = i+1; j < height.size();j++)
            {
                int hh = 0;
                if(height[i] > height[j])
                {
                    hh = height[j];
                }else
                {
                    hh = height[i];
                }
                hh *= (j-i);
                if(max<hh)
                {
                    max = hh;
                }
            }
        }
        return max;
    }
};
// @lc code=end

