/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int count1=0,count2=0,val1=0,val2=0;
        int size_all = nums1.size() + nums2.size();
        int tmp_0 = 0,tmp_1 = 0;
        for(int i = 0;i<= size_all/2;i++)
        {
            if(count1 < nums1.size())
            {
                val1 = nums1[count1];
            }else
            {
                val1 = 1000001;
            }
            
            if(count2 < nums2.size())
            {
                val2 = nums2[count2];
            }else
            {
                val2 = 1000001;
            }
            
            if (val1 < val2)
            {
                tmp_1 = tmp_0;
                tmp_0 = val1;
                count1 ++;
            }else
            {
                tmp_1 = tmp_0;
                tmp_0 = val2;
                count2 ++;
            }    
        }
        if(size_all % 2 ==0)
        {
            return (tmp_0 + tmp_1)/2.0f;
        }else
        {
            return tmp_0;
        }
    }
};
// @lc code=end

