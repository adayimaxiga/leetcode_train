/*
 * @lc app=leetcode.cn id=1812 lang=cpp
 *
 * [1812] 判断国际象棋棋盘中一个格子的颜色
 */

// @lc code=start
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int word = coordinates[0] -'a';
        int num  = coordinates[1] -'1';
        int sum = word + num;
        return (sum&1);
    }
};
// @lc code=end

