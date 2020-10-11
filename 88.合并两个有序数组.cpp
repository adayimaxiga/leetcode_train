/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int count_1 = 0, count_2 = 0;
        int count_all = m;
        while (count_2 < n)
        {
            if(count_1>=count_all)
            {
                for(int i = count_2 ; i< n ; i++)
                {
                    nums1[count_1] = nums2[i];
                    count_1++;
                }
                return;
            }
            if (nums2[count_2] < nums1[count_1])
            {
                for (int i = count_all -1; i >= count_1; i--)
                {
                    nums1[i+1] = nums1[i];
                }
                nums1[count_1] = nums2[count_2];
                count_2++;
                count_1++;
                count_all++;
            }
            else
            {
                count_1++;
            }
            
        }
        return;
    }
};
// @lc code=end
