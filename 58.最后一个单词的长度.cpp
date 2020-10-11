/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        if( s.size()<1)
        {
            return 0;
        }
        int i =0;
        int flag = 0;
        int cnt = 0;
        for(i = s.size()-1; i >= 0 ; i--)
        {
            if(s[i] != ' ')
            {
                flag = 1;
                
            }
            else if (flag == 1)
            {
                if(s[i] == ' ')
                {
                    return s.size() - i - 1 - cnt;
                }
            }else
            {
                cnt++;
            }
            
            
        }
        return s.size() - cnt;
    }
};
// @lc code=end

