/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string retstr;
        int save = columnNumber;
        int num;
        while (save  > 0)
        {
            save-= 1;
            num = save%26;

                char first = num + 'A';

                retstr += first;
            
            save = save/26;

        }
        reverse(retstr.begin(), retstr.end());
        
        return retstr;
    }
};
// @lc code=end

