/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        const int INTMIN = (0x80000000);
        const int INTMAX = (0x7fffffff);
        int start =0;

        int flag = 1;
        for(int i = 0 ;i < s.length();i++)
        {
            if(s[i] == '+')
            {
                start = i+1;
                break;
            }else if(s[i] == '-')
            {
                flag = -1;
                start = i+1;
                break;
            }
            else if(s[i] >= '0'&&s[i]<='9')
            {
                start = i;
                break;
            }else if(s[i] == ' ')
            {
                continue;
            }else
            {
                break;
            }
            
        }

        for(int i =start;i< s.length();i++)
        {
            if(s[i] >= '0'&&s[i]<='9')
            {
                ans = ans*10 + s[i] - '0';
            }
            else
            {
                break;
            }
            
            if(ans > INTMAX)
            {
                break;
            }
        }
        ans = flag * ans;
        if(ans > INTMAX)
            return INTMAX;
        else if(ans < INTMIN)
            return INTMIN;
        else
            return ans;
    }
};
// @lc code=end

