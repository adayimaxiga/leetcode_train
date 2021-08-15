/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> save;
        
        for(int i = 0; i< s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                save.push(s[i]);
            }else
            {
                if(save.size() == 0)
                {
                    return false;
                }
                if(s[i] == ')' && save.top() == '(')
                {

                }else if (s[i] == ']' && save.top() == '[')
                {

                }else if (s[i] == '}' && save.top() == '{')
                {

                }else
                {
                    return false;
                }
                
                save.pop();
            }
        }
        if(save.size() == 0)
        {
            return true;
        }
        return false;
    }
};
// @lc code=end

