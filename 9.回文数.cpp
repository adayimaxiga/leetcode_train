/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        int number[20];
        int cnt = 0;
        while(x > 0)
        {
            number[cnt] = x % 10;
            x = x / 10;
            cnt ++;
        }
        int lastnum = cnt;
        while(lastnum > 0)
        {
            if(number[(cnt - lastnum)/2] == number[cnt - 1 -(cnt - lastnum)/2])
            {

            }else
            {
                return false;
            }
            
            lastnum -= 2;
        }
        return true;
    }
};
// @lc code=end

