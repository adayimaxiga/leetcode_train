/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int plus_temp = 1;
        for(int i = digits.size()-1; i >=0;i--)
        {
            digits[i] +=plus_temp;
            if(digits[i]>9)
            {
                digits[i]-=10;
            }else
            {
                return digits;
            }
        }
        vector<int> temp;
        temp.push_back(1);
        temp.insert(temp.end(),digits.begin(),digits.end());
        return temp;
    }
};
// @lc code=end

