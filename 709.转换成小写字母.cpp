/*
 * @lc app=leetcode.cn id=709 lang=cpp
 *
 * [709] 转换成小写字母
 */

// @lc code=start
class Solution {
public:
    string toLowerCase(string s) {
        int size = s.size();
        for(int i=0;i<size;i++)
        {
            if(s[i] >= 'A' && s[i]  <= 'Z')
            {
                s[i] = s[i] - ('A' - 'a');
            }
        }
        return s;
    }
};
// @lc code=end

