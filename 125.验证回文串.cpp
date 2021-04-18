/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int left = 0;
        int right = size -1;
        while(left < right)
        {
            while((s[left]<'0'||s[left]>'9'&&s[left]<'A'||(s[left]>'Z'&&s[left]<'a')||s[left]>'z')&&(left<right))
            {
                left ++;
            }
            while((s[right]<'0'||s[right]>'9'&&s[right]<'A'||(s[right]>'Z'&&s[right]<'a')||s[right]>'z')&&(left<right))
            {
                right --;
            }
            if(left < right)
            {
                if(toupper(s[left])==toupper(s[right]))
                {
                    left ++;
                    right--;
                }else
                {
                    return false;
                }
            }
            
            
        }
        return true;

    }
};
// @lc code=end

