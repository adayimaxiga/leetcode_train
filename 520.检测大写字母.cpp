/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */

// @lc code=start
class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int flag_big = 0;
        int start_count = 1;
        if (word.size() < 2)
        {
            return true;
        }
        if((word[0] >= 'a') && (word[0] <= 'z'))
        {
            flag_big = 0;
        }else
        {
            if ((word[1] >= 'a') && (word[1] <= 'z'))
            {
                flag_big = 0;
            }
            else
            {
                flag_big = 1;
            }
            start_count = 2;
        }
        
        for (int i = start_count; i < word.size(); i++)
        {
            if (flag_big)
            {
                if ((word[i] >= 'A') && (word[i] <= 'Z'))
                {
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if ((word[i] >= 'a') && (word[i] <= 'z'))
                {
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end
