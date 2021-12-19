/*
 * @lc app=leetcode.cn id=717 lang=cpp
 *
 * [717] 1比特与2比特字符
 */

// @lc code=start
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int start = 0 ;
        while(start < bits.size()-1){
            if(bits[start] == 0){
                start++;
            }else{
                start+=2;
            }
        }
        return start ==  bits.size()-1;
    }
};
// @lc code=end

