/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret;
        
        for(int j = 0 ; j < strs[0].size(); j++)
        {
            char c = strs[0][j];
            for(int i = 0; i < strs.size(); i++)
            {
                if(j >= strs[i].size())
                {
                    return ret;
                }
                if(c == strs[i][j])
                {

                }else
                {
                    return ret;
                }
            }
            ret += c;
        }
            
        
        return ret;
    }
};
// @lc code=end

