/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int ret = 0;
        int num = 0;
        int lastnum = 0;
        for(int i = 0; i < s.size() ; i++)
        {
            switch(s[i])
            {
                case 'I':
                    num = 1;
                    break;
                case 'V':
                    num = 5;
                    break;
                case 'X':
                    num = 10;
                    break;
                case 'L':
                    num = 50;
                    break;
                case 'C':
                    num = 100;
                    break;
                case 'D':
                    num = 500;
                    break;
                case 'M':
                    num = 1000;
                    break;
            }
            ret += num; 
            if(lastnum < num)
            {
                ret -= 2*lastnum;
            }
            lastnum = num;
        }
        
        
        return ret;
        
    }
};
// @lc code=end

