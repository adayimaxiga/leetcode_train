/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char numbermap[256] = {0};
        char numbermapt[256] = {0};
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i = 0; i < s.size(); i++)
        {
            if((numbermap[s[i] ] != 0) || (numbermapt[t[i] ] != 0))
            {
                if(numbermap[s[i] ] == t[i])
                {
                    
                }else
                {
                    return false;
                }
                if(numbermapt[t[i]] == s[i])
                {
                    
                }else
                {
                    return false;
                }
            }else
            {
                numbermap[s[i] ] = t[i];
                numbermapt[t[i] ] = s[i];
            }
        }
        return true;
    }
};
// @lc code=end

