/*
 * @lc app=leetcode.cn id=1556 lang=cpp
 *
 * [1556] 千位分隔数
 */

// @lc code=start
class Solution
{
public:
    string thousandSeparator(int n)
    {
        string s;
        int count = 0;
        while (n != 0)
        {
            if (count == 3)
            {
                s += '.';
                count = 0;
            }
            s += (n % 10 + '0');
            n/= 10;
            count++;
        }

        string ret_s;
        for(int i = 0; i < s.size(); i++)
        {
            ret_s += s[s.size() - 1 - i];
        }
        if(ret_s.size() == 0)
        {
            ret_s += '0';
        }

        return ret_s;
    }
};
// @lc code=end
